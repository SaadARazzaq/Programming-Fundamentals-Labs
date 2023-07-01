#include<iostream>
using namespace std;

// TASK 1:
void Task_1(){
    char alphabet;
    cout<<"Enter The character you want to check: ";
    cin>>alphabet;
    switch(alphabet){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Your entered character is a vowel";
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            cout << "Your entered character is a consonant";
            break;
        default:
            cout << "Your entered character is neither a vowel nor a consonant";
    }
}

// TASK 2:
void Task_2(){
    int age;
    cout<<"Enter the age of the candidate: ";
    cin>>age;
    (age>18 ? cout<<"Candidate Eligible for voting!" : cout<<"Candidate NOT Eligible for voting!");
}

// TASK 3:
void Task_3(){
    double sale, total_sale, bonus = 0.0;
    cout<<"Enter total sale: ";
    cin>>sale;
    if(sale>20000){
        bonus = sale * 0.15;
        total_sale = sale + bonus;
        cout<<"The total Sale is: "<<total_sale;
    }
    else if(10000<sale<=20000){
        bonus = sale * 0.10;
        total_sale = sale + bonus;
        cout<<"The total Sale is: "<<total_sale;
    }
    else{
        bonus = sale * 0.0;
        total_sale = sale + bonus;
        cout<<"The total Sale is: "<<total_sale;
    }
}

// TASK 4:
void Task_4(){
    int math, computer, phy, chem, bio, total_each_subject, grandTotal, totalObtained, percentage;
    char grade;
    cout << "\n\t*The total marks of all the subjects will be equal*\n\n";
    cout << "Enter total marks: ";
    cin >> total_each_subject;
    cout << "Enter obtained marks of Math: ";
    cin >> math;
    cout << "Enter obtained marks of Computer: ";
    cin >> computer;
    cout << "Enter obtained marks of Physics: ";
    cin >> phy;
    cout << "Enter obtained marks of Chemistry: ";
    cin >> chem;
    cout << "Enter obtained marks of Biology: ";
    cin >> bio;
    totalObtained = math + computer + phy + chem + bio;
    grandTotal = total_each_subject * 5; // Total subjects are 5
    percentage = (static_cast<double>(totalObtained) / grandTotal) * 100;
    switch (static_cast<int>(percentage / 10)) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
        case 4:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }
    cout << "The Student has obtained " << percentage << "% marks and has obtained a/an " << grade << " grade!";
    }

// TASK 5:
void Task_5(){
    double sal, gross_sal;
    int temp;
    cout << "Enter the basic salary of the employee: ";
    cin >> sal;
    temp = (sal <= 10000 ? 0 : (sal <= 20000 ? 1 : 2));
    switch (temp) {
        case 0:
            gross_sal = sal + (sal * 0.20) + (sal * 0.80);
            break;
        case 1:
            gross_sal = sal + (sal * 0.25) + (sal * 0.90);
            break;
        case 2:
            gross_sal = sal + (sal * 0.30) + (sal * 0.95);
            break;
        default:
            gross_sal = sal;
            break;
    }

    cout << "Your Gross Salary is: " << gross_sal << endl;
}

// TASK 6:
void Task_6(){
    int units;
    double bill = 0.0;
    
    cout << "Enter the electricity units consumed: ";
    cin >> units;
    
    if (units <= 50) {
        bill = units * 0.50;
    } 
    else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
    else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
    else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    
    bill += bill * 0.20;
    
    cout << "Total electricity bill: Rs. " << bill << endl;
}

// TASK 7:
void Task_7(){
    double quizScore, midtermScore, finalScore;
    double averageScore;
    char grade;
    cout << "Enter the quiz score: ";
    cin >> quizScore;
    cout << "Enter the mid-term score: ";
    cin >> midtermScore;
    cout << "Enter the final score: ";
    cin >> finalScore;

    averageScore = (quizScore + midtermScore + finalScore) / 3;

    int temp;
    temp = (averageScore>=90 ? 0 : (70<=averageScore<90 ? 1 : (50<=averageScore<70 ? 2 : 3)));

    switch(temp){
        case 0:
            grade = 'A';
            cout<<"Obtained Grade is: "<<grade;
            break;
        case 1:
            grade = 'B';
            cout<<"Obtained Grade is: "<<grade;
            break;
        case 2:
            grade = 'C';
            cout<<"Obtained Grade is: "<<grade;
            break;
        case 3:
            grade = 'F';
            cout<<"Obtained Grade is: "<<grade;
            break;
        default:
            cout<<"Invalid Inputs";
    }
}

// TASK 8:
void Task_8(){
    int hours, mins, temp;
    cout<<"Enter hours (in a 24-hour format): ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>mins;
    temp = (11<hours<=23 ? 1 : 0);
    switch(temp){
        case 0:
            cout << "It is AM right now ";
            break;
        case 1:
            cout << "It is PM right now ";
            break;
        default:
            cout << "Your entered input is WRONG";
    }
}

// TASK 9:
void Task_9(){
    int num;
    int temp;
    cout<<"Enter The number you want to convert: ";
    cin>>num;
    temp = (num>=0 ? 1 : 0);
    switch(temp){
        case 0:
            cout << "The number was: "<<num;
            cout<<"\nConverted number is: "<< num*(-1);
            break;
        case 1:
            cout << "The number was: "<<num;
            cout<<"\nConverted number is: "<< num*(-1);
            break;
        default:
            cout << "Your entered input is WRONG";
    }
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

    cout << "\033[1;31m\t-> Task 8\033[0m" << std::endl;
    Task_8();
    cout<<endl;
    
    cout << "\033[1;32m\t-> Task 9\033[0m" << std::endl;
    Task_9();
    cout<<endl;

    return 0;
}