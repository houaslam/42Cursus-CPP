/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:08:13 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 18:15:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
private :
    std::string ideas[100];
public :
    //DESTRUCTOR && CONSTRUCTOR
    Brain();
    ~Brain();
    Brain(Brain &ref);
};

#endif