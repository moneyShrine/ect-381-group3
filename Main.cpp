#include<iostream>
#Include “OTPGenerator.h” //Umoh Ephraim Gabriel 19/097344156
#include “PhoneNumberInput.h” //Ahilaga Barak 19/097344008
#include “OTPSender.h” // //Ekele Emmanuel Anyanwu 19/097344050
#include “OTPVerifier.h” //Ekom-Nta Mary 19/097344051
#include “AccessController.h” //Effem Holy Cyprian 19/097344044
Using namespace std;

Int main()
{
    Std::string phoneNumber;
    Int otp;
    Bool isVerified = false;

    phoneNumber = getPhoneNumberFromUser();
    otp = generateOTP();
    sendOTP(phoneNumber, otp);

    while (!isVerified)
    {
        Int userOTP;
        Std::cout << “Enter the OTP: “;
        Std::cin >> userOTP;

        If (verifyOTP(userOTP, otp))
        {
            grantAccess();
            isVerified = true;
        }
        Else
        {
            blockAccess();
        }
    }

    Return 0;
}
