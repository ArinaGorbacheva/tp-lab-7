#include <iostream>
#include "Ocean.h"
using namespace std;
int main()
{
	Ocean *oc = new Ocean;
	oc->addObjects(40, ObjType::PREY);
	oc->addObjects(10, ObjType::PREDATOR);
	oc->addObjects(10, ObjType::STONE);
	oc->run();
	system("pause");
	return 0;
}