/*
//both varying head and tail
#include<iostream>
#define size 3
using namespace std;
class queue{
    int front,rear,q[size];
    public:
        queue(){
            front=0;
            rear=-1;
        }
        void enqueue(){
            if (rear==size-1){
                cout<<"Queue is full "<<endl;
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
            else{
                rear++;
                cout<<"Enter the data to enqueue: ";
                cin>>q[rear];
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
        }
        void dequeue(){
            if(front>rear){
                cout<<"Queue is empty "<<endl;
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            
            }
            else{
                cout<<"Data dequeued is: "<<q[front]<<endl;
                front++;
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
        }
        void display(){
            if(front>rear){
                cout<<"Queue is empty "<<endl;
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
            else{
                cout<<"Data in the queue:"<<endl;
                for(int i=front;i<size;i++){
                    cout<<q[i]<<endl;
                }
                  cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
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
        cout<<"2. dequeue the data "<<endl;
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


*/


// Head fixed and tail varying
#include<iostream>
#define size 3
using namespace std;
class queue{
    int front,rear,q[size];
    public:
        queue(){
            front=0;
            rear=-1;
        }
        void enqueue(){
            if (rear==size-1){
                cout<<"Queue is full "<<endl;
                cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
            else{
                rear++;
                cout<<"Enter the data to enqueue: ";
                cin>>q[rear];
                cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }
        }

        void dequeue(){
            if(rear==-1){
                cout<<"Queue is empty "<<endl;
            
            }
            else{
                cout<<"Data dequeued is "<<q[front]<<endl;
                for(int i=0;i<rear;i++){
                    q[i]=q[i+1];
                }
                rear--;
                cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;
            }


        }
        void display(){
            if(rear==-1){
                cout<<"Queue is empty"<<endl;
                cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;

            }
            else{
                cout<<"Data in the queue "<<endl;
                for(int i=0;i<=rear;i++){
                    cout<<q[i]<<endl;
                }
                cout<<"Front="<<front<<endl;
                cout<<"Rear="<<rear<<endl;

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
        cout<<"2. dequeue the data "<<endl;
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