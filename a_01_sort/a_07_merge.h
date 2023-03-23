#include "vector"

void Merge(vector<int> &vec, int low, int mid, int high) {
    // 将vec中的元素复制到newVec中
    const vector<int> newVec = vec;
    int l = low;
    int r = mid + 1;
    int k = l;
    while (l <= mid && r <= high) {
        if (newVec[l] <= newVec[r]) {
            vec[k++] = newVec[l++];
        } else {
            vec[k++] = newVec[r++];
        }
    }
    // 下面两个while只会执行一个
    while (l <= mid) {
        vec[k++] = newVec[l++];
    }
    while (r <= high) {
        vec[k++] = newVec[r++];
    }
}

vector<int> MergeSort(vector<int> &vec, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(vec, low, mid);
        MergeSort(vec, mid + 1, high);
        Merge(vec, low, mid, high);
    }
    return vec;
}