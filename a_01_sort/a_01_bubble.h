#include "vector"

vector<int> BubbleSort(vector<int> &vec) {
    int length = vec.size();
    for (int i = 0; i < length - 1; i++) {
        bool change = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                change = true;
            }
        }
        if (!change) {  //优化：如果本轮无交换, 则说明全部有序，可以直接退出
            break;
        }
    }
    return vec;
}