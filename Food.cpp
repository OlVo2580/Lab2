#include <iostream>
#include <string>
#include "Product.h"
#include "Food.h"


Food::Food(const Food& f) : Product(f), expiration_termin(f.expiration_termin), store_in_fridge(f.store_in_fridge)
{
}

Food::Food(string n, string c, double pr, int q, int id0, int exp_t, bool st_in_fr) : Product(n,c,pr,q,id0),
expiration_termin(exp_t), store_in_fridge(st_in_fr)
{
}


bool Food::getStore_in_fridge() const {
    return store_in_fridge;
}

int Food::getExpiration_termin() const {
    return expiration_termin;
}

void Food::setStore_in_fridge(bool str_in_fr)
{
    store_in_fridge = str_in_fr;
}

void Food::setExpiration_termin(int exp_t)
{
    expiration_termin = exp_t;

}

