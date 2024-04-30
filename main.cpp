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


void ExecuteMenu(char choice, ShoppingCart& cart) {
    switch (choice) {
        case 'a':
        {
            string itemName ="";
            string itemDescription = "";
            int itemPrice,itemQuantity;
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
            cout << "Enter the item description:" << endl;
            getline(cin, itemDescription);
            cout << "Enter the item price:" << endl;
            cin >> itemPrice;
            cin.ignore();
            cout << "Enter the item quantity:"<< endl;
            cin >> itemQuantity;
            cin.ignore();
            ItemToPurchase newItem;
            newItem.SetName(itemName);
            newItem.SetDescription(itemDescription);
            newItem.SetPrice(itemPrice);
            newItem.SetQuantity(itemQuantity);
            cart.AddItem(newItem);
            return;
        }
        case 'd':
        {
            cout<< "REMOVE ITEM FROM CART"<< endl;
            string itemRemove = "";
            cout << "Enter name of item to remove:" << endl;
            getline(cin, itemRemove);
            cart.RemoveItem(itemRemove);
            return;
        }
        case 'c':
        {
            cout << "CHANGE ITEM QUANTITY" << endl;
            string itemQuan = "";
            int quan;
            cout << "Enter the item name:" << endl;
            getline(cin,itemQuan);
            cout<< "Enter the new quantity:" <<endl;
            cin >> quan;
            cin.ignore();
            ItemToPurchase itemToModify;
            itemToModify.SetName(itemQuan);
            itemToModify.SetQuantity(quan);
            cart.ModifyItem(itemToModify);
            return;
        }
        case 'i':
        {
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            return;
        }
        case 'o':
        {
            cout << "OUTPUT SHOPPING CART" <<endl;
            cart.PrintTotal();
            return;
        }
        case 'q':
        {
            break;
        }
        default:
        {
            break;
        }
    }
}

int main() {
   string customerName, currentDate="";
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);
   cout << endl;
   cout << "Customer name: " << customerName << endl;
   cout << "Today's date: " << currentDate << endl;
   ShoppingCart cart(customerName, currentDate);
   char choice = 'a';

   do {
   if(choice == 'a' || choice == 'd' || choice == 'c' || choice == 'i' || choice == 'o'){
   cout<<endl;
   PrintMenu();
   cout<<endl;
   cin.clear();
   cout << "Choose an option:"<< endl;
   cin >> choice;
   cin.ignore(); 
   ExecuteMenu(choice, cart);
   }else{
   cin.clear();
   cout << "Choose an option:"<< endl;
   cin >> choice;
   cin.ignore(); 
   ExecuteMenu(choice, cart);
   }
   } while (choice != 'q');
   
   return 0;
} //test
