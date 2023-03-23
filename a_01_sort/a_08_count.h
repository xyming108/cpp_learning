#include "vector"
#include "util.h"

using namespace std;

vector<int> CountSort(vector<int> &vec) {
    int length = vec.size();
    if (length <= 1) {
        return vec;
    }

    int min = vec[0];
    int max = vec[0];
    for (int i = 0; i < length; i++) {
        max = MaxInt(max, vec[i]);
        min = MinInt(min, vec[i]);
    }
    if (max == min) {
        return vec;
    }

    const int distance = max - min + 1;
    vector<int> countArray(distance);
    for (int i = 0; i < length; i++) {
        countArray[vec[i]]++;
    }

    int index = 0;
    for (int i = 0; i < countArray.size(); i++) {
        while (countArray[i] > 0) {
            vec[index] = i + min;
            countArray[i]--;
            index++;
        }
    }

    return vec;
}