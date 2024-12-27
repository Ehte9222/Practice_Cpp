// Write a C++ program that checks whether primitive values cross the limit.
// Check whether the primitive values crossing the limits or not :
// --------------------------------------------------------------------
// The Gender is : F
// Is she married? : 1
// Number of sons she has : 2
// Year of her appointment : 2009
// Salary for a year : 1500000
// Height is : 79.48
// GPA is 4.69
// Salary drawn upto : 12047235
// Balance till : 995324987


#include <iostream> 
using namespace std;

int main(){
    cout << " Whether the values are crossing primitive values or not." <<endl; 
    cout << " ---------------------------------------------------------" << endl; 


    char gender = 'F';
    bool isEmployed = true; 
    int sons = 2;
    short appointment= 2009;
    long long salary = 1500000;
    float height = 79.48;
    float gpa = 4.69f;
    long int salary_drawn = 12047235;
    long long int balance_till = 995324987;



    cout << "The Gender is : " << gender << endl;
    cout << "Is she married? : " << isEmployed <<endl;
    cout << "Number of sons she has: " << sons << endl;
    cout << "Year of Appointment: " << appointment << endl;
    cout << "Salary of a Year: " << salary << endl;
    cout << "height" << height << endl;
    cout << "GPA" << gpa << endl;
    cout << "Salary drawn upto: " << salary_drawn << endl;
    cout << "Balance till: " << balance_till << endl;

}
