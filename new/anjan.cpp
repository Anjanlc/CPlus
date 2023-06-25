#include<iostream>

using namespace std;

class shape{
    public:
        virtual void calculate(){
            cout<<"Enter the area of shape"<<endl;

        }

        virtual ~shape(){
            cout<<"Shape Destructor call"<<endl;
        }
};

class rectangle : public shape{
    public :
        int length, breadth,area;

    void calculate (){
        cout<<"Enter the length of rectangle "<<endl;
        cin>>length;
        cout<<"Enter the breadth of rectangle "<<endl;
        cin>>breadth;

        area=length*breadth;
        cout<<"The area of rectangle is "<<area<<" ."<<endl;



    }

    virtual ~rectangle(){
        cout<<"Rectangle destructor function call"<<endl;

    }

};

class square : public shape{
    public:
        int ln,area;

        void calculate(){
            cout<<"Enter the side of square "<<endl;
            cin>>ln;

            area=ln*ln;

            cout<<"The area of square is "<<area<<" ."<<endl;

        }

        virtual ~square(){
            cout<<"Square destructor called"<<endl;
        }

};

int main(){
    shape* S;
    rectangle rn;
    square s;
    S=&rn;
    S -> calculate();

    S=&s;
    S->calculate();

    return 1;
}