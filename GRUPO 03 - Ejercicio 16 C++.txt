#include <iostream>
#include <vector>

using namespace std;

void QuickSort(vector<int>& v, int inicio, int fin) {
    if(inicio < fin) {
        int pivote = v[inicio];
        int i = inicio;
        int j = fin;
        
        while(i < j) {
            while(v[i] <= pivote && i < j) i++;
            while(v[j] > pivote) j--;
            if(i < j) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        v[inicio] = v[j];
        v[j] = pivote;
        
        QuickSort(v, inicio, j - 1);
        QuickSort(v, j + 1, fin);
    }
}

int main() {
    vector<int> arr = {9, 3, 7, 1};
    QuickSort(arr, 0, 3);
    
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
