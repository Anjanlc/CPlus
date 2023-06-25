#include<iostream>
#include<string>

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

    cout<<"\n\tEnter any two number to swap between them"<<endl;
    cin>>a>>b;


}

void demo::displaydata(){
    cout<<"\n\tA ="<<a<<"\n \t B =" <<b<<endl;


}

void demo :: swap(){
    int temp;

    temp=a;
    a=b;
    b=temp;
    
}

int main(){
    demo d1;

    // cout<<"Before swapping the value of A is "<<a<<" and the value of B is "<<b<<endl;

    d1.getdata();
    d1.swap();
    cout<<"After swapping "<<endl;
    d1.displaydata();
    

    return 1;
}