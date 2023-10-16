#ifndef _VERTEX_
#define _VERTEX_

#include <string>
#include <vector>

class Vertex {
public:
  Vertex(std::string _label);
  std::string getLabel() const;

private:
  std::string label;
};

#endif /* _VERTEX_ */
