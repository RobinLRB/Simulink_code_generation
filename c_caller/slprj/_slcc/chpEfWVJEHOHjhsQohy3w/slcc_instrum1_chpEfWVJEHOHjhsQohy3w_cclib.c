#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_27 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_27() \
  (++__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_27 + __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_29(expr) \
  ((expr) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 = 1), 1) : 1) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_34(expr) \
  ((expr) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 += 1), 1) : 1) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) \
  ((expr) ? \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 1) : 1) : \
   ((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() \
  unsigned int __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_curr_combination_idx_27 = 0; 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_abs_tol, __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled || __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables = __MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (((!__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled || __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables = __MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() \
  (((!__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled || __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables = __MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(5U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(6U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_6(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(6U), 1) : (__MW_INSTRUM_RECORD_HIT(7U), 0))
#endif
#define __MW_INSTRUM_NODE_8(lhs, rhs) (((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(8U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(9U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(10U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_11() \
  (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_12() \
  (((!__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled || __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables = __MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(12U))
#define __MW_INSTRUM_NODE_13() \
  (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_14() \
  (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_15() \
  (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_16() \
  (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_17() \
  (__MW_INSTRUM_RECORD_HIT(17U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_19() \
  (__MW_INSTRUM_RECORD_HIT(19U))
#define __MW_INSTRUM_NODE_20() \
  (__MW_INSTRUM_RECORD_HIT(20U))
#define __MW_INSTRUM_NODE_21() \
  (((!__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled || __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_ptruth_tables = __MW_INSTRUM_chpEfWVJEHOHjhsQohy3w_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(21U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(22U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(23U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_22(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(22U), 1) : (__MW_INSTRUM_RECORD_HIT(23U), 0))
#endif
#define __MW_INSTRUM_NODE_24(lhs, rhs) (((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(26U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_31(lhs, rhs) (((__mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_enabled && __mw_instrum_chpEfWVJEHOHjhsQohy3w_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(33U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_28() \
  (__MW_INSTRUM_RECORD_HIT(28U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(36U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(37U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_36(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(36U), 1) : (__MW_INSTRUM_RECORD_HIT(37U), 0))
#endif
#define __MW_INSTRUM_NODE_37() \
  (__MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() \
  (__MW_INSTRUM_RECORD_HIT(38U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29CZ_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29CZ_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29CZ_chpEfWVJEHOHjhsQohy3w(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_34CZ_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) (__MW_INSTRUM_RECORD_HIT_34CZ_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_chpEfWVJEHOHjhsQohy3w(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DA_29_34Z_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_chpEfWVJEHOHjhsQohy3w(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_5EZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_5() __MW_INSTRUM_RECORD_HIT_5EZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_6DZ_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) (__MW_INSTRUM_RECORD_HIT_6DZ_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_chpEfWVJEHOHjhsQohy3w(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8IZ_chpEfWVJEHOHjhsQohy3w(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_8(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_8IZ_chpEfWVJEHOHjhsQohy3w((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12EZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12EZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_13DZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_13() __MW_INSTRUM_RECORD_HIT_13DZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15DZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15DZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17DZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_17() __MW_INSTRUM_RECORD_HIT_17DZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_18XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_18() __MW_INSTRUM_RECORD_HIT_18XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19DZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_19() __MW_INSTRUM_RECORD_HIT_19DZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_20XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_20() __MW_INSTRUM_RECORD_HIT_20XZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_21EZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_21() __MW_INSTRUM_RECORD_HIT_21EZ_chpEfWVJEHOHjhsQohy3w()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_chpEfWVJEHOHjhsQohy3w(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IZ_chpEfWVJEHOHjhsQohy3w(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IZ_chpEfWVJEHOHjhsQohy3w((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IZ_chpEfWVJEHOHjhsQohy3w(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IZ_chpEfWVJEHOHjhsQohy3w((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_36DZ_chpEfWVJEHOHjhsQohy3w(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) (__MW_INSTRUM_RECORD_HIT_36DZ_chpEfWVJEHOHjhsQohy3w(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_36(exp) (__MW_INSTRUM_RECORD_HIT_36DZ_chpEfWVJEHOHjhsQohy3w(exp))
#endif

#define __MW_INSTRUM_NODE_37() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_38XZ_chpEfWVJEHOHjhsQohy3w(void) { }
#define __MW_INSTRUM_NODE_38() __MW_INSTRUM_RECORD_HIT_38XZ_chpEfWVJEHOHjhsQohy3w()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "/home/javier/Desktop/c_caller/src/my_func.c"
# 2 "/home/javier/Desktop/c_caller/include/my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
# 12
typedef 
# 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
# 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
# 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
# 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
# 12 "/usr/local/MATLAB/R2020b/extern/include/tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
# 22 "/usr/include/limits.h" 3
#ifndef _LIBC_LIMITS_H_
#define _LIBC_LIMITS_H_ 1
# 18 "/usr/include/features.h" 3
#ifndef _FEATURES_H
#define _FEATURES_H 1
# 18 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3
#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H 1
# 492
#endif /* _SYS_CDEFS_H */
# 451 "/usr/include/features.h" 3
#endif /* _FEATURES_H */
# 115 "/usr/include/limits.h" 3
#endif /* _LIBC_LIMITS_H_ */
# 131
#ifndef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX-1)
#endif /* LLONG_MIN */
#ifndef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__
#endif /* LLONG_MAX */
#ifndef ULLONG_MAX
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#endif /* ULLONG_MAX */
# 146
#ifndef CHAR_WIDTH
#define CHAR_WIDTH 8
#endif /* CHAR_WIDTH */
#ifndef SCHAR_WIDTH
#define SCHAR_WIDTH 8
#endif /* SCHAR_WIDTH */
#ifndef UCHAR_WIDTH
#define UCHAR_WIDTH 8
#endif /* UCHAR_WIDTH */
#ifndef SHRT_WIDTH
#define SHRT_WIDTH 16
#endif /* SHRT_WIDTH */
#ifndef USHRT_WIDTH
#define USHRT_WIDTH 16
#endif /* USHRT_WIDTH */
#ifndef INT_WIDTH
#define INT_WIDTH 32
#endif /* INT_WIDTH */
#ifndef UINT_WIDTH
#define UINT_WIDTH 32
#endif /* UINT_WIDTH */
#ifndef LONG_WIDTH
#define LONG_WIDTH __WORDSIZE
#endif /* LONG_WIDTH */
#ifndef ULONG_WIDTH
#define ULONG_WIDTH __WORDSIZE
#endif /* ULONG_WIDTH */
#ifndef LLONG_WIDTH
#define LLONG_WIDTH 64
#endif /* LLONG_WIDTH */
#ifndef ULLONG_WIDTH
#define ULLONG_WIDTH 64
#endif /* ULLONG_WIDTH */
# 24 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3
#ifndef _BITS_POSIX1_LIM_H
#define _BITS_POSIX1_LIM_H 1
# 2 "/usr/include/linux/limits.h" 3
#ifndef _LINUX_LIMITS_H
#define _LINUX_LIMITS_H
# 21
#endif /* _LINUX_LIMITS_H */
# 51 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3
#ifdef __undef_OPEN_MAX
#undef __undef_OPEN_MAX
#endif /* __undef_OPEN_MAX */
# 163 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3
#ifndef SSIZE_MAX
#define SSIZE_MAX LONG_MAX
#endif /* SSIZE_MAX */
# 175
#endif /* _BITS_POSIX1_LIM_H */
# 22 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 3
#ifndef _BITS_POSIX2_LIM_H
#define _BITS_POSIX2_LIM_H 1
# 62
#ifndef BC_BASE_MAX
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#endif /* BC_BASE_MAX */
#ifndef BC_DIM_MAX
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#endif /* BC_DIM_MAX */
#ifndef BC_SCALE_MAX
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#endif /* BC_SCALE_MAX */
#ifndef BC_STRING_MAX
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#endif /* BC_STRING_MAX */
#ifndef COLL_WEIGHTS_MAX
#define COLL_WEIGHTS_MAX 255
#endif /* COLL_WEIGHTS_MAX */
#ifndef EXPR_NEST_MAX
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#endif /* EXPR_NEST_MAX */
#ifndef LINE_MAX
#define LINE_MAX _POSIX2_LINE_MAX
#endif /* LINE_MAX */
#ifndef CHARCLASS_NAME_MAX
#define CHARCLASS_NAME_MAX 2048
#endif /* CHARCLASS_NAME_MAX */




#endif /* _BITS_POSIX2_LIM_H */
# 29 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3
#ifndef _XOPEN_LIM_H
#define _XOPEN_LIM_H 1
# 19 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 3
#ifndef _BITS_UIO_LIM_H
#define _BITS_UIO_LIM_H 1
# 32
#endif /* _BITS_UIO_LIM_H */
# 148 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3
#endif /* _XOPEN_LIM_H */
# 59 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3
#ifndef _LIMITS_H___
#define _LIMITS_H___
# 187
#endif /* _LIMITS_H___ */
# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdbool.h" 3
#ifndef _STDBOOL_H
#define _STDBOOL_H
# 54
#endif /* _STDBOOL_H */
# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/float.h" 3
#ifndef _FLOAT_H___
#define _FLOAT_H___
# 506
#endif /* _FLOAT_H___ */
# 89 "/usr/local/MATLAB/R2020b/extern/include/tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
# 97
typedef unsigned long long ulonglong_T; 
# 222
typedef signed char int8_T; 
# 239
typedef unsigned char uint8_T; 
# 257
typedef short int16_T; 
# 275
typedef unsigned short uint16_T; 
# 293
typedef int int32_T; 
# 311
typedef unsigned uint32_T; 
# 372
typedef float real32_T; 
# 386
typedef double real64_T; 
# 422
#ifndef INT64_T
#define INT64_T long
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned long
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "l"
#endif /* FMT64 */
#ifndef INT_TYPE_64_IS_LONG
#define INT_TYPE_64_IS_LONG
#endif /* INT_TYPE_64_IS_LONG */
# 465
__extension__ typedef long int64_T; 
# 479
__extension__ typedef unsigned long uint64_T; 
# 535
typedef real64_T real_T; 
# 544
typedef real_T time_T; 
# 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
# 592
typedef 
# 590
struct { 
real32_T re, im; 
} creal32_T; 
# 601
typedef 
# 599
struct { 
real64_T re, im; 
} creal64_T; 
# 610
typedef 
# 608
struct { 
real_T re, im; 
} creal_T; 
# 621
typedef 
# 619
struct { 
int8_T re, im; 
} cint8_T; 
# 630
typedef 
# 628
struct { 
uint8_T re, im; 
} cuint8_T; 
# 639
typedef 
# 637
struct { 
int16_T re, im; 
} cint16_T; 
# 648
typedef 
# 646
struct { 
uint16_T re, im; 
} cuint16_T; 
# 657
typedef 
# 655
struct { 
int32_T re, im; 
} cint32_T; 
# 666
typedef 
# 664
struct { 
uint32_T re, im; 
} cuint32_T; 
# 675
typedef 
# 673
struct { 
int64_T re, im; 
} cint64_T; 
# 684
typedef 
# 682
struct { 
uint64_T re, im; 
} cuint64_T; 
# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3
typedef long ptrdiff_t; 
# 216
typedef unsigned long size_t; 
# 293
#ifdef _BSD_WCHAR_T_
#undef _BSD_WCHAR_T_
#endif /* _BSD_WCHAR_T_ */
# 328
typedef int wchar_t; 
# 421
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T
# 437
typedef 
# 426
struct { 
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 437
} max_align_t; 
#endif /* _GCC_MAX_ALIGN_T */
# 834 "/usr/local/MATLAB/R2020b/extern/include/tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 



#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
# 881
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
# 5 "/home/javier/Desktop/c_caller/src/my_func.c"
double add(double u1, double u2) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
{ double __mw_tmp_for_return = u1 + u2; __MW_INSTRUM_NODE_2(); return __mw_tmp_for_return; } 
} 

double timesK(double u, double K) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); 
{ double __mw_tmp_for_return = u * K; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 

void incrementElement(int *u, unsigned size, unsigned increment_idx) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_5(); { 
if (__MW_INSTRUM_NODE_6((__MW_INSTRUM_NODE_8(increment_idx, size), (increment_idx < size)))) { 
(u[increment_idx])++; 
}  } __MW_INSTRUM_NODE_11(); 
} 

TrafficLightColor getNextTrafficLight(TrafficLightColor current) 
{ __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_12(); { 
switch (current) { 
case RED:  __MW_INSTRUM_NODE_13(); __MW_INSTRUM_NODE_14(); 
return GREEN; 
case YELLOW:  __MW_INSTRUM_NODE_15(); __MW_INSTRUM_NODE_16(); 
return RED; 
case GREEN:  __MW_INSTRUM_NODE_17(); __MW_INSTRUM_NODE_18(); 
return YELLOW; 
default:  __MW_INSTRUM_NODE_19(); __MW_INSTRUM_NODE_20(); 
return UNKNOWN; 
}  } 
} 

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2) 
{ int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_21(); { 
int32_T limit; 
boolean_T inputGElower; 
limit = (u1->inputsignal).input + u2; 
inputGElower = __MW_INSTRUM_NODE_22(((__mw_tmp_for_expr_1 = (u1->limits).lower_saturation_limit), (__MW_INSTRUM_NODE_24(limit, __mw_tmp_for_expr_1), (limit >= __mw_tmp_for_expr_1)))); { 
if (__MW_INSTRUM_NODE_27(__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_2 = (u1->limits).upper_saturation_limit), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_2, limit), (__mw_tmp_for_expr_2 >= limit)))) && (__MW_INSTRUM_NODE_34(inputGElower)))) { 
*y2 = limit; 
} else { { 
if (__MW_INSTRUM_NODE_36(inputGElower)) { 
limit = (u1->limits).upper_saturation_limit; 
} else { 
limit = (u1->limits).lower_saturation_limit; 
}  } 
*y2 = limit; 
}  } 
(y1->inputsignal).input = *y2; 
y1->limits = u1->limits; } __MW_INSTRUM_NODE_38(); 
} 
