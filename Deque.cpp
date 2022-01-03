#include <deque>

void fun9(std::deque<int>& cont1, std::deque<int>& cont2)
{
	std::deque<int>::iterator i = cont1.begin();
	if (i != cont1.end())
		cont2.erase(i);
}