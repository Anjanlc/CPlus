#include<iostream>
#include<math.h>

using namespace std;

class rectangle;
class polar{
    private:
        float rad;
        float ang;
    public:
        polar(){
            rad=0.0;
            ang=0.0;
        }
        polar(float a,float b){
            rad=a;
            ang=b;
        }

        void display(){
            cout<<"rad : "<<rad<<endl;
            cout<<"ang : "<<ang<<endl;
        }

        operator rectangle();
};
class rectangle{
    private:
        float xco;
        float yco;
    public:
        rectangle(){
            xco=0.0;
            yco=0.0;
        }
        rectangle(float c,float d){
            xco=c;
            yco=d;
        }

        void display(){
            cout<<"xco : "<<xco<<endl;
            cout<<"yco : "<<yco<<endl;
        }

        // operator rectangle();
};

polar :: operator rectangle(){
    float x,y;

    x = rad * cos(ang);
    y = rad * sin(ang);

    return rectangle(x,y);
}

int main(){
    rectangle r1;
    polar p1 (5.58,4.13);

    r1=p1;

    r1.display();
    p1.display();

    return 0;

}