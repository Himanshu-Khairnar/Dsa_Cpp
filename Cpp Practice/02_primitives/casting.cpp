#include <iostream>

using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;
    int quantity = 2;
    float totalPrice  = quantity * teaPrice;

    cout << totalPrice << endl;

    return 0;
}