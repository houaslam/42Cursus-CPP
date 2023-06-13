/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:27 by houaslam          #+#    #+#             */
/*   Updated: 2023/05/31 12:07:05 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <iomanip> 
#include <cstring>

class Zombie{
  std::string name;
  public :
  void announce( void );
  Zombie( std::string name );
  ~Zombie(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );