#include <iostream>
#include "image.h"
int main()
{
    std::cout<<"Kompajliranje uspesno!\n";
    Image<int> obj1;
    obj1.picLoad();
    obj1.picShow();
}