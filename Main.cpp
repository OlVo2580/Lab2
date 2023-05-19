#include <iostream>
#include <string>
#include "Electronics.h"
#include "Product.h"
#include "Food.h"
#include "Inventory.h"


using namespace std;


	int main(){
		Electronics phone("phone", "phones", 1000, 1, 1012, "Samsung");
		Food potatoe("potato", "vegetables", 12, 12, 1013, 30, false);
		Product spoon("teaspoon", "spoones", 110, 2, 1014);
		Inventory inventory;
		inventory.addProduct(phone);
		inventory.addProduct(potatoe);
		inventory.addProduct(spoon);
		inventory.displayAllProducts();
		cout << endl;
		//inventory.removeProduct(1013);
		vector<Product> p= inventory.searchByName("phone");
		cout << p[0].getName()<<endl;
		cout << phone.getCategory() << endl;
		inventory.displayAllProducts();
		cout << endl;
		inventory.sortByName();
		inventory.displayAllProducts();
		cout << endl;
		inventory.sortByCategory();
		inventory.displayAllProducts();
		cout << endl;
		inventory.sortByPrice();
		inventory.displayAllProducts();


		


	}
