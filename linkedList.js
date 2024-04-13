class node{
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class show{
    constructor(value){
        const n = new linkedList 
        switch(value){
            case 1: 
        }
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

    pop(value){
        if(!this.head) return undefined
        else{
            if(this.head == this.tail){
                this.head = null
                this.tail = null
            }
            else{
                let temp = this.head
                while(this.temp.next != this.tail){
                    this.temp = this.temp.next
                }
                this.tail = this.temp;
                this.tail.next = null
            }
        }
    }
}

let myLinkedList = new linkedList(5);
myLinkedList.push(4)

console.log(myLinkedList);