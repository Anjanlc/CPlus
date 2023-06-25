#include<iostream>

using namespace std;
class Time{
int hour;
int minutes;
int seconds;
public:
Time();
Time(int h,int m,int s);
Time(Time &t);

friend void sum(Time t1, Time t2);

};
Time::Time(){
    hour=0;
    minutes=0;
    seconds=0;
}
Time::Time(int h,int m,int s){
    hour=h;
    minutes=m;
    seconds=s;
}
void sum(Time t1, Time t2){
    Time t4;
    
   t4.seconds=t1.seconds+t2.seconds;
   t4.minutes=t1.minutes+t2.minutes+t4.seconds/60;
   t4.hour=t1.hour+t2.hour+t4.minutes/60;
   t4.seconds=t4.seconds%60;
   t4.minutes=t4.minutes%60;
cout<<"hour:"<<t4.hour<<"minutes:"<<t4.minutes<<"seconds:"<<t4.seconds<<endl;
}
Time::Time(Time &t)
{
    hour=t.hour;
    minutes=t.minutes;
    seconds=t.seconds;
    cout<<"hour="<<hour<<"minutes="<<minutes<<"seconds="<<seconds<<endl;

}

int main()
{
   
    int h,m,s;
    
    cout<<"enter hour, nimnutes and seconds for 1st data:"<<endl;
    cin>>h>>m>>s;
    Time t1(h,m,s);
    cout<<"enter hour, minutes,seconds for second data:"<<endl;
    cin>>h>>m>>s;
    Time t2(h,m,s);
    sum(t1,t2);
    Time t3=t2;

  return 0;


}