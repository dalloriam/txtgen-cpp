#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen;

class LiteralNodeTest : public ::testing::Test {};

TEST(LiteralNodeTest, ReturnsCorrectValue) {
  auto n = nodes::LiteralNode("Some Literal");
  ASSERT_EQ(n.generate(), "Some Literal") << "LiteralNode returns a bad value";
}
