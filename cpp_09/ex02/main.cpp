/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:25 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/13 23:06:14 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
	{
        PmergeMe<std::vector<int> > v_holder;
        PmergeMe<std::deque<int> > l_holder;
        std::string nb = av[1];
		int k;

        for(size_t i=0; i < nb.length(); i++)
		{
            k = i;
			if (isdigit(nb[i]))
			{	
            	while(isdigit(nb[i]))
                	i++;
            	v_holder.add_element(atoi(nb.substr(k, i - k).c_str()));
            	l_holder.add_element(atoi(nb.substr(k, i - k).c_str()));
			}
			else if (nb[i] != 32)
				exit(1);
        }
		std::cout << "before : ";
        l_holder.affich( 0, l_holder._size());
		// std::cout << "before : ";
        // v_holder.affich( 0, v_holder._size());
		
        v_holder.sort(0, v_holder._size());
        l_holder.sort(0, l_holder._size());
		
		// std::cout << "after :  ";
        // v_holder.affich( 0, v_holder._size());
		std::cout << "after :  ";
        l_holder.affich( 0, l_holder._size());

		// std::cout << "Time to process a range of 5 elements with std::vector : " << << "us";
		// std::cout << "Time to process a range of 5 elements with std::list : " << << "us";
	}
}
