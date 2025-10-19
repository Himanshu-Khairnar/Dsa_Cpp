#include <iostream>

using namespace std;

int main()
{
    int cupsQuantity;
    double pricePercup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups: " << endl;
    cin >> cupsQuantity;
    cout << "Enter the price of tea per cups: " << endl;
    cin >> pricePercup;

    totalPrice = cupsQuantity * pricePercup;

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.1);
        cout << "Your total price is " << discountedPrice << " included 10\% discount" << endl;
    }
    else
        cout << "Your total price is " << totalPrice << endl;

    return 0;
}