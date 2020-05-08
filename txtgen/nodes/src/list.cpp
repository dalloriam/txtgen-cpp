#include "list.h"

namespace txtgen {
namespace nodes {

ListNode::ListNode(std::vector<NodeUP> p_children)
    : m_children(std::move(p_children)) {}

std::string ListNode::generate() {
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
