Product.h
Header file for all methods implemented in the Product.cpp

The `Product` class has the following attributes:

1. `name` (string): This attribute represents the name of the product.

2. `category` (string): This attribute represents the category of the product.

3. `price` (double): This attribute represents the price of the product.

4. `quantity` (int): This attribute represents the quantity of the product.

5. `id` (int): This attribute represents the ID of the product.

These attributes store information about the specific instance of the `Product` class. They are declared as protected, which means they can be accessed by derived classes but not by objects of the class directly. Each attribute provides different information about the product, such as its name, category, price, quantity, and ID.



Product.cpp
1. `Product(const Product& p)`: This is the copy constructor of the class, used to create a new `Product` object by copying the values from another `Product` object.

2. `Product(string n, string c, double pr, int q, int id0)`: This is the constructor of the class that takes five parameters: `n` (name), `c` (category), `pr` (price), `q` (quantity), and `id0` (ID). It initializes a new `Product` object with the provided values.

3. `string getName() const`: This method is a getter that returns the name of the product.

4. `string getCategory() const`: This method is a getter that returns the category of the product.

5. `double getPrice() const`: This method is a getter that returns the price of the product.

6. `int getQuantity() const`: This method is a getter that returns the quantity of the product.

7. `int getId() const`: This method is a getter that returns the ID of the product.

8. `void setName(const string& newName)`: This method is a setter that updates the name of the product with the provided `newName` parameter.

9. `void setCategory(const std::string& newCategory)`: This method is a setter that updates the category of the product with the provided `newCategory` parameter.

10. `void setPrice(double newPrice)`: This method is a setter that updates the price of the product with the provided `newPrice` parameter.

11. `void setQuantity(int newQuantity)`: This method is a setter that updates the quantity of the product with the provided `newQuantity` parameter.

12. `void setId(int newId)`: This method is a setter that updates the ID of the product with the provided `newId` parameter.

13. `bool operator>(const Product& other) const`: This method overloads the greater-than (`>`) operator and compares the price of the current `Product` object with another `Product` object (`other`). It returns `true` if the price of the current object is greater than the price of the other object, otherwise `false`.

14. `bool operator==(const Product& other) const`: This method overloads the equality (`==`) operator and compares the current `Product` object with another `Product` object (`other`). It returns `true` if both objects have the same values for all attributes (name, category, price, quantity, and ID), otherwise `false`.

15. `bool operator<(const Product& other) const`: This method overloads the less-than (`<`) operator and compares the price of the current `Product` object with another `Product` object (`other`). It returns `true` if the price of the current object is less than the price of the other object, otherwise `false`.

These methods provide functionality for creating, accessing, and modifying the attributes of the `Product` class, as well as comparing `Product` objects using the overloaded operators.





Inventory.h
Header file for all methods implemented in the Inventory.cpp

The `Inventory` class has the following attributes:
vector<Product> products: This attribute is a vector of Product objects, representing the collection of products in the inventory. Products are stored in this vector for easy management and retrieval.


Inventory.cpp
The `Inventory` class has the following methods:

Methods:
1. `void addProduct(const Product& product)`: This method adds a product to the inventory. It takes a `Product` object as a parameter and adds it to the `products` vector.

2. `void removeProduct(int productId)`: This method removes a product from the inventory based on its ID. It takes the `productId` as a parameter and removes the corresponding product from the `products` vector.

3. `vector<Product> searchByName(const string& productName) const`: This method searches for products in the inventory based on their name. It takes a `productName` as a parameter and returns a vector of `Product` objects that match the provided name.

4. `vector<Product> searchByCategory(const string& category) const`: This method searches for products in the inventory based on their category. It takes a `category` as a parameter and returns a vector of `Product` objects that belong to the provided category.

5. `void displayAllProducts() const`: This method displays all the products in the inventory. It iterates over the `products` vector and prints information about each product.

6. `void sortByName()`: This method sorts the `products` vector based on the product names in ascending order.

7. `void sortByCategory()`: This method sorts the `products` vector based on the product categories in ascending order.

8. `void sortByPrice()`: This method sorts the `products` vector based on the product prices in ascending order.


The `Inventory` class provides methods to add and remove products from the inventory, search for products by name or category, display all the products, and sort the products based on different criteria. The `products` attribute holds the actual product data in the form of a vector of `Product` objects.






ELectronics.h
Header file for all methods implemented in the Electronics.cpp

The `Electronics` class has the following attribute:
string firm: This attribute represents the firm or manufacturer of the electronics product.


