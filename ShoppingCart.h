#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart{
   public:
   ShoppingCart();
   ShoppingCart(const string& name, const string& date);
   
   string GetCustomerName() const;
   string GetDate() const;
   void AddItem(const ItemToPurchase& item); 
   void RemoveItem(const string& item);
   void ModifyItem(const ItemToPurchase& item);
   int GetNumItemsInCart() const;
   int GetCostOfCart() const;
   void PrintTotal() const ;
   void PrintDescriptions() const;
   
   private:
   string customerName;
   string currentDate;
   vector<ItemToPurchase> cartItems;
};

#endif
   
