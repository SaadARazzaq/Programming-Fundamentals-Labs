#include<iostream>
#include <ctime> 
#include <cstdlib>
#include <string>
using namespace std;

// TASK 1:
void Task_1(){
    cout<<endl;
    int table[5];
    cout<<" ** TABLE GENERATOR ** \n";
    cout<<"------------------------------------------------\n";
    for(int i=0; i<5;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>table[i];
        cout<<endl;
        cout<<"The table for "<<i+1<<"th element is: \n\n";
        for(int j = 1; j<=10;j++){
            cout<<"\t"<<table[i]<<" * "<<j<<" = "<<table[i]*j<<endl;
        }
        cout<<"\n------------------------------------------------\n";
    }
}

// TASK 2:
void Task_2(){
    cout<<endl;
    int random[200];
    srand(time(0));
    for(int i=0; i<200;i++){
        random[i] = (rand()%100);
    }
    for(int i=0; i<20;i++){
        for(int j = 0;j<10;j++){
            cout<<random[i * 10 + j]<<" ";
        }
        cout<<endl;
    }
    
}

// TASK 3:
void Task_3(){
    cout<<endl;
    int arr[10];
    int count = 0;
    cout<<"Enter array entries: \n";
    for(int i=0; i<10;i++){
        cin>>arr[i];
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                count += 1;
                if(count>0){
                    cout<<"Duplicate Values Found, Please enter again: ";
                    cin>>arr[i];
                }
            }
        }
    }
    cout<<"Array values are: \n";
    for(int i=0; i<10;i++){
        cout<<arr[i]<< " , ";
    }
}

// TASK 4:
void Task_4(){
    cout<<endl;
    int missing, index;
    int arr[10];
    cout<<"Enter 9 elements in array: ";
    for(int i=0; i<9; i++){
        cin>>arr[i];
        if(i==8){
            cout<<"Your array has values: [";
            for(int i=0;i<9;i++){
                cout<<arr[i]<<" , ";
            }
            cout<<"]";
        }
    }
    cout<<"\nEnter your tenth element: ";
    cin>>missing;
    cout<<"Enter Index: ";
    cin>>index;
    cout<<"your final array is: [";
    for(int i=9; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = missing;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"]";
}

// TASK 5:
void Task_5(){
    cout<<endl;
    int arr[10];
    cout<<"Enter 10 numbers:(10 - 100): \n";
    for(int i = 0; i<10 ; i++){
        cin>>arr[i];
        if(arr[i]<10 || arr[i]>100){
            cout<<"Your input is not 10 - 100 inclusive, Enter again: \n";
            cin>>arr[i];
        }
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate Found, Enter again: \n";
                cin>>arr[i];
            }
        }
    }
    cout<<"Your entered array is: [ ";
    for(int i = 0; i<10 ; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<" ]\n";
    cout<<"WORST CASE!";
}

// TASK 6:
void Task_6(){
    cout<<endl;
    char sentence[30];
    char result[30];
    cout<<"Enter 30 characters (No Space to be entered): ";
    for(int i=0; i<30; i++){
        cout<<"Enter "<<i+1<<"th Character: ";
        cin>>sentence[i];
        if(sentence[i]>=65 && sentence[i]<=90){
            result[i] = sentence[i] + 32;
        }
        else if(sentence[i]>=97 && sentence[i]<=122){
            result[i] = sentence[i] - 32;
        }
    }
    cout<<"Original: ";
    for(int i=0;i<30;i++){
        cout<<sentence[i];
    }
    cout<<"\nResult: ";
    for(int i=0;i<30;i++){
        cout<<result[i];
    }
}

// TASK 7:
void Task_7(){
    cout<<endl;
    int dice_counts[11] = {0};
    int dice1, dice2, sum;
    for (int i = 0; i < 1000; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        dice_counts[sum - 2]++;
    }
    cout << "Sum | Count" << endl;
    for (int i = 2; i < 12; i++) {
        cout << i << " | " << dice_counts[i - 2] << endl;
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