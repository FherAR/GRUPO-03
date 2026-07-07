#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 2;
    vector<vector<int>> matriz = {{1, 4}, {4, 5}};
    bool esSimetrica = true;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] != matriz[j][i]) {
                esSimetrica = false;
            }
        }
    }
    
    if(esSimetrica) cout << "La matriz es simétrica" << endl;
    else cout << "La matriz NO es simétrica" << endl;
    
    return 0;
}
