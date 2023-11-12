/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/12 18:45:52 by houaslam         ###   ########.fr       */
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

std::vector<int> copy_vec(std::vector<int> holder, int s, int e){
    std::vector<int> res;
    while(s < e){
        res.push_back(holder[s++]);
    }
    return res;
}

void    merge_sort(std::vector<int>& holder, int start, int middle, int end){
    size_t i , j, k;
    i = j = k = 0;
    // std::cout << "the whole array ";
    // affich(holder, start, end); 
    std::vector<int> L = copy_vec(holder, start, middle);
    std::vector<int> R = copy_vec(holder, middle, end);
    std::cout << "left ";
    affich(L, 0, L.size());
    std::cout << "right ";
    affich(R, 0, R.size());
    while(i < L.size() && j < R.size()){
        // std::cout << "LEFT = " << L[i] << " right = " << R[i] << std::endl;
        if (L[i] <= R[j]){
            holder[k] = L[i];
            i++;
        }
        else{
            holder[k] = R[j];
            j++;
        }
    }
}

// void insert_sort(std::vector<int>&array, int s, int e){
// }

void    affich(std::vector<int>& array, int s, int e){
    std::cout << "| ";
    // std::cout << "start = " << s << " end = " << e<< "--- | ";
    while(s < e){
        std::cout << array[s++] << " | ";
    }
    std::cout << std::endl;
}

void    sort(std::vector<int>&array, int s, int e){
    if(e - s <= 2){
        return ;
        // insert_sort(array, s, e);
    }
    else{
        affich(array, s, e);
        int m = (e + s) / 2;
        sort(array, s, m);
        sort(array, m , e);
        merge_sort(array, s, m, e);
    }
     
}