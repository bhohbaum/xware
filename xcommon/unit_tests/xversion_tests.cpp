/*
* ****************************************************************************
* *                                                                          *
* * Copyright 2008, xWorkshop Inc.                                           *
* * All rights reserved.                                                     *
* * Redistribution and use in source and binary forms, with or without       *
* * modification, are permitted provided that the following conditions are   *
* * met:                                                                     *
* *    * Redistributions of source code must retain the above copyright     *
* * notice, this list of conditions and the following disclaimer.            *
* *    * Redistributions in binary form must reproduce the above             *
* * copyright notice, this list of conditions and the following disclaimer   *
* * in the documentation and/or other materials provided with the            *
* * distribution.                                                            *
* *    * Neither the name of xWorkshop Inc. nor the names of its             *
* * contributors may be used to endorse or promote products derived from     *
* * this software without specific prior written permission.                 *
* * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS     *
* * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT        *
* * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR    *
* * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT     *
* * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    *
* * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT         *
* * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,    *
* * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY    *
* * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT      *
* * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE    *
* * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.     *
* *                                                                          *
* * Author: stoneyrh@163.com                                                 *
* *                                                                          *
* ****************************************************************************
*/

#include <gtest/gtest.h>
#include "xversion.hxx"

using namespace xws;

TEST(xversion_tests, test_initialization)
{
    {
        xversion version;
        EXPECT_EQ(version.major_value(), 1);
        EXPECT_EQ(version.minor_value(), 0);
        EXPECT_EQ(version.release_value(), 0);
        EXPECT_EQ(version.build_value(), 0);
    }
    {
        xversion version(1, 2, 3);
        EXPECT_EQ(version.major_value(), 1);
        EXPECT_EQ(version.minor_value(), 2);
        EXPECT_EQ(version.release_value(), 3);
        EXPECT_EQ(version.build_value(), 0);
    }
    {
        xversion version(4, 2, 3, 200);
        EXPECT_EQ(version.major_value(), 4);
        EXPECT_EQ(version.minor_value(), 2);
        EXPECT_EQ(version.release_value(), 3);
        EXPECT_EQ(version.build_value(), 200);
    }
}

TEST(xversion_tests, test_string_conversion)
{
    xversion version;
    EXPECT_EQ(version.x_str(), _X("1.0.0.0"));
}
