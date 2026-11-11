
#include <iostream>
using namespace std;

struct Node {                                     
    int data;                                         
    Node* kiri;                                    
    Node* kanan;                                     
};

Node* buatNode(int data) {                           
    Node* baru = new Node;                           
    baru->data = data;                                
    baru->kiri = NULL;                                
    baru->kanan = NULL;                              
    return baru;                                    
}

Node* insert(Node* akar, int data) {                  
    if (akar == NULL) return buatNode(data);          
    if (data < akar->data)                            
        akar->kiri = insert(akar->kiri, data);       
    else if (data > akar->data)                       
        akar->kanan = insert(akar->kanan, data);     
    return akar;                                      
}

void inOrder(Node* akar) {                           
    if (akar != NULL) {                               
        inOrder(akar->kiri);                          
        cout << akar->data << " ";                    
        inOrder(akar->kanan);                         
    }
}


bool cari(Node* akar, int x) {                       
    if (akar == NULL) return false;                   
    if (x == akar->data) return true;                 
    if (x < akar->data) return cari(akar->kiri, x);   
    return cari(akar->kanan, x);                      
}




int nilaiMin(Node* akar) {
    while (akar->kiri != NULL) akar = akar->kiri;     
    return akar->data;                              
}
int nilaiMax(Node* akar) {
    while (akar->kanan != NULL) akar = akar->kanan;   
    return akar->data;                               
}

int main() {
    Node* akar = NULL;                               
    int angka;

    cout << "Masukkan angka (0 untuk berhenti):\n";
    while (true) {                                    
        cin >> angka;
        if (angka == 0) break;                        
        akar = insert(akar, angka);                   
    }

    if (akar == NULL) {                               
        cout << "Tree kosong\n";
        return 0;                                   
    }

    cout << "Data (In-order    : ";
    inOrder(akar);                                    
    cout << "\nNilai terkecil  : " << nilaiMin(akar);
    cout << "\nNilai terbesar  : " << nilaiMax(akar) << endl;

    
}