//written by
//Umoh Ephraim Gabriel
//19/097344156
#ifndef OTP_ACCESS_CONTROLLER_H
#define OTP_ACCESS_CONTROLLER_H

#include <string>

class OTPAccessController {
public:
    static bool grantAccess(const std::string& phoneNumber, const std::string& userInputOTP);
};

#endif // OTP_ACCESS_CONTROLLER_H
