#include <iostream>
using namespace std;
string name;   //Use of global variable

void organization(int& salary, int&experience){
    int baseSalary = salary; 
    salary = baseSalary + (baseSalary*0.10);
    experience++;
}
int main(){
    int age, salary = 99000, experience = 0;    //Use of local variables
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"\n\t**Information**\n";
    for(int i=0; i<6; i++){
        cout<<"\n\t-> After "<<i<<" years:\n";
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nSalary: "<<salary<<"\nExperience: "<<experience;
        organization(salary, experience);
    }
    return 0;
}
