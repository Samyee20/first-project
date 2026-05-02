// Car Fuel Efficiency.cpp : This program is to calculate car fuel efficiency.

#include <iostream>

// Define constant for litres per gallon
const float LITRES_PER_GALLON = 0.264179;

// Function to compute kilometres per gallon
float calculateKM(float litres, float kilometres) {
    // Convert litres to gallons using the global constant
    float gallons = litres * LITRES_PER_GALLON;

    // Calculate and return kilometres per gallon
    return kilometres / gallons;
}

int main() {
    float litresConsumed, kmTravelled;

    using namespace std;
    cout << "Enter the number of litres of petrol consumed: ";
    cin >> litresConsumed;

    cout << "Enter the number of kilometres travelled: ";
    cin >> kmTravelled;

    // Call the function and store the result
    float kmPerGallon = calculateKM(litresConsumed, kmTravelled);

    using namespace std;
    cout << "\nCar Fuel Efficiency:\n";
    cout << "Kilometres per gallon: " << kmPerGallon << " km/gal\n";

    return 0;
}