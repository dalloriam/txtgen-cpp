#ifndef TXTG_LIST_H
#define TXTG_LIST_H

#include <vector>

#include "node.h"

namespace txtgen {
namespace nodes {

class ListNode : public Node {
 public:
  ListNode(std::vector<NodeUP> p_children);

  std::string generate() override;

 private:
  std::vector<NodeUP> m_children;
};

}  // namespace nodes
}  // namespace txtgen

#endif
