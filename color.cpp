#include "color.h"
Color::Color()
:R(0),G(0),B(0)
{
}
Color::Color(int r,int g,int b)
:R(r),G(g),B(b)
{
}
Color::~Color()
{

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
    return ulaz;
}
std::ostream& operator<<(std::ostream& izlaz,Color& obj)
{
    izlaz<<obj.R<<" "<<obj.G<<" "<<obj.B<<"/n";
    return izlaz;
}