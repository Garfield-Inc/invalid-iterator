#pragma once

#include <vector>

class some_vector
{
public:
	std::vector<int> m_cont1;
	std::vector<int> m_cont2;
	
	void foo();
	void bar(std::vector<int>& cont1, std::vector<int>& cont2);
	void bar_2(std::vector<int>& cont1, std::vector<int>& cont2, std::vector<int>::iterator i);
	void funVec();
};
