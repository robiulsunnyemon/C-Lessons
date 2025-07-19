#include<iostream>
using namespace std;

void sumOfDigit(int n){
    int digit;
    int sum=0;
    int power=1;
    while(n != 0){
        digit=n%10;
        sum+=digit;
        n /=10;
        power*=10;
    }
    cout<<"Sum of Digit: "<<sum<<endl;

}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    sumOfDigit(n);

    return 0;

}
