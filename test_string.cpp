#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/*****************************************************************/
/* 题目描述：
        1. 提示用户输入姓名
        2. 接收用户的输入
        3. 然后向用户问好，hello xxx
        4. 告诉用户名字的长度
        5. 告诉用户名字的首字母是什么
        6. 如果用户直接输入回车，那么告诉用户的输入为空
        7. 如果用户输入的是imooc，那么告诉用户的角色是一个管理员 */
/*****************************************************************/

int main(void)
{
    string name;
    cout << "Please input your name:";
    getline(cin, name);
    if (name.empty())
    {
        cout << "input is null..." << endl;
        return 0;
    }

    if (name == "imooc")
    {
        cout << "you are a administrator." << endl;
    }

    cout << "hello " + name << endl;
    cout << "your name length :" << name.size() << endl;
    cout << "your name first letter is: " << name[0] << endl;

    return 0;
}
