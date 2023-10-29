/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:18:40 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/29 13:00:10 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
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
	typedef typename Container::iterator iterator;
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
};

#endif