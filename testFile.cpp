/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Testing printTriangleShape function") {
    SECTION("Test with n = 5") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printTriangleShape(5);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "    * \n   * * \n  * * * \n * * * * \n* * * * * \n";
        REQUIRE(output.str() == expectedOutput);
    }

    SECTION("Test with n = 3") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printTriangleShape(3);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "  * \n * * \n* * * \n";
        REQUIRE(output.str() == expectedOutput);
    }
}

TEST_CASE("test2", "Testing printInvertedTriangleShape function") {
    SECTION("Test with n = 5") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printInvertedTriangleShape(5);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "*********\n *******\n  *****\n   ***\n    *\n";
        REQUIRE(output.str() == expectedOutput);
    }

    SECTION("Test with n = 3") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printInvertedTriangleShape(3);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "*****\n ***\n  *\n";
        REQUIRE(output.str() == expectedOutput);
    }
}

TEST_CASE("test3", "Testing printHalfDiamondShape function") {
    SECTION("Test with n = 5") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printHalfDiamondShape(5);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "* \n* * \n* * * \n* * * * \n* * * * * \n* * * * \n* * * \n* * \n* \n";
        REQUIRE(output.str() == expectedOutput);
    }

    SECTION("Test with n = 3") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printHalfDiamondShape(3);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "* \n* * \n* * * \n* * \n* \n";
        REQUIRE(output.str() == expectedOutput);
    }
}

TEST_CASE("test4", "Testing printNumbersPyramidWithoutReassgining function") {
    SECTION("Test with n = 5") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printNumbersPyramidWithoutReassginingShape(5);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "1 \n2 3 \n4 5 6 \n7 8 9 10 \n11 12 13 14 15 \n";
        REQUIRE(output.str() == expectedOutput);
    }

    SECTION("Test with n = 3") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printNumbersPyramidWithoutReassginingShape(3);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "1 \n2 3 \n4 5 6 \n";
        REQUIRE(output.str() == expectedOutput);
    }
}

TEST_CASE("test5", "Testing printPalindromeTriangleShape function") {
    SECTION("Test with n = 5") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printPalindromeTriangleShape(5);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "        1 \n      2 3 2 \n    3 4 5 4 3 \n  4 5 6 7 6 5 4 \n5 6 7 8 9 8 7 6 5 \n";
        REQUIRE(output.str() == expectedOutput);
    }

    SECTION("Test with n = 3") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printPalindromeTriangleShape(3);

        cout.rdbuf(oldCoutBuffer);

        string expectedOutput = "    1 \n  2 3 2 \n3 4 5 4 3 \n";
        REQUIRE(output.str() == expectedOutput);
    }
}