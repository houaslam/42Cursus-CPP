/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:18:40 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/01 18:26:10 by houaslam         ###   ########.fr       */
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
	MutantStack(const MutantStack<T, Container>& ref): std::stack<T, Container>(ref){};
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