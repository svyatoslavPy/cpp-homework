#include <iostream>
#include <string>
using namespace std;


int main() {
    
    struct Laptop {
        string CPU;
        string Motherboard;
        string VideoCard;
        int RAM;
    };

    struct Apartment {
        int Floors;
        int Doors;
        int Rooms;
        int Stairs;
        int Windows;
    };

    struct Burger {
        float Ketchup;
        float Tomatoes;
        float Cucumbers;
        float Salad;
        float Cheese;
        float Beef;
    };

    struct CppTeacher {
        string Name;
        int Age;
        int Growth;
        string Country;
        int Experience;
    };
    
    struct Carpet {
        string Figure;
        string Picture;
        double Size;
        double Thickness;
        string Manufacturer;
    };

}
