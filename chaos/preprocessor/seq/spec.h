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
# ifndef CHAOS_PREPROCESSOR_SEQ_SPEC_H
# define CHAOS_PREPROCESSOR_SEQ_SPEC_H
#
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/control/expr_iif.h>
# include <chaos/preprocessor/control/iif.h>
# include <chaos/preprocessor/detection/is_unary.h>
# include <chaos/preprocessor/detection/is_variadic.h>
# include <chaos/preprocessor/facilities/split.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/logical/compl.h>
# include <chaos/preprocessor/tuple/eat.h>
# include <chaos/preprocessor/tuple/rem.h>
#
# /* CHAOS_PP_SEQ_TAG */
#
# define CHAOS_PP_SEQ_TAG(x) x
# define CHAOS_PP_SEQ_TAG_ID() CHAOS_PP_SEQ_TAG
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_TAG_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_TAG)
# endif
#
# /* CHAOS_PP_SEQ_NIL */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_NIL()
# else
#    define CHAOS_PP_SEQ_NIL() ~
#    define CHAOS_PP_SEQ_NIL_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_NIL)
# endif
#
# define CHAOS_PP_SEQ_NIL_ID() CHAOS_PP_SEQ_NIL
#
# /* CHAOS_PP_SEQ_CONS */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_CONS(seq, ...) (__VA_ARGS__) seq
#    define CHAOS_PP_SEQ_CONS_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_CONS_ID)()
# else
#    define CHAOS_PP_SEQ_CONS(seq, x) (x) CHAOS_PP_EXPR_IIF(CHAOS_PP_IS_UNARY(seq))(seq)
# endif
#
# define CHAOS_PP_SEQ_CONS_ID() CHAOS_PP_SEQ_CONS
#
# /* CHAOS_PP_SEQ_ITEM */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_ITEM(...) __VA_ARGS__
#    define CHAOS_PP_SEQ_ITEM_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_ITEM_ID)()
# else
#    define CHAOS_PP_SEQ_ITEM(x) x
# endif
#
# define CHAOS_PP_SEQ_ITEM_ID() CHAOS_PP_SEQ_ITEM
#
# /* CHAOS_PP_SEQ_FIRST */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_FIRST(seq) CHAOS_PP_TUPLE_REM_CTOR(?, CHAOS_PP_SPLIT(0, CHAOS_IP_SEQ_FIRST_I seq))
#    define CHAOS_PP_SEQ_FIRST_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_FIRST_ID)()
#    define CHAOS_IP_SEQ_FIRST_I(...) (__VA_ARGS__),
# else
#    define CHAOS_PP_SEQ_FIRST(seq) CHAOS_PP_SPLIT(0, CHAOS_IP_SEQ_FIRST_I seq)
#    define CHAOS_IP_SEQ_FIRST_I(x) x, ~
# endif
#
# define CHAOS_PP_SEQ_FIRST_ID() CHAOS_PP_SEQ_FIRST
#
# /* CHAOS_PP_SEQ_REST */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_REST(seq) CHAOS_PP_TUPLE_EAT(?) seq
#    define CHAOS_PP_SEQ_REST_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_REST_ID)()
# else
#    define CHAOS_PP_SEQ_REST(seq) \
        CHAOS_PP_IIF(CHAOS_PP_IS_UNARY(CHAOS_PP_TUPLE_EAT(1) seq ~))( \
            CHAOS_PP_TUPLE_EAT(1) seq, CHAOS_PP_SEQ_NIL() \
        ) \
        /**/
# endif
#
# define CHAOS_PP_SEQ_REST_ID() CHAOS_PP_SEQ_REST
#
# /* CHAOS_PP_SEQ_IS_CONS */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_IS_CONS(seq) CHAOS_PP_IS_VARIADIC(seq)
#    define CHAOS_PP_SEQ_IS_CONS_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_IS_CONS)
# else
#    define CHAOS_PP_SEQ_IS_CONS(seq) CHAOS_PP_IS_UNARY(seq)
# endif
#
# define CHAOS_PP_SEQ_IS_CONS_ID() CHAOS_PP_SEQ_IS_CONS
#
# /* CHAOS_PP_SEQ_IS_NIL */
#
# define CHAOS_PP_SEQ_IS_NIL(seq) CHAOS_PP_COMPL(CHAOS_PP_SEQ_IS_CONS(seq))
# define CHAOS_PP_SEQ_IS_NIL_ID() CHAOS_PP_SEQ_IS_NIL
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_SEQ_IS_NIL_ CHAOS_PP_LAMBDA(CHAOS_PP_SEQ_IS_NIL)
# endif
#
# endif