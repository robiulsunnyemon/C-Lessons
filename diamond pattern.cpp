#include<iostream>
using namespace std;

int main(){
    int i,j,k,n,first,second;
    cout<<"Enter N: ";
    cin>>n;

    first=n/2+1;
    second=n-first;

    //first

    for(i=1;i<=first;i++){
        for(j=1;j<=first-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //second

    for(i=1;i<=second;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(k=1;k<=second-i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }





}
