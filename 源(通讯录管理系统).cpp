#include <iostream>
#include <string>
using namespace std;

int number = 0;
struct people {
	int id;
	string name;
	string sex;
	int age;
	string phone;
	string address;
	int used = 0;
};
void printpeople(people s1)
{
	cout << "序号" << s1.id << endl << "姓名："
		<< s1.name << endl << "性别：" << s1.sex << endl
		<< "年龄：" << s1.age << endl
		<< "电话号码" << s1.phone << endl << "地址" << s1.address << endl << endl;;
}
people temp;
string name;
int main()
{
	people arr[1000];
	int n;
start:
	fflush(stdin);
	cout << "1.添加联系人" << endl;
	cout << "2.删除联系人" << endl;
	cout << "3.查询联系人" << endl;
	cout << "4.修改联系人" << endl;
	cout << "5.显示联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
	cout << "请输入数字：";
	cin >> n;
	switch (n)
	{
	case 1: goto flag1; break;
	case 2: goto flag2; break;
	case 3:goto flag3; break;
	case 4:goto flag4; break;
	case 5:goto flag5; break;
	case 6:goto flag6; break;
	case 0:return 0;
	default:goto start;
	}

flag1:

	for (int i = 0; i < 1000; i++)
	{

		if (arr[i].used == 0) {

			cout << "请输入姓名:";
			cin >> arr[i].name;
			cout << "请输入性别:";
			cin >> arr[i].sex;
			cout << "请输入年龄:";
			cin >> arr[i].age;
			cout << "请输入电话号码:";
			cin >> arr[i].phone;
			cout << "请输入住址:";
			cin >> arr[i].address;
			arr[i].used = 1;
			arr[i].id = i + 1;
			cout << "添加成功" << endl;
			system("pause");
			goto start;
			break;
		}
	}
	cout << "通讯录已满";
	goto start;


flag2:

		
		cout << "请输入删除人的姓名：" << endl;
		cin >> name;
		for (int i = 0; i < 1000; i++)
		{
			if (arr[i].name == name) {
				arr[i].used = 0;
				for (int j = i; j < 999; j++)
				{
					if (arr[j + 1].used == 0) break;
					arr[j] = arr[j + 1];
					arr[j].id = j + 1;
					arr[j + 1].used = 0;

				}
				cout << "已删除" << endl;
				system("pause");
				goto start;
				break;
			}

		}


	cout << "未找到" << endl;
	system("pause");
	goto start;
	

flag3:

	
	cout << " 请输入查询姓名：";
	cin >> name;
	for (int i = 0; i < 1000; i++)
	{
		if (name == arr[i].name)
		{
			cout << "已找到" << endl;
			
			printpeople(arr[i]);
			system("pause");
			goto start;
		}
		
	}
	cout << "未找到" << endl;
	system("pause");
	goto start;

flag4:
	cout << "请输入修改人姓名:";
	cin >> name;
	for (int i = 0; i < 1000; i++)
	{

		if (arr[i].name == name) {

			cout << "请输入姓名:";
			cin >> arr[i].name;
			cout << "请输入性别:";
			cin >> arr[i].sex;
			cout << "请输入年龄:";
			cin >> arr[i].age;
			cout << "请输入电话号码:";
			cin >> arr[i].phone;
			cout << "请输入住址:";
			cin >> arr[i].address;
			arr[i].used = 1;
			arr[i].id = i + 1;
			cout << "修改成功" << endl;
			system("pause");
			goto start;
			break;
		}
	}
	cout << "未找到" << endl;
	system("pause");
	goto start;


flag5:
	number = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i].used == 0) break;
		printpeople(arr[i]);
		number++;
	}
	printf("共有%d位联系人\n", number);
	system("pause");
	goto start;

flag6:
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i].used == 0) break;
		arr[i].used = 0;
	}
	cout << "清理完毕" << endl;
	system("pause");
	goto start;

}
