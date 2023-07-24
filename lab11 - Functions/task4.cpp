#include<iostream>
#include<string>
using namespace std;

void decimal_to_binary(int& decimal, int& binary){
    int base = 1;
    binary = 0;
    if(decimal==0){
        binary = 0;
    }
    while(decimal>0){
        int remainder = decimal % 2;
        binary = binary + (remainder * base);
        decimal = decimal / 2;
        base = base * 10;
    }
}

// Main:
int main(){
    int decimal;
    int binary = 0;
    cout<<"Enter decimal number: ";
    cin >> decimal;
    decimal_to_binary(decimal, binary);
    cout<<"-> Binary converted Number is "<<binary;

    return 0;
}
