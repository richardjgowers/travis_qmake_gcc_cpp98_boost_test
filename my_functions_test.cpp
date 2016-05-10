#include <boost/test/unit_test.hpp>
#include "my_functions.h"

BOOST_AUTO_TEST_CASE(add_works)
{
  BOOST_CHECK(add(1, 1) == 2);
  BOOST_CHECK(add(1, 2) == 3);
  BOOST_CHECK(add(1, 3) == 4);
  BOOST_CHECK(add(1, 4) == 5);
}

BOOST_AUTO_TEST_CASE(multiply_works)
{
  BOOST_CHECK(multiply(1, 1) == 1);
  BOOST_CHECK(multiply(1, 2) == 2);
  BOOST_CHECK(multiply(2, 3) == 6);
  BOOST_CHECK(multiply(5, 1) == 5);
}
