#include "vector"

int Partition(vector<int> &vec, int left, int right) {
    // 拿出基准值（一般是第一个元素）
    int pivotValue = vec[left];
    while (left < right) {
        //找出比基准值小的值放在左边
        while (left < right && pivotValue <= vec[right]) {
            right--;
        }
        vec[left] = vec[right];
        //找出比基准值大的值放在右边
        while (left < right && pivotValue >= vec[left]) {
            left++;
        }
        vec[right] = vec[left];
    }
    vec[left] = pivotValue;
    //返回最终的基准值下标
    return left;
}

vector<int> QuickSort(vector<int> &vec, int left, int right) {
    if (left < right) {
        // 寻找基准值下标
        int pivot = Partition(vec, left, right);
        // 递归左子列表
        QuickSort(vec, left, pivot);
        // 递归右子列表
        QuickSort(vec, pivot + 1, right);
    }
    return vec;
}


