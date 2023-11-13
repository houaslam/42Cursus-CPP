/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:22 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/13 23:04:53 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#define LIMIT 10

#include <chrono>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <exception>
#include <cstdlib>
#include <iomanip>
#include <deque>
#include <climits>
#include <algorithm>
#include <stdexcept>

template <class T>
class PmergeMe{
  private :
    T holder;  
  public :
    PmergeMe(){
        std::cout << "PmergeMe default constructor called!\n";
    }
    PmergeMe(PmergeMe& org){
        *this = org;
    }
    ~PmergeMe(){
        std::cout << "PmergeMe destructor called!\n";
    }
PmergeMe&   operator=(PmergeMe& org){
    this->holder = org.holder();
}
void add_element(int nb){
    holder.push_back(nb);
}

size_t _size(){
    return holder.size();
}

T copy_vec(int s, int e){
    T res;
    while(s < e)
        res.push_back(this->holder[s++]);
    return res;
}

void    merge_sort(int start, int middle, int end){
    size_t i , j;
    i = j =  0;
    T L = copy_vec(start, middle);
    T R = copy_vec(middle, end);
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

void insert_sort(int s, int e){
    for(int k = s; k + 1< e; k++){
        int value = holder[k + 1];
        int b = k + 1;
        while(b > s && value < holder[b - 1]){
            holder[b] = holder[b - 1];
            b--;
        }
        holder[b] = value;
    }
}

void    affich(int s, int e){
    std::cout << "| ";
    while(s < e){
        std::cout << holder[s++] << " | ";
    }
    std::cout << std::endl;
}

void    sort(int s, int e){
    if(e - s <= LIMIT){
        insert_sort(s, e);
    }
    else{
        int m = (e + s) / 2;
        sort(s, m);
        sort(m , e);
        merge_sort(s, m, e);
    }
     
}
};
#endif 