#include "literal.h"

namespace txtgen {
namespace nodes {

LiteralNode::LiteralNode(std::string p_value) : m_value(std::move(p_value)) {}

std::string LiteralNode::generate() { return m_value; }

}  // namespace nodes
}  // namespace txtgen
