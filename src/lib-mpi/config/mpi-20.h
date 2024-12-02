#if defined(MPI_VERSION)
#if (MPI_VERSION >= 2)

#define PyMPI_HAVE_MPI_ERR_KEYVAL 1
#define PyMPI_HAVE_MPI_MAX_OBJECT_NAME 1

#define PyMPI_HAVE_MPI_WCHAR 1
#define PyMPI_HAVE_MPI_SIGNED_CHAR 1
#define PyMPI_HAVE_MPI_LONG_LONG 1
#define PyMPI_HAVE_MPI_UNSIGNED_LONG_LONG 1

#define PyMPI_HAVE_MPI_INTEGER1 1
#define PyMPI_HAVE_MPI_INTEGER2 1
#define PyMPI_HAVE_MPI_INTEGER4 1
#define PyMPI_HAVE_MPI_INTEGER8 1
#define PyMPI_HAVE_MPI_INTEGER16 1
#define PyMPI_HAVE_MPI_REAL4 1
#define PyMPI_HAVE_MPI_REAL8 1
#define PyMPI_HAVE_MPI_REAL16 1
#define PyMPI_HAVE_MPI_COMPLEX8 1
#define PyMPI_HAVE_MPI_COMPLEX16 1
#define PyMPI_HAVE_MPI_COMPLEX32 1

#define PyMPI_HAVE_MPI_Type_dup 1
#define PyMPI_HAVE_MPI_Type_create_indexed_block 1
#define PyMPI_HAVE_MPI_ORDER_C 1
#define PyMPI_HAVE_MPI_ORDER_FORTRAN 1
#define PyMPI_HAVE_MPI_Type_create_subarray 1
#define PyMPI_HAVE_MPI_DISTRIBUTE_NONE 1
#define PyMPI_HAVE_MPI_DISTRIBUTE_BLOCK 1
#define PyMPI_HAVE_MPI_DISTRIBUTE_CYCLIC 1
#define PyMPI_HAVE_MPI_DISTRIBUTE_DFLT_DARG 1
#define PyMPI_HAVE_MPI_Type_create_darray 1
#define PyMPI_HAVE_MPI_Get_address 1
#define PyMPI_HAVE_MPI_Type_create_hvector 1
#define PyMPI_HAVE_MPI_Type_create_hindexed 1
#define PyMPI_HAVE_MPI_Type_create_struct 1
#define PyMPI_HAVE_MPI_Type_get_extent 1
#define PyMPI_HAVE_MPI_Type_create_resized 1
#define PyMPI_HAVE_MPI_Type_get_true_extent 1
#define PyMPI_HAVE_MPI_Type_create_f90_integer 1
#define PyMPI_HAVE_MPI_Type_create_f90_real 1
#define PyMPI_HAVE_MPI_Type_create_f90_complex 1
#define PyMPI_HAVE_MPI_TYPECLASS_INTEGER 1
#define PyMPI_HAVE_MPI_TYPECLASS_REAL 1
#define PyMPI_HAVE_MPI_TYPECLASS_COMPLEX 1
#define PyMPI_HAVE_MPI_Type_match_size 1
#define PyMPI_HAVE_MPI_Pack_external 1
#define PyMPI_HAVE_MPI_Unpack_external 1
#define PyMPI_HAVE_MPI_Pack_external_size 1
#define PyMPI_HAVE_MPI_COMBINER_NAMED 1
#define PyMPI_HAVE_MPI_COMBINER_DUP 1
#define PyMPI_HAVE_MPI_COMBINER_CONTIGUOUS 1
#define PyMPI_HAVE_MPI_COMBINER_VECTOR 1
#define PyMPI_HAVE_MPI_COMBINER_HVECTOR_INTEGER 1
#define PyMPI_HAVE_MPI_COMBINER_HVECTOR 1
#define PyMPI_HAVE_MPI_COMBINER_INDEXED 1
#define PyMPI_HAVE_MPI_COMBINER_HINDEXED_INTEGER 1
#define PyMPI_HAVE_MPI_COMBINER_HINDEXED 1
#define PyMPI_HAVE_MPI_COMBINER_INDEXED_BLOCK 1
#define PyMPI_HAVE_MPI_COMBINER_STRUCT_INTEGER 1
#define PyMPI_HAVE_MPI_COMBINER_STRUCT 1
#define PyMPI_HAVE_MPI_COMBINER_SUBARRAY 1
#define PyMPI_HAVE_MPI_COMBINER_DARRAY 1
#define PyMPI_HAVE_MPI_COMBINER_F90_REAL 1
#define PyMPI_HAVE_MPI_COMBINER_F90_COMPLEX 1
#define PyMPI_HAVE_MPI_COMBINER_F90_INTEGER 1
#define PyMPI_HAVE_MPI_COMBINER_RESIZED 1
#define PyMPI_HAVE_MPI_Type_get_envelope 1
#define PyMPI_HAVE_MPI_Type_get_contents 1
#define PyMPI_HAVE_MPI_Type_get_name 1
#define PyMPI_HAVE_MPI_Type_set_name 1
#define PyMPI_HAVE_MPI_Type_get_attr 1
#define PyMPI_HAVE_MPI_Type_set_attr 1
#define PyMPI_HAVE_MPI_Type_delete_attr 1
#define PyMPI_HAVE_MPI_Type_copy_attr_function 1
#define PyMPI_HAVE_MPI_Type_delete_attr_function 1
#define PyMPI_HAVE_MPI_TYPE_NULL_COPY_FN 1
#define PyMPI_HAVE_MPI_TYPE_DUP_FN 1
#define PyMPI_HAVE_MPI_TYPE_NULL_DELETE_FN 1
#define PyMPI_HAVE_MPI_Type_create_keyval 1
#define PyMPI_HAVE_MPI_Type_free_keyval 1

