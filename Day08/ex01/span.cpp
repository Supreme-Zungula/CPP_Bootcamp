#include "span.hpp"

Span::Span(void) : _n(0), _nNum(0) { return ; }

Span::Span(unsigned int n) : _n(n), _nNum(0) { return ; }

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span::~Span(void) { return ; }

Span&	Span::operator=(Span const &rhs)
{
	if (this!=&rhs)
	{
		_n = rhs._n;
		_nNum = rhs._nNum;
	}
	return *this;
}

void	Span::addNumber(int x)
{
	if (_nNum++ < _n)
		_lst.push_back(x);
	else
		throw	NReached();
	return ;
}

unsigned int	Span::shortestSpan(void)
{
	int diff = 0, min = *std::max_element(_lst.begin(), _lst.end());
	if (_n > 1)
	{
		std::list<int> tmp = _lst;
		tmp.sort();
		std::list<int> tmp1 = tmp;
		std::list<int>::const_iterator	i = tmp.begin();
		std::list<int>::const_iterator	l = tmp1.begin();
		i++;
		while (i != tmp.end() && l != tmp1.end())
		{
			diff = abs(*i - *l);
			if (diff < min)
				min = diff;
			i++;
			l++;
		}
	}
	else
		throw	NoSpan();
	
	return min;
}

unsigned int	Span::longestSpan(void)
{
	int min = 0, max = 0;
	if (_n > 1)
	{
		min = *std::min_element(_lst.begin(),_lst.end());
		max = *std::max_element(_lst.begin(), _lst.end());
	}
	else
		throw	NoSpan();
	return (max - min);
}

void			Span::addRange(std::list<int>::iterator first, std::list<int>::iterator last)
{
	while(first!=last)
	{
		addNumber(*first);
		std::cout << "The number "<< *first << " has been added! " << std::endl;
		first++;
	}
	return ;
}

/*						NO SPAN EXCEPTION								  	  */
Span::NoSpan::NoSpan(void) : msg("There is no span to find") { return ; }
Span::NoSpan::NoSpan(NoSpan const & src)
{
	*this = src;
	return ;
}

Span::NoSpan::~NoSpan(void) throw() { return ; }

const char*	Span::NoSpan::what(void) const throw() { return msg; }

Span::NoSpan&	Span::NoSpan::operator=(NoSpan const & rhs)
{
	if (this!= &rhs)
		msg = rhs.msg;
	return *this;
}

/*						N REACHED  EXCEPTION								  */
Span::NReached::NReached(void) : msg("Max has been reached!") { return ; }
Span::NReached::NReached(NReached const & src)
{
	*this = src;
	return ;
}

Span::NReached::~NReached(void) throw() { return ; }

const char*	Span::NReached::what(void) const throw() { return msg; }

Span::NReached&	Span::NReached::operator=(NReached const & rhs)
{
	if (this!= &rhs)
		msg = rhs.msg;
	return *this;
}

/* ************************************************************************** */