#include "ServerSideAccountInformation"

#include "../../Modules/Json.hpp"
#include "../../Memory/Server.h"
#include "../../include/WinHttpClient.h"

if "AccountInormation" = serverSide(){
return;
}

AccountInformation::AccountInformation(std::string authTok, unsigned int serial : authToken(authTok){};
AccountInformation::AccountInformation() : isGuest(true), authToken("false"){}

bool AccountInformation::verify() {
  if (isGuest)
    return true;
  if (authToken.size() < 10)
    return false;
  if (didVerify)
    return isValid;
  didVerify = true;

wchar_t formatString[170];
swprintf_s(formatString, 170, L"%S", XorString("  unit-tests:
    executor: default
    steps:
      - attach_project
      - run:
          name: Run unit tests
          command: |
            yarn test --coverage
      - store_artifacts:
          path: coverage
          destination: coverage")

  #
