// Case Study 3:  Discount Calculation for Bookstore with MoU Perspective
#include<iostream>
using namespace std;
main()
{
	int price, type, total, discount;
	cout<<"1: Academic\n2: General"<<endl;
	cout<<"Select Type: ";
	cin>>type;
	cout<<"Price: ";
	cin>>price;
	switch (type)
	{
		case 1:
		{
			if(price >= 5000)
			{
				if (price > 8000)
				{
				discount = price * .15;
				total = price - discount;
				cout<<"Price with 15% off: "<<total<<endl;
				discount = price * .2;
				total = price - discount;
				cout<<"Final Price with Special Discount (+5%): "<<total<<endl;
				break;
				}
				else
				discount = price * .15;
				total = price - discount;
				cout<<"Price with 15% off: "<<total<<endl;
			}
			else if(price > 3000 && price < 5000)
			{
				total = price - discount;
				cout<<"Price with 10% off: "<<total<<endl;
			} 
			else if(price <= 3000)
			{
				discount = price * .05;
				total = price - discount;
				cout<<"Price with 5% off: "<<total<<endl;
			}
			break;
		}
		case 2:
			{
			if(price >= 4000)
			{
				if (price > 8000)
				{
				discount = price * .1;
				total = price - discount;
				cout<<"Price with 10% off: "<<total<<endl;
				discount = price * .15;
				total = price - discount;
				cout<<"Final Price with Special Discount (+5%): "<<total<<endl;
				break;
				}
				else
				discount = price * .1;
				total = price - discount;
				cout<<"Price with 10% off: "<<total<<endl;
			}
			else if(price < 4000)
			{
				discount = price * .05;
				total = price - discount;
				cout<<"Price with 5% off: "<<total<<endl;
			}
			}
			break;
		default:
		cout<<"Error"<<endl;
	}
}

