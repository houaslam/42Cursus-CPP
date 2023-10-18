/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:59:39 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/18 16:11:13 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data("HELLO\n");
    Data *res;
    uintptr_t nb;
    std::cout << "name = " << data.name << std::endl;
    nb = Serializer::serialize(&data);
    std::cout << "nb = " << nb << std::endl;
    res = Serializer::deserialize(nb);
    std::cout << "res = " << res->name << std::endl;
}