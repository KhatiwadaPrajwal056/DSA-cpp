#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
class queue{
    public:
        node* top;
        node* newnode;
        int item;
        queue(){
            top=NULL;
        }
        void enqueue(){
            // node *newnode;
            // newnode =(node*)malloc(sizeof(node));
            node* newnode = new node;
            if(newnode==NULL){
                cout<<"Memory full";

            }
            else{
                if(top==NULL){
                    cout<<"Enter data to enqueue :";
                    cin>>item;
                    newnode->data=item;
                    newnode->next=top;
                    top=newnode;
                }
                else{
                    node *ptr;
                    ptr=top;
                    while(ptr->next!=NULL){
                        ptr=ptr->next;
                    }
                    cout<<"Enter data to enqueue :";
                    cin>>item;
                    newnode->data=item;
                    newnode->next=ptr->next;
                    ptr->next=newnode;
                }
            }
              


        }
        void dequeue(){
            node *temp;
            temp=top;
            if(temp==NULL){
                cout<<"queue is empty"<<endl;
            }
            else{
                top=top->next;
                cout<<"Item dequeued is:"<<temp->data<<endl;
                delete temp;  // or free(temp);
            }
            

        }
        void display(){
            node* ptr;
            ptr=top;
            if(ptr==NULL){
                cout<<"queue is empty"<<endl;
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
    queue p;
    int x;
    bool over=false;
    while(over!=true){
        cout<<"1. Enqueue the data "<<endl;
        cout<<"2. Dequeue the data "<<endl;
        cout<<"3. Display the data "<<endl;
        cout<<"4. exit"<<endl;
        cout<<"Enter the option: ";
        cin>>x;
            switch(x){
                case 1:
                    p.enqueue();
                    break;
                case 2:
                    p.dequeue();
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