/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:15:34 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/08 19:19:54 by houaslam         ###   ########.fr       */
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
