// Queue Using Link List 
// Queue works on the rule FIFO(First In First Out)

#include<iostream>
using namespace std;

//Proto Type

int Display();
int Insert();
int Delete();


// Node Structure

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

//Main Function 

int main(){
    int opt = 0;
    while(opt != 4){
        cout<<" 1 : Show \n 2 : Insert \n 3 : Delete \n 4 : Exit "<<endl;
        cout<<"Enter your Chooice : ";
        cin>>opt;

        switch(opt){
            case 1:
            {
                Display();
                break;
            }
            case 2:
            {
                Insert();
                break;
            }
            case 3:
            {
                Delete();
                break;
            }
            case 4:
            {
                cout<<"Exiting"<<endl;
                break;
            }
            default:
            {
                cout<<"Enter a correct option"<<endl;
                break;
            }
        };
    }
    return 0;
}


//Insertion

int Insert(){
    struct node *newnode = new node;

    if(newnode ==  NULL){
        cout<<"No Space"<<endl;
    }
    else{
        int value;
        cout<<"Enter a Value : ";
        cin>>value;
        newnode->data = value;


        if(head == NULL){
            newnode->next = NULL;
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
        cout<<"Element Inserted "<<endl;
    }
    return 0;
}

//Deleteion

int Delete(){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        if(head->next == NULL){
            head = NULL;
        }
        else{
            struct node *temp1=head, *temp2;
            while(temp1->next != NULL){
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = NULL;
            free(temp1);
        }
        cout<<"Element Deleted"<<endl;
    }
    return 0;
}

