/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 04:58:18 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/23 21:44:11 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(int ac, char **av)
{
	(void)ac; (void)av;

	std::vector<int>::iterator it;
	std::vector<int> vect;
	vect.push_back(324);
	vect.push_back(-1);
	vect[2] = 0;
	vect.push_back(0);
	vect.push_back(5);
	vect.push_back(7785856);
	std::cout << "vect tyype : =========" << std::endl;
	try
	{
		it = easyfind(vect, -1);
		std::cout << "it value found: " << *it << std::endl;
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << '\n';
	}
	

	std::list<int>::iterator it_list;
	std::list<int> listt;
	listt.push_back(998786);
	listt.push_back(+3);
	listt.push_back(-223);
	std::cout << "\nlist type : =========" << std::endl;
	try
	{
		it_list = easyfind(listt, +3);
		std::cout << "it value found: " << *it_list << std::endl;
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << '\n';
	}

	std::deque<int> deq;
	deq.push_back(100);
	deq.push_back(-200);
	deq.push_back(3056560);

	std::cout << "\ndeque tyype : =========" << std::endl;
	std::deque<int>::iterator it_deq;
	try 
	{
		it_deq = easyfind(deq, -200);
		std::cout << "it value found: " << *it_deq << std::endl;
	}
	catch (std::runtime_error &e) 
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		it_deq = easyfind(deq, 8);
		std::cout << "it value found: " << *it_deq << std::endl;
	}
	catch (std::runtime_error &e) 
	{
		std::cout << e.what() << std::endl;
	}

}