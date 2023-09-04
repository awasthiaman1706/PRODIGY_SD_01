#include <iostream>

using namespace std;

int main()
{
    float temp;
    char unit;

    cout<<"-----------------------------TEMPERATURE SYSTEM CONVERTER-----------------------"<<endl;
    cout<<"\nPlease, enter the temperature and measurement system: \nC. Celsius \nF. Fahrenheit \nK. Kelvin"<<endl;
    cout<<"\nTemperature: ";
    cin>> temp;
    cout<<"Temperature system: ";
    cin>>unit;
    cout<<endl;
    if (unit == 'c' || unit == 'C') {
        cout<<"Fahrenheit: "<<9.0/5.0*temp+32<<endl;
        cout<<"Kelvin: "<<temp+273.15;
    }
    else if (unit == 'f' || unit == 'F'){
        cout<<"Celsius: "<<5.0/9.0*(temp-32)<<endl;
        cout<<"Kelvin: "<<(temp+459.67)*5.0/9.0;
    }
    else if (unit == 'k' || unit == 'K'){
        cout<<"Celsius: "<<temp-273.15<<endl;
        cout<<"Kelvin: "<<temp*9.0/5.0-459.67;
    }
}
