#include <set>

class abc
{
public:
	void fun()
	{

	}
};

void foo(std::set<int>& cont1, std::set<int>& cont2)
{
	int n = 8;
	n = 12;
	abc obj;
	obj.fun();
	std::set<int>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
	cont2.emplace(i);
	cont2.emplace_hint(i);
	cont2.erase(i);
}

void bar(std::set<int>& cont1, std::set<int>& cont2)
{
	std::set<int>::iterator i = cont1.find(100);
	if (i != cont1.end())
	{
		i = cont2.find(100);
		if (i != cont2.end())
			cont2.erase(i);
	}
}

int main()
{
	return 0;
}