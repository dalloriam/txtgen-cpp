
#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class OptionalNodeTests : public ::testing::Test {};

TEST(OptionalNodeTests, ReturnsCorrectValue) {
  auto optNode = OptionalNode(std::make_unique<LiteralNode>("hello"));

  bool sawEmpty = false;
  bool sawFull = false;

  for (size_t i = 0; i < 100; ++i) {
    const auto s = optNode.generate();
    sawEmpty |= s.empty();
    sawFull |= (s == "hello");
  }

  ASSERT_TRUE(sawEmpty);
  ASSERT_TRUE(sawFull);
}
