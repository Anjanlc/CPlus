#include<iostream>
 
using namespace std;

class demo{
    private:
        int a, b,c;

    public:
        void getdata();
        void displaydata();

        void adddata();
};

void demo::getdata(){
    cout<<"Enter any  number to add"<< endl;
    cin>>a>>b;
}

void demo :: displaydata(){
    cout<<"The sum of two number is "<<c<<endl;
}

void demo::adddata(){
    c=a+b;
}

int main(){
    demo d1,d2,d3;

    d1.getdata();
    d2.getdata();
    d3.getdata();
    d1.adddata();
    d2.adddata();
    d3.adddata();
    d1.displaydata();
    d2.displaydata();
    d3.displaydata();

    return 1;
}
