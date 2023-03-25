#include "vector"

using namespace std;

// 对数组按照位数排序: 例如exp = 1表示按个位排序, exp = 10表示按十位排序
void countSort(std::vector<int> &vi, int exp) {
    // 存储排序结果
    std::vector<int> temp;
    // 十个桶, 每个桶中存储位数上的值的索引, 例如bucket[0]表示exp位数为0的数字在vi中的索引
    std::vector<std::vector<int>> buckets(10);

    for (int i = 0; i < vi.size(); ++i) {
        // 计算exp位数上的值
        int bucket_index = (vi[i] / exp) % 10;
        buckets[bucket_index].push_back(i);
    }

    // 将桶中的数据迁移到临时数组
    for (auto &bucket : buckets) {
        for (int value_index : bucket) {
            temp.push_back(vi[value_index]);
        }
    }

    // 更新数组
    vi = temp;
}

vector<int> RadixSort(vector<int> &vec) {
    if (vec.size() <= 1) {
        return vec;
    }

    // 获取数组最大值
    int max = vec[0];
    for (auto i : vec) {
        max = std::max(i, max);
    }

    // 依次按照个位、十位、百位...进行排序
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(vec, exp);
    }
    return vec;
}