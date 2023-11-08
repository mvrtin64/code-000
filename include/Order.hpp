#ifndef ORDER_HPP
#define ORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IOrder.hpp>

using namespace std;

class Order : public IOrder
{
    public:
        Order(string code);
        string getCode() const;
        void setCustomer(shared_ptr<ICustomer> customer);
        void addArticle(shared_ptr<IArticle> article);
        void showOrder();        
    private:
        string _code;
        shared_ptr<ICustomer> _customer;
        vector<shared_ptr<IArticle>> _articles;
};

#endif