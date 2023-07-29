/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:48:46 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/13 12:24:34 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contact::set_it(std::string str, int c)
{
    if(c == 1)
        phone_num = str;
    else if (c == 2)
        first_name = str;
    else if (c == 3)
        last_name = str;
    else if (c == 4)
        nickname = str;
    else if (c == 5)
        darkest_secret = str;
        
}

void    Contact::set_i(int c)
{
    index = c;       
}

Contact    *PhoneBook::get_contact(void)
{
    return(contacts);
}

void Contact::check(std::string  str, int k)
{
    if (std::cin.eof())
        exit(0);
    if(str.length() > 9)
    {
        str = str.substr(0, 8);
        str += ".";
    }
    set_it(str, k);
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
        std::getline(std::cin, str);
        phone[k].check(str, 1);
        std::cout << "first name :";
        std::getline(std::cin, str);
        phone[k].check(str, 2);
        std::cout << "last name :";
        std::getline(std::cin, str);
        phone[k].check(str, 3);
        std::cout << "nickname :";
        std::getline(std::cin, str);
        phone[k].check(str, 4);
        std::cout << "darkest secret :";
        std::getline(std::cin, str);
        phone[k].check(str, 5);
        phone[k].set_i(k + 1);
        k++;
        break;
    }
}

void    Contact::display(void)
{
    if (this->index != 0)
    {
		std::cout << std::setw(10);
		std::cout << this->index << "|";
		std::cout << std::setw(10);
		std::cout << this->first_name << "|";
		std::cout << std::setw(10);
		std::cout << this->last_name << "|";
		std::cout << std::setw(10);
		std::cout << this->nickname << "|" << std::endl;
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
        phone[k].display();
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
            std::getline(std::cin, command);
            if (std::cin.eof())
                exit(0);
            else if (command == "ADD")
                phone.add(contacts);
            else if (command == "SEARCH")
                phone.search(contacts);
            else if (command.compare("EXIT") == 0)
                exit(0) ;
        }
    }
}