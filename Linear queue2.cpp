//Head fixed and tail varying
#include<iostream>
#define size 3
using namespace std;
class queue{
    int front, rear, q[size];
    public:
        queue(){
            front=0;
            rear=-1;
        }
        void enqueue(){
            if(rear==size-1){
                cout<<"Queue is Full "<<endl;
            }
            else{
                rear++;
                cout<<"Enter the data to enueue:";
                cin>>q[rear];
            }
        }
        void dequeue()
        {
            if(rear==-1){
                cout<<"Queue is empty"<<endl;


            }
            else{
                cout<<"THe data dequeued is "<<q[front]<<endl;
                for(int i=0;i<rear;i++){
                    q[i]=q[i+1];
                }   
                rear--;
                
            }

        }
        void display(){
            if(front >rear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"The data in the queue is "<<endl;
                for(int i=front;i<=rear;i++){
                    cout<<q[i]<<endl;
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