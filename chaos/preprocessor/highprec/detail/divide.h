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
# ifndef CHAOS_PREPROCESSOR_HIGHPREC_DETAIL_DIVIDE_H
# define CHAOS_PREPROCESSOR_HIGHPREC_DETAIL_DIVIDE_H
#
# include <chaos/preprocessor/cat.h>
# include <chaos/preprocessor/highprec/detail/digit.h>
#
# /* CHAOS_PP_DIVIDE */
#
# define CHAOS_PP_DIVIDE(a1, a2, b) CHAOS_PP_DIGIT(b, CHAOS_PP_CAT(CHAOS_IP_DIVIDE_, CHAOS_PP_PRIMITIVE_CAT(a1, a2)))
#
# define CHAOS_IP_DIVIDE_00 (0, 0, 0, 0, 0, 0, 0, 0, 0,)
# define CHAOS_IP_DIVIDE_01 (0, 0, 0, 0, 0, 0, 0, 0, 1,)
# define CHAOS_IP_DIVIDE_02 (0, 0, 0, 0, 0, 0, 0, 1, 2,)
# define CHAOS_IP_DIVIDE_03 (0, 0, 0, 0, 0, 0, 1, 1, 3,)
# define CHAOS_IP_DIVIDE_04 (0, 0, 0, 0, 0, 1, 1, 2, 4,)
# define CHAOS_IP_DIVIDE_05 (0, 0, 0, 0, 1, 1, 1, 2, 5,)
# define CHAOS_IP_DIVIDE_06 (0, 0, 0, 1, 1, 1, 2, 3, 6,)
# define CHAOS_IP_DIVIDE_07 (0, 0, 1, 1, 1, 1, 2, 3, 7,)
# define CHAOS_IP_DIVIDE_08 (0, 1, 1, 1, 1, 2, 2, 4, 8,)
# define CHAOS_IP_DIVIDE_09 (1, 1, 1, 1, 1, 2, 3, 4, 9,)
# define CHAOS_IP_DIVIDE_10 (1, 1, 1, 1, 2, 2, 3, 5, 9,)
# define CHAOS_IP_DIVIDE_11 (1, 1, 1, 1, 2, 2, 3, 5, 9,)
# define CHAOS_IP_DIVIDE_12 (1, 1, 1, 2, 2, 3, 4, 6, 9,)
# define CHAOS_IP_DIVIDE_13 (1, 1, 1, 2, 2, 3, 4, 6, 9,)
# define CHAOS_IP_DIVIDE_14 (1, 1, 2, 2, 2, 3, 4, 7, 9,)
# define CHAOS_IP_DIVIDE_15 (1, 1, 2, 2, 3, 3, 5, 7, 9,)
# define CHAOS_IP_DIVIDE_16 (1, 2, 2, 2, 3, 4, 5, 8, 9,)
# define CHAOS_IP_DIVIDE_17 (1, 2, 2, 2, 3, 4, 5, 8, 9,)
# define CHAOS_IP_DIVIDE_18 (2, 2, 2, 3, 3, 4, 6, 9, 9,)
# define CHAOS_IP_DIVIDE_19 (2, 2, 2, 3, 3, 4, 6, 9, 9,)
# define CHAOS_IP_DIVIDE_20 (2, 2, 2, 3, 4, 5, 6, 9, 9,)
# define CHAOS_IP_DIVIDE_21 (2, 2, 3, 3, 4, 5, 7, 9, 9,)
# define CHAOS_IP_DIVIDE_22 (2, 2, 3, 3, 4, 5, 7, 9, 9,)
# define CHAOS_IP_DIVIDE_23 (2, 2, 3, 3, 4, 5, 7, 9, 9,)
# define CHAOS_IP_DIVIDE_24 (2, 3, 3, 4, 4, 6, 8, 9, 9,)
# define CHAOS_IP_DIVIDE_25 (2, 3, 3, 4, 5, 6, 8, 9, 9,)
# define CHAOS_IP_DIVIDE_26 (2, 3, 3, 4, 5, 6, 8, 9, 9,)
# define CHAOS_IP_DIVIDE_27 (3, 3, 3, 4, 5, 6, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_28 (3, 3, 4, 4, 5, 7, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_29 (3, 3, 4, 4, 5, 7, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_30 (3, 3, 4, 5, 6, 7, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_31 (3, 3, 4, 5, 6, 7, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_32 (3, 4, 4, 5, 6, 8, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_33 (3, 4, 4, 5, 6, 8, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_34 (3, 4, 4, 5, 6, 8, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_35 (3, 4, 5, 5, 7, 8, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_36 (4, 4, 5, 6, 7, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_37 (4, 4, 5, 6, 7, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_38 (4, 4, 5, 6, 7, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_39 (4, 4, 5, 6, 7, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_40 (4, 5, 5, 6, 8, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_41 (4, 5, 5, 6, 8, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_42 (4, 5, 6, 7, 8, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_43 (4, 5, 6, 7, 8, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_44 (4, 5, 6, 7, 8, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_45 (5, 5, 6, 7, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_46 (5, 5, 6, 7, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_47 (5, 5, 6, 7, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_48 (5, 6, 6, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_49 (5, 6, 7, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_50 (5, 6, 7, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_51 (5, 6, 7, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_52 (5, 6, 7, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_53 (5, 6, 7, 8, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_54 (6, 6, 7, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_55 (6, 6, 7, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_56 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_57 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_58 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_59 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_60 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_61 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_62 (6, 7, 8, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_63 (7, 7, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_64 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_65 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_66 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_67 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_68 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_69 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_70 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_71 (7, 8, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_72 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_73 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_74 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_75 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_76 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_77 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_78 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_79 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_80 (8, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_81 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_82 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_83 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_84 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_85 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_86 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_87 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_88 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_89 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_90 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_91 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_92 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_93 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_94 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_95 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_96 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_97 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_98 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
# define CHAOS_IP_DIVIDE_99 (9, 9, 9, 9, 9, 9, 9, 9, 9,)
#
# endif
