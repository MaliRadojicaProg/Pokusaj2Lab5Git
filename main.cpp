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
    std::cout<<"Kopija slikeUBoji\n";
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
    Image<int>* zbirImage=new Image<int>;
    zbirImage->picLoad();
    Image<int>* noviZbir=new Image<int>(*zbirImage+*devcrnoBelaSlika);
    Image<Color>* dod=new Image<Color>(*kopijaSlike+*devslikaUBoji);
    noviZbir->picShow();
    dod->picShow();
    // else{
    //     exit(0);
    // }
    delete noviZbir;
    delete dod;
    // delete zbirImage;
    // delete devcrnoBelaSlika;
    // delete devslikaUBoji;
    // delete kopijaSlike;
    // delete devslikaUBoji;
    return 1;
}