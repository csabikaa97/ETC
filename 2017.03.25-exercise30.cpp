#include <iostream>
using namespace std;
int main()
{
	int input;
	int zero=0;
	int pos=0;
	int neg=0;
	for(int i=0; i<10; i++)
	{
		cout<<endl<<"Enter a number: ";
		cin>>input;
		if(input==0)
		{
			zero++;
		}
		if(input>0)
		{
			pos++;
		}
		if(input<0)
		{
			neg++;
		}
	}
	cout<<endl<<"There was "<<neg+pos+zero<<" number entered."<<endl;
	cout<<zero<<" of those were 0, "<<pos<<" was positive, and "<<neg<<" was negative."<<endl;
}
