#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    void getdata();
    void putdata();
    complex addcomplex(complex c1, complex c2);
};

void complex::getdata()
{

    cout << "Enter the complex and imaginary number you want to add : " << endl;
    cin >> real >> img;
}

void complex ::putdata()
{

    cout << "After addition the sum of somplex number is:" << endl;
    cout << real << " + " << img << " i" << endl;
}

complex complex ::addcomplex(complex c1, complex c2)
{

    complex c3;

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    return c3;
}

int main()
{
    complex c1, c2, c3, c4;

    c1.getdata();
    c2.getdata();
    c4 = c3.addcomplex(c1, c2);
    c4.putdata();

    return 0;
}