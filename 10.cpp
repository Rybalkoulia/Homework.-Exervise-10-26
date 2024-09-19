#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;
    double R1, R2, S1, S2, S3;
    
    cout << "Введіть радіус R1 (більший): ";
    cin >> R1;
    cout << "Введіть радіус R2 (менший): ";
    cin >> R2;

    // Площа першого кола
    S1 = PI * R1 * R1;
    // Площа другого кола
    S2 = PI * R2 * R2;
    // Площа кільця
    S3 = S1 - S2;

    cout << "Площа першого кола (S1): " << S1 << endl;
    cout << "Площа другого кола (S2): " << S2 << endl;
    cout << "Площа кільця (S3): " << S3 << endl;

    return 0;
}
