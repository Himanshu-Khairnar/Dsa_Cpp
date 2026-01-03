#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string tea;

    // cout << "Which tea you wanna order:" << endl;
    // getline(cin, tea);
    // if (tea == "Green Tea")
    //     cout << "Your order is confrimed" << endl;

    // int time;

    // cout<<"Enter the current time (24 hours):"<<endl;
    // cin>>time;
    // if(time>=8 && time<=18)
    //     cout<<"Shop's open";
    // else
    //     cout<<"Shop's closed";

    int numberOfCups;
    int pricePerCup = 100;

    cout << "Enter the number of cups:" << endl;
    cin >> numberOfCups;
    float total = numberOfCups * pricePerCup;

    if (numberOfCups >= 10 && numberOfCups <= 20)
        total -= total * 0.1;
    else if (numberOfCups >= 20)
        total -= total * 0.2;
    cout << "Your final bill is total" << total << endl;

    return 0;
}