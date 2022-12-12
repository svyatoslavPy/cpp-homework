#include <iostream>
#include <string>
using namespace std;

struct Device {
    string DeviceType;
    string Denomination;
    string Model;
    string Brand;
    double GuaranteePeriod;
    double Price;
    string DateOfSale;
};


Device FillDevice() {
    Device temp;
    cout << "Enter device type: ";
    cin >> temp.DeviceType;
    
    cout << "Enter denomination: ";
    cin >> temp.Denomination;
    
    cout << "Enter model: ";
    cin >> temp.Model;
    
    cout << "Enter brand: ";
    cin >> temp.Brand;
    
    cout << "Enter guarantee period: ";
    cin >> temp.GuaranteePeriod;
    
    cout << "Enter price: ";
    cin >> temp.Price;
    
    cout << "Enter date of sale: ";
    cin >> temp.DateOfSale;

    return temp;
}


void ShowDevice(const Device& device) {
    cout << "Device type:  " << device.DeviceType << endl;
    cout << "Denomination: " << device.Denomination << endl;
    cout << "Model: " << device.Model << endl;
    cout << "Brand: " << device.Brand << endl;
    cout << "Guarantee period: " << device.GuaranteePeriod << endl;
    cout << "Price: " << device.Price << endl;
    cout << "Date of sale: " << device.DateOfSale << endl;
}


int main() {
    Device device = FillDevice();
    ShowDevice(device);
}
