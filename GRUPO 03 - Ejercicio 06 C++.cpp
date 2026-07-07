#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    cin >> cadena;
    
    int n = cadena.length();
    char temp;
    
    for(int i = 0; i <= n - 2; i++) {
        for(int j = 0; j <= n - i - 2; j++) {
            if(cadena[j] > cadena[j+1]) {
                temp = cadena[j];
                cadena[j] = cadena[j+1];
                cadena[j+1] = temp;
            }
        }
    }
    
    cout << "Cadena ordenada: " << cadena << endl;
    return 0;
}

