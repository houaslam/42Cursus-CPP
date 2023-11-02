#include "BitcoinExchange.hpp"

void    checkFormat(std::string str){
    std::string format = "0000-00-00 | ";
	int k = 0;
	while(k < 13){
		if ((format[k] == '-' || format[k] == ' ' || format[k] == '|' )){
            if (format[k] != str[k])
			    throw std::runtime_error("date is not valid");
            else
		        format[k] = str[k];
        }
        else if(str[k] >= '0' && str[k] <= '9')
		    format[k] = str[k];
        else{
			throw std::runtime_error("date is not valid");
        }
        k++;
	}
}



int main(int ac, char **av){
    if (ac == 2){
        Bitcoin btc;
        std::string str;
        std::ifstream file;
        file.open(av[1]);

        while(std::getline(file, str, '\n'))
		{
        	try{
        	    checkFormat(str);
        	    btc.fillDate(str);
        	}
        	catch(std::exception &e){
        	    std::cout << e.what() << std::endl;
        	}
			std::cout << "GOOD\n";
        }
		btc.display();
    }
}

/*
2011-01-03 | | 3
2011-01-03 | 3   |
2007-01-01 | 3+3 

*/