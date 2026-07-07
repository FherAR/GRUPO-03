#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    
    vector<int> vec(n);
    cout << "Ingrese los valores:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    for(int i = 1; i < n; i++) {
        int clave = vec[i];
        int j = i - 1;
        
        while(j >= 0 && vec[j] > clave) {
            vec[j+1] = vec[j];
            j = j - 1;
        }
        vec[j+1] = clave;
    }
    
    cout << "Vector ordenado: ";
    for(int i = 0; i < n; i++) cout << vec[i] << " ";
    cout << endl;
    
    return 0;
}
