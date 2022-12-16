#include<iostream>
#define size 5
using namespace std;
class queue{
    int front,rear,q[size];
    public:
        queue(){
            front=-1;;
            rear=-1;
        }
        void enqueue(){
            if(rear==-1){
                rear=0;
                front=0;
                cout<<"Enter the data:";
                cin>>q[rear];

            }
            else{
                if(front== (rear+1)%size){
                    cout<<"Queue is full"<<endl;
                }
                else{
                    rear=(rear+1)%size;
                    cout<<"Enter the data:";
                    cin>>q[rear];
                }
            }
            
        }
        void dequeue(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Dequeued data is "<<q[front]<<endl;
                if(front==rear){
                    front=-1;
                    rear=-1;
                }
                else{
                    front=(front+1)%size;
                }
            }
        }
        void display(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Data in the queue "<<endl;
                int count=(rear+size-front)%size;
                    for(int i=0;i<=count;i++){
                        int index=(front+i)%size;
                        cout<<q[index]<<endl;    
                    }
            }
        }
};
int main()
{
    queue p;
    int x;
    bool over = false;
    while(over!=true){
        cout<<"1. EnQueue"<<endl;
        cout<<"2. DeQueue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter the option:";
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
                cout<<"Please enter the correct option "<<endl;
        }
    }
    return 0 ;
}