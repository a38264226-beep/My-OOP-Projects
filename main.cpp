
//3- Exercise: Weekly Weather Report 
#include <iostream>
using namespace std;

struct CityWeather {
    string cityName;
    float temps[7];
};

int main() {
    CityWeather city;

    cout << "Enter city name: ";
    cin >> city.cityName;

    cout << "Enter 7 temperatures:\n";
    for (int i = 0; i < 7; i++) {
        cin >> city.temps[i];
    }

    float highest = city.temps[0];

    for (int i = 1; i < 7; i++) {
        if (city.temps[i] > highest) {
            highest = city.temps[i];
        }
    }

    cout << "\nCity: " << city.cityName << endl;
    cout << "Highest Temperature: " << highest << endl;

    return 0;
}
