// Volume Sphere, Cylinder, Cone.cpp : This program is to calculate the volume of sphere, cone and cylinder using functions

#include <iostream>
#define PI 3.142

using namespace std;

// Function Prototypes
double SphereVolume(double radius);
double ConeVolume(double radius, double height);
double CylinderVolume(double radius, double height);

int main()
{
    double radius, height;
    double sphere, cone, cylinder;

    // Sphere
    cout << "Please input the radius of a sphere: ";
    cin >> radius;

    sphere = SphereVolume(radius);

    cout << "\nThe volume of this sphere is " << sphere << "\n\n";
    cout << "--------------------------------------------------------\n";

    // Cone
    cout << "Please input the radius and height of a cone\n";
    cout << "Cone Radius\t: ";
    cin >> radius;
    cout << "Cone Height\t: ";
    cin >> height;

    cone = ConeVolume(radius, height);

    cout << "\nThe volume of this cone is " << cone << "\n\n";
    cout << "--------------------------------------------------------\n";

    // Cylinder
    cout << "Please input the radius and height of a cylinder\n";
    cout << "Cylinder Radius\t: ";
    cin >> radius;
    cout << "Cylinder Height\t: ";
    cin >> height;

    cylinder = CylinderVolume(radius, height);

    cout << "\nThe volume of this cylinder is " << cylinder << "\n\n";
    cout << "--------------------------------------------------------\n";

    return 0;
}

// Function Definitions
double SphereVolume(double radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double ConeVolume(double radius, double height)
{
    return (1.0 / 3.0) * PI * radius * radius * height;
}

double CylinderVolume(double radius, double height)
{
    return PI * radius * radius * height;
}