#include<iostream>
using namespace std;
int main(){
    int i, fact=1,n;
    cout<<"enter the value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<i<<endl;}
        cout<<endl;
        cout<<fact;

}