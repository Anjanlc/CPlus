#include<iostream>

using namespace std;

class demo2;
class demo1{
    private:
        int number;
    public:
        void getdata(){
            cin>>number;
        }
        void displaydata(){
            cout<<"\n\t\tThe value of demo 1 is "<<number<<endl;
        }

    friend void comparedata(demo1 d1 , demo2 d2);
};

class demo2{
    private:
        int num;

    public:
        void getdata(){
            cin>>num;
        }

        void displaydata(){
            cout<<"\n\t\t\t\tThe value of demo 2 is "<<num<<endl;

        }

    friend void comparedata(demo1 d1, demo2 d2);
};

void comparedata(demo1 d1, demo2 d2){
    if(d1.number > d2.num){
        cout<<"\n\n\t\t\t\t\t\tThe value of demo 1 is greater:)"<<endl;
    }
    else if(d1.number < d2.num){
        cout<<"\n\n\t\t\t\t\t\tThe value of demo 2 is greater :)"<<endl;

    }
    else{
        cout<<"\n\t\t\t\t\t\tBoth are equal:)"<<endl;
    }
}

int main(){
    demo1 d1;
    demo2 d2;

    cout<<"\n\tEnter the value for demo 1"<<endl;
    d1.getdata();
    d1.displaydata();

    cout<<"\n\t\t\tEnter the value for demo 2"<<endl;

    d2.getdata();
    d2.displaydata();

    cout<<"\n\t\t\t\t\tNow comparing two of the data  "<<endl;

    comparedata(d1, d2);

    cout<<"\n\n\t\t\t\t\t\t\t Bye Bye see you again :) "<<endl;
    return 0;



}