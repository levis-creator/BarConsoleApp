#include <iostream>
#include "age_"

void ageChecker(int age){
    if(age>=18){
        cout<<"you are allowed to drink alcohol!"<<endl;
    }else{
        cout<<"You are an under age and you are not allowed to drink alcohol!"<<endl;
        exit(0);
    }
}
