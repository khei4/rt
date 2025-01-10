#include "InOneWeekend/vec3.h"
#include <gtest/gtest.h>

TEST(Vec3Test, Constructors) {
  vec3 default_vec;
  EXPECT_DOUBLE_EQ(default_vec.x(), 0);
  EXPECT_DOUBLE_EQ(default_vec.y(), 0);
  EXPECT_DOUBLE_EQ(default_vec.z(), 0);

  vec3 custom_vec(1.0, 2.0, 3.0);
  EXPECT_DOUBLE_EQ(custom_vec.x(), 1.0);
  EXPECT_DOUBLE_EQ(custom_vec.y(), 2.0);
  EXPECT_DOUBLE_EQ(custom_vec.z(), 3.0);
}

TEST(Vec3Test, Operations) {
  vec3 v(1, 2, 3);
  vec3 u(1, 5, 7);

  vec3 added = v;
  added += u;
  EXPECT_EQ(added.x(), 2);
  EXPECT_EQ(added.y(), 7);
  EXPECT_EQ(added.z(), 10);

  vec3 scaled = v;
  scaled *= 2;
  EXPECT_EQ(scaled.x(), 2);
  EXPECT_EQ(scaled.y(), 4);
  EXPECT_EQ(scaled.z(), 6);

  vec3 divided = v;
  divided /= 2;
  EXPECT_EQ(divided.x(), 0.5);
  EXPECT_EQ(divided.y(), 1.0);
  EXPECT_EQ(divided.z(), 1.5);
}

TEST(Vec3Test, Length) {
  vec3 v(3, 4, 0);
  EXPECT_DOUBLE_EQ(v.length(), 5);
  EXPECT_DOUBLE_EQ(v.length_squared(), 25);
}