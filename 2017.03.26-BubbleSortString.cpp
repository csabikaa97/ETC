#include <iostream>
using namespace std;
int main()
{
	string number[100000];
	string number2;
	cout<<endl<<"How many numbers do you want to enter?: ";
	int max;
	cin>>max;
	for(int i=0; i<max; i++)
	{
		cout<<endl<<"Enter a number: ";
		cin>>number[i];
	}
	for(int i=0; i<max; i++)
	{
		for(int c=0; c<max; c++)
		{
			cout<<number[c]<<"\t";
		}
		cout<<endl;
		for(int b=0; b<max; b++)
		{
			if(number[b]>number[b+1] && b!=max-1)
			{
				number2=number[b];
				number[b]=number[b+1];
				number[b+1]=number2;
			}
		}
	}
	for(int i=0; i<max; i++)
	{
		cout<<endl<<"Number["<<i<<"]: "<<number[i];
	}
	cout<<endl;
	return 0;
}
