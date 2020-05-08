#ifndef TXTG_OPTIONAL_H
#define TXTG_OPTIONAL_H

#include "node.h"

namespace txtgen {
namespace nodes {

class OptionalNode : public Node {
 public:
  OptionalNode(NodeUP p_child);

  std::string generate() override;

 private:
  NodeUP m_child;
};

}  // namespace nodes
}  // namespace txtgen

#endif
