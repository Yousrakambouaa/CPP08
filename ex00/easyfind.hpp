/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 04:23:02 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/25 01:29:55 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& containner, int val);

template<typename T>
typename T::const_iterator easyfind(const T& containner, int val);
#include "easyfind.tpp"
#endif

