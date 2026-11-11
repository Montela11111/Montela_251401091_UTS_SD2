#include <iostream>
using namespace std;

int main () {
        // Deklarasi
        int array [2][3][4];

        
        
        
        for (int i = 0; i < 2; i++ ){
        int angka = 0;

            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 4; k++){
                    array [i][j][k] = angka;
                    angka += 2;
                }
            }
        }

        
        for (int a = 0; a < 2; a++ ){
            int angka2 = 1;
            for (int b = 0; b < 3; b++) {
                for (int c = 0; c < 4; c++){
                    array [a][b][c] = angka;
                    angka += 2;
                }
            }
        }

        


            for (int i = 0; i < 2; i++) {
            cout << "Total" :" << i+1 << endl;

            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 4; k++){
                    cout << array [i][j][k] << "\t";
                }
                cout << endl;
            }
            cout << endl;
        
        }
        return 0;
}
            