#define PyMPI_HAVE_MPI_STATUS_IGNORE 1
#define PyMPI_HAVE_MPI_STATUSES_IGNORE 1
#define PyMPI_HAVE_MPI_Status_set_elements 1
#define PyMPI_HAVE_MPI_Status_set_cancelled 1

#define PyMPI_HAVE_MPI_Request_get_status 1
#define PyMPI_HAVE_MPI_Grequest_cancel_function 1
#define PyMPI_HAVE_MPI_Grequest_free_function 1
#define PyMPI_HAVE_MPI_Grequest_query_function 1
#define PyMPI_HAVE_MPI_Grequest_start 1
#define PyMPI_HAVE_MPI_Grequest_complete 1

#define PyMPI_HAVE_MPI_ROOT 1
#define PyMPI_HAVE_MPI_IN_PLACE 1
#define PyMPI_HAVE_MPI_Alltoallw 1
#define PyMPI_HAVE_MPI_Exscan 1

#define PyMPI_HAVE_MPI_Comm_get_errhandler 1
#define PyMPI_HAVE_MPI_Comm_set_errhandler 1
#define PyMPI_HAVE_MPI_Comm_errhandler_fn 1
#define PyMPI_HAVE_MPI_Comm_create_errhandler 1
#define PyMPI_HAVE_MPI_Comm_call_errhandler 1
#define PyMPI_HAVE_MPI_Comm_get_name 1
#define PyMPI_HAVE_MPI_Comm_set_name 1

#define PyMPI_HAVE_MPI_Comm_get_attr 1
#define PyMPI_HAVE_MPI_Comm_set_attr 1
#define PyMPI_HAVE_MPI_Comm_delete_attr 1
#define PyMPI_HAVE_MPI_Comm_copy_attr_function 1
#define PyMPI_HAVE_MPI_Comm_delete_attr_function 1
#define PyMPI_HAVE_MPI_COMM_DUP_FN 1
#define PyMPI_HAVE_MPI_COMM_NULL_COPY_FN 1
#define PyMPI_HAVE_MPI_COMM_NULL_DELETE_FN 1
#define PyMPI_HAVE_MPI_Comm_create_keyval 1
#define PyMPI_HAVE_MPI_Comm_free_keyval 1

