/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:25 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/07 06:50:19 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>


template <typename T>
void swap (T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	return (a > b) ? b : a;
}

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

#endif