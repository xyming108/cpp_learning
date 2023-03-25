#include "iostream"

using namespace std;

int MaxInt(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int MinInt(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}