#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// TASK 1:
void Task_1(){
    cout<<endl;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Entered array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nReversed array is: ";
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// TASK 2:
void Task_2(){
    cout<<endl;
    cout<<"Enter size of both arrays: ";
    int size;
    cin>>size;
    int count = 0;
    int j =0;
    int arr1[size]; 
    int arr2[size];
    int intersected_arr[size];
    cout << "Enter elements of first array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Enter elements of second array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]){
                count = count+1;
            }
        }
    }
    int final_arr[count];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]){
                final_arr[j] = arr1[i];
                j++;
            }
        }
    }
    cout<<"Intersected Final Array is: ";
    for (int i = 0; i < count; i++) {
        cout << final_arr[i] <<" ";
    }

}

// TASK 3:
void Task_3(){
    cout<<endl;
    int size;
    int flag = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Entered array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nArray is: ";
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
        if(arr[i] != arr[size-1-i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"NOT Palindrome";
    }
    else{
        cout<<"Palindrome";
    }
}

// TASK 4:
void Task_4(){
    cout<<endl;
    int size;
    int flag = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Entered array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"\nArray in Non-Ascending Order";
    }
    else{
        cout<<"\nArray in Ascending Order";
    }
    
}

// TASK 5:
void Task_5(){
    cout<<endl;
    char arr[1000];
    cout<<"Enter The sentence: ";
    cin.ignore();
    cin.getline(arr,1000);
    if(arr[0]){
        if(arr[0]>=97 && arr[0]<=122){
            arr[0] = arr[0] - 32;
        }
    }
    for (int i = 0; arr[i]!=0; i++) {
        if(arr[i]==' '){
            if(arr[i+1]>=97 && arr[i+1]<=122){
                arr[i+1] = arr[i+1] - 32;
            }
        }
    }
    for (int i = 0; arr[i]!=0; i++) {
        cout<<arr[i];
    }
}

// TASK 6:
void Task_6(){
    cout<<endl;
    int size;
    int flag = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Entered array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    for(int i=0; i<size-1;i++){
        if(arr[i+1]-arr[i]>1){
            cout<<" | "<<arr[i+1];
        }
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

    return 0;
}