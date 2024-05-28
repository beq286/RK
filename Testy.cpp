#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"
#include "ConceptualExample02.cpp"  
#include "Points.cpp"
using namespace Factory03;
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

namespace Factory03 {
    class Point;
}

// Объявляем тест дружественным, чтобы иметь доступ к приватным членам
class Factory03Test : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

// Определяем тест
TEST_F(Factory03Test, NewPolarTest) {
    // Arrange
    double expected_x = 3.53553;
    double expected_y = 3.53553;
    double r = 5.0;
    double theta = M_PI / 4;

    // Act
    auto p = Point::NewPolar(r, theta);

    // Assert
    EXPECT_DOUBLE_EQ(p.m_x, expected_x);
    EXPECT_DOUBLE_EQ(p.m_y, expected_y);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
