#ifndef PROFESSIONAL_EXPERIENCE_HPP
#define PROFESSIONAL_EXPERIENCE_HPP

#include <string>

#include "/home/andre/pessoal/sga/include/enterprise/Enterprise.hpp"
#include "/home/andre/pessoal/sga/include/user/candidate/Candidate.hpp"
#include "Job.hpp"
#include "OwnedByCandidate.hpp"

class ProfessionalExperience : public OwnedByCandidate {
 private:
  std::shared_ptr<Enterprise> enterprise;
  std::shared_ptr<Job> job;

 public:
  ProfessionalExperience(const std::shared_ptr<Candidate>& owner,
                         const std::shared_ptr<Enterprise>& enterprise,
                         const std::shared_ptr<Job>& job);

  std::shared_ptr<Enterprise> getEnterprise() const;
  void setEnterprise(const std::shared_ptr<Enterprise>& enterprise);

  std::shared_ptr<Job> getJob() const;
  void setJob(const std::shared_ptr<Job>& job);

  virtual std::string toString() const override;

  bool operator<(const ProfessionalExperience &that) const;
  bool operator==(const ProfessionalExperience &that) const;

  ~ProfessionalExperience();
};

#endif