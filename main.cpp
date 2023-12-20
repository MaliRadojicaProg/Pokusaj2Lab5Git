#include <iostream>
#include "image.h"
#include "color.h"
int main()
{
    char cnf;
    std::cout<<"Kompajliranje uspesno!\n";
    // Image<int> crnoBelaSlika;
    Image<int>* devcrnoBelaSlika=new Image<int>;
    Image<Color>* devslikaUBoji=new Image<Color>;
    std::cout<<"Unesite crno belu sliku (1/0):\n";
    
    devcrnoBelaSlika->picLoad();
    devcrnoBelaSlika->picShow();

    // Image<Color> slikaUBoji;
    std::cout<<"Unesite sliku u boji (0-255)\n";
     
    devslikaUBoji->picLoad();
    devslikaUBoji->picShow();
    std::cout<<"Kopija slikeUBoji";
     Image<Color>* kopijaSlike=new Image<Color>;
    kopijaSlike=devslikaUBoji;
    kopijaSlike->picShow();
    std::cin.ignore();
    std::cout<<"Da li zelite da komplementirate sliku (Y/N)?\n";
    std::cin>>cnf;
    std::cin.ignore();
    if(cnf=='y')
    {
        devcrnoBelaSlika->invert();
        devcrnoBelaSlika->picShow();
        
        devslikaUBoji->invert();
        devslikaUBoji->picShow();
      
    }
    else if(cnf=='n')
    {
        std::cout<<"ok\n";
    }
    // else{
    //     exit(0);
    // }

    delete devcrnoBelaSlika;
    // delete devslikaUBoji;
    delete kopijaSlike;
    return 1;
}