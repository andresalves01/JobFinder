#ifndef ADDRESS_HPP
#define ADRESS_HPP

#define MAX_NUMBER 999999
#define STREET_LENGTH 100
#define COMPLEMENT_LENGTH 50
#define BLOCK_LENGTH 100
#define CITY_LENGTH 100
#define STATE_LENGTH 50
#define COUNTRY_LENGTH 60
#define ZIPCODE_LENGTH 20

#include <string>

class Address {
 private:
  std::string street;
  int number;
  std::string complement;
  std::string block;

  std::string city;
  std::string state;
  std::string country;

  std::string zipcode;

 public:
  Address(const std::string &street, const int &number,
          const std::string &complement, const std::string &block,
          const std::string &city, const std::string &state,
          const std::string &country, const std::string &zipcode);

  std::string getStreet() const;
  void setStreet(const std::string &street);

  int getNumber() const;
  void setNumber(const int &number);

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

  std::string getZipcode() const;
  void setZipcode(const std::string &zipcode);

  std::string toString() const;

  bool operator<(const Address &that) const;
  bool operator==(const Address &that) const;

  ~Address(){}
};

#endif