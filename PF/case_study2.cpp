// Case Study 2:  Student Grading System with Project-Based Learning (PBL) Initiative Assessment
#include<iostream>
using namespace std;
int main()
{
	int marks, project;
	cout<<"Student Marks: ";
	cin>>marks;
	cout<<"Project Score: ";
	cin>>project;
	if (marks >= 90)
	{ 
		if (marks >= 85 && project >= 90)
		cout<<"Grade A\nExcellence in Project-Based Learning";
		else if (project >= 80)
		cout<<"Grade A";
		else if (project >= 60 && project < 79)
		cout<<"Grade B";		
		else
		cout<<"Fail\nNeed Improvement";
	}
	else if (marks >= 80 && project < 89)
	{ 
		if (project >= 80)
		cout<<"Grade B";
		else if (project >= 60 && project < 79)
		cout<<"Grade C";
		else
		cout<<"Fail\nNeed Improvement";
	}
	else if (marks >= 70 && marks < 79)
	{ 
		if (project >= 80)
		cout<<"Grade C";
		else if (project >= 60 && project < 79)
		cout<<"Grade D";
		else
		cout<<"Fail\nNeed Improvement";
	}
	else if (marks >= 60 && marks < 69)
	{ 
		if (project >= 80)
		cout<<"Grade D";
		else if (project >= 60 && project < 79)
		cout<<"Grade E";
		else
		cout<<"Fail\nNeed Improvement";
	}
	else if (marks < 60 || project < 60)
	{ 
		cout<<"Fail\nNeed Improvement";
	}
	else
	cout<<"Error";
}
