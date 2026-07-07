#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {3, 1, 2};
    int n = 3;
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j+1]) {
                int aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
    
    for(int val : A) cout << val << " ";
    cout << endl;
    
    return 0;
}
