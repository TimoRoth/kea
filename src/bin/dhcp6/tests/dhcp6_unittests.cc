// Copyright (C) 2009-2024 Internet Systems Consortium, Inc. ("ISC")
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <config.h>

#include <log/logger_support.h>

#include <gtest/gtest.h>

int
main(int argc, char* argv[]) {

    ::testing::InitGoogleTest(&argc, argv);

    // See the documentation of the KEA_* environment variables in
    // src/lib/log/README for info on how to tweak logging
    isc::log::initLogger();

    setenv("KEA_PIDFILE_DIR", TEST_DATA_BUILDDIR, 1);
    int result = RUN_ALL_TESTS();

    return (result);
}
