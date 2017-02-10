#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

    int money = 0;
    int population = 0;
    int hemp = 0;
    int food = 0;
    int security = 0;
    int property = 0;
    int lemon = 0;
    int HempFarm = 0;
    int cornor = 0;
    int restraunt = 0;
    int ranch = 0;


int main()
{
    int home; // 1 = Kuru 2 = TrumpLand 3 = Borras
    cout << "HempCity" << endl;
    cout << "Made by Algore" << endl;
    cout << "------------------" << endl;
    cout << endl << endl << endl;
    cout << "You banished from your home land of." << endl;
    cout << "1. Kuru \n2. TrumpLand\n3. Borras"
    cin >> home;
    switch(home) {
    case 1: money = 100; hemp = 0; food = 0; security = 10; restraunt = 1; population = 10;
            break;

    case 2: money = 1000; hemp = 1000; food = 1000; security = 100; population = 100;
            break;

    case 3: money = 500; hemp = 500; food = 500; security = 50; population = 50
            break;
    default: cout << "That was not an option BOY;";

    }

}
