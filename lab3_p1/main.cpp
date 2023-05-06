#include <iostream>
#include <map>

#define NOTFOUND -1
using namespace std;

int n1, n2, n3;

int arr1[10000], arr2[10000], arr3[10000];

map<int, int> mp1, mp2, mp3;

int minnum = -1;

int main() {
    cin >> n1 >> n2 >> n3;
    for (int i = 1; i <= n1; i++) {
        cin >> arr1[i];
        if (mp1.count(arr1[i]) == 0)
            mp1[arr1[i]] = i;
    }
    for (int i = 1; i <= n2; i++) {
        cin >> arr2[i];
        if (mp2.count(arr2[i]) == 0)
            mp2[arr2[i]] = i;
    }
    for (int i = 1; i <= n3; i++) {
        cin >> arr3[i];
        if (mp3.count(arr3[i]) == 0)
            mp3[arr3[i]] = i;
    }

    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        if (mp2.count(it->first) > 0 && mp3.count(it->first) > 0) {
            minnum = it->first;
            break;
        }
    }

    if (minnum != NOTFOUND)
        cout << minnum << " " << mp1[minnum] << " " << mp2[minnum] << " " << mp3[minnum] << endl;
    else
        cout << "NOT FOUND" << endl;
    return 0;
}
