
#include "mutantstack.hpp"

int	main()
{
	 MutantStack<int>	mstacks;
    
    std::cout << mstacks.empty() << std::endl;
    mstacks.push(5);
    mstacks.push(17);
    std::cout << mstacks.top() << std::endl;
    std::cout << mstacks.size() << std::endl;
    mstacks.pop();
    std::cout << mstacks.top() << std::endl;
    

    mstacks.push(3);
    mstacks.push(5);
    mstacks.push(737);
    mstacks.push(7);
    mstacks.push(8);
    mstacks.push(9);
    
    MutantStack<int>::iterator it = mstacks.begin();
    MutantStack<int>::iterator ite = mstacks.end();
    ++it;
    --ite;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
	ft_stackAsString();
	return (0);
}