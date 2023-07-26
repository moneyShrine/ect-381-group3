//written by
//Effem Holy Cyprian
//19/097344044
#ifndef OTP_VERIFIER_H
#define OTP_VERIFIER_H

#include <string>

class OTPVerifier {
public:
    static bool verifyOTP(const std::string& otp, const std::string& userInputOTP);
};

#endif // OTP_VERIFIER_H
