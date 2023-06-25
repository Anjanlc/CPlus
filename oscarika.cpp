#include<iostream>
#include<string.h>
#include<conio.h>
// #include<math.h>


using namespace std;

class Aastik
{
    private:
        int a,b,c,d,e;
    public:
        void getdata();
        void displaydata();

};

void Aastik :: getdata(){

    cout<<"\n\n\tEnter any two number to add"<<endl;
    cin>>a>>b;
    cout<<"\n\n\tENter any two number to subtract"<<endl;
    cin>>d>>e;
}

void Aastik :: displaydata(){

    c=a+b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<c<<endl;

    int sub = d-e; 

    cout<<"The difference of given two number is "<<sub<<endl;

}

int main(){
    Aastik o1;

    o1.getdata();
    // o2.getdata();
    o1.displaydata();
    // o2.displaydata();
    getch();
    return 1;
}