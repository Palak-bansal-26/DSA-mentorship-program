#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"numbers from 1 to " <<n<<" are :"<<endl;
    for(int i=1; i<=n; i++){
        cout<<i <<" "<<endl;
    }
    return 0;
}
