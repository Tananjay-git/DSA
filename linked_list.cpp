// Linked list Program using C++ 

#include<iostream>
using namespace std;

// Proto type 

int InsertAtBeginning();
int display();
int InsertAtEnd();
int InsertAtPosition();



// Node Structure 
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;


// Main Function 

int main(){
    int opt=0;
    while(opt != 5){
        cout<<"Enter your choice : "<<endl;
        cout<<" 1 : Insert at Beginning \n 2 : Insert at Ending \n 3 : InsertAtPosition() \n 4 : Show \n 5 : Exit "<<endl;
        cin>>opt;

        switch (opt)
        {
        case 1:
        {
            InsertAtBeginning();
            break;
        }
        case 2:
        {
            InsertAtEnd();
            break;
        }
        case 3:
        {
            InsertAtPosition();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            cout<<"Exiting";
            break;
        }

        default:
        {
            cout<<"Enter a correct option !"<<endl;
            break;
        }
        };

    }

return 0;
}


// Insertion

int InsertAtBeginning(){
    int value;
    struct node *newnode = new node;
    if(newnode==NULL){
        cout<<"No Space";
    }
    else{
        cout<<"Enter the value : "<<endl;
        cin>>value;
        newnode->data = value;
        if(head == NULL){
            newnode->next = NULL;
            head= newnode;
        }
        else{
            newnode->next = head;
            head= newnode;
        }
        cout<<"Element inserted \n";
    }
    return 0;
}

int InsertAtEnd(){
    struct node *newnode = new node;

    int value;
   

    if(newnode == NULL){
        cout<<"No Space"<<endl;
    }
    else
    {
        cout<<"Enter the value : "<<endl;
        cin>>value;
        newnode->data = value;

        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
        }
        else{
            struct node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
        cout<<"Element Inserted"<<endl;
    }

    return 0;
}

int InsertAtPosition(){
    struct node *newnode = new node;

    if (newnode == NULL)
    {
        cout<<"No Space"<<endl;
    }
    else{
        int value;
        cout<<"Enter the value : "<<endl;
        cin>>value;
        newnode->data = value;

        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
        }
        else{
            int position;
            struct node *temp = head;
            cout<<"Enter the Position : ";
            cin>>position;

            for(int i=0 ; i<position-1 ; i++){
                temp = temp->next;
            }

            newnode->next = temp->next;
            temp->next = newnode;
        }
        cout<<"Element Inserted"<<endl;
    }
    return 0;
}




// Display 

int display(){
    struct node *ptr = head;
    if(head==NULL){
        cout<<"List is Empty"<<endl;
    }
    else{
        cout<<"Element in the list : \n";
        while (ptr != NULL)
        {
            cout<< ptr->data <<endl;
            ptr = ptr->next;
        }
        
    }
    return 0;
}
