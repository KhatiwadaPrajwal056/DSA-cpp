#include<iostream>
using namespace std;
#define n 5
int l[n];
class list{
    int count,bcount;
    //int n;
    //int l[n];
    public:
        list(){
            count=0;
            bcount=0;
            
        }
        void search(){
            if (count==0){
                cout<<"List is empty"<<endl;
            }
            else{

                int item;
                cout<<"Enter the data to search: ";
                cin>>item;
                for(int i=0;i<n;i++){
                    if(l[i]==item){
                        cout<<"Item "<<item<<" Found"<<endl;
                        break;
                    }
    
                }
            }
        }
        void insertion(){
            if(count ==n-1){
                cout<<"List is full"<<endl;
            }
            else{
                int x,item;
                cout<<endl<<"1. Beginnging"<<endl;
                cout<<"2. From end"<<endl;
                cout<<"3. middle"<<endl;
                cout<<"Enter the option for the insertion: ";
                cin>>x;
                switch (x){
                case 1:
                    count++;     
                    //l[n+count];
                    for(int i=n;i>0;i--){
                        l[i]=l[i-1];
                    }
                    cout<<"Enter the data to inset at the beginning: ";
                    cin>>l[0];
                    
                    break;
                case 2:
                    count++;
                    //l[n+count];
                    cout<<"Enter the data to inset at the end: ";
                    cin>>l[n];
                    bcount++;
                    break;
                case 3:
                    int p;//at position
                    cout<<"At which position: ";
                    if(p<=n){
                        count++;

                        l[n+count];
                        for(int i=n;i>p;i--){
                            l[i]=l[i-1];
                        }
                        cout<<"Enter the data to inset at the middle: ";
                        cin>>l[p];
                    }
                    else{
                        cout<<"Position is beyond size"<<endl;
                    }
                    break;
                
                    default:
                        cout<<"Please enter the valid option"<<endl;
                        break;
             
                }
            }
            

        }
        void deletion(){
            int x,item;
            cout<<endl<<"1. Beginnging"<<endl;
            cout<<"2. From end"<<endl;
            cout<<"3. middle"<<endl;
            cout<<"Enter the option: ";
            cin>>x;
            switch (x){
            case 1: 
                for(int i=0;i>n-1;i++){
                    l[i]=l[i+1];
                }
                l[n]--;
                count--;
                break;
            case 2:
                l[n]--;
                count--;
                bcount--;
                // cout<<"Enter the data to inset at the end: ";
                // cin>>l[0];
                break;
            case 3:
                int p;//at position
                cout<<"At which position: ";
                if(p<=n){
                    for(int i=p;i<n-1;i++){
                        l[i]=l[i+1];
                    }
                    l[n]--;
                    count--;
                    // cout<<"Enter the data to inset at the middle: ";
                    // cin>>l[p];
                }
                else{
                    cout<<"Position is beyond size"<<endl;
                }
                break;
            
            default:
                cout<<"Please enter the valid option"<<endl;
                break;
            }

        }
        void display(){
            if(count==0){
                cout<<"List is empty"<<endl;
            }
            else{
                cout<<"Datas are"<<endl;
                
                for(int i=0;i<count;i++){
                    cout<<l[i]<<endl;
                }
                // if(bcount!=0){
                //         for(int i=bcount;i>4;i--){
                //         c   out<<l[i]<<endl;
                //         }
                    
                // }
            }
        }

};
int main()
{
    list p;
    int x;
    bool over = false;
    while(over!=true){
        cout<<"1. Search"<<endl;
        cout<<"2. Insert"<<endl;
        cout<<"3. Delete"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter the option:";
        cin>>x;
        switch(x){
            case 1:
                p.search();
                break;
            case 2:
                p.insertion();
                break;
            case 3:
                p.deletion();
                break;
            case 4:
                p.display();
                break;
            case 5:
                over=true;
                break;
            default:
                cout<<"Please enter the correct option "<<endl;
        }
    }
    return 0 ;
}