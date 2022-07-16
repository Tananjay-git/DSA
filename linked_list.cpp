// Linked list Program using C++ 

#include<iostream>
using namespace std;

// Proto type 

int InsertAtBeginning();
int display();
int InsertAtEnd();
int InsertAtPosition();
int DeleteAtBeginning();
int DeleteAtEnd();

// Node Structure 
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;


// Main Function 

int main(){
    int opt=0;
    while(opt != 7){
        cout<<"Enter your choice : "<<endl;
        cout<<" 1 : Show \n 2 : Insert at Beginning \n 3 : Insert at Ending \n 4 : Insert at Position \n 5 : Delete at Beginning  \n 6 : int Delete at End\n 7 : Exit "<<endl;
        cin>>opt;

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
        case 5:
        {
            DeleteAtBeginning();
            break;
        }
        case 6:
        {
            DeleteAtEnd();
            break;
        }
        case 7:
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


// Deletion

int DeleteAtBeginning(){
    if( head == NULL ){
        cout<<"Empty List"<<endl;
    }
    else{
        if(head->next == NULL){
            head = NULL;
        }
        else{
            struct node *temp = head;
            head = temp->next;
            free(temp);
        }
        cout<<"Element Deleted "<<endl;
    }


    return 0;
}

int DeleteAtEnd(){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        if(head->next == NULL){
            head = NULL;
        }
        else{
            struct node *temp1,*temp2;
            temp1 = head;
            while(temp1->next != NULL){
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = NULL;
            free(temp1);
        }
        cout<<"Element is Deleted"<<endl;
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
