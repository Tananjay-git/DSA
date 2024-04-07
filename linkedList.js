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
        this.length = 1 
    }

    push(value){
        const newNode = new node(value)
        if(!this.head){
            this.head = newNode
            this.tail = newNode
        }
        else{
            this.tail.next = newNode
            this.tail = newNode
        }
        this.length++
        return this 
    }
}

let myLinkedList = new linkedList(5);
myLinkedList.push(4)

console.log(myLinkedList);