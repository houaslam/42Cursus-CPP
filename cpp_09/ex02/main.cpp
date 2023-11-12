/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:25 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/12 17:41:50 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
	{
        std::vector<int> holder;
        std::string nb = av[1];
		int k;

        for(size_t i=0; i < nb.length(); i++)
		{
            k = i;
			if (isdigit(nb[i]))
			{	
            	while(isdigit(nb[i]))
                	i++;
            	holder.push_back(atoi(nb.substr(k, i - k).c_str()));
			}
			else if (nb[i] != 32)
				exit(1);
        }
        sort(holder, 0, holder.size());
        affich(holder, 0, holder.size());
	}
}
