#include "greatest/greatest.h"

#include "token_array.h"


TEST test_token_size(void) {
    token_t token = NULL_TOKEN;
    ASSERT_EQ(sizeof(token), 16);
    PASS();
}

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
    GREATEST_MAIN_BEGIN();      /* command-line options, initialization. */

    RUN_TEST(test_token_size);

    GREATEST_MAIN_END();        /* display results */
}