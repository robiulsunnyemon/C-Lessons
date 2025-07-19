#include<iostream>
using namespace std;


void decimalToBinary(int decimalNumber){
    int digit;
    int binaryNumber=0;
    int pow=1;
    while(decimalNumber!=0){
        digit=decimalNumber%2;
        digit*=pow;
        binaryNumber+=digit;
        decimalNumber/=2;
        pow*=10;

    }

    cout<<"Binary Number: "<<binaryNumber<<endl;
}


int main(){
    int decimalNumber;
    cout<<"Enter Your decimalNumber: ";
    cin>>decimalNumber;
    decimalToBinary(decimalNumber);
    return 0;

}
