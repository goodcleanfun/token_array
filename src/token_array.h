#pragma once

#include <stdint.h>

typedef struct token {
    uint64_t offset;
    uint64_t len:48;
    uint64_t type:16;
} token_t;

#define NULL_TOKEN (token_t){0, 0, 0}

#define ARRAY_NAME token_array
#define ARRAY_TYPE token_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE
