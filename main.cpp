#include <iostream>
#include <fstream>
#include "image.h"
#include "color.h"
int main()
{
    std::cout<<"Kompajliranje uspesno!\n";
    Image<int> obj1;
    obj1.picLoad();
    obj1.invert();
    obj1.picShow();
    // int x=1;
    // std::ofstream file;
    // file.open("boje.txt");
    // if(file.is_open())
    // {
    //    file<<5;
    // }
    // file.close();
    // Image<Color> Boja;
    // Boja.picLoad();

    return 1;
}