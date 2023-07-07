#include<iostream>
#include“OTPGenerator.h” //Umoh Ephraim Gabriel 19/097344156
#include“PhoneNumberInput.h” //Ahilaga Barak 19/097344008
#include“OTPSender.h” //Ekele Emmanuel Anyanwu 19/097344050
#include“OTPVerifier.h” //Ekom-Nta Mary 19/097344051
#include“AccessController.h” //Effem Holy Cyprian 19/097344044
Using namespace std;

int main()
{
    std::string phoneNumber;
    int otp;
    Bool isVerified = false;

    phoneNumber = getPhoneNumberFromUser();
    otp = generateOTP();
    sendOTP(phoneNumber, otp);

    while (!isVerified)
    {
        int userOTP;
        std::cout << “Enter the OTP: “;
        std::cin >> userOTP;

        if (verifyOTP(userOTP, otp))
        {
            grantAccess();
            isVerified = true;
        }
        else
        {
            blockAccess();
        }
    }

    Return 0;
}
