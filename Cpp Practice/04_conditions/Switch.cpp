#include <iostream>
#include <string>

using namespace std;

int main()
{
    int type;
    cout << "Menu \n1. Black tea \n2. Green Tea \n3. Onlong Tea\nSelect the tea of your choice " << endl;
    cin >> type;

    switch (type){
    case 1:
    cout << "Black Tea: $4" << endl;
    break;
    case 2:
    cout << "Green Tea: $3" << endl;
    break;
    case 3:
    cout << "Onlong Tea: $6" << endl ;
    break;
    default:
    cout << "Pls select your order" << endl;
    }

    return 0;
}