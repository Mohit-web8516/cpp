#include <iostream>
using namespace std;
int main (){
    double temperature;
    char unit;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;
    if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temperature * 9.0 / 5.0) + 32.0;
        cout << temperature << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = (temperature - 32.0) * 5.0 / 9.0;
        cout << temperature << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
    } else {
        cout << "Invalid unit entered. Please enter C for Celsius or F for Fahrenheit." << endl;
    }
    return 0;
}