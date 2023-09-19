/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:48:32 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/19 12:00:41 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <exception>


class Invalid : public std::exception{
  const char *what();
};

class ScalarConveter{
public :
  static void method(const char* base);
  ScalarConveter();
  ScalarConveter(ScalarConveter &to_cpy);
  ScalarConveter& operator=(ScalarConveter &to_cpy);
  ~ScalarConveter();
};

#endif