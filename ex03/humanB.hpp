/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humabB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:19:39 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/19 16:19:39 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
        Weapon *Weapon_B;
        std::string _nameB;
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack();
        void setWeapon(Weapon &weapon);

};

#endif