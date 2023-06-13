/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:53:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/05/30 17:56:52 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip> 
#include <cstring>

class   Contact{
public :
    int     index;
    std::string phone_num;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
};

class   PhoneBook{
    Contact contacts[9];
    public :
    void add(Contact *contacts);
    void search(Contact *contacts);
    Contact    *get_contact(void);
};