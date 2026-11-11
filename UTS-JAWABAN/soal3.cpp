#include <iostream>
#include <string>                                     
using namespace std;

#define MAX 100                                    


char stk[MAX];                                        
int top = -1;                                       

void push(char c) {                                   
    if (top == MAX - 1) cout << "Stack penuh!\n";     
    else stk[++top] = c;                              
}
char pop() {                                          
    if (top == -1) return '\0';                      
    return stk[top--];                                
}

char que[MAX];                                      
int front = -1, rear = -1;                        
void enqueue(char c) {                                
    if (rear == MAX - 1) cout << "Queue penuh!\n";
    else {
        if (front == -1) front = 0;                  
        que[++rear] = c;                             
    }
}
char dequeue() {                                      
    if (front == -1 || front > rear) return '\0';    
    return que[front++];                              
}

int main() {
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;                                      

    
    for (char c : kata) {                            
        push(c);                                      
        enqueue(c);                                  
    }

   
    bool palindrom = true;                            
    for (int i = 0; i < (int)kata.length(); i++) {   
        if (pop() != dequeue()) {                     
            palindrom = false;                       
        }
    }

    if (palindrom) cout <<"Pengecekan : "<<endl <<"Kata Dibalik: "<< kata <<endl<< "Kesimpulan: "<< kata << " adalah palindrom\n";

    else cout <<"Pengecekan : "<<endl <<"Kata Dibalik: "<< kata <<endl << "Kesimpulan: " << kata << " bukan palindrom\n";
    return 0;
}