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

