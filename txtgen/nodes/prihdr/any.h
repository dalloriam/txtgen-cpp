#ifndef TXTG_ANY_H
#define TXTG_ANY_H

#include <vector>

#include "node.h"

namespace txtgen {
namespace nodes {

class AnyNode : public Node {
 public:
  AnyNode(std::vector<NodeUP> p_children);

  std::string generate() override;

 private:
  std::vector<NodeUP> m_children;
};

}  // namespace nodes
}  // namespace txtgen

#endif
