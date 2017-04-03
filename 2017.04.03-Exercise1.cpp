#include <iostream>
#include <iomanip>
using namespace std;
void MakeRect(int a)
{
    for(int i=0; i<a; i++)
    {
        for(int c=0; c<a-i; c++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int c=0; c<a-(a-i); c++)
        {
            cout<<" ";
        }
        for(int c=0; c<a-(a-i); c++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1; i<a+1; i++)
    {
        for(int c=0; c<a-(a-i); c++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int c=0; c<(a-i)*2; c++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
}
bool IsPrime(int a)
{
    int PrimeDivisorCounter=0;
    for(int i=1; i<a+1; i++)
    {
        if(a%i==0)
        {
            PrimeDivisorCounter++;
        }
    }
    if(PrimeDivisorCounter!=2)
    {
        return false;
    }
    if(PrimeDivisorCounter==2)
    {
        return true;
    }
}
int main()
{
    int a = 1;
    bool c = (a<10)?true:false;
    cout<<"Ternary operator: ";
    switch(c)
    {
        case true: cout<<"true"; break;
        case false: cout<<"false"; break;
    }
    cout<<endl<<endl;
    class Fruits
    {
        public:
            int Price;
            int Size;
            int Available;
    };
    Fruits Banana, Peach;
    Banana.Price = 300;
    Banana.Size = 10;
    Banana.Available = 2;
    Peach.Price = 250;
    Peach.Size = 5;
    Peach.Available = 10;
    cout<<"Fruit class: "<<endl<<endl;
    cout<<"Banana: \t"<<Banana.Price<<endl;
    cout<<"Banana: \t"<<Banana.Size<<endl;
    cout<<"Banana: \t"<<Banana.Available<<endl;
    cout<<"Peach: \t\t"<<Peach.Price<<endl;
    cout<<"Peach: \t\t"<<Peach.Size<<endl;
    cout<<"Peach: \t\t"<<Peach.Available<<endl;
    cout<<endl<<"Pointers: "<<endl<<endl;
    cout<<"*Banana.Price: \t"<<Banana.Price<<endl;
    cout<<"&Banana.Price: \t"<<&Banana.Price<<endl;
    int *pointer = &Banana.Price;
    cout<<"pointer: \t"<<pointer<<endl;
    cout<<"*pointer: \t"<<*pointer<<endl;
    cout<<"&pointer: \t"<<&pointer<<endl;
    cout<<endl<<"Sizeof: "<<endl<<endl;
    cout<<"Size of Banana.Price: \t\t"<<sizeof(Banana.Price)<<" B"<<endl;
    cout<<"Size of Banana.Size: \t\t"<<sizeof(Banana.Size)<<" B"<<endl;
    cout<<"Size of Banana.Available: \t"<<sizeof(Banana.Available)<<" B"<<endl;
    cout<<"Size of pointer:\t\t"<<sizeof(pointer)<<" B"<<endl;
    cout<<endl<<"Setw & Setfill:"<<endl<<endl;
    cout<<setfill('*');
    cout<<setw(10)<<"lol"<<endl;
    cout<<endl<<"Setprecision: "<<endl<<endl;
    float pi,x,y;
    x=11;
    y=7;
    pi=x/y;
    cout<<setprecision(1)<<pi<<endl;
    cout<<setprecision(2)<<pi<<endl;
    cout<<setprecision(3)<<pi<<endl;
    cout<<setprecision(4)<<pi<<endl;
    cout<<setprecision(5)<<pi<<endl;
    cout<<setprecision(6)<<pi<<endl;
    cout<<setprecision(7)<<pi<<endl;
    cout<<setprecision(8)<<pi<<endl;
    cout<<setprecision(9)<<pi<<endl;
    cout<<setprecision(10)<<pi<<endl;
    cout<<setprecision(11)<<pi<<endl;
    cout<<setprecision(12)<<pi<<endl;
    cout<<endl<<"Setbase: "<<endl<<endl;
    cout<<"Hexadecimal:\n\n";
    cout<<"15:\t"<<setbase(16)<<15<<endl;
    cout<<"16:\t"<<setbase(16)<<16<<endl;
    cout<<"17:\t"<<setbase(16)<<17<<endl;
    cout<<"\nOctal:\n\n";
    cout<<"7:\t"<<setbase(8)<<7<<endl;
    cout<<"8:\t"<<setbase(8)<<8<<endl;
    cout<<"9:\t"<<setbase(8)<<9<<endl;
    cout<<"\nPrimecheck function:\n\n";
    cout<<"IsPrime(10): ";
    switch(IsPrime(10))
    {
        case true: cout<<"true"; break;
        case false: cout<<"false"; break;
    }
    cout<<endl<<"IsPrime(3): ";
    switch(IsPrime(3))
    {
        case true: cout<<"true"; break;
        case false: cout<<"false"; break;
    }
    cout<<endl<<endl;
    cout<<"MakeRect(10):\n\n";
    MakeRect(10);
    cout<<endl<<endl;
    cout<<"MakeRect(2):\n\n";
    MakeRect(2);
    cout<<endl<<endl;
    cout<<"MakeRect(5):\n\n";
    MakeRect(5);
    return 0;
}
