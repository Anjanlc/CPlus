#include<iostream>

using namespace std;

template < class t>

class demo{
    t y;
    t z;

    public:
        demo(t a, t b){
            y = a;
            z=b;
        }

        void display(){
            cout<<"Sum = "<<(y+z)<<endl;
        }
};

int main(){
    

    demo <int> d1(2,3);

    cout<<"sum of integer "<<endl;
    d1.display();

    return 2;
    


}
