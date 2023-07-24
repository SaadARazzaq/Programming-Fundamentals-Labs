#include<iostream>
#include<math.h>
using namespace std;

void user_Inputs(int& windSpeed, float& temperature){
    cout<<"Enter wind speed (in miles): ";
    cin>>windSpeed;
    cout<<"Enter wind temperature (in Farenheit): ";
    cin>>temperature;
}

float windChillFactor(int& V, float& T){
    float formula = 35.74 + 0.6215 * T - 35.75 * pow(V, 0.16) + 0.4275 * T * pow(V, 0.16);
    return formula;
}

// Main:
int main(){
    int V;
    float T, result;
    user_Inputs(V, T);
    result = windChillFactor(V, T);
    cout<<"-> Wind Chill Factor is: "<<result;
    return 0;
}
