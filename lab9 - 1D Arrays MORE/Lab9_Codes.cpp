#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// TASK 1:
void Task_1(){
    cout<<endl;
    int arr[5];
    cout<<"Enter 5 elements: \n";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    cout<<"Enter single input n: ";
    int n;
    cin>>n;
    cout<<"All elements not divisible by "<<n<<" are: ";
    for(int i = 0; i<5;i++){
        if(arr[i] % n != 0){
            cout<<arr[i]<<" ";
        }
    }
}

// TASK 2:
void Task_2(){
    cout<<endl;
    cout<<"Enter 10 elements: \n";
    int arr[10];
    for (int i=0; i<10;i++){
        cin>>arr[i];
    }
    int max = arr[0], min = arr[0], second_max = -99999, second_min = 99999;
    cout<<"Array Elements: ";
    for(int i = 0; i<10;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0; i<10;i++){
        if(arr[i]>second_max){
            if(arr[i]==max){
                continue;
            }
            second_max = arr[i];
        }
    }
    cout<<"\n2nd max is: "<<second_max;
    for(int i = 0; i<10;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    for(int i = 0; i<10;i++){
        if(arr[i]<second_min){
            if(arr[i]==min){
                continue;
            }
            second_min = arr[i];
        }
    }
    cout<<"\n2nd min is: "<<second_min;

}

// TASK 3:
void Task_3(){
    cout<<endl;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Number found in the array." << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }
}

// TASK 4:
void Task_4(){
    cout<<endl;
    int n;
    cout<<"How many characters you want to enter: ";
    cin>>n;
    bool found = false;
    char arr[n];
    cout<<"Enter "<<n<<" characters: ";
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<"Enter target subarray length: ";
    int m;
    cin>>m;
    char target[m];
    cout<<"Enter "<<m<<" target subarray characters: ";
    for (int i = 0; i < m; i++) {
        cin >> target[i];
    }
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (arr[i + j] != target[j])
                break;
        }
        if (j == m) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}

// TASK 5:
void Task_5(){
    cout<<endl;
    int arr[3][3];
    cout<<"Enter elements: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered elements are: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// TASK 6:
void Task_6(){
    cout<<endl;
    int arr[3][3];
    cout<<"Enter elements: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered elements are: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0, large = -9999;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>large){
                large = arr[i][j];
            }
        }
    }
    cout<<"\nSum of all the elements is: "<<sum;
    cout<<"\nLargest Number in the array is: "<<large;
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

    return 0;
}