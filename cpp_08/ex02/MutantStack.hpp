/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:18:40 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/25 20:26:02 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>{
	public :
	MutantStack(){};
	~MutantStack(){};
	MutantStack(MutantStack& ref){
		*this = ref;
	};
	MutantStack& operator=(MutantStack& ref){
		this->c = ref.c;
		return *this;
	};
	typedef typename std::deque<T>::iterator iterator;
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
};

#endif