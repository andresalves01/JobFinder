#ifndef OWNED_BY_CANDIDATE_HPP
#define OWNED_BY_CANDIDATE_HPP

#include <memory>
#include <string>

#include "Candidate.hpp"
#include "Class.hpp"

class OwnedByCandidate {
 protected:
  std::shared_ptr<Candidate> owner;

 public:
  OwnedByCandidate(const std::shared_ptr<Candidate> &owner);

  std::shared_ptr<Candidate> &getOwner() const;
  void setOwner(const std::shared_ptr<Candidate> &owner);

  ~OwnedByCandidate();
};

#endif