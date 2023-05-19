#include <iostream>
#include "Product.h"
#include "Electronics.h"

Electronics::Electronics(const Electronics& e) : Product(e), firm(e.firm)
{
}

Electronics::Electronics(string n, string c, double pr, int q, int id0, string firm0) : Product(n, c, pr, q, id0),
firm(firm0)
{
}
string Electronics :: getFirm() const {
    return firm;
}

void Electronics::setFirm(const std::string& newFirm) 
{
    firm = newFirm;
}


