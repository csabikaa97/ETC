#include <iostream>
using namespace std;
int main()
{
	int temp;
	int number=0;
	while(temp!=0)
	{
		cout<<endl<<"Enter a number: ";
		cin>>temp;
		if(temp==100 || (temp>100 && temp<200) || temp==200)
		{
			number++;
		}
	}
	cout<<endl<<number<<" numbers were between 100 and 200."<<endl;
	return 0;
}
