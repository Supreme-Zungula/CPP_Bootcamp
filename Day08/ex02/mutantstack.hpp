
#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <list>
#include <stack>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void) : std::stack<T>() {}
		MutantStack<T>(MutantStack<T> const & src) : std::stack<T>(src)
		{
			*this = src;
			return ;
		}
		~MutantStack<T>(void) { return ; }
		MutantStack<T>&	operator=(MutantStack<T> const & rhs)
		{
			if (this!=rhs)
				_lst = rhs.lst;
			return *this;
		}
		typedef typename std::list<T>::iterator iterator;
		
		iterator	begin(void) { return _lst.begin(); }
		iterator	end(void) { return _lst.end(); }
		void		pop(void) { _lst.pop_back(); }
		void		 ush(T const & x) { _lst.push_back(x); }
		T&			top(void) { return _lst.back(); }
		size_t		size() const { return _lst.size(); }
		bool		empty(void) { return ((_lst.size() == 0) ? true : false); }
		
	private:
	
		std::list<T> _lst;
};

void	ft_stackAsString();

#endif