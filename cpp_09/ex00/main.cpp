#include "BitcoinExchange.hpp"

bool    checkFormat(std::string str){
    std::string format = "0000-00-00 | ";
	int k = 0;
	while(k < 14){
		if ((format[k] == '-' || format[k] == ' ' || format[k] == '|' ) && format[k] != str[k])
			throw formatNotValid();
		format[k] = str[k];
        k++;
	}
    return true;
}

int main(int ac, char **av){
    if (ac == 2){
        std::string str;
        std::ifstream file;
        file.open(av[1]);
        try{

        while(std::getline(file, str, '\n')){
            checkFormat(str);
            std::cout << "GOOD\n";
        }
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
}