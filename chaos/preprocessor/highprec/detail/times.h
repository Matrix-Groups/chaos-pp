# /* *************************************************************************
#  *                                                                         *
#  *    (C) Copyright Paul Mensonides 2003.                                  *
#  *                                                                         *
#  *    Use, modification, and distribution are subject to Version 1.0 of    *
#  *    the Boost Software License.  (See accompanying file LICENSE.)        *
#  *                                                                         *
#  *    See http://chaos-pp.sourceforge.net for most recent version.         *
#  *                                                                         *
#  ************************************************************************* */
#
# ifndef CHAOS_PREPROCESSOR_HIGHPREC_DETAIL_TIMES_H
# define CHAOS_PREPROCESSOR_HIGHPREC_DETAIL_TIMES_H
#
# include <chaos/preprocessor/highprec/detail/digit.h>
#
# /* CHAOS_PP_TIMES */
#
# define CHAOS_PP_TIMES(a, b) \
    CHAOS_PP_DIGIT(b, CHAOS_PP_DIGIT(a, ( \
        ((8, 1), (7, 2), (6, 3), (5, 4), (4, 5), (3, 6), (2, 7), (1, 8), (0, 9), (0, 0)), \
        ((7, 2), (6, 4), (5, 6), (4, 8), (4, 0), (3, 2), (2, 4), (1, 6), (0, 8), (0, 0)), \
        ((6, 3), (5, 6), (4, 9), (4, 2), (3, 5), (2, 8), (2, 1), (1, 4), (0, 7), (0, 0)), \
        ((5, 4), (4, 8), (4, 2), (3, 6), (3, 0), (2, 4), (1, 8), (1, 2), (0, 6), (0, 0)), \
        ((4, 5), (4, 0), (3, 5), (3, 0), (2, 5), (2, 0), (1, 5), (1, 0), (0, 5), (0, 0)), \
        ((3, 6), (3, 2), (2, 8), (2, 4), (2, 0), (1, 6), (1, 2), (0, 8), (0, 4), (0, 0)), \
        ((2, 7), (2, 4), (2, 1), (1, 8), (1, 5), (1, 2), (0, 9), (0, 6), (0, 3), (0, 0)), \
        ((1, 8), (1, 6), (1, 4), (1, 2), (1, 0), (0, 8), (0, 6), (0, 4), (0, 2), (0, 0)), \
        ((0, 9), (0, 8), (0, 7), (0, 6), (0, 5), (0, 4), (0, 3), (0, 2), (0, 1), (0, 0)), \
        ((0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0), (0, 0)) \
    ))) \
    /**/
#
# endif
