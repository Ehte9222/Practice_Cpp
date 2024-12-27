#include<iostream>
using namespace std;


int main(){
    cout<<"welcome to calculator program";
    cout<<"enter two numbers";
float n1,n2;
char op;

     cout<<"enter the value of number 1";
     cin>>n1;
     cout<<"enter the value of number 2";
     cin>>n2;
float sum,sub,mul,div;

    sum=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;     
switch(op) {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}