#ifndef BITCOINEXCHANGR_HPP
#define BITCOINEXCHANGR_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>
#include <stdexcept>


class Bitcoin{
    private :
        std::map<std::string, int> holder;
    public :
    // CANONICAL FORM
    Bitcoin();
    ~Bitcoin();
    Bitcoin(Bitcoin& org);
    Bitcoin& operator=(Bitcoin& org);


    // REGULAR FUNCTION
    void    checkFormat(std::string str);
    void    fillDate(std::string str);
	void	display(void);

};


#endif