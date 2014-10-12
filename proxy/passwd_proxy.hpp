#ifndef PASSWD_PROXY_HPP
#define PASSWD_PROXY_HPP

#include <string>

class PasswordProxy {
 public:
  virtual bool verify(std::string const&) = 0;

 protected:
  virtual ~PasswordProxy() = default;
  PasswordProxy() = default;
};

#endif
