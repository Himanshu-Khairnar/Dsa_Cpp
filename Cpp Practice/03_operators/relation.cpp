#include <iostream>

using namespace std;

int main()
{
    int teaQuantity;
    string badge;
    cout << "Enter total number of tea quantity you have to order: " << endl;
    cin >> teaQuantity; 

    if (teaQuantity > 20)
        badge = "Gold";
    else if (teaQuantity >= 10 && teaQuantity <= 20)
        badge = "Sliver";
    else
        badge = "Bronze";

    cout<<"Your Badge is: "<<badge<<endl;

    return 0;
}