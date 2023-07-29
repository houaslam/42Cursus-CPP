/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedforlosers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:36:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 11:04:15 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedforlosers.hpp"

void    handle_line(std::string line, std::string s1, std::string s2, std::ofstream& out)
{
    int b = 0;
    size_t k = 0;
    size_t i = line.find(s1);

    if ( i > line.size())
    {
        out << line;
        return ;
    }
    while(1)
    {
        out << line.substr(0 , i);
        out << s2;
        i += s1.size();
        line = line.substr(i, line.size() - i);
        if ( line.find(s1) > line.size())
        {
            out << line;
            break;
        }
        i = line.find(s1);
        b++;
    }
}
