/**************************************************
* File name:     通讯录管理系统.cpp
* Created time:  2021/4/4 11:08:09
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
constexpr auto MAX = 1000;
#include <iostream>
#include <string.h>
using namespace std;

// 添加联系人
// 实现添加联系人功能，联系人上限位1000人，姓名、性别、年龄、电话、住址
    // 设计联系人结构体
    // 设计通讯录结构体
    // main函数中创建通讯录
    // 封装添加联系人函数
    // 测试添加联系人功能

struct Person {
    string pName;
    int pSex;
    int pAge;
    string pPhone;
    string pAddr;
};

struct AddressBooks {
    struct Person pArray[MAX];
    int pSize;
};

// 封装函数显示界面，如 void showMenu()
// 在main函数中调用封装好的函数

// 菜单界面
void showMenu() {
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

// 添加联系人
void addPerson(struct AddressBooks* abs) {
    // 判断通讯录是否填满
    if (abs->pSize == MAX) {
        cout << "通讯录已满" << endl;
        return;
    } else {
        // 添加具体联系人
        string name;
        cout << "请输入姓名：";
        cin >> name;
        abs->pArray[abs->pSize].pName = name;

        int sex;
        cout << "请输入性别\n1 —— 男; \n2 —— 女\n：";
        cin >> sex;
        if (sex == 1 || sex == 2) {
            abs->pArray[abs->pSize].pSex = sex;
        } else {
            cout << "数据输入错误，默认为男" << endl;
            abs->pArray[abs->pSize].pSex = 1;
        }

        int age;
        cout << "请输入年龄：";
        cin >> age;
        abs->pArray[abs->pSize].pAge = age;

        string phone;
        cout << "请输入电话：";
        cin >> phone;
        abs->pArray[abs->pSize].pPhone = phone;

        string address;
        cout << "请输入住址：";
        cin >> address;
        abs->pArray[abs->pSize].pAddr = address;

        abs->pSize += 1;
        cout << "添加联系人成功" << endl;
        system("pause");
    }
}

// 显示所有联系人
void showPerson(struct AddressBooks* abs) {
    // 判断联系人个数
    if (abs->pSize == 0) {
        cout << "当前联系人记录为空" << endl;
    } else {
        for (int i = 0; i < abs->pSize; i++) {
            cout << "姓名: " << abs->pArray[i].pName << "\t"
                << "年龄：" << abs->pArray[i].pAge << "\t"
                << "性别：" << ((abs->pArray[i].pSex == 1) ? "男" : "女") << "\t"
                << "电话：" << abs->pArray[i].pPhone << "\t"
                << "住址：" << abs->pArray[i].pAddr << "\t" << endl;
        }
    }
    system("pause");
    system("cls");
}

// 查找联系人功能
int findPerson(struct AddressBooks* abs, string name = "") {
    if (name != "") {
        for (int i = 0; i < abs->pSize; i++) {
            if (abs->pArray[i].pName == name) {
                return i;
            }
        }
        return -1;
    } else {
        cout << "请输入要查找的联系人：";
        cin >> name;
        return findPerson(abs, name);
    }
}

// 删除指定的联系人
void deletePerson(struct AddressBooks* abs) {
    cout << "请输入要删除的联系人：";
    string name;
    cin >> name;
    int result = findPerson(abs, name);
    if (result == -1) {
        cout << "查无此人" << endl;
    } else {
        for (int i = result; i < abs->pSize; i++) {
            abs->pArray[i] = abs->pArray[i + 1];
        }
        abs->pSize -= 1;
        cout << "删除成功" << endl;
    }
    system("pause");
    system("cls");
}

// 修改指定联系人
void modifyPerson(AddressBooks* abs) {
    cout << "请输入指定的联系人：";
    string name;
    cin >> name;
    int result = findPerson(abs, name);
    if (result == -1) {
        cout << "查无此人" << endl;
    } else {
        string name;
        cout << "请输入姓名：";
        cin >> name;
        abs->pArray[result].pName = name;

        int sex;
        cout << "请输入性别\n1 —— 男; \n2 —— 女\n：";
        cin >> sex;
        if (sex == 1 || sex == 2) {
            abs->pArray[result].pSex = sex;
        } else {
            cout << "数据输入错误，默认为男" << endl;
            abs->pArray[result].pSex = 1;
        }

        int age;
        cout << "请输入年龄：";
        cin >> age;
        abs->pArray[result].pAge = age;

        string phone;
        cout << "请输入电话：";
        cin >> phone;
        abs->pArray[result].pPhone = phone;

        string address;
        cout << "请输入住址：";
        cin >> address;
        abs->pArray[result].pAddr = address;

        cout << "修改成功" << endl;
        system("pause");
    }
}

void clearPerson(struct AddressBooks* abs) {
    abs->pSize = 0;
    cout << "通讯录已清空" << endl;
    system("pause");
    system("cls");
}

int main() {
    // 创建通讯录结构体变量
    struct AddressBooks abs;
    // 初始化人员个数
    abs.pSize = 0;

    // 退出功能
        // 退出通讯录管理系统
    // 根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建
    // 当用户选择0的时候，执行退出，选择其他的先不操作，也不会退出程序

    while (true) {
        int select = 0;
        system("cls");
        showMenu();
        cin >> select;

        switch (select) {
            case 1: { // 添加联系人
                addPerson(&abs); // 利用地址传递
                break;
            }
            case 2: { // 显示联系人
                // 显示通讯录中已有联系人的信息
                    // - 封装显示联系人的函数
                    // - 测试显示联系人的函数
                // 判断当前通讯录中的人员个数，若没有就提示记录为空，人数大于0，显示通讯录中的信息
                showPerson(&abs);
                break;
            }
            case 3: { // 删除联系人
                // 按照姓名检测联系人是否存在
                    // 封装检测联系人是否存在
                    // 封装删除联系人函数
                    // 测试函数联系人功能
                        /*
                            cout << "人名：";
                            string name;
                            cin >> name;
                            cout << findPerson(&abs, name) << endl;
                        */
                deletePerson(&abs);
                break;
            }
            case 4: { // 查找联系人
                int i = findPerson(&abs);
                if (i != -1) {
                    cout << "姓名: " << abs.pArray[i].pName << "\t"
                        << "年龄：" << abs.pArray[i].pAge << "\t"
                        << "性别：" << ((abs.pArray[i].pSex == 1) ? "男" : "女") << "\t"
                        << "电话：" << abs.pArray[i].pPhone << "\t"
                        << "住址：" << abs.pArray[i].pAddr << "\t" << endl;
                } else {
                    cout << "查无此人" << endl;
                }
                system("pause");
                break;
            }
            case 5: { // 修改联系人
                // 按照姓名重新修改指定联系人
                    // 封装修改联系人函数
                    // 测试修改联系人函数
                modifyPerson(&abs);
                break;
            }
            case 6: { // 清空联系人
                clearPerson(&abs);
                break;
            }
            case 0: { // 退出通讯录
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            }
            default: {
                cout << "您的输入有误，请重新输入" << endl;
                system("pause");
            }
        }
    }

    return 0;
}