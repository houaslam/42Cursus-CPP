/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:53:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/02 12:00:02 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip> 
#include <cstring>

class   Contact{
private :
    int     index;
    std::string phone_num;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
public :
    void    set_it(std::string str, int k);
    void    set_i(int i);
    void    check(std::string  str, int k);
    void    display(void);
};

class   PhoneBook{
    private : 
        Contact contacts[9];
    public :
        void search(Contact *contacts);
        void add(Contact *contacts);
        Contact    *get_contact(void);
};