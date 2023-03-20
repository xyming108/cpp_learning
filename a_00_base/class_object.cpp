#include "class_object.h"

Line::Line(double len) {
    length = len;
    cout << "我是构造函数 " << length << endl;
}

Line::Line(const Line &obj) {
    cout << "我是拷贝构造函数" << endl;
    length = 101;
}

Line::~Line() {
    cout << "我是析构函数" << endl;
}

//初始化类Line的静态成员
double Line::TT = 3.14;

void Line::setLength(double len) {
    cout << "我是setLength " << len << endl;
    length = len;
}

double Line::getLength() {
    cout << "我是getLength " << length << endl;
    return length;
}

void printLength(const Line &obj) {
    cout << "我是友元函数，拿到private length: " << obj.length << endl;
}
