/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:18:52 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 10:56:35 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public :
    void makeSound() const;
// DESTRUCTORE && CONSTRUCORE
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat &Wrongcat);
};

#endif
