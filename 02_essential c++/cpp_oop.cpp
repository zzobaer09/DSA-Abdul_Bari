#include<iostream>
using namespace std;

class Rectangle{
    private: double length;
    private: double width;
    public:
    Rectangle(double length,double width){
        this->length = length;
        this->width = width;
    }
    public: double getArea(){
        return length*width;
    }
    public: double getPerimeter(){
        return 2*(length+width);
    }

    ~Rectangle(){

    }
};


int main(int argc, char const *argv[])
{
    Rectangle r(3, 2);
    cout<<r.getArea()<<endl;
    cout<<r.getPerimeter()<<endl;
    

    return 0;
}
