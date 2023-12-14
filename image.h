#include <iostream>
template <class Pixel>
class Image{
    private:
    int height;
    int width;
    Pixel** Picture;
    public:
    Image()
    :height(2),width(2)
    {
        setPicture();
    }
    Image(int h,int w)
    :height(h),width(w)
    {
        setPicture();
    }
    ~Image()
    {
        for(int i=0;i<height;i++)
        {
            delete[] Picture[i];
        }
        delete[] Picture;
    }
    void setPicture()
    {
        if(height>0 && width>0)
        {
            Picture= new Pixel*[height];
            for(int i=0;i<height;i++)
            {
                Picture=new Pixel[width];
            }
            
        }
    }
   

};