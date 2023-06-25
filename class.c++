#include<iostream>
using namespace std;
class name
{
    private:
    int a;
    int b;
    public:
    void input()
    {
        cout<<"enter the a:"<<endl;
        cin>>a;
        cout<<"enter the b:"<<endl;
        cin>>b; 
    }

    void display()
    {
        cout<<"the a is:"<<a<<endl;
        cout<<"the b is:"<<b<<endl;
}
};

int main()
{
        name S;
        S.input();
     

        S.display();
    
        return 0;
}
