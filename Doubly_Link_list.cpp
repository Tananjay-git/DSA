// Doubly Linked List using C++

#include<iostream>
using namespace std;

// Proto type

int display();
int InsertAtBeginning();
int InsertAtEnd();
int InsertAtPosition();



// Node Structure

struct node{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *head = NULL;

// Main Function 

int main(){
    int opt = 0;
    while(opt != 8){
        cout<<" 1 : Display \n 2 : Insert at Beginning \n 3 : Insert at End \n 4 : Insert at Position \n 8 : Exit"<<endl;
        cout<<"Enter your chooice : ";
        cin>> opt;
        
        switch (opt)
        {
            case 1:
            {
                display();
                break;
            }
            case 2:
            {
                InsertAtBeginning();
                break;   
            }
            case 3:
            {
                InsertAtEnd();
                break;
            }
            case 4:
            {
                InsertAtPosition();
                break;
            }
            case 8:
            {
                cout<<"Exiting";
                break;
            }
            default:
            {
                cout<<"Enter a correct chooice "<<endl;
                break;
            }
        };
    }
    return 0; 
}

//Insertion

int InsertAtBeginning(){
    int value;
    struct node *newnode = new node;

    if(newnode == NULL){
        cout<<"No Space"<<endl;
    }
    else{
        cout<<"Enter the value : ";
        cin>>value;

        newnode->data = value;
        newnode->previous = NULL;
        
        if(head == NULL){
            newnode->next = NULL;
            head = newnode;
        }
        else{
            head->previous = newnode;
            newnode->next = head;
            head = newnode;
        }
        cout<<"Element Inserted"<<endl;
    }
    return 0;
}

int InsertAtEnd(){
    struct node *newnode = new node;
    
    if(newnode == NULL){
        cout<<"No Space"<<endl;
    }
    else{
        int value;
        cout<<"Enter a value : ";
        cin>>value;
        newnode->data = value;

        if(head == NULL){
            newnode->previous = NULL;
            newnode->next = NULL;
            head = newnode;
        }
        else{
            struct node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            newnode->next = NULL;
            temp->next = newnode;
            newnode->previous = temp;
        }
        cout<<"Element inserted"<<endl;
    }
    return 0;
}

int InsertAtPosition(){
    struct node *newnode = new node;

    if(newnode ==  NULL){
        cout<<"No Space "<<endl;
    }
    else{
        int value,position,flag =1;
        cout<<"Enter a Value : ";
        cin>>value;

        newnode->data = value;
        
        if(head == NULL){
            newnode->next = NULL;
            newnode->previous = NULL;
            head = newnode;
        }
        else{
            struct node *temp = head;
            cout<<"Enter a Position : ";
            cin>>position;

            for(int i =0; i<position-1; i++){
                temp = temp->next;
                if(temp->next == NULL){
                    flag = 0;
                    break;
                }
            } 
            if(flag){
                newnode->next = temp->next;
                temp->next->previous = newnode;
                temp->next = newnode;
                newnode->previous = temp;
                cout<<"Element Inserted"<<endl;
            }
            else{
                cout<<"Number of element is less than position entered"<<endl;
            }
        }
    }
    return 0;
}


 
//Display

int display(){
    struct node *temp = head;
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        cout<<"Elements in the list : "<<endl;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
    return 0;
}