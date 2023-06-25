#include<iostream>
using namespace std;

#define max 5 

int i;

template <class T>

class stack {
    T stk [max];
    int top;

    public:
        stack(){
            top == -1;

        }

        void pushdata(){
            if (top == (max -1)){
                cout<<"Stack is full"<<endl;
            }
            else{
                top++;
                stk[top]=data;
            }
        }
};



// T x1 = 2- b*b + 4*a*c