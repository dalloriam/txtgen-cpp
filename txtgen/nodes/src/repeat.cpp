#include "repeat.h"

namespace txtgen {
namespace nodes {

RepeatNode::RepeatNode(NodeUP p_child, size_t p_repeat_count)
    : m_child(std::move(p_child)), m_repeat_count(p_repeat_count) {}

std::string RepeatNode::generate() {
  std::string output;
  for (size_t i = 0; i < m_repeat_count; ++i) {
    output += m_child->generate();
  }
  return output;
}

}  // namespace nodes
}  // namespace txtgen
