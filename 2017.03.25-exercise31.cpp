#include <iostream>
using namespace std;
int main()
{
	int number;
	int counter=0;
	int counter2=0;
	for(int i=0; i<10; i++)
	{
		cout<<endl<<"Enter a number: ";
		cin>>number;
		if(number%3==0)
		{
			counter++;
		}
		counter2++;
	}
	cout<<endl<<"There was "<<counter2<<" numbers entered."<<endl;
	cout<<counter<<" of them can be divised by 3."<<endl;
}
