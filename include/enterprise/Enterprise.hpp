#ifndef ENTERPRISE_HPP
#define ENTERPRISE_HPP

#include <string>

#include "Class.hpp"

class Enterprise : public Class {
 private:
  std::string name;
  std::string EmployerIDNumber;

  int rating;
  int numbReviews;

 public:
  Enterprise(const std::string &name, const std::string &EmployerIDNumber);
  Enterprise(const std::string &name, const std::string &EmployerIDNumber,
             const int &rating, const int &numbReviews);

  std::string getName() const;
  void setName(const std::string &name);

  std::string getEmployerIDNumber()const ;
  void setEmployerIDNumber(const string &id);

  int getRating() const;
  void setRating(const int &rating);

  int getNumbReviews() const;
  void setNumbReviews(const int &numbReviews);

  virtual std::string toString() const override;

  bool operator<(const Enterprise &that) const;

  ~Enterprise();
};

#endif
