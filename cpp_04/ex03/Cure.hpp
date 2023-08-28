/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:07:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/27 20:15:34 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{
public :
// CANONICAL FORM
    Cure();
    ~Cure();
    Cure(Cure const &cure);
    Cure& operator=(Cure const &cure);
//REGULAR FUNCTION
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif