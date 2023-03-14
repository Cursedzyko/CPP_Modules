/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:51:52 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 14:24:42 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define  CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter 
{
private:
	AMateria *_in[4];
	std::string _name;
public:
	Character(void);
	Character(std::string name);
	~Character();
	Character(const Character& src);
	Character& operator=(const Character& src);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
 	void use(int idx, ICharacter& target);
};

#endif