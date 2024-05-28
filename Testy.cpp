#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"
#include "ConceptualExample02.cpp"
#include "RealWorldFactoryMethod.cpp"
#include "Points.cpp"
#include <iostream>



TEST(BuilderTest, ConceptualExample01) {
    ASSERT_NO_THROW(test_conceptual_example_01());
}

TEST(BuilderTest, ConceptualExample02) {
    ASSERT_NO_THROW(test_conceptual_example_02());
}

TEST(BuilderTest, RealWorldFactoryMethod) {
    ASSERT_NO_THROW(test_real_world_factory_method());
}

TEST(BuilderTest, Points) {
    ASSERT_NO_THROW(test_points());
}
