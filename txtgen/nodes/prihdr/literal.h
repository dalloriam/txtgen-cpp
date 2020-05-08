#ifndef TXTG_LITERAL_H
#define TXTG_LITERAL_H

#include "node.h"

namespace txtgen {
namespace nodes {

class LiteralNode : public Node {
 public:
  LiteralNode(std::string p_value);

  std::string generate() override;

 private:
  std::string m_value;
};

}  // namespace nodes
}  // namespace txtgen

#endif
