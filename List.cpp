#include <list>

void fun11(std::list<int>& cont1, std::list<int>& cont2)
{
	std::list<int>::iterator i = cont1.begin();
	if (i != cont1.end())
		cont2.erase(i);
}