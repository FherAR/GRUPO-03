#include <iostream>

using namespace std;

int main() {
    int tamano;
    cout << "Ingrese el tamaño del vector dinamico: ";
    cin >> tamano;
    
    if(tamano <= 0) {
        cout << "El tamaño debe ser mayor a cero." << endl;
    } else {
        int* vector = new int[tamano];
        
        cout << "--- Introduciendo datos ---" << endl;
        for(int i = 0; i < tamano; i++) {
            cout << "Elemento [" << i + 1 << "]: ";
            cin >> vector[i];
        }
        
        cout << "--- Contenido ---" << endl << "[ ";
        for(int i = 0; i < tamano; i++) {
            cout << vector[i] << " ";
        }
        cout << "]" << endl;
        
        delete[] vector; // Liberando la memoria
        cout << "Memoria liberada." << endl;
    }
    return 0;
}
