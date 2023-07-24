#include<iostream>
using namespace std;

float assistance(int income, int consulting_time, int& hourly_rate){
    int over_the_time = 0;
    float service_charges = 0;
    if(income<=25000 && consulting_time<=30){
        service_charges = 0;
    }
    else if(income>25000 && consulting_time>30){
        over_the_time = consulting_time - 30;
        service_charges = 0.40 * ((hourly_rate * over_the_time) / 60);
    }
    else if(consulting_time<=20){
        service_charges = 0;
        
    }
    else if(consulting_time>20){
        over_the_time = consulting_time - 20;
        service_charges = 0.70 * ((hourly_rate * over_the_time) / 60);
    }
    return service_charges;
}

// Main:
int main(){
    int income, consulting_time, hourly_rate, charges = 0;
    cout<<"Enter Total income: ";
    cin>>income;
    cout<<"Enter consulting time (in minutes): ";
    cin>>consulting_time;
    cout<<"Enter hourly Rate: ";
    cin>>hourly_rate;
    cout<<"\n\t**Bill for Service Charges**\n";
    charges = assistance(income, consulting_time, hourly_rate);
    cout<<"-> "<<charges;
    return 0;
}
