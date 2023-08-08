#ifndef COUSE_HPP
#define COURSE_HPP

#include <string>

#include "Class.hpp"

class Course : public Class {
 private:
  std::string title;
  int QSEvaluation;
  int MECEvaluation;

 public:
  Course(const std::string &title);
  Course(const std::string &title, const int &QSEvaluation,
         const int &MECEvaluation);

  std::string getTitle() const;
  void setTitle(const std::string &title);

  int getQSEvaluation() const;
  void setQSEvaluation(const int &QSEvaluation);

  int getMECEValuation() const;
  void setMECEValuation(const int &MECEvaluation);

  virtual std::string toString() const override;

  bool operator<(const Course &that) const;
  bool operator==(const COurse &that) const;

  ~Course();
};

#endif