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
TEST(ConceptualExample01Test, FactoryMethodTest) {
    // Подготовка
    std::stringstream output;

    // Перенаправляем вывод cout в stringstream для захвата вывода
    std::streambuf* oldCoutBuffer = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    // Действие
    test_conceptual_example_01(); // Вызываем функцию для тестирования

    // Проверка
    std::string expectedOutput = "{ Product1 }\n{ Product2 }\n";
    EXPECT_EQ(output.str(), expectedOutput);

    // Восстанавливаем cout исходный буфер
    std::cout.rdbuf(oldCoutBuffer);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

