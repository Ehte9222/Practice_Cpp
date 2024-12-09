// Case Study 4: Enhanced Library Fine Calculation with Emphasis on Library Importance
#include<iostream>
using namespace std;
int main()
{
	int choice, days, late, price, lost;
	cout<<"1: Late Book Fine\n2: Lost Book Fine"<<endl;
	cout<<"Your Choice: ";
	cin>>choice;
	switch (choice)
	{
		case 1:
			{
				cout<<"Days late: ";
				cin>>days;
				if(days <= 7)
				{
					late = days * 50;
					cout<<"Fine is: "<<late;				
				}
				else if(days >= 8 && days <= 14)
				{
					late = days * 100;
					cout<<"Fine is: "<<late;				
				}
				else if(days >= 14 && days <= 30)
				{
					late = days * 150;
					cout<<"Fine is: "<<late;				
				}
				else if(days >= 30)
				{
					late = 1500;
					cout<<"Fine is: "<<late<<endl<<"Temporarily Suspended";
				}
			}
			break;
		case 2:
			{
				cout << "Price: ";
      			cin >> price;
				lost = price + 2500;
				cout<<"Fine is: "<<lost;	
			}
		break;
		cout<<"Error";
	}
}
