#include<iostream>
using namespace std;

void binaryToDecimal(int binaryNumber){
    int digit;
    int decimalNumber=0;
    int pow=1;

    while(binaryNumber>0){
        digit=binaryNumber%10;
        digit*=pow;
        decimalNumber=decimalNumber+digit;
        binaryNumber=binaryNumber/10;
        pow=pow*2;
    }

    cout<<decimalNumber<<endl;
}

int main(){
    int binaryNumber;
    cout<<"Enter your binary Number: ";
    cin>>binaryNumber;
    binaryToDecimal(binaryNumber);
    return 0;
}
