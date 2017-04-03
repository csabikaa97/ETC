#include <iostream>
using namespace std;
int main()
{
	cout<<"How many numbers do you want to enter?: ";
	int number2[100000];
	int maxnumber;
	cin>>maxnumber;
	int number[100000];
	for(int i=0; i<maxnumber; i++)
	{
		cout<<"Enter a number: ";
		cin>>number[i];
	}
	cout<<endl;
	bool numberset[100000];
	for(int i=0; i<maxnumber; i++)
	{
		int minn=100000;
		int maxn=0;
		int maxc=-100000;
		for(int c=0; c<maxnumber; c++)
		{
			if(number[c]<minn)
			{
				minn=number[c];
			}
		}
		for(int c=0; c<maxnumber; c++)
		{
			if(c!=maxnumber-1 && numberset[c]==false && number[c]>maxc)
			{
				maxc=number[c];
				maxn=c;
			}
		}
		number2[maxnumber-i-1]=maxc;
		numberset[maxn]=true;
	}
	for(int i=0; i<maxnumber; i++)
	{
		cout<<endl<<"Number["<<i<<"]: "<<number2[i];
	}
}
