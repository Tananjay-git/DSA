class node{
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class linkedList{
    constructor(value){
        const newNode = new node(value);
        this.head = newNode
        this.tail = newNode
    }
}

let myLinkedList = new linkedList(5);

console.log(myLinkedList);