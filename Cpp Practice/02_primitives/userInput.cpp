#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userTea;
    int teaQuantity;
    cout << "What woould you like to order: " << endl;
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " would you like: " << endl;
    cin >> teaQuantity;

    cout << userTea << endl;
    cout << teaQuantity << endl;
    return 0;
}