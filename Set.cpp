#include <set>
#include <unordered_set>

void fun1(std::set<int>& cont1, std::set<int>& cont2)
{
	std::set<int>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

typedef std::set<int>::iterator def;

void fun2(std::set<int>& cont1, std::set<int>& cont2)
{
	def i;
	i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

typedef std::unordered_set<int> ghi;

void fun3()
{
	std::unordered_set<int> cont1 = { 1,2,3,4 };
	ghi cont2 = { 4,5,6,7 };
	std::unordered_set<int>::iterator i = cont1.begin();
	i = cont2.begin();
	if (i != cont1.end())
		cont2.erase(i);

	cont1.erase(i);
}

void fun4(std::set<int>& cont1, std::set<int>& cont2)
{
	std::set<int>::iterator i;
	i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
	
	cont2.emplace_hint(i);
	cont2.erase(i);
	cont2.insert(i, i);
	cont1.erase(i);
}

void fun5(std::set<int>& cont1, std::set<int>& cont2)
{
	std::set<int>::iterator i = cont1.begin();
	auto j = cont2.begin();

	if (i != cont1.end())
		cont1.erase(i);

	if (j != cont1.end())
		cont1.erase(j);

	if (i != cont2.end())
		cont2.erase(i);

	if (j != cont2.end())
		cont2.erase(j);
}

void fun6(std::set<int>& cont1, std::set<int>& cont2)
{
	std::set<int>::iterator i = cont1.begin();
	 
	if (i != cont1.end())
		cont2.erase(i);

	std::set<int>::iterator j = cont2.erase(i);

	if (j != cont1.end())
		cont1.erase(j);

	if (j != cont2.end())
		cont2.erase(j);
}

void fun7(std::multiset<int>& cont1, std::multiset<int>& cont2)
{
	std::multiset<int>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

void fun8(std::unordered_multiset<int>& cont1, std::unordered_multiset<int>& cont2)
{
	std::unordered_multiset<int>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}