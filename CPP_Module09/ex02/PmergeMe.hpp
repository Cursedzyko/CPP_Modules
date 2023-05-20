/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:38:59 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/20 13:52:11 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>
# include <ctime>

class PmergeMe
{
private:
	std::vector<int> _vec;
	std::deque<int> _deq;
	int _size;
	bool parseStr(std::string str);
	void insertionSort(int x, int begin, int end);
	void merge(int x, int const l, int m, int const r);
	void insertionSort( int begin, int end);
	void merge(int const l, int m, int const r);
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe & src);
	PmergeMe &operator=(const PmergeMe & src);
	void initVecData(char **av);
	void initDeqData(char **av);
	void displayData(int x);
	void displayData();
	int getSize();
	void mergeSort(int x, int l, int r, int limit);
	void mergeSort(int l, int r, int limit);

	class InvalidEn : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Invalid Entry!!!\n");
		}
	};
};

#endif