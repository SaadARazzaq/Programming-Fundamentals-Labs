#include <iostream>
using namespace std;

int SimilarCheck(int[], int[]);

int main(){
    int arr1[10], arr2[10];
    cout<<"Enter 10 elements in array 1: \n";
    for(int i=0; i<10; i++){
        cin>>arr1[i];
    }
    cout<<"Enter 10 elements in array 2: \n";
    for(int i=0; i<10; i++){
        cin>>arr2[i];
    }
    int count = 0;
    count = SimilarCheck(arr1, arr2);
    cout<<"Common elements in both arrays are: "<<count;
    return 0;
}

int SimilarCheck(int arr1[], int arr2[]){
    int count = 0;
    for(int i = 0; i<10; i++){
        for(int k = 0; k<10; k++){
            if (arr1[i] == arr2[k]){
                count++;
                break;
            }
        }
    }
    return count;
}
