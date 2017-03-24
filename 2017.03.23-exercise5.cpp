#include <iostream>
using namespace std;
int main()
{
	int szam[10];
	for(int i=0; i<10; i++)
	{
		cout<<endl<<"Type in a number: ";
		cin>>szam[i];
	}
	int min=szam[0];
	int max=szam[0];
	for(int i=0; i<10; i++)
	{
		if(szam[i]>max)
		{
			max=szam[i];
		}
		if(szam[i]<min)
		{
			min=szam[i];
		}
	}
	cout<<endl<<"Min: "<<min<<endl;
	cout<<"Max: "<<max<<endl;
	return 0;
}
