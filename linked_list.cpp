#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int x;
    Node * next;
} *head,*save,*last,*node;

Node* createNode(int n)
{
    node = new Node;
    node->x=n;
    node->next=NULL;
    return node;
}
void insertNode(Node* n)
{
    if (head==NULL){
        head =n;
        head->next=NULL;
        last=head;
    }
    else
    {
        last->next=n;
        last=n;
    }
}

Node* deleteNode(int m){
    if (head==NULL)
        cout<<"\nList empty.\n";
    else {
            cout<<"tutuutut";
    node = head;
    if (node->x==m){
        if (node->next==NULL){
        head=NULL;
        }
        else {
            head =node->next;
        }
        return node;
    }
    while (node->next!=NULL)
    {
        cout<<"yoyooy";
        if (node->next->x==m){
            save=node->next;
            if (node->next->next!=NULL)
                node->next=node->next->next;
            else
                node->next=NULL;
                cout<<node->x;
            return save;
        }
        node=node->next;
    }
    return NULL;
    }

}
void displayList(){
    node= head;
    cout<<"\n The List is : ";
    while (node!=NULL)
    {
        cout<<node->x<<" ";
        node=node->next;
    }
    cout<<endl;
}

int main()
{
    int x;

    int n;
    while (1){
        cout<<"\nOPTIONS \n\t1. Insert\n\t2. Delete\n\t3.Display\n\t4. Exit\n";
        cin>>n;
        switch(n){
        case 1 :
            cout<<"Enter the value of node : ";
            cin>>x;
            node=createNode(x);
             if (node==NULL){
                cout<<"\nError ..Aborting\n";
                break;
             }
             else {
                insertNode(node);
                cout<<"\nNode inserted.\n";
             }
             break;
        case 2 :
            int ch;
            cout<<"\n Enter the node to be deleted ?(Y/N) ";
            cin>>ch;
            node=deleteNode(ch);
            if (node == NULL){
                cout<<"\n Not found.\n";
            }
            else
                cout<<"\n Value "<<node->x<<" deleted.\n";
            delete node;
            break;
        case 3 :
            displayList();
            break;
        case 4 :
            return -4;
        default :
            cout<<"\n Incorrect Option selected.\n";
            break;

        }

    }
}
