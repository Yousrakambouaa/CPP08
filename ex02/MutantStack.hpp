/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:17:25 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/03 00:55:41 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() : std::stack<T>(){};
		MutantStack(const MutantStack& other) : std::stack<T>(other){};
		~MutantStack(){};
		MutantStack& operator=(const MutantStack& other)
		{
			if(this != &other)
			{
				std::stack<T>::operator=(other);
			}
			return(*this);
		};
		
		typedef typename std::stack<T>::container_type::iterator it;
		it begin()
		{
			return(this->c.begin());
		};
		it end()
		{
			return(this->c.end());
		};
};


#endif