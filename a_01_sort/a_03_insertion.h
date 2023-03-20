#include "vector"

vector<int> InsertionSort(vector<int> &vec) {
    int length = vec.size();
    // 从第二个元素开始，和前面的值比较大小
    for (int i = 1; i < length; i++) {
        int tmpValue = vec[i];
        int preIndex = i - 1;
        while (tmpValue < vec[preIndex] && preIndex >= 0) {
            // 如果前面的值比暂存值大，则把前面的值后移
            vec[preIndex + 1] = vec[preIndex];
            preIndex--;
        }
        // 把暂存值放在该轮排序最终的位置
        vec[preIndex + 1] = tmpValue;
    }
    return vec;
}