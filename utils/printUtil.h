#include "vector"
#include "iostream"
#include "string"

using namespace std;

void printVector(const string& prefix, vector<int> &vec) {
    cout << prefix << ": ";
    auto begin = vec.begin();
    auto end = vec.end();
    while (begin != end) {
        if (begin == end - 1) {
            cout << *begin;
        } else {
            cout << *begin << " ";
        }
        begin++;
    }
    cout << endl;
}