#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
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