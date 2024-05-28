#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"  

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

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
