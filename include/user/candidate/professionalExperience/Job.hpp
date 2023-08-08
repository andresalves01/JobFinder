#ifndef JOB_HPP
#define JOB_HPP

#include <string>

#include "Class.hpp"

class Job : public Class {
 private:
  std::string title;
  std::string level;
  std::string description;

 public:
  Job(const std::string &title, const std::string &level,
      const std::string &description);

  std::string getTitle() const;
  void setTitle(const std::string title);

  std::string getLevel() const;
  void setLevel(const std::string level);

  std::string getDescription() const;
  void setDescription(const std::string description);

  virtual std::string toString() const override;

  bool operator<(const Job &that) const;
  bool operator<(const Job &that) const;

  ~Job();
};

#endif