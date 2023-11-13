/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/13 17:01:59 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
// MERGE SORT
// VECTOR VERSION
// INSERT SORT

std::vector<int> copy_vec(std::vector<int> holder, int s, int e){
    std::vector<int> res;
    while(s < e)
        res.push_back(holder[s++]);
    return res;
}

void    merge_sort(std::vector<int>& holder, int start, int middle, int end){
    size_t i , j;
    i = j =  0;
    std::vector<int> L = copy_vec(holder, start, middle);
    std::vector<int> R = copy_vec(holder, middle, end);
    while(i < L.size() && j < R.size()){
        if (L[i] <= R[j])
            holder[start] = L[i++];
        else
            holder[start] = R[j++];
        start++;
    }
    while (i < L.size())
        holder[start++] = L[i++];
    while (j < R.size())
        holder[start++] = R[j++];
}

void insert_sort(std::vector<int>&array, int s, int e){
    for(int k = s; k + 1< e; k++){
        int value = array[k + 1];
        int b = k + 1;
        while(b > s && value < array[b - 1]){
            array[b] = array[b - 1];
            b--;
        }
        array[b] = value;
    }
}

void    affich(std::vector<int>& array, int s, int e){
    // std::cout << "| ";
    while(s < e){
        std::cout << array[s++] << "  ";
    }
    std::cout << std::endl;
}

void    sort(std::vector<int>&array, int s, int e){
    if(e - s <= LIMIT){
        insert_sort(array, s, e);
    }
    else{
        int m = (e + s) / 2;
        sort(array, s, m);
        sort(array, m , e);
        merge_sort(array, s, m, e);
    }
     
}