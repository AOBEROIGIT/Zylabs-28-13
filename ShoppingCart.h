#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>

using namespace std;
class ShoppingCart
{
    private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;
    public:
    string GetCustomerName();
    string GetDate();
    void AddItem(ItemToPurchase& param);
    void RemoveItem();
    int GetNumItemsInCart();
    int GetCostOfCart();
    void ModifyItem(ItemToPurchase& param);
    void PrintTotal();
    void PrintDescriptions();

};
#endif;