#include "Swep.h"
#include <iostream>



Swep::Swep(){
    std::cout<< "Swep created"<<std::endl;
}

void Swep::doNothing(){
    std::cout<< "Nothing done"<<"\n";
}

/* template <typename T> void Swep::swep(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    //return true;
} */

