#include<iostream>

using namespace std;

class demo2;
class demo1{
    private:
        int number;

    public:
        void getdata();
        void displaydata();


    friend void compare(demo1 d1, demo2 d2);
};

void demo1::getdata(){
    cout<<"Enter any number to compare"<<endl;
    cin>>number;
}

void demo1 ::displaydata(){
    cout<<"The entered value for demo 1 is "<<number<<endl;

}

class demo2{
    private:
        int num;

    public:
        void getdata();
        void displaydata();

    friend void compare(demo1 d1, demo2 d2);
};

void demo2::getdata(){
    cout<<"Enter the value for demo 2"<<endl;
    cin>>num;

}

void demo2::displaydata(){
    cout<<"The entered value for demo 2 is "<<num<<endl;
}

void compare(demo1 d1,demo2 d2){
    if(d1.number > d2.num){
        cout<<"demo 1 is greater than demo 2"<<endl;
    }
    else if (d1.number < d2.num){
        cout<<"demo 2 is greater than demo 1"<<endl;
    }

    else{
        cout<<"Both are equal"<<endl;
    }
}

int main(){
    demo1 d1;
    demo2 d2;

    d1.getdata();
    d1.displaydata();
    d2.getdata();
    d2.displaydata();

    compare(d1,d2);

    return 3;

}
