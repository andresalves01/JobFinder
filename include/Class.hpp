#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>

class Class {
 protected:
 template <typename... T>
  std::string toString(const T &values ...) const;

 public:
  /**
   * @brief Parse a class object to a string. When overriding it, always call
   * this function in upper class so no information is lost.
   *
   * @return A std::string with every attribute and value contained by the
   * respective class starting with its name, a colon and the object like a JSON
   * file, it will look like this: ClassName: { "A" : 0, "B": { "C" : "c" } }.
   */
  virtual std::string toString() = 0;
};

#endif
