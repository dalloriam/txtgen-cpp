
#include <memory>

#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class RepeatNodeTests : public ::testing::Test {};

TEST(RepeatNodeTests, ReturnsCorrectValue) {
  RepeatNode node = RepeatNode(std::make_unique<LiteralNode>("hello"), 3);
  ASSERT_EQ(node.generate(), "hellohellohello");
}
