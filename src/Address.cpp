#include "/home/andre/pessoal/sga/include/Address.hpp"

#include <exception>
#include <iostream>
#include <regex>
#include <string>

Address::Address(const std::string& street, const int& number,
                 const std::string& complement, const std::string& block,
                 const std::string& city, const std::string& state,
                 const std::string& country, const std::string& zipcode) {
  this->setBlock(block);
  this->setCity(city);
  this->setComplement(complement);
  this->setCountry(country);
  this->setState(state);
  this->setStreet(street);
  this->setNumber(number);
  this->setZipcode(zipcode);
}

std::string Address::getStreet() const { return this->street; }

void Address::setStreet(const std::string& street) {
  if (street.empty()) {
    throw std::exception();
  } else if (street.length() > STREET_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(street, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->street = street;
}

int Address::getNumber() const { return this->number; }

void Address::setNumber(const int& number) {
  if (number < 0) {
    throw std::exception();
  } else if (number > MAX_NUMBER) {
    throw std::exception();
  }
  this->number = number;
}

std::string Address::getComplement() const { return this->complement; }

void Address::setComplement(const std::string& complement) {
  if (complement.empty()) {
    throw std::exception();
  } else if (complement.length() > COMPLEMENT_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(complement,
                               std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->complement = complement;
}

std::string Address::getBlock() const { return this->block; }

void Address::setBlock(const std::string& block) {
  if (block.empty()) {
    throw std::exception();
  } else if (block.length() > BLOCK_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(block, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->block = block;
}

std::string Address::getCity() const { return this->city; }

void Address::setCity(const std::string& city) {
  if (city.empty()) {
    throw std::exception();
  } else if (city.length() > CITY_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(city, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->city = city;
}

std::string Address::getState() const { return this->state; }

void Address::setState(const std::string& state) {
  if (state.empty()) {
    throw std::exception();
  } else if (state.length() > STATE_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(state, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->state = state;
}

std::string Address::getCountry() const { return this->country; }

void Address::setCountry(const std::string& country) {
  if (country.empty()) {
    throw std::exception();
  } else if (country.length() > COUNTRY_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(country, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->country = country;
}

std::string Address::getZipcode() const { return this->zipcode; }

void Address::setZipcode(const std::string& zipcode) {
  if (zipcode.empty()) {
    throw std::exception();
  } else if (zipcode.length() > ZIPCODE_LENGTH) {
    throw std::exception();
  } else if (!std::regex_match(zipcode, std::regex(R"([a-zA-Z0-9\s\.,-]+)"))) {
    throw std::exception();
  }
  this->zipcode = zipcode;
}