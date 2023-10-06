#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        p++;
    }
    cout<<"Total digits in the given number is "<<p;
    return 0;
}
