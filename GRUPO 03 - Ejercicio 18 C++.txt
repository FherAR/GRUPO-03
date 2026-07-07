#include <iostream>

using namespace std;

int main() {
    int f, c;
    cout << "Filas y Columnas: ";
    cin >> f >> c;
    
    // Asignación dinámica (Doble puntero)
    int** matriz = new int*[f];
    for(int i = 0; i < f; i++) {
        matriz[i] = new int[c];
    }
    
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            matriz[i][j] = i + j;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // Liberar memoria
    for(int i = 0; i < f; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    
    return 0;
}
