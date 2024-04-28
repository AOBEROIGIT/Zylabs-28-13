#include <iostream>
#include <iomanip>
using namespace std;
#include "ShoppingCart.h"
void PrintMenu() {
cout << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl;
}
void ExecuteMenu(char option, ShoppingCart& theCart) {
string itemName;
int itemPrice, itemQuantity;
ItemToPurchase newItem;
   switch (option) {
   case 'a':
   cout << "ADD ITEM TO CART" << endl;
   cout << "Enter the item name: ";
   cin.ignore();
   getline(cin, itemName);
   newItem.SetName(itemName);
   cout << "Enter the item description: ";
   getline(cin, itemName);
   newItem.SetDescription(itemName);
   cout << "Enter the item price: ";
   cin >> itemPrice;
   newItem.SetPrice(itemPrice);
   cout << "Enter the item quantity: ";
   cin >> itemQuantity;
   newItem.SetQuantity(itemQuantity);
   theCart.AddItem(newItem);
   break;
   case 'd':
   cout << "REMOVE ITEM FROM CART" << endl;
   cout << "Enter name of item to remove: ";
   cin.ignore();
   getline(cin, itemName);
   theCart.RemoveItem(itemName);
   break;
   case 'c':
   cout << "CHANGE ITEM QUANTITY" << endl;
   cout << "Enter the item name: ";
   cin.ignore();
   getline(cin, itemName);
   newItem.SetName(itemName);
   cout << "Enter the new quantity: ";
   cin >> newQuantity;
   newItem.SetQuantity(newQuantity);
   theCart.ModifyItem(newItem);
   break;
   case 'i':
   theCart.PrintDescriptions();
   break;
   case 'o':
   theCart.PrintTotal();
   break;
   case 'q':
   break;
   default:
   //WILL HAVE TO FIX SOON
    }
}

int main() {
    string itemNameOne;
   string itemNameTwo;
   int itemPriceOne;
   int itemPriceTwo;
   int itemQuantityOne;
   int itemQuantityTwo;
   int totalOne;
   int totalTwo;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemNameOne);
   cout << "Enter the item price:" << endl;
   cin >> itemPriceOne;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantityOne;
   ItemToPurchase firstItem = ItemToPurchase();
   firstItem.SetName(itemNameOne);
   firstItem.SetPrice(itemPriceOne);
   firstItem.SetQuantity(itemQuantityOne);
   cout << endl;
   cin.ignore();
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemNameTwo);
   cout << "Enter the item price:" << endl;
   cin >> itemPriceTwo;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantityTwo;
   ItemToPurchase secondItem = ItemToPurchase();
   secondItem.SetName(itemNameTwo);
   secondItem.SetPrice(itemPriceTwo);
   secondItem.SetQuantity(itemQuantityTwo);
   cout << endl;
   cin.ignore();
  cout << "TOTAL COST" << endl;
   totalOne = firstItem.GetQuantity()*firstItem.GetPrice();
   cout << firstItem.GetName() << " " << firstItem.GetQuantity() << " @" << " " << "$" <<firstItem.GetPrice() << " = " << "$" << totalOne << endl;
   totalTwo = secondItem.GetQuantity()*secondItem.GetPrice();
   cout << secondItem.GetName() << " " << secondItem.GetQuantity() << " @" << " " << "$" << secondItem.GetPrice() << " = " << "$" << totalTwo << endl;
   cout << endl;
   cout << "Total:" << " $" << totalOne+totalTwo << endl;

   
   return 0;
}
