#ifndef ACADEMIC_INSTITUTION_HPP
#define ACADEMIC_INSTITUTION_HPP

#include <string>

#include "Class.hpp"

class AcademicInstitution : public Class{
 private:
  std::string name;
  int QSEvaluation;
  int MECEvaluation;

 public:
  AcademicInstitution(const std::string &name);
  AcademicInstitution(const std::string &name, const int &QSEvaluation,
                      const int &MECEvaluation);

  std::string getName() const;
  void setName(const std::string &name);

  int getQSEvaluation() const;
  void setQSEvaluation(const int &QSEvaluation);

  int getMECEValuation() const;
  void setMECEValuation(const int &MECEvaluation);

  virtual std::string toString() const override;

  bool operator<(const AcademicInstitution &that) const;
  bool operator<(const AcademicInstitution &that) const;
  
  ~AcademicInstitution();
};

#endif