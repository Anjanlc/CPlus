#include<iostream>

using namespace std;

class person{
    protected:
        string name;
        int code;

    public:
        // person(){
        //     name = "";
        //     code=0;
        // }

        person(string np, int cp){
            name=np;
            code=cp;
        }
        void display(){
            cout<<""<<name<<"\n"<<code<<endl;
        }
};

class account : virtual public person{

    protected:
        int salary;

    public:
        // account(){
        //     salary=0.0;
        // }

        account (string np, int cp, int ps): person(np,cp){
            salary=ps;
        }

        void display (){
            cout<<""<<salary<<endl;
        }

};

class admin : virtual public person{
    protected:
        int year;

    public:
        // admin(){
        //     year = 0;

        // }

        admin(string np, int cp,int ya):person(np,cp){
            year=ya;
        }

        void display(){
            cout<<""<<year<<endl;
        }
};

class record : public account , public admin{
    private:
        int recordr;

    public:
        // record(){
        //     recordr = 0;
        // }

        record(string np,int cp,int ps,int ya,int rr):admin(np,cp,ya),account(np,cp,ps),person(np,cp)
        
        {
            recordr=rr;
        }

        void display(){
            cout<<""<<recordr<<endl;
        }
};

int main(){
    record r ("Anjan",5,25000,2022,54);

    r.person::display();
    r.account::display();
    r.admin::display();
    r.record::display();

    return 0;

    

}











/* friend void operator > (class_name object1, class_name object2){

    if (class_name object1 > class_name object2){
        cout<<code;
    }

    else if (code);

    else (code)


    if (strcmp (object1.datatype , object2. data type ))
    


*/
