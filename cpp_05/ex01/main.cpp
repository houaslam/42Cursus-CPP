/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 18:02:28 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Form form("smtg", 1, 8);
        Bureaucrat bureau("florence", 1);
        form.beSigned(bureau);
        bureau.signForm(form);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}