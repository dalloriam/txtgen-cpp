
#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class AnyNodeTests : public ::testing::Test {};

TEST(AnyNodeTests, NoChildren) {
  auto anyNode = AnyNode({});
  ASSERT_EQ(anyNode.generate(), "");
}

TEST(AnyNodeTests, OneChild) {
  std::vector<NodeUP> children;
  children.push_back(std::make_unique<LiteralNode>("bing"));
  auto anyNode = AnyNode(std::move(children));
  ASSERT_EQ(anyNode.generate(), "bing");
}
