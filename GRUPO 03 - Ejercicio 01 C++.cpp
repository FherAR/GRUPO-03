

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese el tamaño del vector (n): ";
    cin >> n;
    
    vector<int> vector_nums(n);
    cout << "Ingrese los elementos:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vector_nums[i];
        suma += vector_nums[i];
    }
    
    cout << "La suma es: " << suma << endl;
    return 0;
}
