#include <iostream>
using namespace std;
int main()
{
	
	int x, y,z;
	x = 10; 
	y = 20;
	z = ++x - x++ + y++;
	// cout << ++x << endl << y++ <<endl << x++ <<endl <<endl;
	cout << z;  
	


	return 0;
}

