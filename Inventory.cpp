#include <iostream>
#include <algorithm>
#include "Inventory.h"


void Inventory::addProduct(const Product& product) 
{
    products.push_back(product);
}

void Inventory::removeProduct(int productId) 
{
    products.erase(
        remove_if(products.begin(), products.end(),
            [&](const Product& p) { return p.getId() == productId; }),
        products.end()
    );
}

vector<Product> Inventory::searchByName(const string& productName) const 
{
    vector<Product> foundProducts;

    for (const Product& p : products) {
        if (p.getName() == productName) {
            foundProducts.push_back(p);
        }
    }

    return foundProducts;
}

vector<Product> Inventory::searchByCategory(const string& category) const 
{
    vector<Product> foundProducts;

    for (const Product& p : products) {
        if (p.getCategory() == category) {
            foundProducts.push_back(p);
        }
    }

    return foundProducts;
}

void Inventory::displayAllProducts() const
{
    for (const Product& p : products) {
       cout << "Name: " << p.getName() << ", Category: " << p.getCategory() << ", Price: " << p.getPrice() << std::endl;
    }
}

void Inventory::sortByName() {
    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a > b;
        });
}

void Inventory::sortByCategory() {
    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a == b;
        });
}

void Inventory::sortByPrice() {
    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a < b;
        });
}