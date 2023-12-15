#include <iostream>
class Color{
private:
    int R;
    int G;
    int B;
    public:
    Color();
    Color(int r,int g,int b);
    ~Color();
    Color& operator=(Color& obj);
    Color& operator!();
    friend std::istream& operator>>(std::istream& ulaz,Color& obj);
    friend std::ostream& operator<<(std::ostream& izlaz,Color& obj);
    
};