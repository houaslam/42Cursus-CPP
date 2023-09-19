/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:22:12 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/19 15:22:20 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
// #include <stdlib.h>

Base::~Base(){
    // std::cout << "Base Default Destructore id called!" << std::endl;
}

Base * generate(void){
  int i = rand()%10;

  std::cout << "i = " << i << std::endl;
  if (i%2 == 0)
  {
    std::cout << "A\n";
    return new A;
  }
  else if (i%5 == 0)
  {
    std::cout << "B\n";
    return new B;
  }
  std::cout << "C\n";
  return new C;
}

void identify(Base* p){
  if (dynamic_cast<A *>(p))
    std::cout <<"It s A type!\n";
  else if (dynamic_cast<B *>(p))
    std::cout <<"It s B type!\n";
  else if (dynamic_cast<C *>(p))
    std::cout <<"It s C type!\n";
  else
    std::cout << "The type cannot be identified!\n";
}

void identify(Base& p){
  try{
    dynamic_cast<A &>(p);
    std::cout <<"It s a type!\n";
  }
  catch(std::bad_cast){
    std::cout << "";
  }
  try{
    dynamic_cast<B &>(p);
    std::cout <<"It s b type!\n";
  }
  catch(std::bad_cast){
    std::cout << "";
  }
  try{
    dynamic_cast<C &>(p);
    std::cout <<"It s c type!\n";
  }
  catch(std::bad_cast){
    std::cout << "";
  }
}
