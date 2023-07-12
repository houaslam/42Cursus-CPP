/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:05:26 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/22 16:05:41 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

std::ostream &Fixed::operator<<( std::ostream &output, const Fixed &D ) { 
        std::cout << D.getRawBits();
         return output;            
      }
int main()