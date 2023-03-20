#include "iostream"

using namespace std;

class Line {
public:
    static double TT;   // π 圆周率
    double width;

    Line(double len);

    Line(const Line &obj);

    ~Line();

    void setLength(double len);

    double getLength();

    friend void printLength(const Line &obj);

    static double getStatic() {
        return TT;
    }

private:
    double length;
protected:
    char unit;
};