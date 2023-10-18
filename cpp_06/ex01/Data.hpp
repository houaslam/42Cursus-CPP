/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:29:00 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/18 15:51:26 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdlib.h>
#include <exception>

struct Data{
public:
    std::string name;
//CANONICAL FORM
    Data(std::string name);
    Data();
    Data& operator=(Data& src);
    Data(Data& data);
    ~Data();
};

#endif