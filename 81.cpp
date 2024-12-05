#include <iostream>

using namespace std;

int square(int x) {
    return x * x;
}
int cube(int x) {
    return x * x * x;
}

int GetMax(int a[], int n, int (*fp)(int)) {
    int max = fp(a[0]);

    for (int i = 1; i < n; i++)
        if (max < fp(a[i]))
            max = fp(a[i]);
    return max;
}
int main() {
    int a[6] = { 23, 5, -3, -34, 324, 56 };

    cout << GetMax(a, 6, square) << endl;
    cout << GetMax(a, 6, cube) << endl;
}