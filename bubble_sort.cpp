// Bubble sorting linklist
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};


struct node *head = NULL;
int insert(){
    struct node *new_node = new node;

    if(new_node == NULL){
        cout<<"No Space"<<endl;
    }
    else{
        int value;
        cout<<"Enter Value : ";
        cin>>value;
        new_node->data = value;

        if(head == NULL){

        }
    }
}
