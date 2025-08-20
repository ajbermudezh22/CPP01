/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:19:50 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/19 16:19:50 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _nameB(name), Weapon_B(NULL)
{

}

HumanB::~HumanB()
{

}


void HumanB::attack()
{
    if (Weapon_B != NULL)
        std::cout << _nameB << " attacks with their " << Weapon_B->getType() << std::endl;
    else
        std::cout << _nameB << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    Weapon_B = &weapon;
}