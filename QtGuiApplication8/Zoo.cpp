#include"animal.h"
#include"people.h"
#include"tiger.h"
#include"staff.h"
#include"tourist.h"
#include"master.h"
#include<vector>
#include"Zoo.h"
#include<string>
#include<iostream>
#include<stdexcept>
#include<algorithm>
#include<fstream>
#include"getHead.h"

using namespace std;

int Zoo::num_m = 1;
int Zoo::num_t = 41;
int Zoo::num_s = 11;

Zoo::Zoo(const std::string& path)
{
	this->path = path;
	initial();
	file = fstream(path, ios::in | ios::out | ios::binary);
}

// add a master account into master's container
void Zoo::add_Master(master* ma)
{
	if (masters.size() <= 10)
		masters.push_back(ma);
}

// add a staff account into staff's container
void Zoo::add_staff(staff* st)
{
	if (staffs.size() <= 30)
		staffs.push_back(st);
}

// add a tourist account into tourist's container
void Zoo::add_Tourist(Tourist* to)
{
	if (tour.size() <= 60)
		tour.push_back(to);
}

Zoo::~Zoo()
{
	file.close();
}

// ��������Ķ���԰��
void Zoo::initial()
{
	ofstream file(path, ios::in | ios::binary);
	account blank;

	Animal* tige = new tiger(13, 562.89, "meat", true, false, "Tiger", 1);
	Animal* swallo = new Swallow(7, 17.6, "Yellow", true, false, "Gird", 2);
	Animal* rabi = new Rabit(5, 2.5, "Carrot", true, false, "Baby", 3);
	Animal* mouse = new Mouse(9, 1.2, "Women mouse", true, false, "Mice", 4);
	Animal* lio = new Lion(10, 856.6, "Lions", true, true, "Girs", 5);
	Animal* leo = new Leopard(11, 7.2, "To go to school?", true, false, "Leo", 6);
	Animal* eagle = new Eagle(18, 1.2, "Flying or sleeping?", true, false, "Eag", 7);
	Animal* d = new dog(4, 13.2, "Eat meat", true, false, "Dogy", 8);
	Animal* cro = new Crocodile(75, 1236.2, "eat meat", true, false, "Smart", 9);
	Animal* ca = new cat(12, 25.6, "sleep", true, false, "Carrier", 10);
	Animal* catz = new cat(21, 85.7, "Full in sleep", true, true, "Carrys ", 11);

	// put this animal into the vector of animals.
	animals.push_back(catz);
	animals.push_back(tige);
	animals.push_back(swallo);
	animals.push_back(rabi);
	animals.push_back(mouse);
	animals.push_back(lio);
	animals.push_back(leo);
	animals.push_back(d);
	animals.push_back(cro);
	animals.push_back(ca);
	animals.push_back(eagle);

	for (int i = 0; i < 100; i++)
		file.write(reinterpret_cast<const char*>(&blank), sizeof(account));

	//ChengXingYu��staff ����ݵ�¼�����ļ��������һ���˺ŵĶ�����Ϣ
	//������staff����������������ָ������ָ�롣
	//�ٽ����staff����Ķ������
	num_s++;
	blank = account(11, "123");
	file.seekp(10 * sizeof(account));
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));  //write in a account/
	staff* nae = new staff("ChengXingYu", 11, "123");
	staffs.push_back(nae);
	nae->add(ca);
	nae->add(tige);
	nae->add(cro);
	nae->add(d);
	nae->add(leo);


	//ChengXiaoWei��staff ����ݵ�¼�����ļ��������һ���˺ŵĶ�����Ϣ
	//������staff����������������ָ������ָ�롣
	//�ٽ����ָ�븺��Ķ������
	num_s++;
	blank = account(12, "123");
	file.seekp(11 * sizeof(account));
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));
	nae = new staff("ChengXiaoWei", 12, "123");
	staffs.push_back(nae);
	nae->add(lio);
	nae->add(rabi);
	nae->add(mouse);

	//YangZhe��staff ����ݵ�¼�����ļ��������һ���˺ŵĶ�����Ϣ
	//������staff����������������ָ������ָ�롣
	//�ٽ����ָ�븺��Ķ������
	num_s++;
	blank = account(13, "123");
	file.seekp(12 * sizeof(account));
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));
	nae = new staff("YangZhe", 13, "123");
	staffs.push_back(nae);
	nae->add(swallo);

	//Jy��staff ����ݵ�¼�����ļ��������һ���˺ŵĶ�����Ϣ
	//������staff����������������ָ������ָ�롣
	//�ٽ����ָ�븺��Ķ���eagle����
	num_s++;
	blank = account(14, "123");
	file.seekp(13 * sizeof(account));
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));
	nae = new staff("Jy", 14, "123");
	staffs.push_back(nae);
	nae->add(eagle);
	nae->add(catz);

	//JiangYi �� master����԰������ݼ���
	//�����µĽ���JiangYi ��master����
	//�ٽ�ǰ���ᵽ����λְԱ����
	num_m++;
	blank = account(1, "123456");
	file.seekp(0);
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));
	master* mas = new master(1, "123456", "JiangYi");
	masters.push_back(mas);

	mas->add(staffs[0]);
	mas->add(staffs[1]);
	mas->add(staffs[2]);
	mas->add(staffs[3]);

	file.close();

}

