#include<iostream>

using namespace std;

class demo{
    private:
        int x;
        int y;
    public:
        void getdata();
        void displaydata();

        void transfer_variable (int &x, int &y);
};

void demo :: getdata(){

    cout<<"Enter the value of x and y "<<endl;
    cin>>x>>y;

}

void demo::displaydata(){
    cout<<"The value of x is "<<x<<endl;

    cout<<"The value of y is "<<y<<endl;
}

void demo::transfer_variable(int &x, int &y){

    
}