#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    Account() : balance(0.0) {}

    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); // To handle the newline character
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        balance = 0.0;
        saveAccount();
        cout << "Account created successfully.\n";
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount <= 0) {
            cout << "Invalid amount. Deposit failed.\n";
            return;
        }
        loadAccount();
        balance += amount;
        saveAccount();
        cout << "Amount deposited successfully. Current Balance: " << balance << "\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        loadAccount();
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed.\n";
            return;
        }
        balance -= amount;
        saveAccount();
        cout << "Amount withdrawn successfully. Current Balance: " << balance << "\n";
    }

    void checkBalance() {
        loadAccount();
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolderName << "\n";
        cout << "Current Balance: " << fixed << setprecision(2) << balance << "\n";
    }

private:
    string getFileName() const {
        return accountNumber + ".txt";
    }

    void saveAccount() {
        ofstream outFile(getFileName());
        outFile << accountNumber << endl;
        outFile << accountHolderName << endl;
        outFile << balance << endl;
        outFile.close();
    }

    void loadAccount() {
        ifstream inFile(getFileName());
        if (!inFile) {
            cout << "Account not found.\n";
            exit(0);
        }
        getline(inFile, accountNumber);
        getline(inFile, accountHolderName);
        inFile >> balance;
        inFile.close();
    }
};

void menu() {
    cout << "\n=== Bank Management System ===\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Check Balance\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    Account account;
    int choice;

    while (true) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.checkBalance();
                break;
            case 5:
                cout << "Thank you for using the Bank Management System.\n";
                return 0;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
