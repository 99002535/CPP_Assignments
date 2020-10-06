#include <gtest/gtest.h>
#include "customer.h"
#include "postpaid.h"
#include "prepaid.h"
namespace {
//Customer Unit Testing
TEST(CustomerBase,PostpaidDisplayParameterized) {
    PostpaidCustomer d1("99002535","Suraj","8885994995",500.0,24);
    std::string ExpectedOut = "Type of Account : PostPaid\nDue date: 24";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidDisplayParameterized) {
    PrepaidCustomer d1("99002535","Suraj","8885994995",500.0);
    std::string ExpectedOut = "Type of Account : PrePaid\nRecharge soon to avoid network connection breakage";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidDisplay3ParameterConstructor) {
    PostpaidCustomer d1("99002535","Suraj","8885994995");
    std::string ExpectedOut = "Type of Account : PostPaid\nDue date: 0";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidDisplay3ParameterConstructor) {
    PrepaidCustomer d1("99002535","Suraj","8885994995");
    std::string ExpectedOut = "Type of Account : PrePaid\nRecharge soon to avoid network connection breakage";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidGetBalance) {
    PostpaidCustomer d1("99002535","Suraj","8885994995",500.0,24);
    EXPECT_EQ(500.0, d1.getBalance());
}
TEST(CustomerBase,PrepaidGetBalance) {
    PrepaidCustomer d1("99002535","Suraj","8885994995",500.0);
    EXPECT_EQ(500.0, d1.getBalance());
}
TEST(CustomerBase,PostpaidMakeCall) {
    PostpaidCustomer d1("99002535","Suraj","8885994995",500.0,24);
    std::string ExpectedOut = "Call time: 10mins\nRemaining recharge balance: 490\n";
    testing::internal::CaptureStdout();
    d1.makeCall(10.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidMakeCall) {
    PrepaidCustomer d1("99002535","Suraj","8885994995",500.0);
    std::string ExpectedOut = "Call time: 20mins\nRemaining recharge balance: 480\n";
    testing::internal::CaptureStdout();
    d1.makeCall(20.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PostpaidRecharge) {
    PostpaidCustomer d1("99002535","Suraj","8885994995",500.0,24);
    std::string ExpectedOut = "Your Postpaid phone has been recharged by: 150\nYour current Postpaid balance is: 650";
    testing::internal::CaptureStdout();
    d1.credit(150.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(CustomerBase,PrepaidRecharge) {
    PrepaidCustomer d1("99002535","Suraj","8885994995",500.0);
    std::string ExpectedOut = "Your Prepaid phone has been recharged by: 150\nYour current Prepaid balance is: 650";
    testing::internal::CaptureStdout();
    d1.credit(150.0);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(Distance,ParameterizedConstructor) {
    Distance d1(6,1);
    std::string ExpectedOut = "Feet: 6 Inches: 1\n";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorplus) {
    Distance d1(3,4);
    Distance d2(3,1);
    Distance d3;
    d3=d1+d2;
    std::string ExpectedOut = "Feet: 6 Inches: 5\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorminus) {
    Distance d1(3,5);
    Distance d2(4,1);
    Distance d3;
    d3=d1-d2;
    std::string ExpectedOut = "Feet: 0 Inches: 4\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorplusnum) {
    Distance d1(3,5);
    Distance d3;
    d3=d1+(5);
    std::string ExpectedOut = "Feet: 3 Inches: 10\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorminusnum) {
    Distance d1(3,5);
    Distance d3;
    d3=d1-(5);
    std::string ExpectedOut = "Feet: 3 Inches: 0\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorplusplus) {
    Distance d1(3,5);
    Distance d2(3,1);
    Distance d3;
    d3=d1+d2;
    ++d3;
    std::string ExpectedOut = "Feet: 7 Inches: 7\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorpluspluspost) {
    Distance d1(5,5);
    Distance d2(3,1);
    Distance d3;
    d3=d1+d2;
    d3++;
    std::string ExpectedOut = "Feet: 9 Inches: 7\n";
    testing::internal::CaptureStdout();
    d3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
TEST(Distance,Operatorequals) {
    Distance d1(5,5);
    EXPECT_EQ(0, d1==4);
    EXPECT_EQ(1, d1==5);
}
/*
TEST(Distance,OperatorLessThan) {
    Distance d1(5,5);
    EXPECT_EQ(0, d1<4);
    EXPECT_EQ(1, d1<10);
}
/*
TEST(Distance,OperatorGreaterThan) {
    Distance d1(5,5);
    EXPECT_EQ(1, d1>4);
    EXPECT_EQ(0, d1>10);

}
*/
}