#define PyMPI_HAVE_MPI_MAX_PORT_NAME 1
#define PyMPI_HAVE_MPI_Open_port 1
#define PyMPI_HAVE_MPI_Close_port 1
#define PyMPI_HAVE_MPI_Publish_name 1
#define PyMPI_HAVE_MPI_Unpublish_name 1
#define PyMPI_HAVE_MPI_Lookup_name 1
#define PyMPI_HAVE_MPI_Comm_accept 1
#define PyMPI_HAVE_MPI_Comm_connect 1
#define PyMPI_HAVE_MPI_Comm_join 1
#define PyMPI_HAVE_MPI_Comm_disconnect 1
#define PyMPI_HAVE_MPI_ARGV_NULL 1
#define PyMPI_HAVE_MPI_ARGVS_NULL 1
#define PyMPI_HAVE_MPI_ERRCODES_IGNORE 1
#define PyMPI_HAVE_MPI_Comm_spawn 1
#define PyMPI_HAVE_MPI_Comm_spawn_multiple 1
#define PyMPI_HAVE_MPI_Comm_get_parent 1
#define PyMPI_HAVE_MPI_UNIVERSE_SIZE 1
#define PyMPI_HAVE_MPI_APPNUM 1
#define PyMPI_HAVE_MPI_ERR_SPAWN 1
#define PyMPI_HAVE_MPI_ERR_PORT 1
#define PyMPI_HAVE_MPI_ERR_SERVICE 1
#define PyMPI_HAVE_MPI_ERR_NAME 1

#define PyMPI_HAVE_MPI_Alloc_mem 1
#define PyMPI_HAVE_MPI_Free_mem 1
#define PyMPI_HAVE_MPI_ERR_NO_MEM 1

#define PyMPI_HAVE_MPI_Info 1
#define PyMPI_HAVE_MPI_INFO_NULL 1
#define PyMPI_HAVE_MPI_Info_free 1
#define PyMPI_HAVE_MPI_Info_create 1
#define PyMPI_HAVE_MPI_Info_dup 1
#define PyMPI_HAVE_MPI_MAX_INFO_KEY 1
#define PyMPI_HAVE_MPI_MAX_INFO_VAL 1
#define PyMPI_HAVE_MPI_Info_get 1
#define PyMPI_HAVE_MPI_Info_set 1
#define PyMPI_HAVE_MPI_Info_delete 1
#define PyMPI_HAVE_MPI_Info_get_nkeys 1
#define PyMPI_HAVE_MPI_Info_get_nthkey 1
#define PyMPI_HAVE_MPI_Info_get_valuelen 1
#define PyMPI_HAVE_MPI_ERR_INFO 1
#define PyMPI_HAVE_MPI_ERR_INFO_KEY 1
#define PyMPI_HAVE_MPI_ERR_INFO_VALUE 1
#define PyMPI_HAVE_MPI_ERR_INFO_NOKEY 1

