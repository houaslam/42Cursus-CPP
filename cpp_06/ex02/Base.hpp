/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:22:12 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/19 13:59:41 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <exception>
#include<cstdlib>

class Base{
public :
  virtual ~Base();  
};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif