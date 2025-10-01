// Oct 1st 2025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int GhostHP = 10;
    int warriorDamage = rand() % 20 + 1;
    GhostHP -= warriorDamage;

    if (GhostHP <= 0)
        cout << "The ghost is beaten\n";
    //if (GhostHP >= 0)
    //    cout << "The ghost is still there! ooooh\n";
    else
        cout << "The ghost is still there! woooo\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
