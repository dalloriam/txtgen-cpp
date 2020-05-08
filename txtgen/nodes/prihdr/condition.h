#ifndef TXTG_CONDITION_H
#define TXTG_CONDITION_H

#include <tuple>

#include "node.h"

namespace txtgen {
namespace nodes {

class ConditionNode : public Node {
 public:
  ConditionNode(std::tuple<NodeUP, NodeUP> p_condition, NodeUP p_if_expr);
  ConditionNode(std::tuple<NodeUP, NodeUP> p_condition, NodeUP p_if_expr,
                NodeUP p_else_expr);

  std::string generate() override;

 private:
  std::tuple<NodeUP, NodeUP> m_condition;
  NodeUP m_if_expr;
  NodeUP m_else_expr;
};

}  // namespace nodes
}  // namespace txtgen

#endif
