#include "color.h"
Color::Color()
:R(0),G(0),B(0)
{
}
Color::Color(int r,int g,int b)
:R(r),G(g),B(b)
{
    check();
}
Color::~Color()
{

}
Color& Color::operator+(Color& obj)
{
    R=R+obj.R;
    G=G+obj.G;
    B=B+obj.B;
    check();
   
    return *this;
}

Color& Color::operator=(Color& obj)
{
    R=obj.R;
    G=obj.G;
    B=obj.B;
    return *this;
}
std::istream& operator>>(std::istream& ulaz,Color& obj)
{
    ulaz>>obj.R>>obj.G>>obj.B;
    obj.check();
    return ulaz;
}
std::ostream& operator<<(std::ostream& izlaz,Color& obj)
{
    izlaz<<"R:"<<obj.R<<" "<<"G:"<<obj.G<<" "<<"B:"<<obj.B;
    return izlaz;
}
Color& Color::operator!()
{
    R=255-R;
    G=255-G;
    B=255-B;
    return *this;
}
void Color::check()
{
     if(R>255)
    {
        R=R-(R-255);
    }
    if(G>255)
    {
        G=G-(G-255);
    }
    if(B>255)
    {
        B=B-(B-255);
    }
}