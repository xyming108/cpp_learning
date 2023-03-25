#include "vector"

using namespace std;

// 定义个一个桶数量
const int BUCKET_NUM = 10;

vector<int> BucketSort(vector<int> &vec) {
    if (vec.size() <= 1) {
        return vec;
    }
    int max = vec[0];
    int min = vec[0];
    for (int v : vec) { // 获取最大值和最小值
        max = MaxInt(v, max);
        min = MinInt(v, min);
    }
    // 桶数量不应该超过数组长度，等于数组长度时变成计数排序
    int bucketNum = MinInt(vec.size(), BUCKET_NUM);
    // 计算每个桶存放的元素个数，向上取整防止漏掉
    int numPerBucket = ((max - min) / bucketNum) + 1;
    // 创建bucketNum个桶，每个桶之间都是有序的
    vector<vector<int>> buckets(bucketNum);

    // 把元素插入对应桶中
    for (int v : vec) {
        int index = (v - min) / numPerBucket;
        buckets[index].push_back(v);
    }

    // 对桶内的元素采用快速排序，并合并起来
    int i = 0;
    for (vector<int> bucket : buckets) {
        vector<int> ve = QuickSort(bucket, 0, bucket.size() - 1);
        for (int v : ve) {
            vec[i] = v;
            i++;
        }
    }

    return vec;
}