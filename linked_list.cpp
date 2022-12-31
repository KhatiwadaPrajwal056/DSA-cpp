// 4 4 bytes for both data and address
// worst case o(n)
#include<iostream>
using namespace std;
class linked{
    public:
        int data;     //data in the node
        linked* next;
        linked* start;   //head pointer 
        linked* ptr;
        
        void insertion(){
            int toinsert;
            int x;
            cout<<endl<<"1. At the beginning"<<endl;
            cout<<"2. At the Middle"<<endl;
            cout<<"3. At the End"<<endl;
            cout<<"Enter where you want to insert: ";
            cin>>toinsert;
            linked* newnode = new linked;
            switch(toinsert){
                case 1:{
                        //BEGINNING
                            cout<<"Enter data to insert at the beginning:";
                            cin>>x;
                            //linked* newnode = new linked;
                            newnode->data=x;
                            newnode->next=start;
                            start=newnode;
                            break;
                        }
                case 2:{
                        //MIDDLE
                            int item;
                            //linked* newnode = new linked;
                            ptr=start;
                            cout<<"After which item? ";
                            cin>>item;
                            cout<<"Enter the data to insert at the middle :";
                            cin>>x;
                            newnode->data=x;
                            while(ptr->data!=item){
                                    ptr=ptr->next;
                            }
                            newnode->next=ptr->next;
                            ptr->next=newnode;  
                            break;
                        }
                case 3:{
                        //END
                            //linked* newnode = new linked;
                            cout<<"Enter the data to insert at the end:";
                            cin>>x;
                            newnode->data=x;
                            ptr=start;                  //for empty condition
                            if (start==NULL){
                                newnode->next=start;
                                start=newnode;
                
                            }
                            else{
                                while(ptr->next!=NULL){
                                    ptr=ptr->next;
                                }
                                ptr->next=newnode;
                                newnode->next=NULL;
                            }
                            break;
                        }
                default:
                        cout<<"Enter valid option"<<endl;
                        break;
            }
        }
    
       void deletion(){
            ptr=start;
            linked* temp;
            if(start==NULL){
                cout<<"There's no data to delete "<<endl;

            }
            else{
                int todel;
                cout<<endl<<"1. At the Meginning"<<endl;
                cout<<"2. At the End"<<endl;
                cout<<"3. At the Middle"<<endl;
                cout<<"Enter where you want to Delete: ";
                cin>>todel;
                switch(todel){
                    case 1:{
                        //Beg
                        //start=start->next; or below one , for deleting from memory too
                        temp =start;
                        start=start->next;
                        delete temp;
                        break;
                    }
                    case 2:{
                        //End
                        while(ptr->next!=NULL){
                            temp=ptr;
                            ptr=ptr->next ; 
                        }
                        temp->next=NULL;
                        delete ptr;
                        break;

                    }
                    case 3:{
                        //Middle

                        int item;
                        cout<<"Which item to delete: ";
                        cin>>item;
                        if(ptr->data==item){  // to check whether the choosed item is in the beginning or not
                            temp =start;
                            start=start->next;
                            delete temp;

                        }
                        else{
                            while(ptr->data!=item){
                                temp=ptr;
                                ptr=ptr->next;
                            }
                            temp->next=ptr->next;
                            delete ptr;

                                                    
                        } 
                        break;
                    }
                        
                    default:
                        cout<<"Enter a valid option: "<<endl;
                        break;
                }
            }
       }
        void display(){
            ptr=start;
            cout<<endl<<"list is: "<<endl;
            while(ptr!=NULL){
                cout<<ptr->data<<endl;
                ptr=ptr->next;
            }
        }
};
int main()
{
    linked p;
    int n,x;
    p.start=NULL; //empty list
    bool over=false;
    while(over!=true){
        cout<<"1.Insertion"<<endl;
        cout<<"2.Deletion"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter the option: ";
        cin>>x;
        switch(x){
            case 1:{
                p.insertion();  // can be done using passing reference and dereferencing in the the insert func
                p.display();
                break;
            }
            case 2:{
                p.deletion();
                p.display();
                break;
            }
            case 3:
                over=true;
                break;
            default:
                cout<<"Enter a valid option "<<endl;
        }

    }
    
    return 0 ;
}