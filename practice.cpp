#include<iostream>

using namespace std;

class complex{
    private:
        int real;
        int img;

    public:
        void getdata();
        void displaydata();
        void addcomplex(complex c2);
};

void complex :: getdata(){
    cout<<"Enter real and imaginary number "<<endl;
    cin>>real>>img;
}

void complex :: displaydata(){
    cout<<"After addition \n"<<endl;
    cout<<real<<" + "<<img<<"i"<<endl;
}

void complex :: addcomplex(complex c2){
    real = real + real;
    img = img + img;
}

int main(){
    complex c1,c2;
    
    c1.getdata();
    c2.getdata();
    c2.addcomplex(c1);
    c2.displaydata();

    return 0;

}