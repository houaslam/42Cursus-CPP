/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:36:14 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 11:01:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedforlosers.hpp"

int main(int ac, char **av)
{
    std::string line;
    std::string add;
    std::string s1;
    std::string s2;

    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        if (s1.empty())
        {
            std::cout << "ERROR\n";
            exit(1);
        }
        add = ".replace";
        std::ofstream out;
        out.open(av[1] + add);
        std::ifstream file;
        file.open(av[1]);
        if(file.is_open() && out.is_open())
        {
            while (getline(file, line))
                handle_line(line + "\n", s1, s2, out);
            file.close();
        }
        else
            std::cout << "ERROR\n";  
    }
}
