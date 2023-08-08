#ifndef USER_HPP
#define USER_HPP

#include <memory>
#include <string>

#include "Address.hpp"
#include "Class.hpp"

class User : public Class {
 private:
  std::string username;
  std::string email;
  std::string password;
  std::shared_ptr<Address> address;

  bool isLogged;

 public:
  User(const std::string &username, const std::string &password);
  User(const std::string &username, const std::string &password,
       const std::shared_ptr<Address> &address);

  bool login(const std::string &password);

  std::string getUsername() const;
  void setUsername(const std::string &username);

  std::string getEmail() const;
  void setEmail(const std::string &email);

  std::string getPassword() const;
  bool setNewPassword(const std::string &oldPassword,
                      const std::string &newPassword);

  std::shared_ptr<Address> getAddress() const;
  void setAddress(const std::shared_ptr<Address> &address);

  bool getLoginStatus() const;
  void logout();

  virtual std::string toString() const override;

  bool operator<(const User &that) const;
  bool operator<(const User &that) const;

  ~User();
};

#endif