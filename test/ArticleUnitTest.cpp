#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Article.hpp>
#include <iostream>
#include <memory>
#include <catch2/catch.hpp>
using namespace std;
 
TEST_CASE( "Correct getPrice from Article", "[getPrice method]" )
{
    // Arrange
    auto article1 = make_shared<Article>("A001", "Article 1", 9.99);
    
    // Act
    float price = article1->getPrice();
    
    // Assert
    REQUIRE(price == Approx(9.99));
}