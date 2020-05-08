#include <memory>

#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class EntityNodeTests : public ::testing::Test {};

TEST(EntityNodeTests, ReturnsCorrectValue) {
  std::vector<NodeUP> children;
  children.push_back(std::make_unique<LiteralNode>("aa"));
  children.push_back(std::make_unique<LiteralNode>("bc"));

  EntityNode entity("something", std::move(children));

  ASSERT_EQ(entity.generate(), "aabc");
}

TEST(EntityNodeTests, NoChildren) {
  EntityNode entity("something", {});
  ASSERT_EQ(entity.generate(), "");
}
