#include <iostream>
template <class Pixel>
class Image{
    private:
        int height;
        int width;
         Pixel** Picture;
    public:
        Image();
        Image(int h,int w);
        ~Image();
        void setPicture();
        void picLoad();
        void picShow();
        void invert();
        // void check();
       Image& operator+(Image& obj);
   
};
// template <class Pixel>
// void Image<Pixel>::check()
// {
//     for(int i=0;i<height;i++)
//     {
//         for(int j=0;j<width;j++)
//         {
//             if(Picture[i][j]>1)
//             {
//                 Picture[i][j]!=Picture[i][j];
//             }
//         }
//     }
// }
template <class Pixel>
 Image<Pixel>& Image<Pixel>::operator+(Image& obj)
{
if(height==obj.height && width==obj.width)
{
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            Picture[i][j]=Picture[i][j]+obj.Picture[i][j];
        }
    }
    return *this;
}
else{
    throw std::invalid_argument("Dimenzije se ne poklapaju!\n");
}

}
template <class Pixel> 
Image<Pixel>::Image()
    :height(2),width(2)
    {
        setPicture();
    }
  
   template <class Pixel> 
   Image<Pixel>:: Image(int h,int w)
    :height(h),width(w)
    {
        setPicture();
    }

   template <class Pixel> 
   Image<Pixel>::~Image()
    {
        std::cout<<"Destruktor pozvan\n";
        for(int i=0;i<height;i++)
        {
            delete[] Picture[i];
        }
        delete[] Picture;
    }
    template <class Pixel>
    void Image<Pixel>::setPicture()
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
  
    template <class Pixel>
    void Image<Pixel>::picLoad()
    {
        std::cout<<"Unesite Sliku\n";
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
            {
                std::cin>>Picture[i][j];
                // if(Picture[i][j]>1)
                // {
                //     Picture[i][j]=!Picture[i][j];
                // }
            }
        }
    }
    template <class Pixel>
    void Image<Pixel>::picShow()
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
    
    template <class Pixel>
    void Image<Pixel>::invert()
    {
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
            {
                Picture[i][j]=!Picture[i][j];
            }
        }
    }

    

    



      // bool operator!(Image& obj)
    // {
    //     for(int i=0;i<obj.height;i++)
    //     {
    //         for(int j=0;j<obj.width;j++)
    //         {
    //             if(obj.Picture[i][j]==1)
    //             {
    //                 obj.Picture[i][j]=0;
    //             }
    //             else{
    //                 obj.Picture[i][j]==1;
    //             }
    //         }
    //     }
    //     return 0;
    // }