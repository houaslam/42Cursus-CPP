#include "BitcoinExchange.hpp"

void    checkFormat(std::string str){
    std::string format = "0000-00-00 | ";
	int k = 0;
	while(k < 13){
		if ((format[k] == '-' || format[k] == ' ' || format[k] == '|' )){
            if (format[k] != str[k])
			    throw formatNotValid();
            else
		        format[k] = str[k];
        }
        else if(str[k] >= '0' && str[k] <= '9')
		    format[k] = str[k];
        else{
			throw dateNotValid();
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

        while(std::getline(file, str, '\n')){
        try{
            checkFormat(str);
            btc.fillDate(str);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        }
    }
}