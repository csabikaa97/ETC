#include <iostream>
using namespace std;
int main()
{
	int number;
	int odd=0;
	int even=0;
	while(number!=0)
	{
		cout<<endl<<"Enter a number: ";
		cin>>number;
		if(number%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<endl<<"There was "<<even+odd<<" number entered."<<endl;
	cout<<"There was "<<odd<<" odd and "<<even<<" even numbers."<<endl;
}
