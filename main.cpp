#include <iostream>
#include "image.h"
#include "color.h"
int main()
{
    char cnf;
    std::cout<<"Kompajliranje uspesno!\n";
    Image<int> crnoBelaSlika;
    std::cout<<"Unesite crno belu sliku (1/0):\n";
    
    crnoBelaSlika.picLoad();
    crnoBelaSlika.picShow();

    Image<Color> slikaUBoji;
    std::cout<<"Unesite sliku u boji (0-255)\n";
     
    slikaUBoji.picLoad();
    slikaUBoji.picShow();
    std::cout<<"Da li zelite da komplementirate sliku (Y/N)?\n";
    // Image<Color> kopijaSlike;
    // kopijaSlike=slikaUBoji;
    // kopijaSlike.picShow();
    std::cin>>cnf;
    if(cnf=='y')
    {
        crnoBelaSlika.invert();
        crnoBelaSlika.picShow();
        
        slikaUBoji.invert();
        slikaUBoji.picShow();
        cnf='0';
    }
    else if(cnf=='n')
    {
        std::cout<<"ok\n";
    }
    else{
        exit(1);
    }

    return 1;
}