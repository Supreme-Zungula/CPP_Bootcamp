
#include <vector>
#include <iostream>
#include <algorithm>

template<typename T>
int		easyfind(T const * container, int const x)
{
	typename std::vector<T> myvector (container,container+9);
	typename std::vector<T>::iterator it;
	it = std::find(myvector.begin(), myvector.end(), x);
	if (it != myvector.end())
		return (0);
	return (-1);
}