#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number";
    cin>>a;    
    for(int i=2;i<b;i++)
    {
        if(a%i==0)
        b=1;
    }
    if(b==1 || a==0 || a==1)
    {
        cout<<"Not prime";
    }
    else
    {
        cout<<"Prime";
    }
    return 0;
}