Electronics.cpp
The `Electronics` class, which is derived from the `Product` class, has the following methods:

Methods:
1. `Electronics(const Electronics& e)`: This is the copy constructor of the class, used to create a new `Electronics` object by copying the values from another `Electronics` object.

2. `Electronics(string n, string c, double pr, int q, int id0, string firm0)`: This is the constructor of the class that takes six parameters: `n` (name), `c` (category), `pr` (price), `q` (quantity), `id0` (ID), and `firm0` (firm). It initializes a new `Electronics` object with the provided values.

3. `string getFirm() const`: This method is a getter that returns the firm of the electronics product.

4. `void setFirm(const std::string& newFirm)`: This method is a setter that updates the firm of the electronics product with the provided `newFirm` parameter.


The `Electronics` class inherits the methods and attributes from the `Product` class, including the getters and setters for the name, category, price, quantity, and ID. In addition to these inherited features, the `Electronics` class has its own specific attribute `firm`, which stores information about the firm or manufacturer of the electronics product.





Food.h
Header file for all methods implemented in the Food.cpp

The `Food` class has the following attributes:
1. `bool store_in_fridge`: This attribute represents whether the food product needs to be stored in the fridge. It is a boolean value where `true` indicates the food needs to be stored in the fridge, and `false` indicates it does not.

2. `int expiration_termin`: This attribute represents the expiration term of the food product. It stores the duration of time until the food product expires.


Food.cpp
The `Food` class, which is derived from the `Product` class, has the following methods:

Methods:
1. `Food(const Food& p)`: This is the copy constructor of the class, used to create a new `Food` object by copying the values from another `Food` object.

2. `Food(string n, string c, double pr, int q, int id0, int exp_t, bool st_in_fr)`: This is the constructor of the class that takes seven parameters: `n` (name), `c` (category), `pr` (price), `q` (quantity), `id0` (ID), `exp_t` (expiration term), and `st_in_fr` (store in fridge). It initializes a new `Food` object with the provided values.

3. `bool getStore_in_fridge() const`: This method is a getter that returns whether the food product needs to be stored in the fridge or not.

4. `int getExpiration_termin() const`: This method is a getter that returns the expiration term of the food product.

5. `void setStore_in_fridge(bool str_in_fr)`: This method is a setter that updates whether the food product needs to be stored in the fridge or not, based on the `str_in_fr` parameter.

6. `void setExpiration_termin(int exp_t)`: This method is a setter that updates the expiration term of the food product based on the `exp_t` parameter.


The `Food` class inherits the methods and attributes from the `Product` class, including the getters and setters for the name, category, price, quantity, and ID. Additionally, the `Food` class introduces its own attributes specific to food products, such as `store_in_fridge` and `expiration_termin`, which provide information about the storage requirements and expiration term of the food product, respectively.




Main.cpp (just for checking)
The main function serves as the entry point of the program.

The code begins by including necessary header files (iostream, string, and the headers for the classes: Electronics.h, Product.h, Food.h, Inventory.h).

The main function creates instances of different products:

An Electronics object named phone is created with the name "phone", category "phones", price 1000, quantity 1, ID 1012, and firm "Samsung".
A Food object named potatoe is created with the name "potato", category "vegetables", price 12, quantity 12, ID 1013, expiration term 30, and store_in_fridge set to false.
A Product object named spoon is created with the name "teaspoon", category "spoones", price 110, quantity 2, and ID 1014.
An Inventory object named inventory is created.

The addProduct method of the inventory object is called three times to add the created products (phone, potatoe, and spoon) to the inventory.

The displayAllProducts method of the inventory object is called to display all the products in the inventory.

The searchByName method of the inventory object is called to search for products with the name "phone". The returned vector of products is stored in the p variable.

The name and category of the first product in the p vector (which should be the phone object) are displayed using the getName and getCategory methods.

The displayAllProducts method of the inventory object is called again to display all the products in the inventory.

The sortByName method of the inventory object is called to sort the products in the inventory based on their names.

The displayAllProducts method of the inventory object is called to display all the products in the inventory after sorting by name.

The sortByCategory method of the inventory object is called to sort the products in the inventory based on their categories.

The displayAllProducts method of the inventory object is called to display all the products in the inventory after sorting by category.

The sortByPrice method of the inventory object is called to sort the products in the inventory based on their prices.

The displayAllProducts method of the inventory object is called to display all the products in the inventory after sorting by price.

The program demonstrates the creation of different products, adding them to an inventory, performing search and sorting operations on the inventory, and displaying the results.