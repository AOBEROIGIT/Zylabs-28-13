#include <iostream>
#include "ShoppingCart.h"

using namespace std;

ShoppingCart::ShoppingCart(){
customerName = "none";
currentDate= "January 1, 2016";
}
ShoppingCart::ShoppingCart(const string& customerName, const string& currentDate){
   this->customerName = customerName;
   this->currentDate = currentDate;
}
string ShoppingCart::GetCustomerName() const{
   return customerName;
}
string ShoppingCart::GetDate() const{
   return currentDate;
}
void ShoppingCart::AddItem(const ItemToPurchase& item){
   cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(const string& itemName){
   vector <ItemToPurchase> newCartItems;
   bool found= false;
   for(size_t i=0; i<cartItems.size();i++){
      if(cartItems[i].GetName()!=itemName){
         newCartItems.push_back(cartItems[i]);
      }else{
         found = true;
   }
}
   if (found){
      cartItems = newCartItems;
   } else{
      cout << "Item not found in cart. Nothing removed." << endl;
   }
}
void ShoppingCart::ModifyItem(const ItemToPurchase& item){
   bool found= false;
   for(size_t i = 0; i<cartItems.size(); i++){
      if(cartItems[i].GetName() == item.GetName()){
         found = true;
         if(item.GetDescription()!="none"){
            cartItems[i].SetDescription(item.GetDescription());
         }
         if(item.GetPrice()!=0){
            cartItems[i].SetPrice(item.GetPrice());
         }
         if(item.GetQuantity()!=0){
            cartItems[i].SetQuantity(item.GetQuantity());
         }
         break;
      }
   }
   if(!found){
      cout << "Item not found in cart. Nothing modified." << endl;
   }
}

int ShoppingCart::GetNumItemsInCart() const{
   int totalQuantity = 0;
   for(size_t i =0; i<cartItems.size(); i++){
      totalQuantity+=cartItems[i].GetQuantity();
   }
   return totalQuantity;
}
int ShoppingCart::GetCostOfCart() const{
   int totalCost = 0;
   for (size_t i = 0; i<cartItems.size() ; i++){
      totalCost += (cartItems[i].GetPrice()* cartItems[i].GetQuantity());
   }
   return totalCost;
}
void ShoppingCart::PrintTotal() const{
   int numItems= GetNumItemsInCart();
   cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl; 
   cout << "Number of Items: " << numItems << endl;
   cout<<endl;
    if (numItems > 0) {
        for (size_t i = 0; i < cartItems.size(); ++i) {
         cout << cartItems[i].GetName() << " " << cartItems[i].GetQuantity() << " @ $" << cartItems[i].GetPrice() << " = $" << (cartItems[i].GetQuantity() * cartItems[i].GetPrice()) << endl;
        }
        cout << endl << "Total: $" << GetCostOfCart() << endl;
    } else {
        cout << "SHOPPING CART IS EMPTY" << endl;
        cout << endl;
        cout << "Total: $0" << endl;
    }
}

void ShoppingCart::PrintDescriptions() const {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl << endl;
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        cout << "Item Descriptions" << endl;
        for (size_t i = 0; i < cartItems.size(); ++i) {
            cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;
        }
    }
}
