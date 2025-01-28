#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./include/doctest.h"

bool non_negative_prefix_sum(int lst[], int len) {
    bool value = true;
    int sum = 0;
    for (int i=0; i < len; i++) {
        sum += lst[i];
        if (sum < 0) {
            value = false;
            break;
        }
    }
    return value;
}


TEST_CASE("testing the factorial function") {

 int lst0[] = {};
 int lst1[] = {1,-1,1,-1};
 int lst2[] = {1,-1,-1, 1};

 CHECK(non_negative_prefix_sum(lst0, sizeof(lst0)/sizeof(int)));
 CHECK(non_negative_prefix_sum(lst1, sizeof(lst1)/sizeof(int))); 
 CHECK(! non_negative_prefix_sum(lst2, sizeof(lst2)/sizeof(int)));  
 
}