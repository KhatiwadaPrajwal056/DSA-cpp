/*
You are given a task to develop a system to read at least 100 integers and continue till the
user enters No. Your system must have the capacity to calculate the sum and average of those 
numbers which are exactly divisible by 9 but not 6 and lies between 1 to 100 and display a
suitable message if no such number is read. Write a code to develop such system. 
#include<iostream>
using namespace std;
int main()
{
    return 0 ;
}
*/

// Queue using linked list:
#include<iostream>
using namespace std;

class queue{
    public:
        int data;
        queue *next;
        queue *rear;
        queue *front;
        queue *newnode;
        int item;
        queue(){
            rear=NULL;
            front=NULL;
        }
        void enqueue(){
            // queue *newnode;
            // newnode =(queue*)malloc(sizeof(queue));
            queue *newnode = new queue;
            if(newnode==NULL){
                cout<<"Memory full";

            }
            else{
                if(rear==NULL){
                    cout<<"Enter data to enqueue :";
                    cin>>item;
                    newnode->data=item;
                    newnode->next=rear;
                    rear=newnode;
                    front=newnode;
                }
                else{
                    cout<<"Enter data to enqueue :";
                    cin>>item;
                    newnode->data=item;
                    newnode->next=rear->next;
                    rear->next=newnode;
                    rear=newnode;
                }
            }
        }
        void dequeue(){
            queue *temp;
            if(rear==NULL){
                cout<<"queue is empty"<<endl;
            }
            else{
                temp=front;
                front=front->next;
                cout<<"Item dequeued is:"<<temp->data<<endl;
                delete temp;  // or free(temp);
            }
            

        }
        void display(){
            queue *ptr;
            ptr=front;
            if(rear==NULL){
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