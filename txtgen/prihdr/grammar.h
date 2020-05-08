#ifndef TXTG_GRAMMAR_H
#define TXTG_GRAMMAR_H

#include <string>

namespace txtgen {

class Grammar {
 public:
  Grammar() = default;

  std::string generate(std::string& p_entity_name);

 private:
};

}  // namespace txtgen

#endif
