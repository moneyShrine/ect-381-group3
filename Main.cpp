#include <iostream>
#include "otpgenerator.h"
#include "phonenumberinput.h"
#include "otpsender.h"
#include "otpverifier.h"
#include "otpaccesscontroller.h"

using namespace std;
using namespace OTPGenerator;
using namespace PhoneNumberInput;
using namespace OTPSender;
using namespace OTPVerifier;
using namespace OTPAccessController;

int main() {
    // Get the user's phone number
    std::string phoneNumber = PhoneNumberInput::getPhoneNumberFromUser();

    // Generate a random OTP
    std::string otp = OTPGenerator::generateOTP(6); // 6-digit OTP for example

    // Send the OTP to the user's phone number
    bool otpSent = OTPSender::sendOTP(phoneNumber, otp);

    if (otpSent) {
        // Get the user's input for OTP verification
        std::string userInputOTP;
        std::cout << "Enter the OTP received on your phone: ";
        std::cin >> userInputOTP;

        // Verify the OTP
        bool isOTPValid = OTPVerifier::verifyOTP(otp, userInputOTP);

        if (isOTPValid) {
            // Grant access if OTP is valid
            bool accessGranted = OTPAccessController::grantAccess(phoneNumber, otp);
            if (accessGranted) {
                std::cout << "Access granted!\n";
            } else {
                std::cout << "Access denied!\n";
            }
        } else {
            std::cout << "Invalid OTP. Access denied!\n";
        }
    } else {
        std::cout << "Failed to send OTP. Please try again later.\n";
    }

    return 0;
}
