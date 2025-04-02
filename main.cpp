#include <iostream>
#include "age_checker.h"
#include "stock_display.h"
#include "purchase.h"
using namespace std;


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
