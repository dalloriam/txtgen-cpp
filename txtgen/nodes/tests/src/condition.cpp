
#include "gtest/gtest.h"
#include "txtgen/nodes/nodes.h"

using namespace txtgen::nodes;

class ConditionNodeTest : public ::testing::Test {};

TEST(ConditionNodeTest, EqualNoElse) {
  auto cond = ConditionNode(std::make_tuple(std::make_unique<LiteralNode>("a"),
                                            std::make_unique<LiteralNode>("a")),
                            std::make_unique<LiteralNode>("equal"));

  ASSERT_EQ(cond.generate(), "equal");
}

TEST(ConditionNodeTest, NotEqualNoElse) {
  auto cond = ConditionNode(std::make_tuple(std::make_unique<LiteralNode>("a"),
                                            std::make_unique<LiteralNode>("b")),
                            std::make_unique<LiteralNode>("equal"));

  ASSERT_EQ(cond.generate(), "");
}

TEST(ConditionNodeTest, EqualWithElse) {
  auto cond = ConditionNode(std::make_tuple(std::make_unique<LiteralNode>("a"),
                                            std::make_unique<LiteralNode>("a")),
                            std::make_unique<LiteralNode>("equal"),
                            std::make_unique<LiteralNode>("nonequal"));

  ASSERT_EQ(cond.generate(), "equal");
}

TEST(ConditionNodeTest, NotEqualWithElse) {
  auto cond = ConditionNode(std::make_tuple(std::make_unique<LiteralNode>("a"),
                                            std::make_unique<LiteralNode>("b")),
                            std::make_unique<LiteralNode>("equal"),
                            std::make_unique<LiteralNode>("nonequal"));

  ASSERT_EQ(cond.generate(), "nonequal");
}
