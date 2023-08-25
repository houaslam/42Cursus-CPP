/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:07:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 14:14:13 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria{
public :
// ANONICAL FORM
    Ice();
    ~Ice();
    Ice(Ice &ice);
    Ice& operator=(Ice &ice);
//REGULAR FUNCTION
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif