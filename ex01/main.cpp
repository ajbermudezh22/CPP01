/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:24:30 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/20 15:24:30 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i;
	int		N;
	Zombie	*zombies;

	N = 5;
	zombies = zombieHorde(N, "HordeMember");
	if (!zombies)
		return (1);
	i = 0;
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}
