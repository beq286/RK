#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"
#include "ConceptualExample02.cpp"  
#include "Points.cpp"  

TEST(ConceptualExample01Test, FactoryMethodTest) {
    // Arrange
    std::stringstream output;
    std::streambuf* oldOutput = std::cout.rdbuf(output.rdbuf());  // Перенаправляем stdout в строку для проверки вывода

    // Act
    test_conceptual_example_01();  

    // Assert
    std::string expectedOutput = "{ Product1 }\n{ Product2 }\n";
    ASSERT_EQ(output.str(), expectedOutput);  // Проверяем, что вывод соответствует ожидаемому

    // Возвращаем stdout в исходное состояние
    std::cout.rdbuf(oldOutput);
}

TEST(ConceptualExample02Test, FactoryMethodTest) {
    // Arrange
    std::stringstream output;
    std::streambuf* oldOutput = std::cout.rdbuf(output.rdbuf());  // Перенаправляем stdout в строку для проверки вывода

    // Act
    test_conceptual_example_02();  

    // Assert
    std::string expectedOutput = "Example launched with ConcreteFactory1:\nClient (doesn't know the factory's concrete class type)\nFactoryBase: This factory's code has just created a \"Result of the ConcreteProduct1\"\n\nExample launched with ConcreteFactory2:\nClient (doesn't know the factory's concrete class type)\nFactoryBase: This factory's code has just created a \"Result of the ConcreteProduct2\"\n";
    ASSERT_EQ(output.str(), expectedOutput);  // Проверяем, что вывод соответствует ожидаемому

    // Возвращаем stdout в исходное состояние
    std::cout.rdbuf(oldOutput);
}

TEST(Factory03Test, NewCartesianTest) {
    auto p = Factory03::Point::NewCartesian(2, 3);
    ASSERT_DOUBLE_EQ(p.x, 2);
    ASSERT_DOUBLE_EQ(p.y, 3);
}

TEST(Factory03Test, NewPolarTest) {
    auto p = Factory03::Point::NewPolar(5.0, M_PI / 4);
    ASSERT_NEAR(p.x, 3.53553, 0.00001);
    ASSERT_NEAR(p.y, 3.53553, 0.00001);
}

TEST(Factory04Test, NewCartesianTest) {
    auto p = Factory04::PointFactory::NewCartesian(2, 3);
    ASSERT_DOUBLE_EQ(p.x, 2);
    ASSERT_DOUBLE_EQ(p.y, 3);
}

TEST(Factory04Test, NewPolarTest) {
    auto p = Factory04::PointFactory::NewPolar(5.0, M_PI / 4);
    ASSERT_NEAR(p.x, 3.53553, 0.00001);
    ASSERT_NEAR(p.y, 3.53553, 0.00001);
}

TEST(Factory05Test, NewCartesianTest) {
    auto p = Factory05::Point::Factory::NewCartesian(2, 3);
    ASSERT_DOUBLE_EQ(p.x, 2);
    ASSERT_DOUBLE_EQ(p.y, 3);
}

TEST(Factory05Test, NewPolarTest) {
    auto p = Factory05::Point::Factory::NewPolar(5.0, M_PI / 4);
    ASSERT_NEAR(p.x, 3.53553, 0.00001);
    ASSERT_NEAR(p.y, 3.53553, 0.00001);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
