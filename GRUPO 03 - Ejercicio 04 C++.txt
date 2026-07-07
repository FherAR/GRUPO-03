#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max_val, min_val;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    
    vector<int> vec(n);
    cout << "Ingrese los valores:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    if(n > 0) {
        max_val = vec[0];
        min_val = vec[0];
        
        for(int i = 1; i < n; i++) {
            if(vec[i] > max_val) max_val = vec[i];
            if(vec[i] < min_val) min_val = vec[i];
        }
        
        cout << "Max: " << max_val << ", Min: " << min_val << endl;
    }
    return 0;
}
