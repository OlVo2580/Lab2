#pragma once
#include "Product.h"

class Electronics : public Product{
public:
	Electronics(const Electronics& e);
	Electronics(string n, string c, double pr, int q, int id0, string firm0);

	string getFirm() const; //getter
	void setFirm(const std::string& newFirm) ; //setter
private:

	string firm;
};