#define PyMPI_HAVE_MPI_Win 1
#define PyMPI_HAVE_MPI_WIN_NULL 1
#define PyMPI_HAVE_MPI_Win_free 1
#define PyMPI_HAVE_MPI_Win_create 1
#define PyMPI_HAVE_MPI_Win_get_group 1
#define PyMPI_HAVE_MPI_Get 1
#define PyMPI_HAVE_MPI_Put 1
#define PyMPI_HAVE_MPI_REPLACE 1
#define PyMPI_HAVE_MPI_Accumulate 1
#define PyMPI_HAVE_MPI_MODE_NOCHECK 1
#define PyMPI_HAVE_MPI_MODE_NOSTORE 1
#define PyMPI_HAVE_MPI_MODE_NOPUT 1
#define PyMPI_HAVE_MPI_MODE_NOPRECEDE 1
#define PyMPI_HAVE_MPI_MODE_NOSUCCEED 1
#define PyMPI_HAVE_MPI_Win_fence 1
#define PyMPI_HAVE_MPI_Win_post 1
#define PyMPI_HAVE_MPI_Win_start 1
#define PyMPI_HAVE_MPI_Win_complete 1
#define PyMPI_HAVE_MPI_Win_wait 1
#define PyMPI_HAVE_MPI_Win_test 1
#define PyMPI_HAVE_MPI_LOCK_EXCLUSIVE 1
#define PyMPI_HAVE_MPI_LOCK_SHARED 1
#define PyMPI_HAVE_MPI_Win_lock 1
#define PyMPI_HAVE_MPI_Win_unlock 1
#define PyMPI_HAVE_MPI_Win_get_errhandler 1
#define PyMPI_HAVE_MPI_Win_set_errhandler 1
#define PyMPI_HAVE_MPI_Win_errhandler_fn 1
#define PyMPI_HAVE_MPI_Win_create_errhandler 1
#define PyMPI_HAVE_MPI_Win_call_errhandler 1
#define PyMPI_HAVE_MPI_Win_get_name 1
#define PyMPI_HAVE_MPI_Win_set_name 1
#define PyMPI_HAVE_MPI_WIN_BASE 1
#define PyMPI_HAVE_MPI_WIN_SIZE 1
#define PyMPI_HAVE_MPI_WIN_DISP_UNIT 1
#define PyMPI_HAVE_MPI_Win_get_attr 1
#define PyMPI_HAVE_MPI_Win_set_attr 1
#define PyMPI_HAVE_MPI_Win_delete_attr 1
#define PyMPI_HAVE_MPI_Win_copy_attr_function 1
#define PyMPI_HAVE_MPI_Win_delete_attr_function 1
#define PyMPI_HAVE_MPI_WIN_DUP_FN 1
#define PyMPI_HAVE_MPI_WIN_NULL_COPY_FN 1
#define PyMPI_HAVE_MPI_WIN_NULL_DELETE_FN 1
#define PyMPI_HAVE_MPI_Win_create_keyval 1
#define PyMPI_HAVE_MPI_Win_free_keyval 1
#define PyMPI_HAVE_MPI_ERR_WIN 1
#define PyMPI_HAVE_MPI_ERR_BASE 1
#define PyMPI_HAVE_MPI_ERR_SIZE 1
#define PyMPI_HAVE_MPI_ERR_DISP 1
#define PyMPI_HAVE_MPI_ERR_ASSERT 1
#define PyMPI_HAVE_MPI_ERR_LOCKTYPE 1
#define PyMPI_HAVE_MPI_ERR_RMA_CONFLICT 1
#define PyMPI_HAVE_MPI_ERR_RMA_SYNC 1

