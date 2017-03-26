#include <iostream>
using namespace std;
int main()
{
	while(true)
	{
		cout<<endl<<"Enter a number: ";
		int number;
		int counter=0;
		cin>>number;
		for(int i=1; i<number+1; i++)
		{
			if(number%i==0)
			{
				cout<<"The number can be divided by "<<i<<endl;
				counter++;
			}
		}
		if(counter==2 || counter<2)
		{
			cout<<endl<<"The number "<<number<<" is prime, because it has "<<counter<<" dividers only."<<endl;
		}
		if(counter>2)
		{
			cout<<endl<<"The number "<<number<<" is not prime, because it has "<<counter<<" dividers."<<endl;
		}
	}
	return 0;
}
