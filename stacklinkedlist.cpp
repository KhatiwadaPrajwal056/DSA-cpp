#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
class stack{
    public:
        node* top;
        node* newnode;
        int item;
        stack(){
            top=NULL;
        }
        void push(){
            // node *newnode;
            // newnode =(node*)malloc(sizeof(node));
            node* newnode = new node;
            if(newnode==NULL){
                cout<<"Memory full";

            }
            else{
                cout<<"Enter data to push :";
                cin>>item;
                newnode->data=item;
                newnode->next=top;
                top=newnode;
            }


        }
        void pop(){
            node* temp;
            temp=top;
            top=top->next;
            if(temp==NULL){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Item popped is:"<<temp->data;
                delete temp;  // or free(temp);
            }
            

        }
        void display(){
            node* ptr;
            ptr=top;
            cout<<endl<<"list is: "<<endl;
            while(ptr!=NULL){
                cout<<ptr->data<<endl;
                ptr=ptr->next;
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