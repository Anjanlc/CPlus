#include <iostream>

int top = -1;

using namespace std;

class st{
    private:
        int len;
        char* stack;
        char* expression;

    public:
        st(int a){
            len = a;
            stack = new char[len];
            expression = new char[len];
        }

        void init(string s){
            for(int i = 0; i < len; i++){
                expression[i] = s[i];
            }

            for(int i = 0; i < len; i++){
                cout << expression[i] << endl;
            }
        }

        char out(int n){
            char ch = (char) stack[n];
            return ch;
        }

        void push(char value){
            if(top == len - 1){
                cout << "Stack Overflow " << endl;
            }else{
                top++;
                stack[top] = value; 
            }
        }

        void pop(){
            int item = stack[top];
            top--;
        }

        int IsOperand(char c){  
            if( c >= 'A' && c <= 'Z'){
                return 1;  
            }else if (c >= 'a' && c <= 'z'){  
                return 1;
            }else if(c >= '0' && c <= '9'){
                return 1;  
            }else{
                return 0;
            }
        }  

        int IsOperator(char c){  
            if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' ) { 
                return 1;   
            }else{  
                return 0;  
            }
        } 

        int precedence(char ch){  
            if(ch == '+' || ch == '-'){                  
                return 1; 
            }else if (ch == '*' || ch == '/'){ 
                return 2;  
            }else if(ch == '^' || ch == '$'){                                 
                return 3;
            }else{       
                return 0;
            } 
        } 

        int isequal(char ch){
            int p1 = precedence(stack[top]);  
            int p2 = precedence(ch);  
            if (p1 == p2){  
                if (stack[top] == '^'){ 
                    return 0;
                }else{
                    return 1;
                } 
            }else{
                return 0;
            }
        }

        ~st(){
            delete stack;
            delete expression;
        }
};

int main(){
    int len;
    string temp_exp, exp;
    string post;
    cout << "Enter an expression: " << endl;
    getline(cin, temp_exp);

    
    for(int i = 0; i < temp_exp.length(); i++){
        if(temp_exp[i] != ' '){
            exp += temp_exp[i];
        }
    }
    len = exp.length();

    st s(len);


    for(int i = 0; i < len; i++){
         if(s.IsOperand(exp[i])){
            post += exp[i];
         }else if(s.IsOperator(exp[i])){
            if(top == -1){
                s.push(exp[i]);
                continue;
            }

            if(s.precedence(exp[i]) > s.precedence(s.out(top))){
                s.push(exp[i]);
            }else if(s.isequal(exp[i])){
                post += s.out(top);
                s.pop();
                s.push(exp[i]);
            }else if(s.precedence(exp[i]) < s.precedence(s.out(top))){
                post += s.out(top);
                s.pop(); 
                if(s.isequal(exp[i])){
                    post += s.out(top);
                    s.pop();
                    s.push(exp[i]);
                }else{
                    s.push(exp[i]);
                }
            }else{
                s.push(exp[i]);
            }
         }else if(exp[i] == '('){
            s.push(exp[i]);
         }else if(exp[i] == ')'){
            while(s.out(top) != '('){
                post += s.out(top);
                s.pop();
            }
            if(s.out(top) == '('){
                s.pop();
            }
         }else{
            continue;
         }
    }

    while(top != -1){
        post += s.out(top);
        s.pop();
    }

    cout << post << endl;

    return 0;
}