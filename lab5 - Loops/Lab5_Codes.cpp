#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// TASK 1:
void Task_1(){
    int sum = 0;
    double average = 0.0;
    cout<<"-> First 5 odd numbers are: ";
    for(int i = 1; i<=10;i++){
        if(i % 2 != 0){
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<endl;
    cout<<"-> Sum of these numbers is = "<<sum;
    cout<<endl;
    cout<<"-> Average of these numbers is = "<<sum/5<<endl;
}

// TASK 2:
void Task_2(){
    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<"*    ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<endl<<"$"<<endl;
    }
}

// TASK 3:
void Task_3(){
    cout<<endl;
    int prev1 = 0, prev2 = 1, curr = 0, n = 0;
    cout<<"Enter how many Fibonacci numbers you want to print: ";
    cin>>n;
    cout << 0 << " " << 1 <<" ";
    for(int i = 0; i < n-2; i++){
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        cout <<curr << " ";
    }
}

// TASK 4:
void Task_4(){
    cout<<endl;
    int n, ans;
    string binary = " ";
    cout<<"Enter a decimal number: ";
    cin>> n;
    cout<<"The binary of the decimal is: ";
    while(n!=0){
        if(n!=0){
            ans = n%2;
            binary = binary + to_string(ans);
            n = n/2;
        }
    }
    reverse(binary.begin(), binary.end());
    cout<<binary;
}

// TASK 5:
void Task_5(){
    cout<<endl;
    char operator_;
    int num1, num2;

    while (true) {
    cout << "Select an operator: +, -, *, /" << endl;
    cin >> operator_;

    if (operator_ == 'Q' || operator_ == 'q') {
        break;
    }

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operator_) {
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
        default:
        cout << "Invalid operator" << endl;
    }
    }
}

// TASK 6:
void Task_6(){
    cout<<endl;
    int n, fact = 1;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Factorial is: ";
    for(int i = n; i > 1; i--){
        cout<<i <<" * ";
        fact = fact * i;
    }
    cout<<"1 = "<<fact;
}

// TASK 7:
void Task_7(){
    cout<<endl;
    int base, pow, result = 1, pow1 = 1;
    cout << "Enter the base: ";
    cin >> base;
    int base1 = base;
    cout << "Enter the power: ";
    cin >> pow;
    pow1 = pow;
    while (pow > 0) {
        result = result * base;
        pow--;
    }
    cout << base1 << "^" << pow1 << " = " << result;
}

// TASK 8:
void Task_8(){
    cout<<endl;
    int total_subjects = 2;
    int total_students = 0;
    int m, sum = 0;
    int max = -1000;
    int min = 1000;
    cout<<"Enter total students: ";
    cin>>total_students;
    for (int i=0; i<total_students; i++){
        cout<<"Enter marks of student "<<i+1<<" for subject 1 = ";
        cin>>m;
        if(m>max){
            max = m;
        }
        else{
            min = m;
        }
        sum = sum + m;
    }
    cout<<endl;
    cout<<"Subject 1"<<endl;
    cout<<"Average = "<<sum/total_students<<endl;
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl<<endl;
    m = 0, sum = 0;
    max = -1000;
    min = 1000;
    for (int i=0; i<total_students; i++){
        cout<<"Enter marks of student "<<i+1<<" for subject 2 = ";
        cin>>m;
        if(m>max){
            max = m;
        }
        else{
            min = m;
        }
        sum = sum + m;
    }
    cout<<endl;
    cout<<"\n\nSubject 2"<<endl;
    cout<<"Average = "<<sum/total_students<<endl;
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl<<endl;
}

// TASK 9:
void Task_9(){
    cout<<endl;
    bool continue_program = true;
    int n;
    int sum = 0;

    while (continue_program) {
        cout << "Enter the number of numbers you want to add: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
        int number;
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;

        sum += number;
        }

        cout << "The sum of the numbers is " << sum << endl;

        cout << "Would you like to continue? (Y/N) ";
        char choice;
        cin >> choice;

        if (choice != 'Y' && choice != 'y') {
        continue_program = false;
        }

        sum = 0;
    }
}

// TASK 10:
void Task_10(){
    cout<<endl;
    int total_cookies;
    int cookies_per_box;
    int boxes_per_container;

    cout << "Enter the total number of cookies: ";
    cin >> total_cookies;

    cout << "Enter the number of cookies per box: ";
    cin >> cookies_per_box;

    cout << "Enter the number of boxes per container: ";
    cin >> boxes_per_container;

    int num_boxes = total_cookies / cookies_per_box;
    int num_containers = num_boxes / boxes_per_container;
    int leftover_boxes = num_boxes % boxes_per_container;
    int leftover_cookies = total_cookies - num_boxes * cookies_per_box;

    cout << "Number of boxes: " << num_boxes << endl;
    cout << "Number of containers: " << num_containers << endl;
    cout << "Leftover boxes: " << leftover_boxes << endl;
    cout << "Leftover cookies: " << leftover_cookies << endl;
    
}

// TASK 11:
void Task_11(){
    cout<<endl;
    char c_type;
    int bill, account_no, customer_code, total_channels, total_premium_channels, connection_no;
    double bill_processing_fee, basic_service_fee, premium_channels;
    cout<<"Enter the customer type ('R' or 'B'): ";
    cin>>c_type;
    switch(c_type){
        case 'R':
        case 'r':
            cout<<"Enter customer account number: ";
            cin >> account_no;
            cout<<"Enter customer code: ";
            cin >> customer_code;
            cout<<"Enter total channels used: ";
            cin >> total_channels;
            cout<<"Enter total premium channels used: ";
            cin>> total_premium_channels;
            bill_processing_fee = 4.5;
            basic_service_fee = 20.50;
            premium_channels = 7.5;
            bill = bill_processing_fee + basic_service_fee + (total_premium_channels * premium_channels);
            cout<<"\n\n---------------------------------------------";
            cout<<"\nCustomer type: Residential";
            cout<<"\nCustomer Account No = "<<account_no;
            cout<<"\nCustomer Code = "<<customer_code;
            cout<<"\nTotal Channels Used = "<<total_channels;
            cout<<"\nTotal Bill = $"<<bill;
            cout<<"\n---------------------------------------------\n\n";
            break;
        case 'B':
        case 'b':
            cout<<"Enter customer account number: ";
            cin >> account_no;
            cout<<"Enter customer code: ";
            cin >> customer_code;
            cout<<"What is your connection number: ";
            cin>>connection_no;
            cout<<"Enter total channels used: ";
            cin >> total_channels;
            cout<<"Enter total premium channels used: ";
            cin>> total_premium_channels;
            bill_processing_fee = 15.0;
            if(connection_no<=10){
            basic_service_fee = 75.0;
            }
            else if(connection_no>10){
                basic_service_fee = 75.0 + 5 * (connection_no - 10);
            }
            premium_channels = 50.0;
            bill = bill_processing_fee + basic_service_fee + (total_premium_channels * premium_channels);
            cout<<"\n\n---------------------------------------------";
            cout<<"\nCustomer type: Business";
            cout<<"\nCustomer Account No = "<<account_no;
            cout<<"\nCustomer Code = "<<customer_code;
            cout<<"\nTotal Channels Used = "<<total_channels;
            cout<<"\nTotal Bill = $"<<bill;
            cout<<"\n---------------------------------------------\n\n";
            break;
        default:
            cout<<"WRONG CUSTOMER TYPE!\n\n";
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

    return 0;
}