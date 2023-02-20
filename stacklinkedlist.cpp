// Stack using linked list:
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class stack{
    public:
        Node* next,*newnode,*top;
        int item;  
        stack(){
            top=NULL;
        }
        void push(){ 
            // stack *newnode;
            // newnode =(stack*)malloc(sizeof(stack));
            newnode = new Node;
                cout<<"Enter data to push :";
                cin>>item;
                newnode->data=item;
                newnode->next=top;
                top=newnode;

        }
        void pop(){
            Node* temp;
            temp=top;
            if(temp==NULL){
                cout<<"Stack is empty"<<endl;
            }
            else{
                top=top->next;
                cout<<"Item popped is:"<<temp->data<<endl;
                delete temp;  // or free(temp);
            }
            

        }
        void display(){
            Node* ptr;
            ptr=top;
            if(ptr==NULL){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<endl<<"list is: "<<endl;
                while(ptr!=NULL){
                    cout<<ptr->data<<endl;
                    ptr=ptr->next;
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
        cout<<"Enter the option: ";
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