#include <iostream>
using namespace std;
int main()
{
	int year=0;
	double countrya=50;
	double countryb=70;
	while(countrya<countryb)
	{
		countrya=countrya*1.03;
		countryb=countryb*1.02;
		year++;
		cout<<"Year: "<<year<<"\t"<<countrya<<"\t"<<countryb<<endl;
	}
	cout<<endl<<"It takes "<<year<<" years for country A to be bigger than B."<<endl;
}
