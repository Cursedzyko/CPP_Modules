/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:45:57 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/01 14:53:47 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>


class Error : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Element not found!!!\n");
		}
};

template <typename T>
typename T::iterator easyfind(T &src, int num)
{
	typename T::iterator i;
	i = find(src.begin(), src.end(), num);
	if (i == src.end())
		throw Error();
	return (i);
}



#endif