#include "testable.h"
#include "gtest/gtest.h"
namespace {

TEST(Testable, ReturnsZero) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
  EXPECT_EQ(returnZero(), 0);
}

}  // namespace
