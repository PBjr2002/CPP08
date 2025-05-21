/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-18 11:00:30 by pauberna          #+#    #+#             */
/*   Updated: 2025-03-18 11:00:30 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vector;
	vector.push_back(42);
	vector.push_back(43);
	vector.push_back(44);

	std::vector<int>::iterator	iterator = vector.end();

	try
	{
		iterator = ::easyfind(vector, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (iterator != vector.end())
		std::cout<<"Found "<<*iterator<<std::endl;
	iterator = vector.end();
	
	try
	{
		iterator = ::easyfind(vector, 41);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (iterator != vector.end())
		std::cout<<"Found "<<*iterator<<std::endl;
	iterator = vector.end();
	
	try
	{
		iterator = ::easyfind(vector, 44);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (iterator != vector.end())
		std::cout<<"Found "<<*iterator<<std::endl;
	iterator = vector.end();

	try
	{
		iterator = ::easyfind(vector, 45);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (iterator != vector.end())
		std::cout<<"Found "<<*iterator<<std::endl;
	iterator = vector.end();
	
	return (0);
}
