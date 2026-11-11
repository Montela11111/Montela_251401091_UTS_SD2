#include <iostream>
using namespace std;


struct Node {
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertFirst(int n) {
    Node *newNode = new Node; 
    newNode -> value = n; 
    newNode -> next = NULL;  
    
    if(head == NULL){                
        head = newNode;             
        tail = head;                
    
    } else{
        newNode -> next = head;     
                                        

        head = newNode;      
                            
    }
}


void insertLast(int n) {
    Node *newNode = new Node;
    newNode -> value = n;
    newNode -> next = NULL;

    if(head== NULL){
        head = newNode;
        tail = head;
    } else {        
        tail -> next = newNode;     
        tail = newNode;             

    }   

}
void deleteFirst() {
    if (head == NULL) {              
                    
    }
    Node *temp = head;               
    head = head->next;              
    if (head == NULL) tail = NULL;   
    delete temp;                     
}

void printList() {
    Node *temp = head;            
    cout << "Isi Linked List: ";   
    while (temp != NULL) {          
        cout << temp->value << " -> ";   
        temp = temp->next;           
    }
    cout << "NULL\n";               
}

int main() {


    int pilihan, nilai, target;

    do {
    cout << "\n===== MENU SINGLE LINKED LIST =====\n";
        cout << "1. \n";
        cout << "2. \n";
        cout << "3. \n";
        cout << "4.Tampilkan yang lolos \n";
    }
}    