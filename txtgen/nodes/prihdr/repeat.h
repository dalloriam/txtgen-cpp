#ifndef TXTG_REPEAT_H
#define TXTG_REPEAT_H

#include "node.h"

namespace txtgen {
namespace nodes {

class RepeatNode : public Node {
 public:
  RepeatNode(NodeUP p_child, size_t p_repeat_count);

  std::string generate() override;

 private:
  NodeUP m_child;
  size_t m_repeat_count;
};

}  // namespace nodes
}  // namespace txtgen

#endif
