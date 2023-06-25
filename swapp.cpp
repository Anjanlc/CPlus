#include<iostream>

using namespace std;

void Swapp(int &a, int &b){
    int temp;

    temp=b;
    b=a;
    a=temp;
}

int main(){
    int x,y;

    cout<<"enter "<<endl;
    cin>>x>>y;

    cout<<"a="<<x<<"b="<<y<<endl;

    Swapp(x,y);

    cout<<"\n\n\ta="<<x<<"\nb="<<y<<endl;

    return 0;



}