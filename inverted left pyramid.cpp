#include<iostream>
using namespace std;


int main(){
    int i,j,k,n;
    cout<<"Enter N: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(k=1;k<=n-i+1;k++){
            cout<<" *";
        }
        cout<<endl;
    }
}
