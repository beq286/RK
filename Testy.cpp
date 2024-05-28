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
    ASSERT_NO_THROW(test_layout_manager_example());
}

TEST(BuilderTest, Points) {
    ASSERT_NO_THROW(test_person_builder_example());
}
