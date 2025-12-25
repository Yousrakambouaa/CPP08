/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:43:15 by ykamboua          #+#    #+#             */
/*   Updated: 2025/12/25 02:39:40 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <climits>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		unsigned int N;
		std::vector<int>numbers;
	public:
		Span();
		Span(unsigned int max);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int n);
		template<typename It>
		void addNumbers(It begin, It end)
		{
			if(numbers.size() + std::distance(begin, end) > N)
				throw(std::runtime_error("cant add more numbers !!"));
			else
				numbers.insert(numbers.end(), begin, end);
		}
		int shortestSpan();
		int longestSpan();
		const std::vector<int>& getNumbers() const;
};

#endif