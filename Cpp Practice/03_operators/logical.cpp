#include <iostream>

using namespace std;

int main()
{

    bool userType;
    int cupCount;

    cout << "Are you a student (1 for yes/ 0 for no): " << endl;
    cin >> userType;

    cout << "How many cups have you bought: " << endl;
    cin >> cupCount;

    if (userType || !userType && cupCount >= 15)
        cout << "You are subscripted to our tea stall" << endl;
    else
        cout << "You are not subscripted to our tea stall" << endl;
    
    return 0;
}