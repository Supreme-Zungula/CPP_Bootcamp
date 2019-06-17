#ifndef _SPAN_HPP_
# define _SPAN_HPP_
#include <algorithm>
# include <iostream>
# include <list>

class	Span
{
	public:
	
		Span(void);
		Span( unsigned int );
		Span(Span const &);
		~Span(void);
		
		Span&	operator=(Span const &);

		void			addNumber(int);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			addRange(std::list<int>::iterator, std::list<int>::iterator);
	
		class	NoSpan : public std::exception
		{
			public:
				
				const char	*msg;

				NoSpan(void);
				NoSpan(NoSpan const &);
				~NoSpan(void) throw();

				virtual const char*	what(void) const throw();
				
				NoSpan&	operator=(NoSpan const &);
		};
		
		class	NReached : public std::exception
		{
			public:
				
				const char	*msg;

				NReached(void);
				NReached(NReached const &);
				~NReached(void) throw();

				virtual const char*	what(void) const throw();
				
				NReached&	operator=(NReached const &);
		};
		
	private:
	
		std::list<int> _lst;
		unsigned int	_n;
		unsigned int	_nNum;
};

#endif