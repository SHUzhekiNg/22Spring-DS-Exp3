#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums1[n], nums2[n];
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    int k = (n + n + 1) / 2; // 中位数所在的位置
    int left = 0, right = n; // 在 nums1 中查找中位数的位置

    // 主要来说 就是找根线分开 看不懂的话调一调就懂了
    while (left < right) {
        int m1 = left + (right - left) / 2;
        int m2 = k - m1;
        if (nums1[m1] < nums2[m2-1]) {
            left = m1 + 1;
        } else {
            right = m1;
        }
    }

    int m1 = left;
    int m2 = k - m1;
    int c1 = max(nums1[m1-1], nums2[m2-1]);
    cout << c1 << endl;
    return 0;
}
