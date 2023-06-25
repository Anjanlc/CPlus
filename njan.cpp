#include<iostream>

using namespace std;

class demo{
    private:
        int a,b;
    public:
        void getdata();
        void displaydata();
        void swap();

};

void demo :: getdata(){
    cout<<"Enter the value of A and B"<<endl;
    cin>>a>>b;

}

void demo:: displaydata(){
    cout<<" \n\tAfter swapping\n\tThe value of A="<<a<<" \n\tThe value of B="<<b<<endl;

}

void demo::swap(){
    int temp;

    temp=a;
    a=b;
    b=temp;
}

int main(){
    demo d1;

    d1.getdata();
    d1.swap();
    d1.displaydata();

    return 1;
}
