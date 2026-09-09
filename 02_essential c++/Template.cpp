#include<iostream>
using namespace std;

template<class T> class Rectangle{
    private:
        T length;
        T width;
    public:
        Rectangle(T length, T width){
            this->length = length;
            this->width = width;
        }
        T getArea(){
            return length*width;
        }
        T getPerimeter(){
            return 2*(length+width);
        }

    ~Rectangle(){
 
    }
};


int main(int argc, char const *argv[])
{


    Rectangle<long double> r1(10, 22.422356);
    Rectangle<int> r2(2, 224);

    cout<<r1.getArea()<<endl;
    cout<<r2.getArea()<<endl;


    return 0;
}
