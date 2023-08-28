#include<iostream>
#include<iomanip>
using namespace std;

int taxCalculator(int gross_salary, int total_savings, double& tax) {
	double tax_slab_0 = 0, tax_slab_1 = 0, tax_slab_2 = 0, tax_slab_3 = 0;
	if (total_savings <= 100000) {
		tax_slab_0 = 0;
		tax = static_cast<double>(tax_slab_0);
	}
	else if (total_savings > 100000 && total_savings <= 200000) {
		tax_slab_1 = (total_savings - 100000) * 0.10;
		tax = static_cast<double>(tax_slab_0+ tax_slab_1);
	}
	else if (total_savings > 200000 && total_savings <= 500000) {
		tax_slab_2 = (total_savings - 200000) * 0.20;
		tax = static_cast<double>(tax_slab_0 + tax_slab_1 + tax_slab_2);
	}
	else if (total_savings > 500000) {
		tax_slab_3 = (total_savings - 500000) * 0.30;
		tax = static_cast<double>(tax_slab_0 + tax_slab_1 + tax_slab_2 + tax_slab_3);
	}
	else {
		cout << "\n\n\tINVALID TAXATION AMOUNT!\n\n";
		return 0;
	}
	return tax;
}

int main() {
	int gross_salary, total_savings, FLAG = 1;
	double tax = 0;
	cout << "Enter gross salary: ";
	cin >> gross_salary;
	cout << "Enter your total savings: ";
	cin >> total_savings;
	while (FLAG) {
		if (total_savings > gross_salary) {
			cout << "\n\n\tTOTAL SAVINGS MUST BE LESS THAN THE GROSS SALARY!\n\n";
			cout << "AGAIN: Enter gross salary: ";
			cin >> gross_salary;
			cout << "AGAIN: Enter your total savings: ";
			cin >> total_savings;
		}
		else {
			FLAG = 0;
		}
	}
	/*if (total_savings > 100000) {   // This was part a and after implementing it the tax was always coming out to be 0
		cout << "\n\n\tAS TOTAL SAVINGS CAN NEVER BE GREATER THAN 100,000 SO ROUNDED OFF TO 100,000!\n\n";
		total_savings = 100000;
	}*/
	tax = taxCalculator(gross_salary, total_savings, tax);
	cout << "\n\n-------------------------------------------\n";
	cout << "TAX CALCULATED IS: " << tax;
	cout << "\n-------------------------------------------\n\n";
	system("Pause");
}
