#include<iostream>

using namespace std;

class height{
    private:
        int a,b;
        int sum;
    public:
        void getdata();
        void displaydata();
        void adddata(height h2);

};

void height :: getdata(){

    cout<<"Enter the height of two houses: "<<endl;

    cin>>a>>b;

}

void height :: displaydata(){

    cout<<"The sum of two height are "<<sum<<endl;
}

void height :: adddata(height h2){
    
    sum = a+b;
    // return sum;
}

int main(){
    height h1,h2;
    // int sum ;

    // sum = adddata();

    h1.getdata();
    h1.adddata(h2);
    h1.displaydata();


    return 0;
} 
