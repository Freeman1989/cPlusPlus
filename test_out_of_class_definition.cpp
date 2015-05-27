#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/********************************************************************/
/* 定义一个Teacher类，要求分别采用同文件类外定义和份文件类外定义
 * 的方式完成，具体要求如下：
 * 数据成员：
 *      名字
 *      年龄
 *      性别
 *  成员函数：
 *      数据成员的封装函数
 *      授课teach */
/********************************************************************/

class Teacher
{
public:
    void   setName(string _name);
    string getName();
    void   setGender(string _gender);
    string getGender();
    void   setAge(int _age);
    int    getAge();
    void   teach();
private:
    string m_strName;
    string m_strGender;
    int m_iAge;
};

void Teacher::setName(string _name)
{
    m_strName = _name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::setAge(int _age)
{
    m_iAge = _age;
}

int Teacher::getAge()
{
    return m_iAge;
}

void Teacher::teach()
{
    cout << "现在上课" << endl;
}

int main(void)
{
    Teacher t;
    t.setName("孔子");
    t.setGender("男");
    t.setAge(30);
    cout << t.getName() << " " << t.getAge() << " " << t.getGender();
    t.teach();

    return 0;
}
