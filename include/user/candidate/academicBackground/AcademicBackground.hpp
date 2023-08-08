#ifndef ACADEMICBACKGROUND_HPP
#define ACADEMICBACKGROUNG_HPP

#include <memory>
#include <string>

#include "/home/andre/pessoal/sga/include/user/candidate/Candidate.hpp"
#include "AcademicInstitution.hpp"
#include "Course.hpp"
#include "OwnedByCandidate.hpp"

class AcademicBackground : public OwnedByCandidate {
 private:
  std::shared_ptr<Course> course;
  std::shared_ptr<AcademicInstitution> institution;

  int firstYear;
  int lastYear;

 public:
  AcademicBackground(const std::shared_ptr<Candidate> &owner, const std::shared_ptr<Course> &course,
                     const std::shared_ptr<AcademicInstitution> &institution,
                     const int &firstYear, const int &lastYear = NULL);

  const Course *getCourse() const;
  void setCourse(const Course &course);

  const AcademicBackground *getInstitution() const;
  void setInstitution(const AcademicBackground &institution);

  int getFirstYear()const;
  void setFirstYear(const int &firstYear);

  int getLastYear() const;
  void setLastYear(const int &lastYear);

  virtual std::string toString() const override;

  bool operator<(const AcademicBackground &that) const;
  bool operator==(const AcademicBackground &that) const;

  ~AcademicBackground();
};

#endif