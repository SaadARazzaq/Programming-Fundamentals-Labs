#include<iostream>
using namespace std;

string gradeCalculator(int& marks){
    if(marks >= 80 && marks <= 100){
        return "Grade A";
    }
    else if (marks >= 70 && marks <= 79){
        return "Grade B";
    }
    else if (marks >= 60 && marks <= 69){
        return "Grade C";
    }
    else if (marks >= 55 && marks <= 59){
        return "Grade D";
    }
    else if (marks >= 50 && marks <= 54){
        return "Grade E";
    }
    else{
        return "Grade F";
    }
}

// Main:
int main(){
    int marks;
    string grade;
    cout<<"Enter marks of student: ";
    cin>>marks;
    grade = gradeCalculator(marks);
    cout<<grade;
    return 0;
}
