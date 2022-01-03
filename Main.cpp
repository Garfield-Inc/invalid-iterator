#include "Vector.h"

int main()
{
	some_vector vec;

	std::vector<int>::iterator i = vec.m_cont1.begin();

	vec.m_cont2.erase(i);
	vec.m_cont1.erase(i);

	std::vector<int>::iterator j = vec.m_cont2.erase(i);
	j = vec.m_cont2.erase(i);

	vec.m_cont1.erase(j);
	vec.m_cont2.erase(j);

	return 0;
}