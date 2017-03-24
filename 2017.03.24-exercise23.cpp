#include <iostream>
using namespace std;
int main()
{
	float sum=0;
	float temp;
	int counter=0;
	while(temp!=0)
	{
		cout<<endl<<"Type a number: ";
		cin>>temp;
		if(temp!=0)
		{
			counter++;
			sum=sum+temp;
		}
	}
	cout<<endl<<"Average: "<<sum/counter<<endl;
	return 0;
}
