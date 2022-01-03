#include <map>
#include <unordered_map>

void func1(std::map<int, char>& cont1, std::map<int, char>& cont2)
{
	std::map<int, char>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

void func2(std::unordered_map<int, char>& cont1, std::unordered_map<int, char>& cont2)
{
	std::unordered_map<int, char>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

using mymap = std::map<int, char>;

void func3(mymap& cont1, mymap& cont2)
{
	mymap::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

void func4(std::multimap<int, char>& cont1, std::multimap<int, char>& cont2)
{
	std::multimap<int, char>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}

void func5(std::unordered_multimap<int, char>& cont1, std::unordered_multimap<int, char>& cont2)
{
	std::unordered_multimap<int, char>::iterator i = cont1.find(100);
	if (i != cont1.end())
		cont2.erase(i);
}