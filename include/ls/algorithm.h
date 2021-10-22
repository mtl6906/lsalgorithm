#ifndef LS_ALGORITHM_H
#define LS_ALGORITHM_H

#include "vector"

namespace ls
{
	template<class T>
	int size(std::vector<T> &v)
	{
		int length = 0;
		for(auto &i : v)
		length += i.size();
		return length;
	}
}

#endif
