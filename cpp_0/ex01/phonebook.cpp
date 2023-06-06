 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:48:46 by houaslam          #+#    #+#             */
/*   Updated: 2023/05/27 21:11:57 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact    *PhoneBook::get_contact(void)
{
    return(contacts);
}

std::string check(std::string  str)
{
    if(str.length() > 9)
    {
        str = str.substr(0, 8);
        str += ".";
    }
    return(str);
}

void    PhoneBook::add(Contact *phone)
{
    std::string str;
    static int k;
    if (k == 8)
        k = 0;
    while(1)
    {
        std::cout << "phone number :";
        std::cin >> str;
        phone[k].phone_num = check(str);
        std::cout << "first name :";
        std::cin >> str;
        phone[k].first_name = check(str);
        std::cout << "last name :";
        std::cin >> str;
        phone[k].last_name = check(str);
        std::cout << "nickname :";
        std::cin >> str;
        phone[k].nickname = check(str);
        std::cout << "darkest secret :";
        std::cin >> str;
        phone[k].darkest_secret = check(str);
        phone[k].index = k + 1;
        k++;
        break;
    }
}

void    PhoneBook::search(Contact *phone)
{
	int k = 0;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	while(k < 8)
	{
		std::cout << std::setw(10);
		std::cout << phone[k].index << "|";
		std::cout << std::setw(10);
		std::cout << phone[k].first_name << "|";
		std::cout << std::setw(10);
		std::cout << phone[k].last_name << "|";
		std::cout << std::setw(10);
		std::cout << phone[k].nickname << "|" << std::endl;
		k++;
	}
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::string command;
        PhoneBook phone;
        Contact *contacts = phone.get_contact();
        while(1)
        {
            std::cout << "COMMAND :";
            std::cin >> command;
            if (command == "ADD")
                phone.add(contacts);
            else if (command == "SEARCH")
                phone.search(contacts);
            else if (command.compare("EXIT") == 0)
                break ;
        }
    }
}