// Case Study 1: Determining Exam Eligibility Based on Attendance
#include<iostream>
using namespace std;
int main()
{
	int attendance;
	cout<< "Student Attendence: ";
	cin>> attendance;
	if (attendance >= 75)
	{ 
		if (attendance >= 90)
		cout<<"Eligible For Exam\nExemplary Attendees\nCertificate of Recognition for their Commitment and Participation";
		else
		cout<<"Eligible For Exam" ;		
	}
	else if (attendance < 75)
	{ 
		cout<<"Ineigible For Exam" << endl << "Students must maintain at least 75% attendance to be eligible for exams.";
	}
}
