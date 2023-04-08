/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:43:25 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/08 10:07:09 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T *_arr;
	size_t _n;
public:
	Array(void)
	{
		this->_arr = new T[0];
		this->_n = 0;
	}

	Array(unsigned int n)
	{
		this->_arr = new T[n];
		this->_n = n;
	}

	Array(const Array& src)
	{
		*this = src;
	}

	Array operator=(const Array &src)
	{
		this->_n = src._n;
		this->_arr = new T[src._n];
		if (this->_arr)
			delete [] this->_arr;
		for (size_t i = 0; i < _n; i++)
			this->_arr[i] = src._arr[i];
		return (*this);
	}

	~Array()
	{
		if (this->_arr)
			delete [] this->_arr;
	}

	size_t size(void)
	{
		return (this->_n);
	}

	T &operator[](size_t i)
	{
		if (i > this->_n - 1 || i < 0)
			throw ArrayIndex();
		return this->_arr[i];
	}
	
	class ArrayIndex : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exception: s index is out of bounds\n");
			}
	};
};

#endif