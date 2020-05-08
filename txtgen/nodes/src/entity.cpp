#include "entity.h"

namespace txtgen {
namespace nodes {

EntityNode::EntityNode(std::string p_name, std::vector<NodeUP> p_children)
    : m_name(std::move(p_name)), m_children(std::move(p_children)) {}

std::string EntityNode::generate() {
  std::string output;

  for (auto& child : m_children) {
    std::string v = child->generate();
    if (!v.empty()) {
      output += v;
    }
  }
  return output;
}

}  // namespace nodes
}  // namespace txtgen
