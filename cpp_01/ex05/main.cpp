/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:15:24 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/08 17:57:58 by houaslam         ###   ########.fr       */
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
       std::cin >> level;
       if(level.empty())
		break ;
       harl.complain(level);
    }
}
