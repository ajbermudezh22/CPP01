/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:24:04 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/20 13:24:04 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "--- Testing DEBUG level ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "--- Testing INFO level ---" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "--- Testing WARNING level ---" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "--- Testing ERROR level ---" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "--- Testing an invalid level ---" << std::endl;
    harl.complain("SOME_INVALID_LEVEL");
    std::cout << std::endl;

    return (0);
}