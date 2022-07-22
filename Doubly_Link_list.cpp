// Doubly Linked List using C++

#include<iostream>
using namespace std;

// Proto type

int InsertAtBeginning();
int display();



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
    while(opt != 3){
        cout<<"1 : Display \n 2 : Insert at Beginning \n 3 : Exit"<<endl;
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