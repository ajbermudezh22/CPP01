/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:19:46 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/19 16:19:46 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
    private:
        Weapon &_Weapon_A;
        std::string _nameA;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void attack();
};

#endif