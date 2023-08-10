#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#define EXPECTED_STRING "Expected Strin0g"
#define UNEXPECTED_STRING "*_\\|;?!@#$%¨&"

#include <regex>

#include "/home/andre/pessoal/sga/include/Address.hpp"
#include "/home/andre/pessoal/sga/third_party/doctest.h"

std::string street = "street";
std::string zipcode = "123456";
std::string complement = "complement";
std::string block = "block";
std::string city = "city";
std::string state = "state";
std::string country = "country";
int number = 0;

Address expected(street, number, complement, block, city, state, country,
                 zipcode);

TEST_CASE("Test Case 1 - Street getters and setters") {
  CHECK(street == expected.getStreet());

  street = EXPECTED_STRING;
  expected.setStreet(street);
  CHECK(expected.getStreet() == street);

  street.clear();
  CHECK_THROWS_AS(expected.setStreet(street), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  street = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setStreet(street), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(
      expected.setStreet(std::string(STREET_LENGTH + 1, ' ')),
      std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  street = "street";
}

TEST_CASE("Test Case 2 - Number getters and setters") {
  CHECK(expected.getNumber() == number);

  number = 10;
  expected.setNumber(number);
  CHECK(expected.getNumber() == number);

  number = -1;
  CHECK_THROWS_AS(expected.setNumber(number), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  number = MAX_NUMBER + 1;
  CHECK_THROWS_AS(expected.setNumber(number), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  number = 0;
}

TEST_CASE("Test Case 3 - Complement getters and setters") {
  CHECK(expected.getComplement() == complement);

  complement = EXPECTED_STRING;
  expected.setComplement(complement);
  CHECK(expected.getComplement() == complement);

  complement = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setComplement(complement), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  complement.clear();
  CHECK_THROWS_AS(expected.setComplement(complement), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(
      expected.setComplement(std::string(COMPLEMENT_LENGTH + 1, ' ')),
      std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  complement = "complement";
}

TEST_CASE("Test Case 4 - Block getters and setters") {
  CHECK(expected.getBlock() == block);

  block = EXPECTED_STRING;
  expected.setBlock(block);
  CHECK(expected.getBlock() == block);

  block = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setBlock(block), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  block.clear();
  CHECK_THROWS_AS(expected.setBlock(block), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(expected.setBlock(std::string(BLOCK_LENGTH + 1, ' ')),
                  std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  block = "block";
}

TEST_CASE("Test Case 5 - City getters and setters") {
  CHECK(expected.getCity() == city);

  city = EXPECTED_STRING;
  expected.setCity(city);
  CHECK(expected.getCity() == city);

  city = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setCity(city), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  city.clear();
  CHECK_THROWS_AS(expected.setCity(city), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(expected.setCity(std::string(CITY_LENGTH + 1, ' ')),
                  std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  city = "city";
}

TEST_CASE("Test Case 6 - State getters and setters") {
  CHECK(expected.getState() == state);

  state = EXPECTED_STRING;
  expected.setState(state);
  CHECK(expected.getState() == state);

  state = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setState(state), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  state.clear();
  CHECK_THROWS_AS(expected.setState(state), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(expected.setState(std::string(STATE_LENGTH + 1, ' ')),
                  std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  state = "state";
}

TEST_CASE("Test Case 7 - Country getters and setters") {
  CHECK(expected.getCountry() == country);

  country = EXPECTED_STRING;
  expected.setCountry(country);
  CHECK(expected.getCountry() == country);

  country = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setCountry(country), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  country.clear();
  CHECK_THROWS_AS(expected.setCountry(country), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(expected.setCountry(std::string(COUNTRY_LENGTH + 1, ' ')),
                  std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  country = "country";
}

TEST_CASE("Test Case 8 - Zipcode getters and setters") {
  CHECK(expected.getZipcode() == zipcode);

  zipcode = "654321";
  expected.setZipcode(zipcode);
  CHECK(expected.getZipcode() == zipcode);

  zipcode = UNEXPECTED_STRING;
  CHECK_THROWS_AS(expected.setZipcode(zipcode), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  zipcode.clear();
  CHECK_THROWS_AS(expected.setZipcode(zipcode), std::exception);
  CHECK_THROWS_AS(
      Address(street, number, complement, block, city, state, country, zipcode),
      std::exception);

  CHECK_THROWS_AS(expected.setZipcode(std::string(ZIPCODE_LENGTH + 1, ' ')),
                  std::exception);
  CHECK_THROWS_AS(
      Address(street, number, street, block, city, state, country, zipcode),
      std::exception);

  zipcode = "123456";
}