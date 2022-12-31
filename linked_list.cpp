// 4 4 bytes for both data and address
// worst case o(n)
#include<iostream>
using namespace std;
class linked{
    public:
        int data;     //data in the node
        linked* next;
        linked* start;   //head pointer 
        void insert(int x){
            linked* newnode = new linked;
            newnode->data=x;
            newnode->next=start;
            start=newnode;
        }
        void display(){
            linked* ptr=start;
            cout<<"list is: ";
            while(ptr!=NULL){
                cout<<ptr->data<<endl;
                ptr=ptr->next;
            }

        }
};
int main()
{
    linked p;
    int x,n;
    p.start=NULL; //empty list
    cout<<"How many data: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<endl<<"Enter the number: ";
        cin>>x;
        p.insert(x);
        p.display();
    }
    

    return 0 ;
}