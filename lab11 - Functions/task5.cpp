#include<iostream>
using namespace std;

int reverseDigit(int num){
    int reverse = 0;
    while(num>0){
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    return reverse;
}

int countDigit(int num){
    int count = 0;
    while(num%10>0){
        num = num / 10;
        count++;
    }
    return count;
}

int largestDigit(int num){
    int max = 0;
    while(num%10>0){
        int digit = num % 10;
        num = num / 10;
        if(max<digit){
            max = digit;
        }
    }
    return max;
}

// Main:
int main(){
    int num, reverse, count, maX;
    cout<<"Enter number: ";
    cin >> num;
    reverse = reverseDigit(num);
    count = countDigit(num);
    maX = largestDigit(num);
    cout<<"-> Reverse of digits is: "<<reverse<<endl;
    cout<<"-> Count of digits is: "<<count<<endl;
    cout<<"-> maX digit is: "<<maX<<endl;

    return 0;
}
