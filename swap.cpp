#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp;

    temp=a;
    a=b;
    b=temp;
};

int main(){
    int a,b;

    cout<<"\n\tEnter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"\n\t Before swapping \n \t The value of A = "<<a<<"\n\tThe value of B ="<<b<<endl;
    swap(a,b);

    cout<<"\tAfter swapping \n \t The value of A = "<<a<<"\n\t The value of B = "<<b<<endl;

    return 4;
}