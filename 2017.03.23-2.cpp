#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"hun");
	cout<<"A programban használt műveletek CSAK derékszögű háromszöggel működnek!!!"<<endl;
	double magassag=-1;
	double atfogo=-1;
	double befogo1=-1;
	double befogo2=-1;
	double ca=-1;
	double cb=-1;
	double cax=-1;
	double cbx=-1;
	int valasz;
	string fullrandomwontuseitagain;
	bool solved=false;
	while(solved!=true)
	{
		system("clear");
		cout<<"Add meg az ismert adatokat: "<<endl;
		cout<<"1. Magasság";
		if(magassag!=-1)
		{
			cout<<": "<<magassag;
		}
		cout<<endl<<"2. első befogó (a)";
		if(befogo1!=-1)
		{
			cout<<": "<<befogo1;
		}
		cout<<endl<<"3. második befogó (b)";
		if(befogo2!=-1)
		{
			cout<<": "<<befogo2;
		}
		cout<<endl<<"4. átfogó";
		if(atfogo!=-1)
		{
			cout<<": "<<atfogo;
		}
		cout<<endl<<"5. átfogó magassággal elosztott aránya (Ca:Cb)";
		if(cax!=-1 && cbx!=-1)
		{
			cout<<": "<<cax<<":"<<cbx;
		}
		cout<<endl<<"6. Ca";
		if(ca!=-1)
		{
			cout<<": "<<ca;
		}
		cout<<endl<<"7. Cb";
		if(cb!=-1)
		{
			cout<<": "<<cb;
		}
		cout<<endl<<"Adat: ";
		cin>>valasz;
		cout<<endl<<valasz<<": ";
		switch(valasz)
		{
			case 1:	cin>>magassag;
				break;
			case 2: cin>>befogo1;
				break;
			case 3:	cin>>befogo2;
				break;
			case 4:	cin>>atfogo;
				break;
			case 5:	cout<<"Ca arány: ";
				cin>>cax;
				cout<<"Cb arány: ";
				cin>>cbx;
				break;
			case 6:	cin>>ca;
				break;
			case 7:	cin>>cb;
				break;
		}
		if(befogo1!=-1 && befogo2!=-1 && atfogo==-1)
		{
			atfogo=sqrt(befogo1*befogo1+befogo2*befogo2);
		}
		if(befogo1!=-1 && atfogo!=-1 && befogo2==-1)
		{
			befogo2=sqrt(atfogo*atfogo-befogo1*befogo1);
		}
		if(befogo2!=-1 && atfogo!=-1 && befogo1==-1)
		{
			befogo1=sqrt(atfogo*atfogo-befogo1*befogo1);
		}
		if(cax!=-1 && cbx!=-1 && atfogo!=-1 && ca==-1 && cb==-1)
		{
			ca=(atfogo/(cax+cbx))*cax;
			cb=(atfogo/(cax+cbx))*cbx;
		}
		if(cax==-1 && cbx==-1 && ca!=-1 && cb!=-1 && atfogo!=-1)
		{
			cax=atfogo/ca;
			cbx=atfogo/cb;
		}
		if(atfogo==0 || befogo1==0 || befogo2==0)
		{
			cout<<endl<<"Valamelyik adat rossz!"<<endl;
			cout<<"Nyomj entert a folytatáshoz: "<<endl;
			cin>>fullrandomwontuseitagain;
			atfogo=-1;
			befogo1=-1;
			befogo2=-1;
			cax=-1;
			cbx=-1;
			ca=-1;
			cb=-1;
			magassag=-1;
		}
		if(magassag==-1 && ca!=-1 && befogo1!=-1)
		{
			magassag=sqrt(befogo1*befogo1-ca*ca);
		}
		if(magassag!=-1 && ca==-1 && befogo1!=-1)
		{
			ca=sqrt(befogo1*befogo1-magassag*magassag);
		}
		if(magassag!=-1 && ca!=-1 && befogo1==-1)
		{
			befogo1==sqrt(ca*ca+magassag*magassag);
		}
		if(magassag==-1 && cb!=-1 && befogo2!=-1)
		{
			magassag=sqrt(befogo2*befogo2-cb*cb);
		}
		if(magassag!=-1 && cb==-1 && befogo2!=-1)
		{
			cb=sqrt(befogo2*befogo2-magassag*magassag);
		}
		if(magassag!=-1 && cb!=-1 && befogo2==-1)
		{
			befogo2=sqrt(cb*cb+magassag*magassag);
		}
		if(ca==-1 && cb==-1 && atfogo!=-1 && befogo1!=-1 && befogo2!=-1)
		{
			ca=befogo1*(atfogo/(befogo1+befogo2));
			cb=befogo2*(atfogo/(befogo1+befogo2));
		}
	}
}
