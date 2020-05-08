#ifndef TXTG_NODE_H
#define TXTG_NODE_H

#include <memory>
#include <string>

namespace txtgen {
namespace nodes {

// Pure-virtual base node class.
class Node {
 public:
  Node() = default;

  virtual std::string generate() = 0;
};

typedef std::unique_ptr<Node> NodeUP;
typedef std::unique_ptr<const Node> NodeKUP;

}  // namespace nodes
}  // namespace txtgen

#endif
