/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:22 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/12 17:24:20 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#define LIMIT 10

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <exception>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <stdexcept>

// void insert_sort(std::vector<int>& small, std::vector<int>& big);
void    affich(std::vector<int>& array, int s, int e);
void    sort(std::vector<int>&array, int s, int e);
void    merge_sort(std::vector<int>& holder, int start, int middle, int end);
#endif 