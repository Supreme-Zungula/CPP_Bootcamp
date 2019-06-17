
#include "mutantstack.hpp"

void ft_stackAsString()
{
    MutantStack<std::string>	mstack;
    
    std::cout << mstack.empty() << std::endl;
    mstack.top();
    mstack.push("5");
    mstack.push("17");
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.pop();
    std::cout << mstack.top() << std::endl;
    

    mstack.push("3");
    mstack.push("5");
    mstack.push("737");
    mstack.push("7");
    mstack.push("8");
    mstack.push("9");
    
    MutantStack<std::string>::iterator it = mstack.begin();
    MutantStack<std::string>::iterator ite = mstack.end();
    ++it;
    --ite;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    return ;
}