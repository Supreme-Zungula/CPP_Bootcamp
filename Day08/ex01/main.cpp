
#include "span.hpp"
#include <vector>

int		main(void)
{
	Span sp = Span(5);
	int		i = -1;

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
/*						EXCEEDING N										  	  */
	try
	{
		Span alot = Span(10000);
		while (++i < 10001)
		{
			alot.addNumber(i+10);
		}
			alot.addNumber(i+10);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
/*						EXCEEDING N										  	  */
	try
	{
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
/*						TRYING TO FIND A SPAN WITH N=0					  	  */
	try
	{
		Span s(0);
		std::cout << s.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
/*						TRYING TO FIND A SPAN WITH N=0					  	  */
	try
	{
		Span s1(0);
		std::cout << s1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
/*						ADDING BY RANGE									  	  */
	try
	{
		 std::list<int> mylist;
		
		for (int i=1; i<=11; ++i) mylist.push_back(i);
		Span range = Span(10);
		range.addRange(mylist.begin(), mylist.end());
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	
	return (0);
}