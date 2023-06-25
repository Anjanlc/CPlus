#include<iostream>
#define SIZE 100

using namespace std;

class Stack{
    int stack[SIZE];
    int top;

    public:
        void push(int x);
        int pop();
        int peek();
        bool isempty();
        void display();

};

void Stack::push(int x){
    if(top== SIZE-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    stack[top]=x;
}

int Stack::pop(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    top --;
    return stack[top+1];
}

int Stack::peek(){
    if(top==-1){
        cout<<"No element found on stack"<<endl;
        return 0;
    }
    return stack[top];
}

bool Stack::isempty(){
    return (top == -1);
}

void Stack::display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"stack elements are";
    for(int i=0; i<=top; i++){
        cout<<stack[i]<<" ";
        cout<<endl;
    }
}

int main(){
    Stack s;

    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"Peeked element is "<<s.peek();
    s.display();
    s.pop();
    s.display();
}