#include <iostream>

using namespace std;

int n;

int arr1[10000], arr2[10000], arr3[20000];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr1[i];
    for (int i = 1; i <= n; i++)
        cin >> arr2[i];
    int cur = 1, i1 = 1, i2 = 1;
    while (i1 <= n && i2 <= n) {
        if (i1 == n) {
            while (i2 <= n)
                arr3[cur++] = arr2[i2++];
        } else if (i2 == n) {
            while (i1 <= n)
                arr3[cur++] = arr1[i1++];
        } else {
            if (arr1[i1] != arr2[i2]) {
                if (arr1[i1] > arr2[i2])
                    arr3[cur++] = arr2[i2++];
                else
                    arr3[cur++] = arr1[i1++];
            } else {
                arr3[cur++] = arr1[i1++];
            }
        }
    }
    cout << arr3[n] << endl;
    return 0;
}
