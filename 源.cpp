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
	cout << "���" << s1.id << endl << "������"
		<< s1.name << endl << "�Ա�" << s1.sex << endl
		<< "���䣺" << s1.age << endl
		<< "�绰����" << s1.phone << endl << "��ַ" << s1.address << endl << endl;;
}
people temp;
string name;
int main()
{
	people arr[1000];
	int n;
start:
	fflush(stdin);
	cout << "1.�����ϵ��" << endl;
	cout << "2.ɾ����ϵ��" << endl;
	cout << "3.��ѯ��ϵ��" << endl;
	cout << "4.�޸���ϵ��" << endl;
	cout << "5.��ʾ��ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
	cout << "���������֣�";
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

			cout << "����������:";
			cin >> arr[i].name;
			cout << "�������Ա�:";
			cin >> arr[i].sex;
			cout << "����������:";
			cin >> arr[i].age;
			cout << "������绰����:";
			cin >> arr[i].phone;
			cout << "������סַ:";
			cin >> arr[i].address;
			arr[i].used = 1;
			arr[i].id = i + 1;
			cout << "��ӳɹ�" << endl;
			system("pause");
			goto start;
			break;
		}
	}
	cout << "ͨѶ¼����";
	goto start;


flag2:

		
		cout << "������ɾ���˵�������" << endl;
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
				cout << "��ɾ��" << endl;
				system("pause");
				goto start;
				break;
			}

		}


	cout << "δ�ҵ�" << endl;
	system("pause");
	goto start;
	

flag3:

	
	cout << " �������ѯ������";
	cin >> name;
	for (int i = 0; i < 1000; i++)
	{
		if (name == arr[i].name)
		{
			cout << "���ҵ�" << endl;
			
			printpeople(arr[i]);
			system("pause");
			goto start;
		}
		
	}
	cout << "δ�ҵ�" << endl;
	system("pause");
	goto start;

flag4:
	cout << "�������޸�������:";
	cin >> name;
	for (int i = 0; i < 1000; i++)
	{

		if (arr[i].name == name) {

			cout << "����������:";
			cin >> arr[i].name;
			cout << "�������Ա�:";
			cin >> arr[i].sex;
			cout << "����������:";
			cin >> arr[i].age;
			cout << "������绰����:";
			cin >> arr[i].phone;
			cout << "������סַ:";
			cin >> arr[i].address;
			arr[i].used = 1;
			arr[i].id = i + 1;
			cout << "�޸ĳɹ�" << endl;
			system("pause");
			goto start;
			break;
		}
	}
	cout << "δ�ҵ�" << endl;
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
	printf("����%dλ��ϵ��\n", number);
	system("pause");
	goto start;

flag6:
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i].used == 0) break;
		arr[i].used = 0;
	}
	cout << "�������" << endl;
	system("pause");
	goto start;

}