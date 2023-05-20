/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:41:46 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/20 13:59:36 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _size(0)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe & src)
{
	if (src._size == 0)
		this->_size = src._size;
	if (src._size > 0)
	{
		this->_vec = src._vec;
		this->_deq = src._deq;
	}
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src)
{
	if (src._size == 0)
		this->_size = src._size;
	if (src._size > 0)
	{
		this->_vec = src._vec;
		this->_deq = src._deq;
	}
	return (*this);
}

bool PmergeMe::parseStr(std::string str)
{
	if (str.empty())
		return true;
	char *endPtr;
	long nb_long = strtol(str.c_str(), &endPtr, 10);
	if (*endPtr && nb_long == 0 && str.find(".") == std::string::npos)
		return true;
	return false;
}

void PmergeMe::initVecData(char **av)
{
	for(int i = 0; av[i]; i++)
	{
		int tmp;
		tmp = std::atoi(av[i]);
		if (tmp < 0 || parseStr(av[i]))
			throw PmergeMe::InvalidEn();
		else
			this->_vec.push_back(tmp);
	}
	this->_size =this->_vec.size();
}

void PmergeMe::initDeqData(char **av)
{
	for(int i = 0; av[i]; i++)
	{
		int tmp;
		tmp = std::atoi(av[i]);
		if (tmp < 0 || parseStr(av[i]))
			throw PmergeMe::InvalidEn();
		else
			this->_deq.push_back(tmp);
	}
	this->_size =this->_deq.size();
}

void PmergeMe::displayData(int x)
{
	std::vector<int>::iterator it = this->_vec.begin();
	for(int i = 0; it != this->_vec.end(); it++, i++)
	{
		if (this->_size > 5 && i == 4)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
	(void)x;
}

void PmergeMe::displayData()
{
	std::deque<int>::iterator it = this->_deq.begin();
	for(int i = 0; it != this->_deq.end(); it++, i++)
	{
		if (this->_size > 5 && i == 4)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

int PmergeMe::getSize()
{
	return (this->_size);
}

void PmergeMe::mergeSort(int x, int l, int r, int limit)
{
	if (l < r)
	{
		if ((r - l) <= limit)
			insertionSort(x, l, r); // insertion sort of the sub arr or small arr
		else
		{
			int m = (l + r) / 2;
			mergeSort(x, l, m, limit); // divide arr until it is l + m <= limit
			mergeSort(x, m + 1, r, limit); // then divide 2nd part
			merge(x, l, m, r); // merge subarrays
		}
		
	}
}

// suppose 1st elem sorted and start with 2nd
// if 1st is bigger than 2nd, then swap
void  PmergeMe::insertionSort(int x, int begin, int end)
{
	int j, tmp;
	for(int i = begin + 1; i <= end; i++)
	{
		tmp = this->_vec[i];
		j = i - 1;
		while(j >= begin && (this->_vec[j] > tmp))
		{
			this->_vec[j + 1] = this->_vec[j];
			j--;
		}
		this->_vec[j + 1] = tmp;
	}
	(void)x;
}

void PmergeMe::merge(int x, int const l, int m, int const r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for (i = 0; i < n1; i++)
		L[i] = this->_vec[l + i];
	for(j = 0; j < n2; j++)
		R[j] = this->_vec[m + 1 + j];
	
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2){
		if (L[i] <= R[j]){
			this->_vec[k] = L[i];
			i++;
		}
		else {
			this->_vec[k] = R[j];
			j++;
		}
		k++;
	}
	for(; i < n1; i++, k++)
		this->_vec[k] = L[i];
	for(; j < n2; j++, k++)
		this->_vec[k] = R[j];
	(void)x;
}

void PmergeMe::mergeSort(int l, int r, int limit)
{
	if (l < r)
	{
		if ((r - l ) <= limit)
			insertionSort(l, r);
		else
		{
			int m = (l + r) / 2;
			mergeSort(l, m, limit);
			mergeSort(m + 1, r, limit);
			merge(l, m, r);
		}
		
	}
}

void  PmergeMe::insertionSort(int begin, int end)
{
	int j, tmp;
	for(int i = begin + 1; i <= end; i++)
	{
		tmp = this->_deq[i];
		j = i - 1;
		while(j >= begin && (this->_deq[j] > tmp))
		{
			this->_deq[j + 1] = this->_deq[j];
			j--;
		}
		this->_deq[j + 1] = tmp;
	}
}

void PmergeMe::merge(int const l, int m, int const r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for (i = 0; i < n1; i++)
		L[i] = this->_deq[l + i];
	for(j = 0; j < n2; j++)
		R[j] = this->_deq[m + 1 + j];
	
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2){
		if (L[i] <= R[j]){
			this->_deq[k] = L[i];
			i++;
		}
		else {
			this->_deq[k] = R[j];
			j++;
		}
		k++;
	}
	for(; i < n1; i++, k++)
		this->_deq[k] = L[i];
	for(; j < n2; j++, k++)
		this->_deq[k] = R[j];
}