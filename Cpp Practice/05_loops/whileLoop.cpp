#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaCup=6;
    while(teaCup>0)
    {
        teaCup--;
        cout<<"Cup Served! Remaining Cups:"<<teaCup<<endl;

    }

    string wantCoffee;
    do
    {
        cout<<"Do you want a coffee?? Yes/No!! "<<endl;
        getline(cin,wantCoffee);
    } while (wantCoffee=="no");

    string stepsOfCreatingCoffee="fewewfvewfvwa";
    int numOfCoffee=5;

    for(int i = 0;i<numOfCoffee;i++)
    {
        cout<<stepsOfCreatingCoffee<<endl;
    }

    int count =0;
    string instructions;
    while(true)
    {
        count++;
        cout<<"Tea Served!!! Total tea served:"<<count<<endl;
        getline(cin,instructions);
        if(instructions=="stop")
            break;
    }

    string coffeeType[3] = {"fe", "Black Tea", "Lemon Tea"};

    for(int i=0;i<3;i++)
    {
        if(coffeeType[i]=="Black Tea") continue;
        cout<<"Coffee: "<<coffeeType[i]<<endl;
    }

    for(int i=0;i<3;i++)
    {
        cout<<"Coffee: "<<coffeeType[i]<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"Brewing Coffee!!! "<<coffeeType[i]<<endl;
        }
    }
    return 0;
}