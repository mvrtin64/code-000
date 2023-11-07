#ifndef ORDER_HPP
#define ORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IArticle.hpp>
#include <ICustomer.hpp>

using namespace std;

class Order 
{
    public:
        Order(string code, shared_ptr<ICustomer> customer, vector<shared_ptr<IArticle>> articles);
        string getCode() const;
        void showOrder();
        
    private:
        string _code;
        shared_ptr<ICustomer> _customer;
        vector<shared_ptr<IArticle>> _articles;
};

#endif