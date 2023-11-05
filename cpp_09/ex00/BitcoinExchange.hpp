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
#include <algorithm>
#include <stdexcept>
#include <string>


class Bitcoin{
    private :
        std::map<std::string, double> holder;
    public :
    // CANONICAL FORM
    Bitcoin();
    ~Bitcoin();
    Bitcoin(Bitcoin& org);
    Bitcoin& operator=(Bitcoin& org);


    // REGULAR FUNCTION
    void    fillData();
	void	display(void);
    void    checkValue(std::string str);

};


#endif