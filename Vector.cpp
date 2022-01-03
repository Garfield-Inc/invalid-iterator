#include "Vector.h"

typedef std::vector<int>::iterator abc;

void some_vector::foo()
{
	abc i = m_cont1.begin();

	if (i != m_cont1.end())
		m_cont2.erase(i);

	bar(m_cont1, m_cont2);
	bar_2(m_cont1, m_cont2, i);
}

void some_vector::bar(std::vector<int>& cont1, std::vector<int>& cont2)
{
	std::vector<int>::iterator i;
	std::vector<int>::iterator j;

	i = m_cont1.begin();
	j = m_cont1.begin();

	if (i != m_cont1.end())
	{
		m_cont1.erase(i);
		m_cont1.erase(j);

		m_cont2.erase(i);
		m_cont2.erase(j);
	}
}

void some_vector::bar_2(std::vector<int>& cont1, std::vector<int>& cont2, std::vector<int>::iterator i)
{
	std::vector<int>::iterator j;

	//i = m_cont1.begin();
	j = m_cont2.begin();

	if (i != m_cont1.end())
	{
		m_cont1.erase(i);
		m_cont1.erase(j);

		m_cont2.erase(i);
		m_cont2.erase(j);
	}
}

void some_vector::funVec()
{
	auto& cont1 = m_cont1;
	auto cont2 = m_cont2;
	cont2 = m_cont2;
	std::vector<int> cont3 = cont2;
	std::vector<int>::iterator k = cont2.begin();
	std::vector<int>::const_iterator l = cont2.begin();

	for (auto i = cont1.begin(); i != cont1.end(); i++)
	{
		cont2.erase(i);
	}

	auto j = cont2.begin();
	j = cont1.begin();

	for (; j != cont2.end(); j++)
	{
		cont2.erase(j);
	}
}
