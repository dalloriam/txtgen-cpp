#include <memory>

#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class ListNodeTests : public ::testing::Test {};

TEST(ListNodeTests, ReturnsCorrectValue) {
  std::vector<NodeUP> children;
  children.push_back(std::make_unique<LiteralNode>("aa"));
  children.push_back(std::make_unique<LiteralNode>("bc"));

  ListNode list(std::move(children));
  ASSERT_EQ(list.generate(), "aabc");
}

TEST(ListNodeTests, NoChildren) {
  ListNode list({});
  ASSERT_EQ(list.generate(), "");
}
