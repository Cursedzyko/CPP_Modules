/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:32:30 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/21 17:17:35 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _value;
	static const int _fracBits;

public:
	Fixed(void);
	Fixed(const Fixed& copy);
	Fixed &operator = (const Fixed& src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif