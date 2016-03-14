/*
 *reviewed 29/2/16
 * one test isn't worth a whole test_suite (spelling corrected)
 *
 * this suite is (maybe) testing netRouteLength - that should be the suite name
 *
 * the (one) test case should be named to reflect what it is testing
 * here maybe oneRandomRoute?
 *
 * that would be okay, but no comment block (which isn't)!
 */

/*
 * reviewed 22/2/16
 *
 * rejected
 *
 * no new tests - just renamed tests from the example file
 *
 */

/* rbh created 21/2/16
 *
 * example test file.cpp
 * example of the structure of a test file
 * 
 * replace with coreect details for any new file
 * based on this file
*/



#ifndef SINGLE_TEST_INITIALISED  //only include once
#define  SINGLE_TEST_INITIALISED
#include <boost/test/included/unit_test.hpp>
#include "../unit_tests/obsolete_init.cpp"
#endif


#include<string>
#include<fstream>

#include "../headers/classes/gpxp.h"
#include "../headers/classes/route.h"


BOOST_AUTO_TEST_SUITE(N0561281_BenDoe_totalHeightGain)

std::string GPX_FILE_PATH = "../GPXfiles/";

const bool isFileName = true;
//const bool isGpxText = false;


gpxp::Route northernRoute(std::string(GPX_FILE_PATH + "PBME.gpx"), isFileName);
gpxp::Route southernRoute(std::string(GPX_FILE_PATH + "PBME.gpx"), isFileName);
gpxp::Route equatorRoute(std::string(GPX_FILE_PATH + "PBME.gpx"), isFileName);
gpxp::Route primeMeridianRoute(std::string(GPX_FILE_PATH + "PBME.gpx"), isFileName);
gpxp::Route meridian180Route(std::string(GPX_FILE_PATH + "PBME.gpx"), isFileName);

BOOST_AUTO_TEST_CASE(twoPointPositiveHeightGain)
{
 
}

BOOST_AUTO_TEST_CASE(twoPointNegativeHeightGain)
{
    
}

BOOST_AUTO_TEST_CASE(threePointThroughM)
{
    
}

BOOST_AUTO_TEST_CASE(fourPointWithFlatGradient)
{
    
}



BOOST_AUTO_TEST_CASE(perimeterThroughM)
{
    
}

BOOST_AUTO_TEST_CASE(positivePerimeterAndHalf)
{
    
}

BOOST_AUTO_TEST_CASE(negativePerimeterAndHalf)
{
    
}

BOOST_AUTO_TEST_CASE(heightGainPrecision)
{
    double percent = 1.0;
    double divisor = 2;
    int knownNetLength = 5000;
    while (true)
    {
        BOOST_CHECK_CLOSE(northernRoute.netRouteLength(), knownNetLength, percent);
        percent /= divisor;
    }
}
BOOST_AUTO_TEST_SUITE_END();