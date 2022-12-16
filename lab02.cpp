//Bottom varying 
#include<iostream>
#define size 3
using namespace std;
class stack{
    int bot,s[size];
    public:
        stack(){
            bot=0;
        }
        void push(){
            if(bot==size){
                cout<<"Stack is full"<<endl;
            }
            else{
                for(int i=bot;i>0;i--){
                    s[i]=s[i-1];
                }
                cout<<"Enter data to push ";
                cin>>s[0];
                bot++;
            }
        }
        void pop(){
            if(bot==0){
                cout<<"Stack is empty "<<endl;

            }
            else{
                cout<<"Data poped from the stack is "<<s[0]<<endl;
                bot--;
                for(int i=0;i<bot;i++){
                    s[i]=s[i+1];
                }
            }
        }
        void display(){
            if(bot==0){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Data in the stack is: "<<endl;
                for(int i=bot-1;i>=0;i--){
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
