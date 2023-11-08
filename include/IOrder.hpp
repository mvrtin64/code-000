#ifndef IORDER_HPP
#define IORDER_HPP

#include <ICustomer.hpp>
#include <IArticle.hpp>
#include <string>
using namespace std;

class IOrder{
    public:
        virtual string getCode() const = 0;
        virtual void setCustomer(shared_ptr<ICustomer> customer) = 0;
        virtual void addArticle(shared_ptr<IArticle> article) = 0;
        virtual void showOrder() = 0;
};

#endif