#include "vector"

vector<int> ShellSort(vector<int> &vec) {
    int length = vec.size();
    int gap = length / 2;
    while (gap >= 1) {
        for (int i = gap; i < length; i++) {
            int tmpValue = vec[i];
            int leftIndex = i - gap;
            // 如果前面的值比暂存值大，则把前面的值和当前值交换
            while (leftIndex >= 0 && vec[leftIndex] > tmpValue) {
                vec[leftIndex + gap] = vec[leftIndex];
                leftIndex -= gap;
            }
            vec[leftIndex + gap] = tmpValue;
        }
        gap /= 2;   // 以2倍大小缩小间隔
    }
    return vec;
}