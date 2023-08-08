#ifndef CANDIDATE_HPP
#define CANDIDATE_HPP

#include <string>

#include "./academicBackground/AcademicBackground.hpp"
#include "./professionalExperience/ProfessionalExperience.hpp"
#include "PersonalInformation.hpp"
#include "User.hpp"

class Candidate : public User {
 private:
  std::shared_ptr<PersonalInformation> personalInfo;
  std::shared_ptr<AcademicBackground> academicBackground;
  std::shared_ptr<ProfessionalExperience> experience;

 public:
  Candidate(const std::shared_ptr<PersonalInformation>& personalInformation,
            const std::shared_ptr<AcademicBackground>& academicBackground,
            const std::shared_ptr<ProfessionalExperience>& experience);
  ~Candidate();

  std::shared_ptr<PersonalInformation> getPersonalInfo() const;
  void setPersonalInfo(
      const std::shared_ptr<PersonalInformation>& personalInfo);

  std::shared_ptr<AcademicBackground> getAcademicBackground() const;
  void setAcademicBackground(
      const std::shared_ptr<AcademicBackground>& academicBackground);

  std::shared_ptr<ProfessionalExperience> getExperience() const;
  void setExperience(const std::shared_ptr<ProfessionalExperience>& experience);

  bool operator<(const Candidate &that) const;
  bool operator==(const Candidate &that) const;

  virtual std::string toString() override;
};

#endif