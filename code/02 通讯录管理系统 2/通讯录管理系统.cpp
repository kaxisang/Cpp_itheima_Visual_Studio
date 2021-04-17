/**************************************************
* File name:     通讯录管理系统.cpp
* Created time:  2021/4/13 18:31:41
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>

constexpr auto ARRAY_MAX_LENGTH = 100;

using namespace std;

struct Person {
    string pName;
    int pAge;
    int pSex;
    string pPhone;
    string pAddress;
};

struct AddressBooks {
    struct Person pArray[ARRAY_MAX_LENGTH];
    int pSize;
};

void outputInfo(struct AddressBooks* abs, int index) {
    cout << "姓名：" << abs->pArray[index].pName
        << "\t年龄：" << abs->pArray[index].pAge
        << "\t性别：" << (abs->pArray[index].pSex == 1 ? "男" : "女")
        << "\t电话：" << abs->pArray[index].pPhone
        << "\t地址：" << abs->pArray[index].pAddress << endl;
}

void inputInfo(struct AddressBooks* abs, int index) {
    string name;
    cout << "请输入姓名：";
    cin >> name;
    abs->pArray[index].pName = name;

    int sex;
    cout << "请输入性别\n1 —— 男; \n2 —— 女\n：";
    cin >> sex;
    if (sex == 1 || sex == 2) {
        abs->pArray[index].pSex = sex;
    } else {
        cout << "数据输入错误，默认为男" << endl;
        abs->pArray[index].pSex = 1;
    }

    int age;
    cout << "请输入年龄：";
    cin >> age;
    abs->pArray[index].pAge = age;

    string phone;
    cout << "请输入电话：";
    cin >> phone;
    abs->pArray[index].pPhone = phone;

    string address;
    cout << "请输入住址：";
    cin >> address;
    abs->pArray[index].pAddress = address;
}

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

void addPerson(struct AddressBooks* abs) {
    if (abs->pSize == ARRAY_MAX_LENGTH) {
        cout << "数组已满，无法添加" << endl;
    } else {
        inputInfo(abs, abs->pSize);
        abs->pSize += 1;
        cout << "添加信息成功" << endl;
    }
    system("pause");
}

void showPerson(struct AddressBooks* abs) {
    if (abs->pSize == 0) {
        cout << "通讯录为空" << endl;
    } else {
        for (int i = 0; i < abs->pSize; i++) {
            outputInfo(abs, i);
        }
    }
    system("pause");
}

int indexPerson(struct AddressBooks* abs, string name) {
    for (int i = 0; i < abs->pSize; i++) {
        if (abs->pArray[i].pName == name) {
            return i;
        }
    }
    return -1;
}

void deletePerson(struct AddressBooks* abs) {
    string name;
    cout << "要删除的联系人姓名：";
    cin >> name;
    int index = indexPerson(abs, name);
    if (index == -1) {
        cout << "查无此人" << endl;
    } else {
        for (int i = index; i < abs->pSize; i++) {
            abs->pArray[i] = abs->pArray[i + 1];
        }
        abs->pSize -= 1;
        cout << "删除成功" << endl;
    }
    system("pause");
}

void findPerson(struct AddressBooks* abs) {
    string name;
    cout << "请输入要查找的联系人姓名：";
    cin >> name;
    int result = indexPerson(abs, name);
    if (result == -1) {
        cout << "查无此人" << endl;
    } else {
        outputInfo(abs, result);
    }
    system("pause");
}

void modifyPerson(struct AddressBooks* abs) {
    string name;
    cout << "请输入要修改的联系人姓名：";
    cin >> name;
    int result = indexPerson(abs, name);
    if (result == -1) {
        cout << "查无此人" << endl;
    } else {
        inputInfo(abs, result);
        cout << "修改成功" << endl;
    }
    system("pause");
}

int main() {
    struct AddressBooks abs;
    abs.pSize = 0;
    while (true) {
        int choice;
        system("cls");
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: {
                addPerson(&abs);
                break;
            }
            case 2: {
                showPerson(&abs);
                break;
            }
            case 3: {
                deletePerson(&abs);
                break;
            }
            case 4: {
                findPerson(&abs);
                break;
            }
            case 5: {
                modifyPerson(&abs);
                break;
            }
            case 6: {
                abs.pSize = 0;
                cout << "清空完成" << endl;
                system("pause");
                break;
            }
            case 0: {
                cout << "欢迎下次使用！" << endl;
                system("pause");
                return 0;
            }
            default: {
                cout << "输入错误，请重新输入" << endl;
            }
        }
    }
}