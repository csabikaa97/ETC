#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"hun");
	cout<<"Szám: ";
	double szam;
	int Valasz;
	cin>>szam;
	cout<<"Funkció: "<<endl;
	cout<<"1. Másodikon"<<endl;
	cout<<"2. Gyökvonás"<<endl;
	cout<<"3. Harmadikon"<<endl;
	cout<<"4. gyökköb"<<endl;
	cout<<"10. Kilépés"<<endl;
	cout<<"Válasz: ";
	cin>>Valasz;
	switch(Valasz)
	{
		case 1:	cout<<endl<<szam<<" a másodikon = "<<szam*szam<<endl;
			break;
		case 2: cout<<sqrt(szam)<<" * "<<sqrt(szam)<<" = "<<szam<<endl;
			break;
		case 3:	cout<<szam<<" a harmadikon = "<<szam*szam*szam<<endl;
			break;
		case 4: cout<<szam<<" a gyök3-ön = "<<sqrt(sqrt(szam))<<endl;
			break;
		case 10:
			return 0;
			break;
	}
	return 0;
}
