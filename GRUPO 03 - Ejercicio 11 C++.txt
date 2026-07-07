#include <iostream>
#include <string>

using namespace std;

template <typename T>
void Intercambiar(T& a, T& b) {
    T auxiliar = a;
    a = b;
    b = auxiliar;
}

template <typename T>
void MostrarEstado(string etiqueta, T val1, T val2) {
    cout << "[" << etiqueta << "]" << endl;
    cout << "-> Variable 1: " << val1 << endl;
    cout << "-> Variable 2: " << val2 << endl;
    cout << "---" << endl;
}

int main() {
    int num1, num2;
    string texto1 = "San Marcos", texto2 = "Ciencia Computacional";
    
    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;
    
    MostrarEstado("ESTADO INICIAL", num1, num2);
    Intercambiar(num1, num2);
    MostrarEstado("ESTADO FINAL", num1, num2);
    
    cout << "\nDemostracion automatica con textos:" << endl;
    MostrarEstado("ESTADO INICIAL", texto1, texto2);
    Intercambiar(texto1, texto2);
    MostrarEstado("ESTADO FINAL", texto1, texto2);
    
    return 0;
}

