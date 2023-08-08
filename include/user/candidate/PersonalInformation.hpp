#ifndef PERSONAL_INFORMATION_HPP
#define PERSONAL_INFORMATION_HPP

#include <string>

#include "Class.hpp"

class PersonalInformation : public Class {
 private:
  std::string name;
  std::string surname;
  std::string birthdate;

  std::string race;
  char gender;
  std::string disability;

 public:
  PersonalInformation(const std::string &name, const std::string &surname,
                      const std::string &birthdate, const std::string &race,
                      const char &gender);

  PersonalInformation(const std::string &name, const std::string &surname,
                      const std::string &birthdate, const std::string &race,
                      const char &gender, const std::string &disability);

  std::string getName() const;
  void setName(const std::string &name);

  std::string getSurname() const;
  void setSurname(const std::string &surname);

  std::string getBirthdate() const;
  void setBirthdate(const std::string &birthdate);

  std::string getRace() const;
  void setRace(const std::string &race);

  char getGender() const;
  void setGender(const char &gender);

  std::string getDisability() const;
  void setDisability(const std::string &disability);

  virtual std::string toString() override;

  bool operator<(const PersonalInformation &that) const;
  bool operator==(Const PersonalInformation &that) const;

  ~PersonalInformation();
};

#endif