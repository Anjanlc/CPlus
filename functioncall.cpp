// function call within a function ..
// to check the weight of a person.

#include<iostream>
using namespace std;

class Demo{

    private:
        int weight;

    public:
        void getweight();
        void displayweight();
        void checkweight();

};

void Demo :: getweight(){

    cout<<"\n\n\tEnter the weight of a person"<<endl;
    cin>>weight;

}

void Demo :: checkweight(){
    
    if(weight<=60){
        cout<<"great! you body is perfect :) "<<endl;
    }
    else{
        cout<<"Oh shit! you are too fat and chubby."<<endl;

    }
}

// void Demo::displayweight(){

// }

int main(){
    Demo d1;

    d1.getweight();
    d1.checkweight();

    return 1;

}