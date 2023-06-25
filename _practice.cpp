#include<iostream>
using namespace std;
class Two;
class Three;
class one
{
     private:
     int a;
     public:
     void input()
     {
         cout<<"enter a:"<<endl;
         cin>>a;
     }
        void display()
        {
            cout<<"the a is:"<<a<<endl;
        }
        
    friend void highest (one O, Two T, Three H , int d);       
}; 

class Two{
    private:
        int b;
    public:
        void input(){
            cout<<"Enter b :"<<endl;
            cin>>b;
        }
        void output(){
            cout<<"b is "<<b<<endl;
        }

        friend void highest(one O, Two T, Three H, int d);
};

class Three
{
    private:
        int c;

    public:
        void input(){
            cout<<"Enter c:"<<endl;
            cin>>c;
        }
    void display(){
        cout<<"c is :"<<c<<endl;
    }
    friend void highest(one O, Two T, Three H, int d);
};

void highest(one O, Two T, Three H, int d)
{
    if (O.a > T.b && O.a> H.c && O.a>d)
    {
        cout<<"A is greater"<<endl;
    }
    else if (T.b > H.c && T.b > d && T.b >O.a){
        cout <<"B is greater"<<endl;
    }
    else if (H.c >d && H.c > O.a && H.c > T.b ){
        cout <<"C is greater"<<endl;
    }
    else{
        cout <<"D is greater"<<endl;
    }
}

int main(){
    one O;
    Two T;
    Three H;
    O.input();
    O.display();
    T.input();
    T.output();
    H.input();
    H.display();

    int d;
    cout<<"ENter d "<<endl;
    cin>>d;

    highest(O,T,H,d);

    return 1;

}




