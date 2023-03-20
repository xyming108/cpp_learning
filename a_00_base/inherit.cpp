#include "inherit.h"

void People::setSex(string m_sex) {
    sex = m_sex;
}

void People::display() {
    cout << "name：" << name << endl;
    cout << "age：" << age << endl;
    cout << "address：" << address << endl;
    cout << "sex：" << sex << endl;
}

void People::setCharacter(string m_name, string m_address, string m_sex, int m_age) {
    name = m_name;
    age = m_age;
    address = m_address;
    sex = m_sex;
}

void Man::set(string m_name, string m_address, string m_sex, int m_age) {
    name = m_name;
    age = m_age;
    address = m_address;
    setSex(m_sex);
}

void Woman::display(People &obj) {
    obj.display();
}

void Woman::set(string m_name, string m_address, string m_sex, int m_age, People &obj) {
    obj.setCharacter(m_name, m_address, m_sex, m_age);
}

void Third::display(People &obj) {
    obj.display();
}

void Third::set(string m_name, string m_address, string m_sex, int m_age, People &obj) {
    obj.setCharacter(m_name, m_address, m_sex, m_age);
}