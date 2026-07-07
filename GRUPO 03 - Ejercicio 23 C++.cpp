#include <iostream>

using namespace std;

int CalcularMCD(int a, int b) {
    int temp;
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << CalcularMCD(12, 8) << endl;
    return 0;
}
