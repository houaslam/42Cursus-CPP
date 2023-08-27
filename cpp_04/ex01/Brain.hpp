/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:08:13 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 19:16:40 by hajarouasla      ###   ########.fr       */
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
    Brain& operator=(Brain &ref);
};

#endif