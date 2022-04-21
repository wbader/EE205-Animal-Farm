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

#include <stdexcept>
#include <ostream>

#define PROGRAM_NAME "Animal Farm 2"

/// A gender... for educational use only. This is not intended to be
/// inclusive of all possible genders
enum class Gender {
    UNKNOWN_GENDER=0
    ,MALE
    ,FEMALE
};
/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`). `
/// `lhs` stands for Left Hand Side and means the left side
/// of the `<<` operator.
/// @param rhs_Gender The Gender to output.
/// `rhs` stands for Right Hand Side and means the right
/// side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ){
    switch( rhs_Gender ) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
    }
    return lhs_stream;
}

/// Breed
enum class Breed  {UNKNOWN_BREED = 0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

inline std::ostream& operator<<( std::ostream& lhs_stream, const Breed& rhs_Breed ){
    switch( rhs_Breed ) {
        case Breed::UNKNOWN_BREED:
            lhs_stream << "Unknown breed";
            break;
        case Breed::MAINE_COON:
            lhs_stream << "Maine Coon";
            break;
        case Breed::MANX:
            lhs_stream << "Manx";
            break;
        case Breed::SHORTHAIR:
            lhs_stream << "Shorthair";
            break;
        case Breed::PERSIAN:
            lhs_stream << "Persian";
            break;
        case Breed::SPHYNX:
            lhs_stream << "Sphynx";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Breed not mapped to a string" );
    }
    return lhs_stream;
}
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
