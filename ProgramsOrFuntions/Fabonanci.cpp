#include<iostream>
using namespace std;

void fabo(int n)
{
    if(n<=0)
        cout<<"wrong enter \n"<<endl;     // wrong enter
    else if(n==1)
        cout<<0<<endl;
    else if(n==2)
        cout<<0<<" "<<1<<endl;
    else
    {
        int a=0,b=1,c=0;
        cout<<0<<" "<<1<<" ";
        for (int x=2;x<n;x++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<b<<" ";
        }
    }
}

int main()
{
    int num=20;
    cout<<"fabonanci Series : ";        //Series 0 to num 
    fabo(num);
    cout<<endl;
}