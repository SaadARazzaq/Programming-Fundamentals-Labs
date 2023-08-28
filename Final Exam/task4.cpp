#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream handler;
	string word,replace;
	handler.open("input.txt",ios::in);
	if (!handler) {
		cout << "\n\tFILE NOT OPEN\n";
	}
	else {
		int flag = 0;
		cout << "Enter the word to search in file: ";
		cin >> word;
		cout << "Enter the word to replace with: ";
		cin >> replace;
		char a[20];
		for (int i = 0; i != handler.eof(); i++) {
			handler >> a[i];
			if (a[i] == word[i]) {
				flag = 0;
				a[i] = replace[i];
			}
			else {
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "\n\tENTERED WORD NOT FOUND TO PERFORM ACTION ON!\n";
		}
	}
	handler.close();
	system("Pause");
	return 0;
}
