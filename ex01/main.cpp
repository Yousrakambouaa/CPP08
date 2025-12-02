/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:53:44 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/01 13:51:35 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Span.hpp"

int main()
{
	Span sp = Span(5);
	Span sp2 = Span(12);
	Span sp3 = Span(20);
	int arr[] = {67, 4343, -17, 9, 0, 11};

	std::cout << "=============sp============================" << std::endl;
	try
	{
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(121);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "=============sp2 withh add iters============================" << std::endl;
	try
	{
		sp2.addNumbers(arr, arr+5);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "===================sp witch vect======================" << std::endl;
	try 
	{
		std::vector<int> vect;
		vect.push_back(32353242);
		vect.push_back(4);
		vect.push_back(5);
		vect.push_back(-0);
		sp2.addNumbers(vect.begin(), vect.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "===============itt of sp==========================" << std::endl;
	try 
	{
		sp3.addNumbers(sp.getNumbers().begin(), sp.getNumbers().end());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "===============listt==========================" << std::endl;
	try
	{
		std::vector<int> listt;
		listt.push_back(312);
		listt.push_back(-1);
		listt.push_back(0);
		listt.push_back(546899999);
		sp3.addNumbers(listt.begin(), listt.end());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}