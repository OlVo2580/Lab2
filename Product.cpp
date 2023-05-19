#include <iostream>
#include <string>
#include "Product.h"


Product::Product(const Product& p) : name(p.name), category(p.category), price(p.price), quantity(p.quantity),id(p.id)
{
}

Product::Product(string n, string c, double pr, int q, int id0) : name(n), category(c),price(pr>0 ? pr : 1.0), quantity(q>0 ? q : 1),  id(id0)
{
}
  
string Product:: getName() const {
        return name;
    }

string Product::getCategory() const {
        return category;
    }

    double Product:: getPrice() const {
        return price;
    }

    int Product:: getQuantity() const {
        return quantity;
    }

    int Product:: getId() const {
        return id;
    }

    
    void Product::setName(const std::string& newName) {
        name = newName;
    }

    void Product::setCategory(const std::string& newCategory) {
        category = newCategory;
    }

    void Product::setPrice(double newPrice) {
        price = newPrice;
    }

    void Product::setQuantity(int newQuantity) {
        quantity = newQuantity;
    }

    void Product::setId(int newId) {
        id = newId;
    }

    // Overload operator for name
    bool Product:: operator>(const Product& other) const {
        return name > other.name;
    }

    // Overload equality operator for category
    bool  Product:: operator==(const Product& other) const {
        return category == other.category;
    }

    // Overload operator for price
    bool Product::operator<(const Product& other) const
    {
        return price < other.price;
    }
