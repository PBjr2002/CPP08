/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-18 11:00:42 by pauberna          #+#    #+#             */
/*   Updated: 2025-03-18 11:00:42 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <math.h>
# include <cmath>
# include <fstream>
# include <list>
# include <vector>
# include <algorithm>

# define RESET "\033[0m"
# define GREEN "\033[1m\033[32m"
# define RED "\033[1m\033[31m"
# define YELLOW "\033[1m\033[33m"

class	IndexNotFoundException : public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("Not Found");
		}
};

template<typename T>
typename T::iterator	easyfind(T &first, int second)
{
	typename	T::iterator	it = find(first.begin(), first.end(), second);
	if (it == first.end())
		throw (IndexNotFoundException());
	return (it);
}

#endif