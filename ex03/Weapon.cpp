/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:20:06 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/19 16:20:06 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(std::string type)
{
    _type = type;
}
