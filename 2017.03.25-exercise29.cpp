#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter a long text: ";
	string text;
	getline(cin,text);
	cout<<endl;
	cout<<"Enter a character to look for: ";
	char find;
	cin>>find;
	int found=0;
	for(int i=0; i<text.length(); i++)
	{
		if(text[i]==find)
		{
			found++;
		}
	}
	cout<<endl<<"The given character was found "<<found<<" times."<<endl;
}
