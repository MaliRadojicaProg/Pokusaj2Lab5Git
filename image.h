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
                Picture[i]=new Pixel[width];
            }
        }
    }
    friend bool operator!(Image& obj)
    {
        for(int i=0;i<obj.height;i++)
        {
            for(int j=0;j<obj.width;j++)
            {
                if(obj.Picture[i][j]==1)
                {
                    obj.Picture[i][j]=0;
                }
                else{
                    obj.Picture[i][j]==1;
                }
            }
        }
        return 0;
    }
    void picLoad()
    {
        std::cout<<"Ucitati templejtSliku\n";
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
            {
                std::cin>>Picture[i][j];
            }
        }
    }
    void picShow()
    {
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
            {
                std::cout<<Picture[i][j]<<" ";
            }
            std::cout<<"\n";
        }
    }
};