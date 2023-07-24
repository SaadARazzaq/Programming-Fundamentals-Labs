#include<iostream>
using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    else{
        return false;
    }
}

// Main:
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int result;
    result = isVowel(ch);
    cout<<result;
    return 0;
}
