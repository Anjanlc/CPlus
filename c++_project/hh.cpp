#include<iostream>

using namespace std;

void swap (int &a, int &b){
    int temp;

    temp= a;
    a=b;
    b=temp;
}


int main(){
    int x,y;

    cout<<"ENter the value of x and y"<<endl;
    cin>>x>>y;

    cout<<"before swapping"<<endl;

    cout<<"X = "<<x<<"\n Y = "<<y<<endl;

    cout <<"After swapping "<<endl;

    swap(x,y);

    cout<<"X = "<<x<<"\n Y ="<<y<<endl;


    return 1;


}



