// Top varying method of the stack
#include<iostream>
#define size 3
using namespace std;
class stack{
    //private:
        int top,s[size];
    
    public:
        stack(){
            top=-1;
        }
        void push(){
            if (top==size-1){
                cout<<"Stack is full "<<endl;
            }
            else{
                top++;
                cout<<"Enter the data(s) to push in the stack: ";
                cin>>s[top];
            }
        }
        void pop(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Data popped from the stack is "<<s[top]<<endl;
                top--;
            }
        }
        void display(){
            if(top==-1){
                cout<<"Stack is empty "<<endl;
            }
            else{
                cout<<"Data in the stack is "<<endl;
                for(int i=0;i<=top;i++){
                    cout<<s[i]<<endl;
                }
            }

        }
    
};
int main()
{
    stack p;
    int x;
    bool over=false;
    while(over!=true){
        cout<<"1. Push the data "<<endl;
        cout<<"2. Pop the data "<<endl;
        cout<<"3. Display the data "<<endl;
        cout<<"4. exit"<<endl;
        cout<<"Enter the option: "<<endl;
        cin>>x;
            switch(x){
                case 1:
                    p.push();
                    break;
                case 2:
                    p.pop();
                    break;
                case 3:
                    p.display();
                    break;
                case 4:
                    over=true;
                    break;
                default:
                    cout<<"Please enter the correct option ";      
            }
    }
    return 0 ;
}