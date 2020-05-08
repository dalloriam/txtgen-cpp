#ifndef TXTG_ENTITY_H
#define TXTG_ENTITY_H

#include <vector>

#include "node.h"

namespace txtgen {
namespace nodes {

class EntityNode : public Node {
 public:
  EntityNode(std::string p_name, std::vector<NodeUP> p_children);

  std::string generate() override;

 private:
  std::string m_name;
  std::vector<NodeUP> m_children;
};

}  // namespace nodes
}  // namespace txtgen

#endif
