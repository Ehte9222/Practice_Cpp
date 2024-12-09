#include <iostream>
using namespace std; 
int main(){
    cout << "Please Enter the following details. " << endl;
    int salary; 
    int grade; 
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter your grade: ";
    cin >> grade;
    
    if (grade <= 15  ) {
        cout << "Total salary is:" << salary + (salary * 0.5) << endl;
    }
     (grade > 15 ); {
    cout << "Total salary is: " << salary + (salary * 0.25) << endl;
    }
}
