/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/07 08:53:34 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
// MERGE SORT
// VECTOR VERSION

// void    merge(std::vector<int>& holder){
    
// }


// INSERT SORT

void swap(int& a, int &b){
    int tp = b;
    b = a;
    a = tp;
}

void insert(std::vector<int>& small, std::vector<int>& big){
    for(size_t i=0; i <small.size(); i++){
        big.insert(big.lower_bound(big.begin(), big.end() ,small[i]), small[i]);
        // big.insert(big.lower_bound(small[i]), small[i]);
    }
}