#define PyMPI_HAVE_MPI_Offset 1
#define PyMPI_HAVE_MPI_File 1
#define PyMPI_HAVE_MPI_FILE_NULL 1
#define PyMPI_HAVE_MPI_MODE_RDONLY 1
#define PyMPI_HAVE_MPI_MODE_RDWR 1
#define PyMPI_HAVE_MPI_MODE_WRONLY 1
#define PyMPI_HAVE_MPI_MODE_CREATE 1
#define PyMPI_HAVE_MPI_MODE_EXCL 1
#define PyMPI_HAVE_MPI_MODE_DELETE_ON_CLOSE 1
#define PyMPI_HAVE_MPI_MODE_UNIQUE_OPEN 1
#define PyMPI_HAVE_MPI_MODE_APPEND 1
#define PyMPI_HAVE_MPI_MODE_SEQUENTIAL 1
#define PyMPI_HAVE_MPI_File_open 1
#define PyMPI_HAVE_MPI_File_close 1
#define PyMPI_HAVE_MPI_File_delete 1
#define PyMPI_HAVE_MPI_File_set_size 1
#define PyMPI_HAVE_MPI_File_preallocate 1
#define PyMPI_HAVE_MPI_File_get_size 1
#define PyMPI_HAVE_MPI_File_get_group 1
#define PyMPI_HAVE_MPI_File_get_amode 1
#define PyMPI_HAVE_MPI_File_set_info 1
#define PyMPI_HAVE_MPI_File_get_info 1
#define PyMPI_HAVE_MPI_File_get_view 1
#define PyMPI_HAVE_MPI_File_set_view 1
#define PyMPI_HAVE_MPI_File_read_at 1
#define PyMPI_HAVE_MPI_File_read_at_all 1
#define PyMPI_HAVE_MPI_File_write_at 1
#define PyMPI_HAVE_MPI_File_write_at_all 1
#define PyMPI_HAVE_MPI_File_iread_at 1
#define PyMPI_HAVE_MPI_File_iwrite_at 1
#define PyMPI_HAVE_MPI_SEEK_SET 1
#define PyMPI_HAVE_MPI_SEEK_CUR 1
#define PyMPI_HAVE_MPI_SEEK_END 1
#define PyMPI_HAVE_MPI_DISPLACEMENT_CURRENT 1
#define PyMPI_HAVE_MPI_File_seek 1
#define PyMPI_HAVE_MPI_File_get_position 1
#define PyMPI_HAVE_MPI_File_get_byte_offset 1
#define PyMPI_HAVE_MPI_File_read 1
#define PyMPI_HAVE_MPI_File_read_all 1
#define PyMPI_HAVE_MPI_File_write 1
#define PyMPI_HAVE_MPI_File_write_all 1
#define PyMPI_HAVE_MPI_File_iread 1
#define PyMPI_HAVE_MPI_File_iwrite 1
#define PyMPI_HAVE_MPI_File_read_shared 1
#define PyMPI_HAVE_MPI_File_write_shared 1
#define PyMPI_HAVE_MPI_File_iread_shared 1
#define PyMPI_HAVE_MPI_File_iwrite_shared 1
#define PyMPI_HAVE_MPI_File_read_ordered 1
#define PyMPI_HAVE_MPI_File_write_ordered 1
#define PyMPI_HAVE_MPI_File_seek_shared 1
#define PyMPI_HAVE_MPI_File_get_position_shared 1
#define PyMPI_HAVE_MPI_File_read_at_all_begin 1
#define PyMPI_HAVE_MPI_File_read_at_all_end 1
#define PyMPI_HAVE_MPI_File_write_at_all_begin 1
#define PyMPI_HAVE_MPI_File_write_at_all_end 1
#define PyMPI_HAVE_MPI_File_read_all_begin 1
#define PyMPI_HAVE_MPI_File_read_all_end 1
#define PyMPI_HAVE_MPI_File_write_all_begin 1
#define PyMPI_HAVE_MPI_File_write_all_end 1
#define PyMPI_HAVE_MPI_File_read_ordered_begin 1
#define PyMPI_HAVE_MPI_File_read_ordered_end 1
#define PyMPI_HAVE_MPI_File_write_ordered_begin 1
#define PyMPI_HAVE_MPI_File_write_ordered_end 1
#define PyMPI_HAVE_MPI_File_get_type_extent 1
#define PyMPI_HAVE_MPI_File_set_atomicity 1
#define PyMPI_HAVE_MPI_File_get_atomicity 1
#define PyMPI_HAVE_MPI_File_sync 1
#define PyMPI_HAVE_MPI_File_get_errhandler 1
#define PyMPI_HAVE_MPI_File_set_errhandler 1
#define PyMPI_HAVE_MPI_File_errhandler_fn 1
#define PyMPI_HAVE_MPI_File_create_errhandler 1
#define PyMPI_HAVE_MPI_File_call_errhandler 1
#define PyMPI_HAVE_MPI_Datarep_conversion_function 1
#define PyMPI_HAVE_MPI_Datarep_extent_function 1
#define PyMPI_HAVE_MPI_CONVERSION_FN_NULL 1
#define PyMPI_HAVE_MPI_MAX_DATAREP_STRING 1
#define PyMPI_HAVE_MPI_Register_datarep 1
#define PyMPI_HAVE_MPI_ERR_FILE 1
#define PyMPI_HAVE_MPI_ERR_NOT_SAME 1
#define PyMPI_HAVE_MPI_ERR_BAD_FILE 1
#define PyMPI_HAVE_MPI_ERR_NO_SUCH_FILE 1
#define PyMPI_HAVE_MPI_ERR_FILE_EXISTS 1
#define PyMPI_HAVE_MPI_ERR_FILE_IN_USE 1
#define PyMPI_HAVE_MPI_ERR_AMODE 1
#define PyMPI_HAVE_MPI_ERR_ACCESS 1
#define PyMPI_HAVE_MPI_ERR_READ_ONLY 1
#define PyMPI_HAVE_MPI_ERR_NO_SPACE 1
#define PyMPI_HAVE_MPI_ERR_QUOTA 1
#define PyMPI_HAVE_MPI_ERR_UNSUPPORTED_DATAREP 1
#define PyMPI_HAVE_MPI_ERR_UNSUPPORTED_OPERATION 1
#define PyMPI_HAVE_MPI_ERR_CONVERSION 1
#define PyMPI_HAVE_MPI_ERR_DUP_DATAREP 1
#define PyMPI_HAVE_MPI_ERR_IO 1

