#include "Span.hpp"

Span::Span(int nb) : nb(nb){
	std::cout << "Span parameter constructor called!\n";
}

Span::~Span(){
	std::cout << "Span default destructore called!\n";
}

Span::Span() : nb(0){

}

Span::Span(Span& ref){
	*this = ref;
}

Span& Span::operator=(Span& ref){
	std::cout << "assingnment operator called!\n";
	this->nb = ref.nb;
	return *this;
}

const char *NoSpaceLeft::what(){
	return "nO sPACE LEFT TO ADD ELEMENT\n";
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
	int res;
	unsigned int size = storage.size();
	int k = 0;

	std::vector<int> c(storage);
	std::sort(c.begin(), c.end());
	res = c.at(1) - c.at(0);
	while(k + 1 < size){
		if (c.at(k + 1) - c.at(k) < res)
			res = c.at(k + 1) - c.at(k) ;
		k++;
	}
	return (res);
}

int Span::longestSpan(){
	int res;

	std::vector<int> c(storage);
	std::sort(c.begin(), c.end());
	res = c.at(storage.size() - 1) - c.at(0);
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
