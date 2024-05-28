#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"
#include "ConceptualExample02.cpp"  
#include "RealWorldFactoryMethod.cpp"

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

TEST(RealWorldExampleTest, TestLEDTVFactory) {
    testing::internal::CaptureStdout();

    RealWorldFactoryMethod::LEDTVFactory factory;
    RealWorldFactoryMethod::clientCode01(std::make_shared<RealWorldFactoryMethod::LEDTVFactory>());

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Manufacturing LED TV\nShipping charge: 1000 Euro\n");

    testing::internal::CaptureStdout();
    RealWorldFactoryMethod::clientCode02(std::make_shared<RealWorldFactoryMethod::LEDTVFactory>());
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, 
        "My new television receiver costs me 2500\n"
        "Switched on my LED TV\n"
        "My new TV is a LED TV device.\n"
    );
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

