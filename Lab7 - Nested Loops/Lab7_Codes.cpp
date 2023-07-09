#include<iostream>
#include<string>
#include<algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>
using namespace std;

// TASK 1:
void Task_1(){
    cout<<endl;
    int five = 0;
    int result = 0;
    int counter = 0;
    cout<<"---------------(a)---------------\n";
    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n---------------(b)---------------\n";
    for(int i=1; i<=4;i++){
        for(int j=1; j<=3;j++){
            five = five + 5;
            cout<<five<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n---------------(c)---------------\n";
    for(int i=1;i<=6;i++){
        counter = 0;
        result = 0;
        counter = counter+i;
        for(int j=1; j<=5; j++){
            result = result + counter;
            cout<<result<<"\t";
        }
        cout<<endl;
    }

}

// TASK 2:
void Task_2(){
    cout<<endl;
    int num;
    cout<<"Enter number: ";
    cin>>num;
    for(int i=10; i>=1; i--){
        cout<<" "<<num<<"*"<<i<<" = "<<num*i<<endl;
    }

}

// TASK 3:
void Task_3(){
    cout<<endl;
    int num, i = 2, flag = 0;
    cout << "Enter a number to check if it is prime (-ve number to exit program): ";
    cin >> num;
    while (num > 0) {
        i = 2;
        flag = 0;
        while (i < num) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0) {
            cout << "Number is Prime\n";
        } else {
            cout << "Number is not Prime\n";
        }

        cout << "Enter a number to check if it is prime (-ve number to exit program): ";
        cin >> num;
    }

}

// TASK 4:
void Task_4(){
    cout<<endl;
    cout << "Perfect numbers are: ";
    for (int k = 2; k < 500; k++) {
        int sum = 0;
        for (int i = 1; i <= k / 2; i++) {
            if (k % i == 0) {
                sum += i;
            }
        }

        if (sum == k) {
            cout << k << " ";
        }
    }
}

// TASK 5:
void Task_5(){
    cout<<endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num = num / 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

// TASK 6:
void Task_6(){
    cout<<endl;
    srand(time(0));
    int randomNumber = rand() % 1000;
    int guess;
    do {
        cout << "Guess the number (between 0 and 999): ";
        cin >> guess;
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } 
        else if (guess < randomNumber) {
            cout << "Your guess is lower than the number. Guess again!" << endl;
        } 
        else {
            cout << "Your guess is higher than the number. Guess again!" << endl;
        }

    } while (true);
    
}

// TASK 7:
void Task_7(){
    cout<<endl;
    double x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }
    cout << "Sum of the series: " << sum << endl;
    
}

// TASK 8:
void Task_8(){
    cout<<endl;
    double merchCost, empSal, annualRent, electricityCost;
    cout << "Enter the total cost of merchandise: ";
    cin >> merchCost;
    cout << "Enter the total salary of employees: ";
    cin >> empSal;
    cout << "Enter the yearly rent: ";
    cin >> annualRent;
    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;
    double totalExpenses = merchCost + empSal + annualRent + electricityCost;
    double desiredProfit = merchCost * 0.1;
    double markedUpPrice = (totalExpenses + desiredProfit) / (1 - 0.15);
    double markupPercentage = (markedUpPrice - merchCost) / merchCost * 100;
    cout << "The merchandise markup is: " << markupPercentage << "%." << endl;

}

// TASK 9:
void Task_9(){
    cout<<endl;
    int num1, num2;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    cout << num1 << " " << operation << " " << num2 << " = ";
    switch (operation) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 / num2;
            } else {
                cout << "Error (division by zero)";
            }
            break;
        default:
            cout << "Invalid operation";
            break;
    }
    
}

// TASK 10:
void Task_10(){
    cout<<endl;
    char letterCode;
    cout << "Enter a letter code (A-Z, # to stop): ";
    cin >> letterCode;
    while (letterCode != '#') {
        if (letterCode >= 'A' && letterCode <= 'Z') {
            int digit;
            if (letterCode <= 'C')
                digit = 2;
            else if (letterCode <= 'F')
                digit = 3;
            else if (letterCode <= 'I')
                digit = 4;
            else if (letterCode <= 'L')
                digit = 5;
            else if (letterCode <= 'O')
                digit = 6;
            else if (letterCode <= 'S')
                digit = 7;
            else if (letterCode <= 'V')
                digit = 8;
            else if (letterCode <= 'Z')
                digit = 9;

            cout << "Corresponding digit: " << digit << endl;
        } 
        else {
            cout << "Invalid letter code. Please try again." << endl;
        }
        cout << "Enter a letter code (A-Z, # to stop): ";
        cin >> letterCode;
    }
    
}

// TASK 11:
void Task_11(){
    cout<<endl;
    int totalStudents, totalSubjects;
    cout << "Enter the total number of students: ";
    cin >> totalStudents;
    cout << "Enter the total number of subjects: ";
    cin >> totalSubjects;
    int averageSum = 0;
    int maxMark = 101;
    int minMark = -1;

    for (int i = 1; i <= totalStudents; i++) {
        int studentAverage = 0;

        cout << "Enter the marks of student " << i << ":" << endl;
        for (int j = 1; j <= totalSubjects; j++) {
            int marks;
            cout << "Student " << i << " subject " << j << ": ";
            cin >> marks;
            
            studentAverage += marks;
            maxMark = max(maxMark, marks);
            minMark = min(minMark, marks);
        }
        averageSum += studentAverage / totalSubjects;
        cout << endl;
    }

    int average = averageSum / totalStudents;

    cout << "Average marks for each student: " << average << endl;
    cout << "Maximum marks for each subject: " << maxMark << endl;
    cout << "Minimum marks for each subject: " << minMark << endl;

}

// TASK 12:
void Task_12(){
    cout<<endl;
    double loanAmt, annual_IR, monthlyPmt;
    cout << "Enter the loan amount: $";
    cin >> loanAmt;
    cout << "Enter the annual interest rate (%): ";
    cin >> annual_IR;
    cout << "Enter the monthly payment: $";
    cin >> monthlyPmt;
    double monthly_IR = annual_IR / 12 / 100;
    double remainingBal = loanAmt;
    int months = 0;

    while (remainingBal > 0) {
        double interest = remainingBal * monthly_IR;
        double principalPayment = monthlyPmt - interest;
        remainingBal -= principalPayment;
        if (principalPayment <= 0) {
            cout << "The monthly payment is too low. The loan amount cannot be repaid." << endl;
            break;
        }
        months++;
    }
    if (remainingBal <= 0) {
        cout << "Loan repaid in " << months << " months." << endl;
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

    cout << "\033[1;34m\t-> Task 10\033[0m" << std::endl;
    Task_10();
    cout<<endl;

    cout << "\033[1;35m\t-> Task 11\033[0m" << std::endl;
    Task_11();
    cout<<endl;

    cout << "\033[1;36m\t-> Task 12\033[0m" << std::endl;
    Task_12();
    cout<<endl;

    return 0;
}