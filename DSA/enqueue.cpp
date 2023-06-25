#include<iostream>

using namespace std;

class anjan{
    private:
    string name;

    public:
    void getdata();
    void putdata();
    void displaydata();

};

void anjan::getdata(){
    cout<<"What is your name?"<<endl;


}

void anjan ::putdata(){
    cin>>name;

}

void anjan::displaydata(){
    cout<<"Your name is "<<name<<"."<<endl;
}

int main(){
    anjan a;
    a.getdata();
    a.putdata();
    a.displaydata();

    return 0;
}