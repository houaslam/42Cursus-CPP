/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:59:39 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/18 19:04:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data("HELLO\n");
    Data *res;
    std::cout << "name = " << data.name << std::endl;
    res = Serializer::deserialize(Serializer::serialize(&data));
    std::cout << "res = " << res->name << std::endl;
}