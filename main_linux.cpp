/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */

	CWE127_Buffer_Underread__CWE839_negative_17_bad();
	CWE127_Buffer_Underread__CWE839_rand_44_bad();
	CWE127_Buffer_Underread__malloc_char_loop_32_bad();
	CWE127_Buffer_Underread__malloc_char_memcpy_42_bad();
	CWE127_Buffer_Underread__malloc_char_memmove_45_bad();
	CWE127_Buffer_Underread__malloc_char_ncpy_34_bad();
	CWE127_Buffer_Underread__CWE839_rand_22_bad();
	CWE127_Buffer_Underread__malloc_char_loop_68_bad();
	CWE476_NULL_Pointer_Dereference__char_45_bad();
	CWE476_NULL_Pointer_Dereference__int_34_bad();
	CWE476_NULL_Pointer_Dereference__int64_t_32_bad();
	CWE476_NULL_Pointer_Dereference__long_44_bad();
	CWE476_NULL_Pointer_Dereference__struct_63_bad();
	CWE124_Buffer_Underwrite__CWE839_negative_17_bad();
	CWE124_Buffer_Underwrite__CWE839_rand_22_bad();
	CWE124_Buffer_Underwrite__malloc_char_cpy_32_bad();
	CWE124_Buffer_Underwrite__malloc_char_loop_34_bad();
	CWE124_Buffer_Underwrite__malloc_char_memcpy_42_bad();
	CWE124_Buffer_Underwrite__malloc_char_memmove_44_bad();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_45_bad();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_61_bad();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_68_bad();
	CWE124_Buffer_Underwrite__char_alloca_cpy_32_bad();
	CWE124_Buffer_Underwrite__char_alloca_loop_34_bad();
	CWE124_Buffer_Underwrite__char_alloca_memcpy_44_bad();
	CWE124_Buffer_Underwrite__char_alloca_memmove_45_bad();
	CWE124_Buffer_Underwrite__char_alloca_ncpy_63_bad();
	CWE124_Buffer_Underwrite__char_declare_loop_64_bad();
	CWE124_Buffer_Underwrite__char_declare_memcpy_65_bad();
	CWE124_Buffer_Underwrite__CWE839_fgets_01_bad();
	CWE124_Buffer_Underwrite__CWE839_fscanf_02_bad();
	CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad();
	CWE369_Divide_by_Zero__int_listen_socket_divide_17_bad();
	CWE369_Divide_by_Zero__int_rand_divide_02_bad();
	CWE369_Divide_by_Zero__int_rand_modulo_03_bad();
	CWE369_Divide_by_Zero__int_zero_divide_32_bad();
	CWE369_Divide_by_Zero__int_zero_modulo_34_bad();
	CWE369_Divide_by_Zero__int_zero_modulo_65_bad();
	CWE369_Divide_by_Zero__float_connect_socket_04_bad();
	CWE369_Divide_by_Zero__float_fgets_05_bad();
	CWE369_Divide_by_Zero__float_fscanf_06_bad();
	CWE369_Divide_by_Zero__float_listenSocket_07_bad();
	CWE369_Divide_by_Zero__float_rand_08_bad();
	CWE369_Divide_by_Zero__float_zero_09_bad();
	CWE369_Divide_by_Zero__int_connect_socket_divide_17_bad();
	CWE369_Divide_by_Zero__int_fscanf_divide_10_bad();
	CWE369_Divide_by_Zero__int_fscanf_divide_15_bad();
	CWE369_Divide_by_Zero__int_fscanf_divide_18_bad();
	CWE369_Divide_by_Zero__int_fscanf_divide_21_bad();
	CWE369_Divide_by_Zero__int_fscanf_divide_41_bad();
	CWE415_Double_Free__malloc_free_char_63_bad();
	CWE415_Double_Free__malloc_free_char_64_bad();
	CWE415_Double_Free__malloc_free_int_63_bad();
	CWE401_Memory_Leak__strdup_char_32_bad();
	CWE401_Memory_Leak__strdup_char_66_bad();
	CWE415_Double_Free__malloc_free_int_64_bad();
	CWE415_Double_Free__malloc_free_int64_t_63_bad();
	CWE415_Double_Free__malloc_free_int64_t_64_bad();
	CWE415_Double_Free__malloc_free_long_63_bad();
	CWE415_Double_Free__malloc_free_long_64_bad();
	CWE415_Double_Free__malloc_free_struct_63_bad();
	CWE415_Double_Free__malloc_free_struct_64_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_05_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_09_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_13_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_17_bad();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_10_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_03_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_06_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_09_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_13_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_15_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_17_bad();
	CWE457_Use_of_Uninitialized_Variable__char_pointer_64_bad();
	CWE457_Use_of_Uninitialized_Variable__int_64_bad();
	CWE457_Use_of_Uninitialized_Variable__int64_t_64_bad();
	CWE457_Use_of_Uninitialized_Variable__int_pointer_64_bad();
	CWE457_Use_of_Uninitialized_Variable__long_64_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_64_bad();
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_64_bad();
	CWE401_Memory_Leak__char_calloc_32_bad();
	CWE401_Memory_Leak__char_realloc_34_bad();
	CWE401_Memory_Leak__int64_t_calloc_45_bad();
	CWE401_Memory_Leak__int64_t_realloc_66_bad();
	CWE401_Memory_Leak__int_calloc_67_bad();
	CWE401_Memory_Leak__int_realloc_68_bad();
	CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_bad();
	CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_bad();
	CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_bad();
	CWE401_Memory_Leak__twoIntsStruct_calloc_67_bad();
	CWE401_Memory_Leak__twoIntsStruct_realloc_68_bad();
	CWE401_Memory_Leak__strdup_char_34_bad();
	CWE401_Memory_Leak__strdup_char_67_bad();
	CWE476_NULL_Pointer_Dereference__char_65_bad();
	CWE476_NULL_Pointer_Dereference__int_63_bad();
	CWE476_NULL_Pointer_Dereference__int64_t_64_bad();
	CWE476_NULL_Pointer_Dereference__long_68_bad();
	CWE476_NULL_Pointer_Dereference__struct_45_bad();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	CWE127_Buffer_Underread__CWE839_negative_17_good();
	CWE127_Buffer_Underread__CWE839_rand_44_good();
	CWE127_Buffer_Underread__malloc_char_loop_32_good();
	CWE127_Buffer_Underread__malloc_char_memcpy_42_good();
	CWE127_Buffer_Underread__malloc_char_memmove_45_good();
	CWE127_Buffer_Underread__malloc_char_ncpy_34_good();
	CWE127_Buffer_Underread__CWE839_rand_22_good();
	CWE127_Buffer_Underread__malloc_char_loop_68_good();
	CWE476_NULL_Pointer_Dereference__char_45_good();
	CWE476_NULL_Pointer_Dereference__int_34_good();
	CWE476_NULL_Pointer_Dereference__int64_t_32_good();
	CWE476_NULL_Pointer_Dereference__long_44_good();
	CWE476_NULL_Pointer_Dereference__struct_63_good();
	CWE124_Buffer_Underwrite__CWE839_negative_17_good();
	CWE124_Buffer_Underwrite__CWE839_rand_22_good();
	CWE124_Buffer_Underwrite__malloc_char_cpy_32_good();
	CWE124_Buffer_Underwrite__malloc_char_loop_34_good();
	CWE124_Buffer_Underwrite__malloc_char_memcpy_42_good();
	CWE124_Buffer_Underwrite__malloc_char_memmove_44_good();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_45_good();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_61_good();
	CWE124_Buffer_Underwrite__malloc_char_ncpy_68_good();
	CWE124_Buffer_Underwrite__char_alloca_cpy_32_good();
	CWE124_Buffer_Underwrite__char_alloca_loop_34_good();
	CWE124_Buffer_Underwrite__char_alloca_memcpy_44_good();
	CWE124_Buffer_Underwrite__char_alloca_memmove_45_good();
	CWE124_Buffer_Underwrite__char_alloca_ncpy_63_good();
	CWE124_Buffer_Underwrite__char_declare_loop_64_good();
	CWE124_Buffer_Underwrite__char_declare_memcpy_65_good();
	CWE124_Buffer_Underwrite__CWE839_fgets_01_good();
	CWE124_Buffer_Underwrite__CWE839_fscanf_02_good();
	CWE369_Divide_by_Zero__int_fscanf_modulo_01_good();
	CWE369_Divide_by_Zero__int_listen_socket_divide_17_good();
	CWE369_Divide_by_Zero__int_rand_divide_02_good();
	CWE369_Divide_by_Zero__int_rand_modulo_03_good();
	CWE369_Divide_by_Zero__int_zero_divide_32_good();
	CWE369_Divide_by_Zero__int_zero_modulo_34_good();
	CWE369_Divide_by_Zero__int_zero_modulo_65_good();
	CWE369_Divide_by_Zero__float_connect_socket_04_good();
	CWE369_Divide_by_Zero__float_fgets_05_good();
	CWE369_Divide_by_Zero__float_fscanf_06_good();
	CWE369_Divide_by_Zero__float_listenSocket_07_good();
	CWE369_Divide_by_Zero__float_rand_08_good();
	CWE369_Divide_by_Zero__float_zero_09_good();
	CWE369_Divide_by_Zero__int_connect_socket_divide_17_good();
	CWE369_Divide_by_Zero__int_fscanf_divide_10_good();
	CWE369_Divide_by_Zero__int_fscanf_divide_15_good();
	CWE369_Divide_by_Zero__int_fscanf_divide_18_good();
	CWE369_Divide_by_Zero__int_fscanf_divide_21_good();
	CWE369_Divide_by_Zero__int_fscanf_divide_41_good();
	CWE415_Double_Free__malloc_free_char_63_good();
	CWE415_Double_Free__malloc_free_char_64_good();
	CWE415_Double_Free__malloc_free_int_63_good();
	CWE401_Memory_Leak__strdup_char_32_good();
	CWE401_Memory_Leak__strdup_char_66_good();
	CWE415_Double_Free__malloc_free_int_64_good();
	CWE415_Double_Free__malloc_free_int64_t_63_good();
	CWE415_Double_Free__malloc_free_int64_t_64_good();
	CWE415_Double_Free__malloc_free_long_63_good();
	CWE415_Double_Free__malloc_free_long_64_good();
	CWE415_Double_Free__malloc_free_struct_63_good();
	CWE415_Double_Free__malloc_free_struct_64_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_05_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_09_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_13_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_17_good();
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_10_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_03_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_06_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_09_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_13_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_15_good();
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_17_good();
	CWE457_Use_of_Uninitialized_Variable__char_pointer_64_good();
	CWE457_Use_of_Uninitialized_Variable__int_64_good();
	CWE457_Use_of_Uninitialized_Variable__int64_t_64_good();
	CWE457_Use_of_Uninitialized_Variable__int_pointer_64_good();
	CWE457_Use_of_Uninitialized_Variable__long_64_good();
	CWE457_Use_of_Uninitialized_Variable__struct_64_good();
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_64_good();
	CWE401_Memory_Leak__char_calloc_32_good();
	CWE401_Memory_Leak__char_realloc_34_good();
	CWE401_Memory_Leak__int64_t_calloc_45_good();
	CWE401_Memory_Leak__int64_t_realloc_66_good();
	CWE401_Memory_Leak__int_calloc_67_good();
	CWE401_Memory_Leak__int_realloc_68_good();
	CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_good();
	CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_good();
	CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_good();
	CWE401_Memory_Leak__twoIntsStruct_calloc_67_good();
	CWE401_Memory_Leak__twoIntsStruct_realloc_68_good();
	CWE401_Memory_Leak__strdup_char_34_good();
	CWE401_Memory_Leak__strdup_char_67_good();
	CWE476_NULL_Pointer_Dereference__char_65_good();
	CWE476_NULL_Pointer_Dereference__int_63_good();
	CWE476_NULL_Pointer_Dereference__int64_t_64_good();
	CWE476_NULL_Pointer_Dereference__long_68_good();
	CWE476_NULL_Pointer_Dereference__struct_45_good();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
