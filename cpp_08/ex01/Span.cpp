#include "Span.hpp"

Span::Span(unsigned long int nb) : nb(nb){
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

void Span::addRange(std::array<int> range, int size){
	int i = 0;
	std::array<int>::iterator pos = this->range.begin();
	
	while(pos != range.end() && i < size && size > 0)
	{
		addNumber(range[i++]);
		pos++;
	}
}


int Span::shortSpan(){
	int res;
	return 1;
}

int Span::LongestSpan(){
	return 0;
}


