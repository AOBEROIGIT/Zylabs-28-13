#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <vector>

string ShoppingCart::GetCustomerName()
{
    return customerName;
}
string ShoppingCart::GetDate()
{
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase& param)
{
    cartItems.push_back(param);
}
void ShoppingCart::RemoveItem(string nameItem)
{
    for(int i=0; i<cartItems.size(); i++)
    {
        if(cartItems.at(i).GetName() == (nameItem))
        {
           cartItems.at(i).erase(i, i+1);
        }
    }
}
int ShoppingCart::GetNumItemsInCart()
{
    return cartItems.size();
}
double ShoppingCart::GetCostOfCart()
{
    double sum = 0;
    for(int j=0; j<cartItems.size();j++)
    {
        sum = cartItems.at(j).GetPrice();
    }
    return sum;
}
// INCOMPLETE. IN NEED OF REPAIR:
void ShoppingCart::ModifyItem(ItemToPurchase& param)
{
    for(int k=0; k<cartItems.size(); k++)
    {
            if(cartItems.at(k).GetName() == param.GetName() and param.GetName() == "none")
            {
                cartItems.at(k).SetName(param.GetName());
                cartItems.at(k).SetDescription(param.GetDescription());
                cartItems.at(k).SetPrice(param.GetPrice());
                cartItems.at(k).SetQuantity(param.GetQuantity());
            }
        
    }
}
void ShoppingCart::PrintTotal()
{
     cout << customerName << "'s Shopping Cart" << " - " << currentDate << endl;
     cout << "Number of items: " << cartItems.size() << endl;
     cout << endl;
     if(cartItems.size() == 0)
     {
        cout << "SHOPPING CART IS EMPTY";
     }
     else
     {
        for(int l=0; l<cartItems.size(); l++)
        {
            cout << cartItems.at(l).GetName() << " " << cartItems.at(l).GetQuantity() << " @ $" << cartItems.at(l).GetPrice() << " = $" << (cartItems.at(l).GetQuantity())*(cartItems.at(l).GetPrice()) << endl;
        }
     }
}
void ShoppingCart::PrintDescriptions()
{
     cout << customerName << "'s Shopping Cart" << " - " << currentDate << endl;
     cout << "Item Descriptions" << endl;
     cout << endl;
     if(cartItems.size() == 0)
     {
        cout << "SHOPPING CART IS EMPTY";
     }
     else
     {
        for(int m=0; m<cartItems.size(); m++)
        {
            cout << cartItems.at(m).GetName() << ": " << cartItems.at(m).GetDescription();
        }
     }
}
     
    