//�ı�Ŀǰ��ʹ���ߵĽ�ɫ
void Zoo::setDescription(description i)
{
	user = i;
}

//��õ�ǰ���ļ���·
string Zoo::getPath()const
{
	return path;
}

void Zoo::setPath()
{
	path = "files.txt";
}

// ��ȡ��ǰ�Ķ�������
vector<Animal*> Zoo::get_Vecof(Animals_class iz)const
{
	vector<Animal*>temp;
	for (int i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getType() == iz)
		{
			temp.push_back(animals[i]);
		}
	}
	return temp;
}

//��ö������Ϣ
string Zoo::getImformation(Animals_class i)const
{
	vector<Animal*>temp = get_Vecof(i);
	string buf = "";

	for (int i = 0; i < temp.size(); i++)
	{
		buf += temp[i]->getDescription();
		buf += '\n';
	}

	return buf;
}

//��¼
bool Zoo::login(int number, string pass)
{
	account blank;
	file.seekg((number - 1) * sizeof(account));
	file.read(reinterpret_cast<char*>(&blank), sizeof(account));
	if (number == blank.number&&pass == blank.password)
	{
		return true;
	}

	return false;
}

// �����һ���ο͵�����
int Zoo::getNext_tourist()
{
	return num_t++;
}
int Zoo::enroll(int num, const std::string& name, const std::string& pass)
{
	setDescription(TOURIST);
	tour.push_back(new Tourist(num, pass, name));
	account tour(num, pass);
	file.seekp((num - 1) * sizeof(account));
	file.write(reinterpret_cast<const char*>(&tour), sizeof(account));
	return num;
}


void Zoo::setStaff(const vector<staff*>& s)
{
	staffs = s;
}

vector<staff*> Zoo::getStaff()const
{
	return staffs;
}

vector<Tourist*> Zoo::getTourist()const
{
	return tour;
}

void Zoo::setTourist(const std::vector<Tourist*>& i)
{
	tour = i;
}

void Zoo::setMaster(const vector<master*>& mast)
{
	masters = mast;
}

vector<master*>Zoo::getMaster()const
{
	return masters;
}

//���master����������ʮ���ˣ��Ϳ��Լ�����ӡ�
void Zoo::addMaster(master* s)
{
	if (masters.size()<10)
		masters.push_back(s);
}

//����һ��staff
void Zoo::addStaff(staff* s)
{
	if (staffs.size() < 30)
		staffs.push_back(s);
}

//����һ���ο�
void Zoo::addTourist(Tourist* t)
{
	if (tour.size() < 60)
		tour.push_back(t);
}

//��������������
void Zoo::setAnimal(const vector<Animal*>& a)
{
	animals = a;
}

//�������м���һ������
void Zoo::addAnimal(Animal* a)
{
	animals.push_back(a);
}



vector<Animal*> Zoo::getAnimals()const
{
	return animals;
}

void Zoo::registerStaff(int number, const string& pass,master* m,string name)
{
	file.seekp((number - 1) * sizeof(account));
	account blank(number, pass);
	file.write(reinterpret_cast<const char*>(&blank), sizeof(account));
	staff* s= new staff(name,number,pass);
	staffs.push_back(s);
	m->add(s);
}