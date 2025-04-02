#include <iostream>
#include "age_checker.h"
using namespace std;

void purchaseResponse(string product, int price){
    cout <<" you have selected"<< product<<"\n"
        "And the price will be ksh "<<price;
}


void stockDisplay(){
    cout << "The following are the list of available items \n"
    "\t 1. Matel\n"
    "\t 2. Konyangi\n"
    "\t 3. Balozi\n"
    "\t 4. Tusker\n"
    "\t 5. Gunnies\n"
    "\t 6. Smirnoff\n"
    "\t 7. White Cup\n"
    "\t 8. Johnny walker\n"
    "Please choose your drink: ";
    ;
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



int main()
{
    int userAge=0;
    int userOption=0;
    cout<<"please Enter your age: ";
    cin>>userAge;
    ageChecker(userAge);
    stockDisplay();
    cin>>userOption;
    userPurchase(userOption);

    return 0;
}
