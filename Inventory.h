#pragma once
#include <vector>
#include "Product.h"
using namespace std;

class Inventory
{
public:
    void addProduct(const Product& product); // method to add a product to inventory
    void removeProduct(int productId); // method to remove a product from inventory

    vector<Product> searchByName(const string& productName) const;  // method to serach a product by name
    vector<Product> searchByCategory(const string& category) const; // method serach a product by category

    void displayAllProducts() const; //Method to display all products
    
    void sortByName(); // Method to sort the products vector based on name
    void sortByCategory(); // Method to sort the products vector based on category
    void sortByPrice(); // Method to sort the products vector based on price

private:
    vector<Product> products;
};

