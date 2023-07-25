#include <iostream>
using namespace std;

void SquarePbyV(int);
void SquarePbyF(int&);

int main(){
    int num = 0;
    cout<<"Sample Input: Enter the number: ";
    cin>>num;
    cout<<"Expected Output:\n";
    cout<<"Square from function1: ";
    SquarePbyV(num);
    cout<<"Value from main: "<<num<<endl;
    cout<<"Square from function2: ";
    SquarePbyF(num);
    cout<<"Value from main: "<<num<<endl;
    cout<<"Square from function2: ";
    SquarePbyF(num);
    cout<<"Value from main: "<<num<<endl;
    cout<<"Square from function1: ";
    SquarePbyV(num);
    cout<<"Value from main: "<<num<<endl;
    return 0;
}

void SquarePbyV(int num){
    num *= num;
    cout<<num<<endl;
}
void SquarePbyF(int& num){
    num *= num;
    cout<<num<<endl;
}
