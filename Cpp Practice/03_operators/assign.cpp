#include <iostream>

using namespace std;

int main()
{

    int assignedBags;
    cout << "Enter your Bags assigned to: ";
    cin >> assignedBags;

    if (assignedBags < 10)
        assignedBags += 5;

    cout << "Your total Bags are: " << assignedBags << endl;
    return 0;
}