#pragma once
#include "Product.h"

class Food : public Product {
public:
	Food(const Food& p);
	Food(string n, string c, double pr, int q, int id0, int exp_t, bool st_in_fr);

	//getters
	bool getStore_in_fridge() const; 
	int getExpiration_termin() const;

	//setters
	void setStore_in_fridge(bool str_in_fr);
	void setExpiration_termin(int exp_t);


private:
	bool store_in_fridge;
	int expiration_termin;
};