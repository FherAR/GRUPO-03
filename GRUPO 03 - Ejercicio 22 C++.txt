#include <iostream>

using namespace std;

int InvertirNumero(int num) {
    int rev = 0, digito;
    while(num > 0) {
        digito = num % 10;
        rev = (rev * 10) + digito;
        num = num / 10;
    }
    return rev;
}

int main() {
    cout << InvertirNumero(7631) << endl;
    return 0;
}
