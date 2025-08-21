/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:24:44 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/20 15:24:44 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		i;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	i = 0;
	while (i < N)
	{
		std::string uniqueName = name + "_"  + std::to_string(i + 1);
		zombies[i].setName(uniqueName);
		i++;
	}
	return (zombies);
}
