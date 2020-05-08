#include "any.h"

#include <random>

namespace txtgen {
namespace nodes {

AnyNode::AnyNode(std::vector<NodeUP> p_children)
    : m_children(std::move(p_children)) {}

std::string AnyNode::generate() {
  if (m_children.empty()) {
    return "";
  } else if (m_children.size() == 1) {
    return m_children.at(0)->generate();
  } else {
    // Random pick.
    size_t rand_index = rand() % m_children.size();
    return m_children.at(rand_index)->generate();
  }
}

}  // namespace nodes
}  // namespace txtgen
