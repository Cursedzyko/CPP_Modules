/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:52:26 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/10 19:09:21 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(char **argv, std::string s)
{
	std::ofstream	outfile;
	int				p;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)s.size(); i++)
	{
		p = s.find(argv[2], i);
		if (p != -1 && p == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << s[i];
	}
	outfile.close();
	return (0);
}

/*ifstream
This data type represents the input file stream and is used to read information from files. */
int main(int argc, char **argv)
{
	char			ch;
	std::ifstream	infile;
	std::string		s;
	if (argc != 4)
	{
		std::cout << "Usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << argv[1] << ":" << " no such file or directory" << std::endl;
		return (1);
	}
	while (!infile.eof() && infile >> std::noskipws >> ch)
		s += ch;
	infile.close();
	return (replace(argv, s));
}