///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Animal_Farm - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define MAX_CAT_NAME_LENGTH (50)
//#define MAX_CATS (1024)
#define PROGRAM_NAME "Animal Farm 2"
//#define UNKNOWN_WEIGHT (-1)


// enums
enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed  {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
//enum Color  {UNKNOWN_COLOR, BLACK, WHITE, GREY, PINK, RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};

/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_DUMP \
 /* Print =========================================================== */ \
 std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl
/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
 std::cout << std::setfill( ' ' ) /* Space pad */ \
 << std::left /* Left justify */ \
 << std::boolalpha /* Print `true` or `false` for `bool`s */ \
 << std::setw(8) << (className) \
 << std::setw(20) << (member) \
 << std::setw(52) /* (data) */
