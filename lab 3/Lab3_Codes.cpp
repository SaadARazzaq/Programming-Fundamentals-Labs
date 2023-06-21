#include<iostream>
using namespace std;

// TASK 1:
void Task_1(){
    char grade;
    cout<<"Enter Grade: ";
    cin>>grade;
    if(grade=='A'){
        cout<<"EXCELLENT";
    }
    else if(grade=='B'){
        cout<<"VERY GOOD";
    }
    else if(grade=='C'){
        cout<<"GOOD";
    }
    else if(grade=='D'){
        cout<<"AVERAGE";
    }
    else if(grade=='F'){
        cout<<"TRY AGAIN";
    }
    else{
        cout<<"WRONG OUTPUT";
    }
}

// TASK 2:
void Task_2(){
    int num1, num2, num3;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;
    if(num1==num2 && num2==num3 && num1==num3){
        cout<<"Numbers are EQUAL!";
    }
    else{
        cout<<"Numbers are NOT EQUAL!";
    }
}

// TASK 3:
void Task_3(){
    int day;
    cout<<"Enter Day in Number: ";
    cin>>day;
    if(day==0){
        cout<<"Day is: MONDAY";
    }
    else if(day==1){
        cout<<"Day is: TUESDAY";
    }
    else if(day==2){
        cout<<"Day is: WEDNESDAY";
    }
    else if(day==3){
        cout<<"Day is: THURSDAY";
    }
    else if(day==4){
        cout<<"Day is: FRIDAY";
    }
    else{
        cout<<"DAY DOES NOT EXIST!";
    }
}

// TASK 4:
void Task_4(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>=65 && ch <= 90){
        cout<<"Special Character Entered (A-Z)";
    }
    else if(ch>=97 && ch <= 122){
        cout<<"Character/Alphabet Entered (a-z)";
    }
    else if(ch>=0 && ch <= 9){
        cout<<"Digit Entered (0-9)";
    }
}

// TASK 5:
void Task_5(){
    int side1, side2, side3;
    cout<<"Enter First side: ";
    cin>>side1;
    cout<<"Enter Second side: ";
    cin>>side2;
    cout<<"Enter Third side: ";
    cin>>side3;
    if(side1==side2 && side2==side3 && side1==side3){
        cout<<"EQUILATERAL TRIANGLE";
    }
    else if((side1==side2 && side1==side3) || (side2==side3 && side1==side3) || (side2==side1 && side2==side3)){
        cout<<"ISOCELES TRIANGLE";
    }
    else{
        cout<<"SCALENE TRIANGLE";
    }
}

// TASK 6:
void Task_6(){
    int angle;
    cout << "Enter angle: ";
    cin >> angle;
    if (angle >= 0 && angle <= 90) {
        cout << "1st Quadrant";
    }
    else if (angle > 90 && angle <= 180) {
        cout << "2nd Quadrant";
    }
    else if (angle > 180 && angle <= 270) {
        cout << "3rd Quadrant";
    }
    else if (angle > 270 && angle <= 360) {
        cout << "4th Quadrant";
    }
    else {
        cout << "Invalid angle. Angle must be between 0 and 360.";
    }
}

// TASK 7:
void Task_7(){
    int angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    int sum = angle1 + angle2 + angle3;
    if (sum == 180) {
        cout << "The triangle is valid.";
    } 
    else {
        cout << "The triangle is not valid.";
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
    return 0;
}