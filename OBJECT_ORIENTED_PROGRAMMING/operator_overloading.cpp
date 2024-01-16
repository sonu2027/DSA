#include<iostream>
using namespace std;

class complex{
    int real, img;

    public:
    complex(int real, int img){
        this->real=real;
        this->img=img;
    }

    complex(){

    }

    void display(){
        cout<<"real:"<<real<<" img:"<<img<<"i"<<endl;
    }

    complex operator+(complex &c){
        complex ans;
        ans.real=real+c.real; // Within the class private member can be accessed
        ans.img=img+c.img;    // Within the class private member can be accessed
        return ans;
    }
};

int main(){
    complex c1(2,5);
    complex c2(3,4);
    complex c3=c1+c2; // c1.operator+(c2)
    c3.display();
    return 0;
}