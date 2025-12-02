/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:43:22 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/01 13:46:34 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() :N(0)
{};
Span::Span(unsigned int max) : N(max){};

Span::Span(const Span& other) : N(other.N){};

Span& Span::operator=(const Span& other)
{
	if(this != &other)
		numbers = other.numbers;
	return(*this);
}

Span::~Span(){};

void Span::addNumber(int n)
{
	if(numbers.size() == N)
		throw(std::runtime_error("cant add more numbers !!\n"));
	else
		numbers.push_back(n);
}

int Span::longestSpan()
{
	if(numbers.size() < 2)
		throw(std::runtime_error("not enooought nmbrs\n"));
	int max = *std::max_element(numbers.begin(), numbers.end());
	int min = *std::min_element(numbers.begin(), numbers.end());
	
	return(max - min);
}

int Span::shortestSpan()
{
	if(numbers.size() < 2)
		throw(std::runtime_error("not enooought nmbrs\n"));
	
	std::vector<int> temp = numbers;
	std::sort(temp.begin() , temp.end());
	int diff;
	int shortest = INT_MAX;
	for(size_t i = 0 ; i < temp.size() -1 ; i++)
	{
		diff = temp[i + 1] - temp[i];
		if(diff < shortest)
			shortest = diff;
	}
	return (shortest);
}


const std::vector<int>& Span::getNumbers() const
{
	return (numbers);	
}
