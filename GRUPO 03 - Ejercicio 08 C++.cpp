#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cout << "Ingrese filas (n) y columnas (m): ";
    cin >> n >> m;
    
    vector<vector<int>> matriz(n, vector<int>(m));
    vector<vector<int>> trans(m, vector<int>(n));
    
    cout << "Ingrese los elementos:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matriz[i][j];
            trans[j][i] = matriz[i][j]; // Transponiendo en el acto
        }
    }
    
    cout << "Matriz transpuesta:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