#define PyMPI_HAVE_MPI_LASTUSEDCODE 1
#define PyMPI_HAVE_MPI_Add_error_class 1
#define PyMPI_HAVE_MPI_Add_error_code 1
#define PyMPI_HAVE_MPI_Add_error_string 1

#define PyMPI_HAVE_MPI_THREAD_SINGLE 1
#define PyMPI_HAVE_MPI_THREAD_FUNNELED 1
#define PyMPI_HAVE_MPI_THREAD_SERIALIZED 1
#define PyMPI_HAVE_MPI_THREAD_MULTIPLE 1
#define PyMPI_HAVE_MPI_Init_thread 1
#define PyMPI_HAVE_MPI_Query_thread 1
#define PyMPI_HAVE_MPI_Is_thread_main 1

#define PyMPI_HAVE_MPI_Fint 1
#define PyMPI_HAVE_MPI_F_STATUS_IGNORE 1
#define PyMPI_HAVE_MPI_F_STATUSES_IGNORE 1
#define PyMPI_HAVE_MPI_Status_c2f 1
#define PyMPI_HAVE_MPI_Status_f2c 1
#define PyMPI_HAVE_MPI_Type_c2f 1
#define PyMPI_HAVE_MPI_Request_c2f 1
#define PyMPI_HAVE_MPI_Op_c2f 1
#define PyMPI_HAVE_MPI_Info_c2f 1
#define PyMPI_HAVE_MPI_Group_c2f 1
#define PyMPI_HAVE_MPI_Comm_c2f 1
#define PyMPI_HAVE_MPI_Win_c2f 1
#define PyMPI_HAVE_MPI_File_c2f 1
#define PyMPI_HAVE_MPI_Errhandler_c2f 1
#define PyMPI_HAVE_MPI_Type_f2c 1
#define PyMPI_HAVE_MPI_Request_f2c 1
#define PyMPI_HAVE_MPI_Op_f2c 1
#define PyMPI_HAVE_MPI_Info_f2c 1
#define PyMPI_HAVE_MPI_Group_f2c 1
#define PyMPI_HAVE_MPI_Comm_f2c 1
#define PyMPI_HAVE_MPI_Win_f2c 1
#define PyMPI_HAVE_MPI_File_f2c 1
#define PyMPI_HAVE_MPI_Errhandler_f2c 1

#endif
#endif
