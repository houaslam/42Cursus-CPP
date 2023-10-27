#include "BitcoinExchange.hpp"


void checkDate(std::string str){
    std::string year = str.substr(0, 4);
    std::string month = str.substr(5, 2);
    std::string day = str.substr(8, 2);
    std::atoi(year.c_str());
    std::atoi(month.c_str());
    std::atoi(day.c_str());
}

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
        std::string str;
        std::ifstream file;
        file.open(av[1]);

        while(std::getline(file, str, '\n')){
        try{
            checkFormat(str);
            checkDate(str);
            std::cout << "GOOD\n";
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        }
    }
}