#include<iostream>
using namespace std;

int main(){
    int i,j,k,n,first,second;
    cout<<"Enter Odd N: ";
    cin>>n;

    first=n/2+1;
    second=n-first;

    for(i=0;i<first;i++){

        for(k=0;k<i;k++){
            cout<<" ";
        }
        for(j=0;j<first-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=0;i<second;i++){
        for(k=1;k<second-i;k++){
            cout<<" ";
        }
        for(j=0;j<i+2;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
