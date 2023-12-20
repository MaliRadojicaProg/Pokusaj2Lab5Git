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
    void check();
    Color& operator=(Color& obj);
    Color& operator!();
    Color& operator+(Color& obj);
    friend std::istream& operator>>(std::istream& ulaz,Color& obj);
    friend std::ostream& operator<<(std::ostream& izlaz,Color& obj);
    
};