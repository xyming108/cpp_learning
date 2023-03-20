#include "iostream"
#include "string"

using namespace std;

class People {
private:
    string sex;
protected:
    string address;

    void setSex(string);

public:
    int age;
    string name;

    void setCharacter(string, string, string, int);

    void display();
};

class Man : public People {
public:
    void set(string, string, string, int);
};

class Woman : protected People {
public:
    void set(string, string, string, int, People &);

    void display(People &);
};

class Third : private People {
public:
    void set(string, string, string, int, People &);

    void display(People &);
};