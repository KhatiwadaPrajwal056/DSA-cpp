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

#include<iostream>
using namespace std;
class node{
    public:
        node *left,*right;
        int info;

};
class tree{
    public:
        node *newnode,*root;
    tree(){
        root=NULL;
    }
    void insertion(node *tree, int data){
        newnode= new node;
        newnode->info=data;
        // newnode->left=NULL;
        // newnode->right=NULL;

        if(tree==NULL){
            tree= newnode;
            root=newnode;
        
        }
        else if(data<tree->info){
            if(tree->left==NULL){
                tree->left=newnode;
            }
            else{
                insertion(tree->left,data);
            }
        }
        else if(data>tree->info){
            if(tree->right==NULL){
                tree->right=newnode;
            }
            else{
                insertion(tree->right,data);
            }
        }
        else
            cout<<"double data"<<endl;
    }
    void preorder(node *tree){
        if(tree!=NULL){
            cout<<tree->info<<endl;
            preorder(tree->left);
            preorder(tree->right);
        }
    }
    void postorder(node *tree){
        if(tree!=NULL){
            preorder(tree->left);
            preorder(tree->right);
            cout<<tree->info<<endl;
        }
    }
    void inorder(node *tree){
        if(tree!=NULL){
            preorder(tree->left);
            cout<<tree->info<<endl;
            preorder(tree->right);
        }
    }
};
int main()
{
    tree p;
    int x,toinsert;
    while(1){
        cout<<"1. Insertion"<<endl;
        cout<<"2. preorder"<<endl;
        cout<<"3. postorder"<<endl;
        cout<<"4. inorder"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter a choice: ";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Enter the data to insert: ";
                cin>>toinsert;
                p.insertion(p.root,toinsert);
                break;
            case 2:
                cout<<"Data in Preorder: "<<endl;
                p.preorder(p.root);
                break;                
            case 3:
                cout<<"Data in Postorder: "<<endl;
                p.postorder(p.root);
                break;
            case 4:
                cout<<"Data in Inorder: "<<endl;
                p.inorder(p.root);
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"Please enter the correct option: "<<endl;
                break;

        }
    }
    return 0 ;
}