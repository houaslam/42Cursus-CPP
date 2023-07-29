/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:15:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 15:55:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]\n";
    std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
    info();
}

void Harl::info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
    warning();
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
    error();
}

void Harl::error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain( std::string level )
{
    Harl harl;

    void    (Harl::*d_ptr)(void) = &Harl::debug;
    void    (Harl::*i_ptr)(void) = &Harl::info;
    void    (Harl::*w_ptr)(void) = &Harl::warning;
    void    (Harl::*e_ptr)(void) = &Harl::error;
    void    (Harl::*ptr[4])() = {d_ptr ,i_ptr ,w_ptr ,e_ptr};
    std::string strings[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;
    while(++i < 4)
    {
        if (level.compare(strings[i]) == 0)
            break;
    }
    switch (i)
    {
        case 0:
            (harl.*d_ptr)();
            break ;
        case 1:
            (harl.*i_ptr)();
            break ;
        case 2 :
            (harl.*w_ptr)();
            break ;
        case 3 :
            (harl.*e_ptr)();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            
    }
}
