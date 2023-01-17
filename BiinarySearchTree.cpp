#include <iostream>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int info;
};
class tree
{
public:
    node *newnode;
    node *root;
    tree()
    {
        root = NULL;
    }
    void insertion(node *tree, int data)
    {
        newnode = new node;
        newnode->info = data;
        newnode->left = NULL;
        newnode->right = NULL;
        if (tree == NULL)
        {
            tree = newnode;
            root = newnode;
        }
        else if (data < tree->info)
        {
            if (tree->left == NULL)
            {
                tree->left = newnode;
            }
            else
            {
                insertion(tree->left, data);
            }
        }
        else if (data > tree->info)
        {
            if (tree->right == NULL)
            {
                tree->right = newnode;
            }
            else
            {
                insertion(tree->right, data);
            }
        }
        else
        {
            cout << "Doubly data:" << endl;
        }
    }
    void preorder(node *tree)
    {
        // node *tree;
        // tree = abc;
        if (tree != NULL)
        {
            cout << "Data in preorder is: " << tree->info << endl;
            preorder(tree->left);
            preorder(tree->right);
        }
    }
    void postorder(node *tree)
    {

        // node *tree;
        // tree = abc;
        if (tree != NULL)
        {
            postorder(tree->left);
            postorder(tree->right);
            cout << "Data in postorder is: " << tree->info << endl;
        }
    }
    void inorder(node *tree)
    {
        // node *tree;
        // tree = abc;
        if (tree != NULL)
        {
            inorder(tree->left);
            cout << "Data in inorder is: " << tree->info << endl;
            inorder(tree->right);
        }
    }
};
int main()
{
    tree p;
    
    int x,toinsert;
    while(1){
        cout<<"1 Insertion "<<endl;
        cout<<"2 Preorder "<<endl;
        cout<<"3 Postorder "<<endl;
        cout<<"4 Inorder "<<endl;
        cout<<"5 exit "<<endl;
        cout<<"Enter the option: ";
        cin>>x;
        switch(x){
            case 1:
                cout<<"ENter the data to insert: ";
                cin>>toinsert;
                p.insertion(p.root,toinsert);
                break;
            case 2:
                p.preorder(p.root);
                break;
            case 3:
                p.postorder(p.root);
                break;
            case 4:
                p.inorder(p.root);
                break;
            case 5:
                exit(0);
            default:
                cout<<"Enter valid option :"<<endl;
                break;
        }
    
    }
    return 0;
}