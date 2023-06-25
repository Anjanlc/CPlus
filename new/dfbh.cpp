#include<iostream>
#include<string.h>
using namespace std;
class tring{
    private:
        char str[20];
    public:
        tring(){
            strcpy (str,"");
        }
        tring (char *a){
            strcpy(str,a);
        }
    void display(){
        cout<<"Name :"<<str<<endl;
    }
    friend tring operator + (tring A, tring B);
};
tring operator + (tring A, tring B){
        tring c;
    strcpy();
    return (c);
}
int main()
{
    tring s1 ("Ram");
    tring s2 ("Thapa");
    tring s3;
    s1.display();
    s2.display();
    s3 = s1 + s2;
    s3.display();
    return 0;
}