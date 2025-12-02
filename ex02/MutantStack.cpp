/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:35:43 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/03 00:44:03 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
};
template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{
};
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if(this != &other)
		std::stack<T>::operator=(other);
	return(*this);
};

template<typename T>
MutantStack<T>::~MutantStack(){};


template<typename T>
typename MutantStack<T>::it MutantStack<T>::begin()
{
	return(this->c.begin());
}

template<typename T>
typename MutantStack<T>::it MutantStack<T>::end()
{
	return(c.end());
}