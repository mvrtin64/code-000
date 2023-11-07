#include <iostream>
#include <vector>
#include <memory>
#include <Article.hpp>
#include <Customer.hpp>
#include <Order.hpp>
using namespace std;

int main() 
{
    // Create some articles
    auto article1 = make_shared<Article>("A001", "Facial cream", 15.99);
    auto article2 = make_shared<Article>("A002", "Lipstick", 7.99);

    // Create some customers
    auto customer1 = make_shared<Customer>("C001", "Customer 1", "123 Main Street");
    auto customer2 = make_shared<Customer>("C002", "Customer 2", "456 Secondary Street");

    // Create orders for customers
    vector<shared_ptr<IArticle>> customer1Articles = {article1, article2}; //solo como ejemplo uso el typedef Article
    vector<shared_ptr<IArticle>> customer2Articles = {article2};
    auto orderCustomer1 = make_shared<Order>("O001", customer1, customer1Articles);
    auto orderCustomer2 = make_shared<Order>("O002", customer2, customer2Articles);

    // Store orders in a vector
    vector<shared_ptr<Order>> orders = {orderCustomer1, orderCustomer2};

    // Show the orders in the console
    for (const auto& order : orders) 
    {
        order->showOrder();
    }

    return 0;
}