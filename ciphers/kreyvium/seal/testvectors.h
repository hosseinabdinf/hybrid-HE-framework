#pragma once

#include "../../common/seal_kats.h"
#include "kreyvium_seal.h"

using namespace KREYVIUM;

// build an array of KnownAnswerTests for KREYVIUM
SEALKnownAnswerTest<KREYVIUM_SEAL> KNOWN_ANSWER_TESTS[] = {
    {
        {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
         0x55, 0x55, 0x55, 0x55},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x89, 0xA3, 0xB7, 0x00, 0xD9, 0x44},
        2,
        16384,
        128,
        SEALKnownAnswerTest<KREYVIUM_SEAL>::Testcase::DEC,
    },
    {
        {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
         0x55, 0x55, 0x55, 0x55},
        {0x00},
        {0x00},
        2,
        32768,
        128,
        SEALKnownAnswerTest<KREYVIUM_SEAL>::Testcase::USE_CASE,
        5,
        16,
    }};