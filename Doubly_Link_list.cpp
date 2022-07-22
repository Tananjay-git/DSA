// Doubly Linked List using C++

#include<iostream>
using namespace std;

// Proto type

int InsertAtBeginning();

// Node Structure

struct node{
    int data;
    struct node *next;
    struct node *previous;
};