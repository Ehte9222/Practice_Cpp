// 7. Mixed Data Types and Arithmetic

// Write a C++ program that displays mixed data types and arithmetic operations.
// Sample output:
// Display arithmetic operations with mixed data type :
// ---------------------------------------------------------
// 5 + 7 = 12
// 3.7 + 8.0 = 11.7
// 5 + 8.0 = 13.0
// 5 - 7 = -2
// 3.7 - 8.0 = -4.3
// 5 - 8.0 = -3.0
// 5 * 7 = 35
// 3.7 * 8.0 = 29.6
// 5 * 8.0 = 40.0
// 5 / 7 = 0
// 3.7 / 8.0 = 0.5
// 5 / 8.0 = 0.6


#include <iostream> 
#include <iomanip>  

using namespace std; 
int main() 
{
    int m1 = 5, m2 = 7; 
    double d1 = 3.7, d2 = 8.0; 

    cout << "\n\n Display arithmetic operations with mixed data type :\n"; 
	cout << "---------------------------------------------------------\n"; 

    cout << fixed << setprecision(1); 


    
    cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
    cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
    cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  

    cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
    cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;
    cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  

    cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl;  
    cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
    cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  

    cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
    cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
    cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  

    cout << endl; 
    return 0; 
} 
