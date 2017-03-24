#include <iostream>
using namespace std;
int main()
{
	cout<<"Type in a number: ";
	int numb;
	cin>>numb;
	for(int i=0; i<numb; i++)
	{
		for(int b=0; b<numb-(numb-i); b++)
		{
			cout<<" ";
		}
		for(int c=0; c<numb-i; c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
