#include<iostream>
using namespace std;

const int rows = 3, cols = 3;
void inputMatrix(int (&arr)[rows][cols]){
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}
}
bool checkEqualty(int(&arr1)[rows][cols], int(&arr2)[rows][cols]){
	bool flag = false;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr1[i][j] != arr2[i][j]){
				flag = false;
				cout << "\n\tBoth matrix are NOT EQUAL!\n";
				return false;
			}
			else {
				flag = true;
			}
		}
	}
	if (flag == true) {
		cout << "\n\tBoth matrix are EQUAL!\n";
		return true;
	}
}
int checkDiagonalSum(int(&arr)[rows][cols]) {
	bool flag = false;
	int s1 = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j) {
				s1 = s1 + arr[i][j];
			}
		}
	}
	return s1;
}
void outputMatrix(int(&arr)[rows][cols]) {
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j]<<"  ";
		}
		cout << endl;
	}
}

int main() {

	int arr1[3][3];
	cout << "Enter elements in the array 1:\n";
	inputMatrix(arr1);
	int arr2[3][3];
	cout << "Enter elements in the array 2:\n";
	inputMatrix(arr2);
	checkEqualty(arr1, arr2);
	int sum1 = checkDiagonalSum(arr1);
	int sum2 = checkDiagonalSum(arr2);
	cout << "\nSum Diagonal of First Array: " << sum1;
	cout << "\nSum Diagonal of Second Array: " << sum2;
	if (sum1 == sum2) {
		cout << "\nBOTH MATRICES HAVE EQUAL SUM DIAGNALS !!\n";
	}
	else {
		cout << "\nBOTH MATRICES HAVE NON EQUAL SUM DIAGNALS !!\n";
	}
	cout << "The elements in the array 1:\n";
	outputMatrix(arr1);
	cout << "The elements in the array 2:\n";
	outputMatrix(arr2);

	system("Pause");
	return 0;
}
