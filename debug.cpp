#include<iostream>
#include<string.h>
using namespace std;
class person{
       protected:
       char name[20];
       char add[20];
       int age;
         public:
         person(char *a,char *b,int c)
         {
             strcpy(name,a);
             strcpy(add,b);
             age=c;
         }
         void displayp()
         {
             cout<<"enter the name:"<<name<<endl;
             cout<<"enter the address:"<<add<<endl;
             cout<<"enter the age:"<<age<<endl;
         }
};

class student:public person{
      private:
      int sem;
      int roll;
      public:
      student( char *a,char *b,int c,int d,int e):person(a,b,c)
      {
           sem=d;
           roll=e;
      }
      void displays()
      {
          cout<<"the sem is:"<<sem<<endl;
          cout<<"the roll is::"<<roll<<endl;
      }
};
class teacher:public person{
       private:
       char dep[20];
       char qua[20];
       public:
       teacher(char *a,char *b,int c,char *f,char *g):person(a,b,c)
       {
           strcpy(dep,f);
           strcpy(qua,g);
       }
       void display()
       {
           cout<<"the dep is:"<<dep<<endl;
           cout<<"the qua is:"<<qua<<endl;
       }
};
int main(){
          student S("raj","ktm",24,2,3);
      teacher T("nishan","gorkha",23,"elx","bachlor");
      
   
      T.displayp();
      T.display();
      S.displayp();
      S.displays();
      return 0;
       
}