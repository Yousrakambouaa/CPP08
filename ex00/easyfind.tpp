/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 04:39:54 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/23 21:41:36 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
template <typename T>
typename T::iterator easyfind(T& containner, int val)
{
	typename T::iterator it;
	it = std::find(containner.begin(), containner.end(), val);
	if(it == containner.end())
		throw std::runtime_error("noot found !\n");
	// else
	// 	std::cout << "iter found value :" << *it << std::endl;
	return (it);
}

template <typename T>
typename T::iterator easyfind(const T& containner, int val)
{
	typename T::const_iterator it;
	it = std::find(containner.begin(), containner.end(), val);
	if(it == containner.end())
		throw std::runtime_error("noot found !\n");
	// else
	// 	std::cout << "iter found value :" << *it << std::endl;
	return (it);
}