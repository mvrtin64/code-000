#include <Order.hpp>

Order::Order(string code):_code(code){}

string Order::getCode() const
{
    return _code;
}

void Order::addArticle(shared_ptr<IArticle> article){
    _articles.push_back(article);
}

void Order::setCustomer(shared_ptr<ICustomer> customer){
    _customer = customer;
}
void Order::showOrder() 
{
    cout << "Order " << this->getCode() << " for " << _customer->getName() << " at " << _customer->getAddress() << ":\n";
    for (const auto& article : _articles) 
    {
        cout << "  - " << article->getName() << " (" << article->getCode() << "): $" << article->getPrice() << "\n";
    }
}
