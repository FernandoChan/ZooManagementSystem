#include<iostream>
#include"tiger.h"
#include"Zoo.h"
#include"tourist.h"
#include"master.h"
using namespace std;

int main()
{
	/*Tourist i;
	i.add(new tiger(12,12.1,"dsd",1,1,"ds",12));
	cout<<i.getAnimal_of(Tiger)[0]->getDescription();
	staff a("jack", 2, "ds");
	master boss(12, "dsd", "dsd");
	boss.add(&a);
	cout << endl;
	a.add(new tiger(12, 12.1, "dsd", 1, 1, "ds", 12));
	cout<<boss.list_of_name();
	boss.send_all("dsds");
	cout << a.getMessage()<<endl;
	cout<<a.name_of_animal()<<endl;*/


	Zoo io;
	cout << io.enroll() << endl;
	int num = io.login();
	io.getOrder(num);
}