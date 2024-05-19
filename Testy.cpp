#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"
#include "ConceptualExample02.cpp"

TEST(ConcreteCreator1, example) {
    Creator* creator = new ConcreteCreator1();
    Product* product = creator->factoryMethod();

    // Проверяем, что продукт является экземпляром ConcreteProduct1
    ASSERT_TRUE(dynamic_cast<ConcreteProduct1*>(product) != nullptr);

    delete product;
    delete creator;
}

TEST(ConcreteCreator2, example) {
    Creator* creator = new ConcreteCreator2();
    Product* product = creator->factoryMethod();

    // Проверяем, что продукт является экземпляром ConcreteProduct2
    ASSERT_TRUE(dynamic_cast<ConcreteProduct2*>(product) != nullptr);

    delete product;
    delete creator;
}

TEST(ProductFunctionality,example) {
    Creator* creator1 = new ConcreteCreator1();
    Product* product1 = creator1->factoryMethod();

    Creator* creator2 = new ConcreteCreator2();
    Product* product2 = creator2->factoryMethod();

    // Проверяем функциональность продуктов
    ASSERT_EQ(product1->operation(), "Result of the ConcreteProduct1");
    ASSERT_EQ(product2->operation(), "Result of the ConcreteProduct2");

    delete product1;
    delete creator1;
    delete product2;
    delete creator2;
}
