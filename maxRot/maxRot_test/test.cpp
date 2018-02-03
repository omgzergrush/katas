#include "pch.h"
#include "../maxRot.hpp"

TEST(MaxRotateTest, BasicTest) {
	EXPECT_EQ(MaxRotate::maxRot(56789), 68957);
}

TEST(MaxRotateTest, AdvancedTest1) {
	EXPECT_EQ(MaxRotate::maxRot(38458215), 85821534);
}
TEST(MaxRotateTest, AdvancedTest2) {
	EXPECT_EQ(MaxRotate::maxRot(195881031), 988103115);
}
TEST(MaxRotateTest, AdvancedTest3) {
	EXPECT_EQ(MaxRotate::maxRot(896219342), 962193428);
}
TEST(MaxRotateTest, AdvancedTest4) {
	EXPECT_EQ(MaxRotate::maxRot(69418307), 94183076);
}

TEST(MaxRotateTest, ReturnsOriginal) {
	EXPECT_EQ(MaxRotate::maxRot(54321), 54321);
}

TEST(MaxRotateTest, Comments) {
	EXPECT_EQ(MaxRotate::maxRot(507992495), 507992495);
}
