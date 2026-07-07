#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> pares, impares;
    
    for(int num : v) {
        if(num % 2 == 0) pares.push_back(num);
        else impares.push_back(num);
    }
    
    sort(pares.begin(), pares.end()); // Ascendente
    sort(impares.rbegin(), impares.rend()); // Descendente
    
    v.clear();
    v.insert(v.end(), pares.begin(), pares.end());
    v.insert(v.end(), impares.begin(), impares.end());
    
    for(int x : v) cout << x << " ";
    cout << endl;
    
    return 0;
}
