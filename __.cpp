#include<iostream>
#include<string.h>

using namespace std;

class check{
    private:
        int number;
    public:
        void getdata();
        void displaydata();
        void checknum();

};

void check::getdata(){
    cout<<"Enter the number to check whether it is binary or not"<<endl;
    cin>>number;
}

void check::displaydata(){
    cout<<"The number is "<<number<<endl;

}

void check:: checknum(){

    int len = strlen(number);

    int is_binary = 1;
    int i;

    for(i=0;i<len;i++){
        if (number[i]!='0'&&number[i]!='1'){
            cout<<"The entered number is not binary"<<endl;
        }
        else{
            cout<<"The entered number is binary number"<<endl;
        }        
    }


}

int main(){
    check c1;

    c1.getdata();
    c1.displaydata();
    c1.checknum();

    return 1;
}