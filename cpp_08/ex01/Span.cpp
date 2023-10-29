#include "Span.hpp"

Span::Span(unsigned int nb) : nb(nb){
	if(nb < 0)
		throw std::invalid_argument("size should be a positive num");
	std::cout << "Span parameter constructor called!\n";
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
	return *this;
}

const char *Span::NoSpaceLeft::what()const _NOEXCEPT{
	return "No space left";
}

void Span::addNumber(int nb){
	if (this->storage.size() < this->nb)
	{
		this->storage.push_back(nb);
		std::cout << nb << " added successfully\n";
	}
	else 
		throw NoSpaceLeft();
}

int Span::shortestSpan(){
	int res = 0;
	unsigned int size = storage.size();
	unsigned int k = 0;

	if(this->storage.size() < 2)
		throw std::out_of_range("operation can`t be done -> size is to low");
	std::vector<int> c(storage);
	std::sort(c.begin(), c.end());
	res = c[1] - c[0];
	while(k + 1 < size){
		if (c[k + 1] - c[k] < res)
			res = c[k + 1] - c[k] ;
		k++;
	}
	return (res);
}

int Span::longestSpan(){
	int res;

	if(this->storage.size() < 2)
		throw std::out_of_range("operation can`t be done -> size is to low");
	std::vector<int> c(storage);
	std::sort(c.begin(), c.end());
	res = c[storage.size() - 1] - c[0];
	return (abs(res));
}

void Span::addRange(std::vector<int>::iterator& start, std::vector<int>::iterator& end)
{
	while(start != end)
	{
		addNumber(*start);
		start++;
	}
}
