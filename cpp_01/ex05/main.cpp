/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:15:24 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 11:11:29 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
    Harl harl;
    while(1)
    {
       std::cout << "level:";
       std::getline(std::cin, level);
       if (std::cin.eof())
            exit(0);
       harl.complain(level);
    }
}
