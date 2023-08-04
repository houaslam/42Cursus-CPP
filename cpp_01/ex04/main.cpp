/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:36:14 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 10:01:12 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedforlosers.hpp"

int main(int ac, char **av)
{
    std::string line;
    std::string add;
    std::ofstream out;
    std::ifstream file;

    if (ac == 4)
    {
        if (av[2][0] == '\0')
        {
            std::cout << "ERROR\n";
            exit(1);
        }
        add = ".replace";
        out.open(av[1] + add);
        if (!out.is_open())
            return (1);
        file.open(av[1]);
        if (!file.is_open())
            return (1);
        if(file.is_open() && out.is_open())
        {
            while (getline(file, line))
                handle_line(line + "\n", av[2], av[3], out);
            file.close();
            out.close();
        }
        else
        {
            std::cout << "ERROR\n";  
            return (1);
        }
    }
    return (0);
}
