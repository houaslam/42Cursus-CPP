#include "Span.hpp"

Span::Span(int nb){
	this->nb = 0;
	if (nb < 0){
		std::cout << "size should be positive\n";
	}
	else{
		this->nb = nb;
		std::cout << "Span parameter constructor called with size: " << nb << std::endl;
	}
}

Span::~Span(){
	std::cout << "Span default destructore called!\n";
}

Span::Span() : nb(0){

}

Span::Span(const Span& ref){
	*this = ref;
}

Span& Span::operator=(const Span& ref){
	std::cout << "assingnment operator called!\n";
	this->nb = ref.nb;
	this->storage = ref.storage;
	return *this;
}

void Span::addNumber(long int nb){
	if (this->storage.size() < this->nb)
	{
		this->storage.push_back(nb);
		std::cout << nb << " added successfully\n";
	}
	else{
		std::cout << "no space left\n";
	}
}

int Span::shortestSpan(){
	int res = 0;
	unsigned int size = storage.size();
	unsigned int k = 0;

	if(this->storage.size() < 2)
	{
		std::cout << "operation can`t be done -> size is to low\n";
		return -1;
	}
	std::vector<unsigned int> c(storage);
	std::sort(c.begin(), c.end());
	res = c[1] - c[0];
	while(k + 1 < size){
		if (c[k + 1] - c[k] < (unsigned int)res)
			res = c[k + 1] - c[k] ;
		k++;
	}
	return (res);
}

int Span::longestSpan(){
	int res;

	if(this->storage.size() < 2)
	{
		std::cout << "operation can`t be done -> size is to low\n";
		return -1;
	}
	std::vector<unsigned int> c(storage);
	std::sort(c.begin(), c.end());
	res = c[storage.size() - 1] - c[0];
	return (res);
}

void Span::addRange(std::vector<int>::iterator& start, std::vector<int>::iterator& end)
{
	while(start != end)
	{
		addNumber(*start);
		start++;
	}
}
