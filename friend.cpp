#include<iostream>


using namespace std;

class demo{
    private:
        string number ;

    public:
        void getdata();
        void displaydata();

    friend void stranger(demo);
};

void demo::getdata(){
     number = "kkk";
}

void demo ::displaydata(){
    cout<<"\nThe entered scentence is : "<<number<<endl;
}

void stranger (demo d1){
    cout<<"\nThe scentence in private is : "<<d1.number<<endl;
}

int main(){
    demo d1;

    d1.getdata();
    
    d1.displaydata();

    stranger(d1);

    return 34;


}
