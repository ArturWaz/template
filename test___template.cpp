/*
 *      Author: Artur Waz
 *      Year: 2015
 */



//#include "Template.h"


#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Template
#include <boost/test/unit_test.hpp>



struct Test___Template {
	Test___Template() {} // setup
	~Test___Template() {} // teardown
};


BOOST_FIXTURE_TEST_SUITE(___template, Test___Template)



BOOST_AUTO_TEST_CASE(test_one){
	BOOST_MESSAGE("Everything is ok. ;)");
}





BOOST_AUTO_TEST_SUITE_END()

