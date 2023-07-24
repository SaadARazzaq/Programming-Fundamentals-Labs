#include<iostream>
using namespace std;

void swapNumbers(int& a, int& b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

// Main:
int main(){
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"-> Numbers before swapping: "<<a<<" | "<<b<<endl;
    swapNumbers(a,b);
    cout<<"-> Numbers after swapping: "<<a<<" | "<<b<<endl;

    return 0;
}
