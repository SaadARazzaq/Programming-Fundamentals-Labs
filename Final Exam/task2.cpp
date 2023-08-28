#include<iostream>
using namespace std;
int main() {

	int arr[10] = { 0 };

	cout << "Input 9 elements of array: \n";
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int element = 0, index = 0;
	cout << "Enter your 10th element: ";
	cin >> element;
	cout << "Enter index of element: ";
	cin >> index;

	cout << "\nArray before inserting " << element << "at " << index << " index is:\n";
	cout << "{ ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " , " ;
	}
	cout << " }\n";

	for (int i = 10; i > index; i--) {
		arr[i] = arr[i-1];
	}
	arr[index] = element;

	cout << "\nArray after inserting " << element << "at " << index << " index is:\n";
	cout << "{ ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " , ";
	}
	cout << " }\n\n";

	system("Pause");
	return 0;
}
