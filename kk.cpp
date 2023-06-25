#include<iostream>

using namespace std;

class demo
{
    private:
        int number;
        static int count;
    public:
        void getdata(int n);
        void displaydata();

};

int demo :: count;

void demo ::getdata(int n){
    number = n;
    count ++;
}

void demo :: displaydata(){
    cout<<"number ="<<number<<endl;
    cout<<"static variable count ="<<count<<endl;

}

int main(){
    demo d1;
    demo d2;

    d1.getdata(1);
    d2.getdata(4);

    d1.displaydata();
    d2.displaydata();


    return 0;

}