#include<iostream>

using namespace std;

class demo{
    protected:
        int x;

    public:
        void get(){
            cout<<"enter"<<endl;
            cin>>x;
        }
        void display(){
            cout<<x<<endl;
        }
};

class dem: public demo{
    public:
        demo d;
        void getdata(){
            d.get();
        }
        void displayd(){
            d.display();
        }
};

int main(){
    // demo d;
    dem d1;

    d1.getdata();

    d1.displayd();

    return 0;



}