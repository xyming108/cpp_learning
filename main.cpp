#include <iostream>
#include "utils/printUtil.h"
#include "a_00_base/class_object.h"
#include "a_00_base/inherit.h"
#include "a_00_base/error.h"
#include "a_01_sort/a_01_bubble.h"
#include "a_01_sort/a_02_quick.h"
#include "a_01_sort/a_03_insertion.h"
#include "a_01_sort/a_04_shell.h"
#include "a_01_sort/a_05_selection.h"
#include "a_01_sort/a_06_heap.h"
#include "a_01_sort/a_07_merge.h"
#include "a_01_sort/a_08_count.h"

using namespace std;

void class_object() {
    Line line(10);
    line.setLength(100);
    line.getLength();
    printLength(line);
    cout << "静态变量π: " << Line::getStatic() << endl;

    cout << "----------------" << endl;

    Line newLine = line;
    newLine.getLength();

    cout << "----------------" << endl;

    Line *ptrLine = &line;
    ptrLine->setLength(200);
    ptrLine->getLength();
//    delete (ptrLine);

    cout << "----------------" << endl;
}

void inherit() {
    People people;
    cout << "----------------" << endl;
    Man man;
    man.set("kevin", "广东深圳", "男", 25);
    man.display();
    cout << "----------------" << endl;
    Woman woman;
    woman.set("lucie", "中国香港", "女", 18, people);
    woman.display(people);
    cout << "----------------" << endl;
    Third third;
    third.set("nullName", "美国", "特种人", 100, people);
    third.display(people);
    cout << "----------------" << endl;
}

double tryCatch(double a, double b) {
    try {
        if (b == 0) {
            throw "除数不能为0!";
        }
        return (a / b);
    } catch (const char *err) {
        cerr << err << endl;
    }
}

void sort() {
    vector<int> vec = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    printVector("排序前", vec);
//    BubbleSort(vec);
//    QuickSort(vec, 0, vec.size() - 1);
//    InsertionSort(vec);
//    ShellSort(vec);
//    SelectionSort(vec);
//    HeapSort(vec);
//    MergeSort(vec, 0, vec.size() - 1);
    CountSort(vec);
    printVector("排序后", vec);
}

int main() {
//    class_object();
//    inherit();
//    tryCatch(10, 0);
    sort();

    return 0;
}
