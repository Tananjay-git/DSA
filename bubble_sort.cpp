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
            new_node->next = NULL;
            head = new_node;
        }
        else{
            new_node->next = head;
            head = new_node;
        }
        cout<<"Element inserted"<<endl;
    }
    return 0;
}

void show(){
    if(head == NULL){
        cout<<"Empty list"<<endl;
    }
    else{
        struct node *p = head;
        cout<<"Element in List : ";
        while(p->next != NULL){
            cout<< p->data<< " ";
            p=p->next;
        }
    }
}


int main(){
    int opt = 0;
    while(opt != 3){
        cout<<"Enter Your Choice : "<<endl;
        cout<<"1 : Insert \n2 : Show \n3 : Exit"<<endl;
        cin>>opt;

        switch (opt)
        {
            case 1:{
                insert();
                break;
            }
            case 2:{
                show();
                break;
            }
            case 3:{
                cout<<"Exit";
                break;
            }
        }
    }
    return 0;
}