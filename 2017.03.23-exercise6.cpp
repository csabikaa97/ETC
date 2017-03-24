#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number: ";	
	cin>>number;
	cout<<endl;
	int sum=0;
	if(number>5)
	{
		for(int i=5; i<number; i++)
		{
			sum=sum+i*i*i;	
		}
	}
	if(number<5)
	{
		for(int i=5; i>number; i++)
		{
			sum=sum+i*i*i;
		}
	}
	if(number==5)
	{
		sum=5*5*5;
	}
	cout<<endl<<"Sum: "<<sum<<endl;
	return 0;
}
