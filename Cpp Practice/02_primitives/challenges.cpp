#include <iostream>
#include <string>
using namespace std;

int main()
{
    // challenge1
    string teaType1 = "Ice Tea";
    string teaType2 = "Latte Tea";
    string teaType3 = "Normal Tea";
    string teaType4 = "Lemon Tea";

    float teaType1PricePerKg = 40.12;
    float teaType2PricePerKg = 40.52;
    float teaType3PricePerKg = 40.32;
    float teaType4PricePerKg = 40.22;

    char teaType1Rating = 'A';
    char teaType2Rating = 'D';
    char teaType3Rating = 'C';
    char teaType4Rating = 'B';

    cout << "Tea Type 1 is " << teaType1 << " and its per kg price is " << teaType1PricePerKg << " rupees, while it's rating is " << teaType1Rating << endl;
    cout << "Tea Type 2 is " << teaType2 << " and its per kg price is " << teaType2PricePerKg << " rupees, while it's rating is " << teaType2Rating << endl;
    cout << "Tea Type 3 is " << teaType3 << " and its per kg price is " << teaType3PricePerKg << " rupees, while it's rating is " << teaType3Rating << endl;
    cout << "Tea Type 4 is " << teaType4 << " and its per kg price is " << teaType4PricePerKg << " rupees, while it's rating is " << teaType4Rating << endl;

    // challenge 2

    // cout << "Enter user base price for Tea Type 1" << endl;
    // cin >> teaType1PricePerKg;
    // cout << "Enter user base price for Tea Type 2" << endl;
    // cin >> teaType2PricePerKg;
    // cout << "Enter user base price for Tea Type 3" << endl;
    // cin >> teaType3PricePerKg;
    // cout << "Enter user base price for Tea Type 4" << endl;
    // cin >> teaType4PricePerKg;

    // int teaType1PricePerKgRounded = int(teaType1PricePerKg) + ((int(teaType1PricePerKg) * 10) / 100);
    // int teaType2PricePerKgRounded = int(teaType2PricePerKg) + ((int(teaType2PricePerKg) * 10) / 100);
    // int teaType3PricePerKgRounded = int(teaType3PricePerKg) + ((int(teaType3PricePerKg) * 10) / 100);
    // int teaType4PricePerKgRounded = int(teaType4PricePerKg) + ((int(teaType4PricePerKg) * 10) / 100);

    // cout << "Revisied Price are: \n Tea Type 1 " << teaType1PricePerKgRounded << " \n Tea Type 2 " << teaType2PricePerKgRounded << "\n Tea type 3 " << teaType3PricePerKgRounded << "\n Tea Type 4 " << teaType4PricePerKgRounded << endl;

    // challenge 3

    string favTea;
    int favTeaQuantity;

    cout << "Please give your favourtie Tea:" << endl;
    getline(cin, favTea);
    cout << "Enter the Quantity of your favourite Tea you have conusmed :" << endl;
    cin >> favTeaQuantity;

    cout << "Your favourite tea is "<<favTea<<" and you have conusmed "<<favTeaQuantity <<" units of it's. Thank You for your support" << endl;
    return 0;
}