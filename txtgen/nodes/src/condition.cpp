#include "condition.h"

#include <cassert>

namespace txtgen {
namespace nodes {

ConditionNode::ConditionNode(std::tuple<NodeUP, NodeUP> p_condition,
                             NodeUP p_if_expr)
    : m_condition(std::move(p_condition)),
      m_if_expr(std::move(p_if_expr)),
      m_else_expr() {}

ConditionNode::ConditionNode(std::tuple<NodeUP, NodeUP> p_condition,
                             NodeUP p_if_expr, NodeUP p_else_expr)
    : m_condition(std::move(p_condition)),
      m_if_expr(std::move(p_if_expr)),
      m_else_expr(std::move(p_else_expr)) {}

std::string ConditionNode::generate() {
  assert(m_if_expr != nullptr);

  auto left_member = std::get<0>(m_condition)->generate();
  auto right_member = std::get<1>(m_condition)->generate();

  if (left_member == right_member) {
    return m_if_expr->generate();
  } else if (m_else_expr != nullptr) {
    return m_else_expr->generate();
  } else {
    return "";
  }
}

}  // namespace nodes
}  // namespace txtgen
