#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string>
#include <algorithm>
using namespace std;

// TASK 1:
void Task_1(){
    cout<<endl;
    int range=0, temp=0;
    cout<<"Enter the range: ";
    cin>>range;
    temp = range;
    cout<<"The sequence from +ve to -ve is: ";
    while(range!=((temp - temp*2)-1)){
        cout<<range<<"  ";
        range--;
    }
}

// TASK 2:
void Task_2(){
    cout<<endl;
    char ch;
    int sum_vowel = 0, sum_consonent = 0;
    cout<<"Enter single character only: ";
    cin>>ch;
    while(((ch>=65 && ch<=90) || (ch>=97 && ch<=122))){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            sum_vowel += 1;
        }
        else{
            sum_consonent += 1;
        }
        cout<<"Enter single character only: ";
        cin>>ch;
    }
    cout<<"\n-> Total Vowels Entered: "<<sum_vowel;
    cout<<"\n-> Total consonents Entered: "<<sum_consonent;
}

// TASK 3:
void Task_3(){
    cout<<endl;
    int attempts;
    srand(time(0));
    int random_var = rand()%20 + 1;
    int n;
    for (attempts = 5; attempts>=0; attempts--){
        cout<<"Guess a number: ";
        cin>>n;
        if(random_var>10 && random_var!=n){
            cout<<"Target Number Greater than 10!\n";
        }
        else if(random_var<10 && random_var!=n){
            cout<<"Target Number Lesser than 10!\n";
        }
        else if(random_var%2==0 && random_var!=n){
            cout<<"Target Number Even Number!\n";
        }
        else if(random_var%2!=0 && random_var!=n){
            cout<<"Target Number Odd Number!\n";
        }
        else if(random_var==n){
            break;
        }
    }
    if(attempts==5){
        cout<<"Score ==5 ==> output: Perfect Score!\n";
    }
    else if(attempts==4){
        cout<<"Score ==4 ==> output: Nice Effort!\n";
    }
    else if(attempts==3){
        cout<<"Score ==3 ==> output: Good Score!\n";
    }
    else if(attempts==2){
        cout<<"Score ==2 ==> output: Need Improvement!\n";
    }
    else if(attempts==1){
        cout<<"Score ==1 ==> output: Bad Play!\n";
    }
    else if(attempts==0){
        cout<<"Score ==0 ==> output: You loss!\n";
    }
}

// TASK 4:
void Task_4(){
    cout<<endl;
    int n=0;
    float sum = 0.0;
    float i = 1.0;
    cout<<"Enter positive n integer: ";
    cin>>n;
    do{
        sum = sum + 1/(i*i);
        i++;
    } while(i<=n);
    cout<<"-> Sum of series is: "<<sum;
}

// TASK 5:
void Task_5(){
    cout<<endl;
    int number;
    string s;
    cout << "Enter an integer: ";
    cin >> number;
    int length = trunc(log10(number)) + 1;
    int digit;
    for (int i = length; i > 0; i--) {
        digit = number % 10;
        s = s + to_string(digit) + " ";
        number /= 10;
    }
    reverse(s.begin(), s.end());
    cout << "-> Sequential Order is: " << s;
}

// TASK 6:
void Task_6(){
    cout<<endl;
    int coin, five, two, one;
    cout << "Enter total coins you have: ";
    cin >> coin;
    if (coin < 0) {
        cout << "Invalid coin value." << endl;
    }
    five = coin / 5;
    coin %= 5;
    two = coin / 2;
    coin %= 2;
    one = coin;
    cout << "-> 5 rupee coins: " << five << endl;
    cout << "-> 2 rupee coins: " << two << endl;
    cout << "-> 1 rupee coins: " << one << endl;
}

// TASK 7:
void Task_7(){
    int n, ans, base;
    string result = " ";
    cout<<"Enter a decimal number: ";
    cin>> n;
    cout<<"Enter base: ";
    cin>> base;
    cout<<"The "<<"base "<<base<<" conversion of the decimal is: ";
    while(n!=0){
        if(n!=0){
            ans = n%base;
            result = result + to_string(ans);
            n = n/base;
        }
    }
    reverse(result.begin(), result.end());
    cout<<result;
}


// Main:
int main(){

    cout << "\033[1;31m\t-> Task 1\033[0m" << std::endl;
    Task_1();
    cout<<endl;
    
    cout << "\033[1;32m\t-> Task 2\033[0m" << std::endl;
    Task_2();
    cout<<endl;

    cout << "\033[1;33m\t-> Task 3\033[0m" << std::endl;
    Task_3();
    cout<<endl;

    cout << "\033[1;34m\t-> Task 4\033[0m" << std::endl;
    Task_4();
    cout<<endl;

    cout << "\033[1;35m\t-> Task 5\033[0m" << std::endl;
    Task_5();
    cout<<endl;

    cout << "\033[1;36m\t-> Task 6\033[0m" << std::endl;
    Task_6();
    cout<<endl;

    cout << "\033[1;37m\t-> Task 7\033[0m" << std::endl;
    Task_7();
    cout<<endl;
    
    return 0;
}