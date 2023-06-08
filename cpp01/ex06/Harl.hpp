/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:15:34 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/08 15:36:23 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Harl{
  private :
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    
  public :
    void    complain( std::string level );
};


    // Harl harl;

    // void    (Harl::*d_ptr)(void) = debug;
    // void    (Harl::*i_ptr)(void) = info;
    // void    (Harl::*w_ptr)(void) = warning;
    // void    (Harl::*e_ptr)(void)= &Harl::error;
    // (harl.*e_ptr)();
    // // void (Harl::*tab)[] = {&d_ptr ,&i_ptr ,&w_ptr ,&e_ptr};
    // // std::string