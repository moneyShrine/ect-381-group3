//written by
//Ekele Emmanuel Anyanwu
//19/097344050

#ifndef OTP_SENDER_H
#define OTP_SENDER_H

#include <string>

class OTPSender {
public:
    static bool sendOTP(const std::string& phoneNumber, const std::string& otp);
};

#endif // OTP_SENDER_H
