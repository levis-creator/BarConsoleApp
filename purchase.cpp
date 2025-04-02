#include "purchase.h"
#include <iostream>
using namespace std;

void purchaseResponse(string product, int price){
    cout <<" you have selected"<< product<<"\n"
        "And the price will be ksh "<<price;
}



void userPurchase(int option) {
    switch (option) {
        case 1:
            purchaseResponse("Matel", 1600);
            break;
        case 2:
            purchaseResponse("Konyangi", 250);
            break;
        case 3:
            purchaseResponse("Balozi", 200);
            break;
        case 4:
            purchaseResponse("Tusker", 200);
            break;
        case 5:
            purchaseResponse("Gunnies", 500);
            break;
        case 6:
            purchaseResponse("Smirnoff", 250);
            break;
        case 7:
            purchaseResponse("White Cup", 200);
            break;
        case 8:
            purchaseResponse("Johnny Walker", 500);
            break;
        default:
            cout << "Invalid Option!" << endl;
            break;
    }
}

