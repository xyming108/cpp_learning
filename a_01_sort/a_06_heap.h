#include "vector"

void maxHeapify(vector<int> &vec, int length, int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int max = index;
    if (left < length && vec[left] > vec[max]) {
        max = left;
    }
    if (right < length && vec[right] > vec[max]) {
        max = right;
    }
    if (vec[index] != vec[max]) {
        swap(vec[index], vec[max]); // 位置互换
        maxHeapify(vec, length, max);
    }
}

vector<int> HeapSort(vector<int> &vec) {
    int length = vec.size();
    // 自下而上，构建大顶堆
    for (int i = (length / 2) - 1; i >= 0; i--) {
        maxHeapify(vec, length, i);
    }
    // 自上而下，不断更新堆顶
    for (int i = length - 1; i >= 1; i--) {
        // 将堆顶的最大值放到 vec[i] 的位置
        swap(vec[0], vec[i]);
        // 调用堆排序算法得出大顶堆
        maxHeapify(vec, i, 0);
    }
    return vec;
}