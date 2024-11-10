#include "InOneWeekend/color.h"
#include "InOneWeekend/vec3.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(ColorTest, WriteColor) {
    std::ostringstream out;
    color test_color(0.5, 0.25, 0.75);

    write_color(out, test_color);

    // Expected output is based on the calculations within write_color
    std::string expected = "127 63 191\n";
    EXPECT_EQ(out.str(), expected);
}

