#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n, opcion;
    cout << "Seleccione método:\n1. Aleatorio\n2. Manual\nOpcion: ";
    cin >> opcion;
    
    if(opcion != 1 && opcion != 2) {
        cout << "Opción no válida." << endl;
        return 0;
    }
    
    cout << "Ingrese dimension N (NxN): ";
    cin >> n;
    
    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));
    vector<vector<int>> C(n, vector<int>(n, 0));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(opcion == 1) {
                A[i][j] = rand() % 10 + 1;
                B[i][j] = rand() % 10 + 1;
            } else {
                cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j];
            }
        }
    }
    
    if(opcion == 2) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "B[" << i << "][" << j << "]: "; cin >> B[i][j];
            }
        }
    }

    // Multiplicación
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += (A[i][k] * B[k][j]);
            }
        }
    }
    
    cout << "--- Matriz Resultado ---" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
