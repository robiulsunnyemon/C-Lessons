#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    cout<<"Enter N: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
