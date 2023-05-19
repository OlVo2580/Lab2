#pragma once
using namespace std;


class Product
{
public:
		Product(const Product& p);
		Product(string n, string c, double pr, int q, int id0);

    //getters
    string getName() const;

    string getCategory() const;

    double getPrice() const;

    int getQuantity() const;

    int getId() const;

  //setters
    void setName(const string& newName);

    void setCategory(const std::string& newCategory);

    void setPrice(double newPrice);

    void setQuantity(int newQuantity);

    void setId(int newId);

    //operators overloading
    bool operator>(const Product& other) const;
    bool operator==(const Product& other) const;
    bool operator<(const Product& other) const;

protected:
		string name;
		string category;
		double price;
		int quantity;
		int id;
};