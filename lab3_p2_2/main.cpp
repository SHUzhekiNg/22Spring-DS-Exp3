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

    int k = (n + n + 1) / 2; // ��λ�����ڵ�λ��
    int left = 0, right = n; // �� nums1 �в�����λ����λ��

    // ��Ҫ��˵ �����Ҹ��߷ֿ� �������Ļ���һ���Ͷ���
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
