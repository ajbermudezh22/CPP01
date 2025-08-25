/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:19:43 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/19 16:19:43 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _nameA(name), _Weapon_A(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << _nameA << " attacks with their " << _Weapon_A.getType() << std::endl;
}
