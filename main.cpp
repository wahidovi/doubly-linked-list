#include <iostream>

struct Node{
    int data = 0;
    Node *next = nullptr;
    Node *prev = nullptr;
};

Node *Head = nullptr;
Node *Tail = nullptr;

void insert(Node *node, int data){
    Node * tHead = Head;
    if(Head== nullptr){
        Head = node;
        Head->data = data;
        Tail = Head;
    }
    else{

        while(tHead->next!= nullptr) {
            tHead = tHead->next;

        }

        tHead->next = node;
        node->data =data;
        node->prev = tHead;
        Tail = node;

    }

}

void display(){
    Node *tHead = Head;
    std::cout<<"\ndisplay List: ";
    while(tHead->next!= nullptr){
        std::cout<<" "<<tHead->data;
        tHead=tHead->next;
    }
    std::cout<<" "<<tHead->data;
}

void displayReverse(){
    Node *tTail = Tail;
    std::cout<<"\ndisplay List in Reverse Order: ";
    while(tTail->prev!= nullptr){
        std::cout<<" "<<tTail->data;
        tTail = tTail->prev;
    }
    std::cout<<" "<<tTail->data;
}


int main() {
    insert(new Node, 4);
    insert(new Node, 5);
    insert(new Node, 6);
    insert(new Node, 7);

    display();
    displayReverse();

    return 0;
}
