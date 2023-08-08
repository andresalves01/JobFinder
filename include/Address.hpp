#ifndef ADDRESS_HPP
#define ADRESS_HPP

#include <string>

#include "Class.hpp"

class Address : public Class {
 private:
  std::string street;
  std::string number;
  std::string complement;
  std::string block;

  std::string city;
  std::string state;
  std::string country;

  int zipcode;

 public:
  Address(const std::string &street, const std::string &number,
          const std::string &complement, const std::string &block,
          const std::string &city, const std::string &state,
          std::string country, int zipcode);

  std::string getStreet() const;
  void setStreet(const std::string &street);

  std::string getNumber() const;
  void setNumber(const std::string &number);

  std::string getComplement() const;
  void setComplement(const std::string &complement);

  std::string getBlock() const;
  void setBlock(const std::string &block);

  std::string getCity() const;
  void setCity(const std::string &city);

  std::string getState() const;
  void setState(const std::string &state);

  std::string getCountry() const;
  void setCountry(const std::string &country);

  int getZipcode() const;
  void setZipcode(const int &zipcode);

  virtual std::string toString() const override;

  bool operator<(const Address &that) const;
  bool operator==(const Address&that) const;

  ~Address();
};

#endif