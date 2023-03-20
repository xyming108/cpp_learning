#include "vector"

vector<int> SelectionSort(vector<int> &vec) {
    int length = vec.size();
    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;
        for (int j = i+1; j < length; j++) {
            if (vec[j] < vec[minIndex]) {
                minIndex = j;
            }
        }
        swap(vec[minIndex], vec[i]);
    }
    return vec;
}