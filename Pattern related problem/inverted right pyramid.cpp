#include<iostream>
using namespace std;


int main(){
    int i,j,k,n;
    cout<<"Enter N: ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }



}
