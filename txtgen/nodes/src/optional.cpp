#include "optional.h"

#include <random>

namespace txtgen {
namespace nodes {

OptionalNode::OptionalNode(NodeUP p_node) : m_child(std::move(p_node)) {}

std::string OptionalNode::generate() {
  return (rand() % 2) == 0 ? m_child->generate() : "";
}

}  // namespace nodes
}  // namespace txtgen
