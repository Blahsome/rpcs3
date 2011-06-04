#pragma once
enum SysCalls
{
	cellPadClearBuf = 0x0D5F2C14,
	cellPadInfoPressMode = 0x0E2DFAAD,
	cellPadInit = 0x1CF98800,
	cellPadLddRegisterController = 0x20A97BA2,
	cellPadGetInfo = 0x3AAAD464,
	cellPadGetRawData = 0x3F797DFF,
	cellPadEnd = 0x4D9B75D5,
	cellPadInfoSensorMode = 0x78200559,
	cellPadGetData = 0x8B72CDA1,
	cellPadLddDataInsert = 0xBAFD6409,
	cellPadSetSensorMode = 0xBE5BE3BA,
	cellPadLddUnregisterController = 0xE442FAA8,
	cellPadSetPressMode = 0xF83F8182,
	
	cellVideoOutConfigure = 0x0BAE8772,
	cellVideoOutGetDeviceInfo = 0x1E930EEF,
	cellVideoOutGetNumberOfDevice = 0x75BBB672,
	cellVideoOutGetState = 0x887572D5,
	cellVideoOutRegisterCallback = 0x8E8BC444,
	cellVideoOutGetResolutionAvailability = 0xA322DB75,
	cellVideoOutDebugSetMonitorType = 0xCFDF24BB,

	cellRescGcmSurface2RescSrc = 0x01220224,
	cellRescGetNumColorBuffers = 0x0A2069C7,
	cellRescSetWaitFlip = 0x0D3C22CE,
	cellRescSetDsts = 0x10DB5B1A,
	cellRescResetFlipStatus = 0x129922A0,
	cellRescSetPalInterpolateDropFlexRatio = 0x19A2A967,
	cellRescGetRegisterCount = 0x1DD3C4CD,
	cellRescAdjustAspectRatio = 0x22AE06D8,
	cellRescSetDisplayMode = 0x23134710,
	cellRescSetConvertAndFlip = 0x25C107E6,
	cellRescExit = 0x2EA3061E,
	cellRescSetFlipHandler = 0x2EA94661,
	cellRescInit = 0x516EE89E,
	cellRescGetBufferSize = 0x5A338CDB,
	cellRescGetLastFlipTime = 0x66F5E388,
	cellRescSetSrc = 0x6CD0F95F,
	cellRescSetRegisterCount = 0x7AF8A37F,
	cellRescSetBufferAddress = 0x8107277C,
	cellRescGetFlipStatus = 0xC47C5C22,
	cellRescVideoOutResolutionId2RescBufferMode = 0xD1CA0503,
	cellRescSetVBlankHandler = 0xD3758645,
	cellRescCreateInterlaceTable = 0xE0CEF79E,

	/*
	<Entry id="0x0247C69E" name="cellSailGraphicsAdapterGetFrame"/>
	<Entry id="0x1872331B" name="cellSailGraphicsAdapterPtsToTimePosition"/>
	<Entry id="0x1C983864" name="cellSailGraphicsAdapterInitialize"/>
	<Entry id="0x2E3CCB5E" name="cellSailGraphicsAdapterSetPreferredFormat"/>
	<Entry id="0x44A20E79" name="cellSailGraphicsAdapterUpdateAvSync"/>
	<Entry id="0x76488BB1" name="cellSailGraphicsAdapterFinalize"/>
	<Entry id="0xFFD58AA4" name="cellSailGraphicsAdapterGetFormat"/>
	*/

	/*
	sys_process_getpid 	= 1,
	sys_process_wait_for_child 	= 2,
	sys_process_get_status 	= 4,
	sys_process_detach_child 	= 5,
	sys_process_get_number_of_object 	= 12,
	sys_process_get_id 	= 13,
	sys_process_is_spu_lock_line_reservation_address 	= 14,
	sys_process_getppid 	= 18,
	sys_process_kill 	= 19,
	sys_process_wait_for_child2 	= 23,
	sys_process_get_sdk_version 	= 25,
	_sys_process_get_paramsfo = 30,
	sys_ppu_thread_yield 	= 43,
	sys_ppu_thread_join 	= 44,
	sys_ppu_thread_detach 	= 45,
	sys_ppu_thread_get_join_state 	= 46,
	sys_ppu_thread_set_priority 	= 47,
	sys_ppu_thread_get_priority 	= 48,
	sys_ppu_thread_get_stack_information 	= 49,
	sys_ppu_thread_rename 	= 56,
	sys_ppu_thread_recover_page_fault 	= 57,
	sys_trace_allocate_buffer 	= 67,
	sys_trace_free_buffer 	= 68,
	sys_trace_create2 	= 69,
	sys_timer_create 	= 70,
	sys_timer_destroy 	= 71,
	sys_timer_get_information 	= 72,
	sys_timer_start 	= 73,
	sys_timer_stop 	= 74,
	sys_timer_connect_event_queue 	= 75,
	sys_timer_disconnect_event_queue 	= 76,
	sys_interrupt_tag_create 	= 80,
	sys_interrupt_tag_destroy 	= 81,
	sys_interrupt_thread_establish 	= 84
	sys_interrupt_thread_eoi 	= 88,
	sys_interrupt_thread_disestablish 	= 89,
	sys_semaphore_create 	= 90,
	sys_semaphore_destroy 	= 91,
	sys_semaphore_wait 	= 92,
	sys_semaphore_trywait 	= 93,
	sys_semaphore_post 	= 94,
	sys_mutex_create 	= 100,
	sys_mutex_destroy 	= 101,
	sys_mutex_lock 	= 102,
	sys_mutex_trylock 	= 103,
	sys_mutex_unlock 	= 104,
	sys_cond_create 	= 105,
	sys_cond_destroy 	= 106,
	sys_cond_wait 	= 107,
	sys_cond_signal		= 108,
	sys_cond_signal_all 	= 109,
	sys_cond_signal_to 	= 110,
	sys_semaphore_get_value 	= 114,
	sys_rwlock_create 	= 120,
	sys_rwlock_destroy 	= 121,
	sys_rwlock_rlock 	= 122,
	sys_rwlock_tryrlock 	= 123,
	sys_rwlock_runlock 	= 124,
	sys_rwlock_wlock 	= 125,
	sys_rwlock_trywlock 	= 126,
	sys_rwlock_wunlock 	= 127,
	sys_event_queue_create 	= 128,
	sys_event_queue_destroy 	= 129,
	sys_event_queue_receive 	= 130,
	sys_event_queue_tryreceive 	= 131,
	sys_event_queue_drain 	= 133,
	sys_event_port_create 	= 134,
	sys_event_port_destroy 	= 135,
	sys_event_port_connect_local 	= 136,
	sys_event_port_disconnect 	= 137,
	sys_event_port_send = 138,	
	sys_event_port_connect_ipc 	= 140,
	sys_timer_usleep 	= 141,
	sys_timer_sleep 	= 142,
	sys_time_get_current_time 	= 145,
	sys_time_get_timebase_frequency 	= 147,
	sys_raw_spu_create_interrupt_tag 	= 150,
	sys_raw_spu_set_int_mask 	= 151,
	sys_raw_spu_get_int_mask 	= 152,
	sys_raw_spu_set_int_stat 	= 153,
	sys_raw_spu_get_int_stat 	= 154,
	sys_spu_image_open 	= 156,
	sys_raw_spu_create 	= 160,
	sys_raw_spu_destroy 	= 161,
	sys_raw_spu_read_puint_mb 	= 163,
	sys_spu_thread_get_exit_status 	= 165,
	sys_spu_thread_set_argument 	= 166,
	sys_spu_thread_group_start_on_exit 	= 167,
	sys_spu_initialize 	= 169,
	sys_spu_thread_group_create 	= 170,
	sys_spu_thread_group_destroy 	= 171,
	sys_spu_thread_initialize 	= 172,
	sys_spu_thread_group_start 	= 173,
	sys_spu_thread_group_suspend 	= 174,
	sys_spu_thread_group_resume 	= 175,
	sys_spu_thread_group_yield 	= 176,
	sys_spu_thread_group_terminate 	= 177,
	sys_spu_thread_group_join 	= 178,
	sys_spu_thread_group_set_priority 	= 179,
	sys_spu_thread_group_get_priority 	= 180,
	sys_spu_thread_write_ls 	= 181,
	sys_spu_thread_read_ls 	= 182,
	sys_spu_thread_write_snr 	= 184,
	sys_spu_thread_group_connect_event 	= 185,
	sys_spu_thread_group_disconnect_event 	= 186,
	sys_spu_thread_set_spu_cfg 	= 187,
	sys_spu_thread_get_spu_cfg 	= 188,
	sys_spu_thread_write_spu_mb 	= 190,
	sys_spu_thread_connect_event 	= 191,
	sys_spu_thread_disconnect_event 	= 192,
	sys_spu_thread_bind_queue 	= 193,
	sys_spu_thread_unbind_queue 	= 194,
	sys_raw_spu_set_spu_cfg 	= 196,
	sys_raw_spu_get_spu_cfg 	= 197,
	sys_spu_thread_recover_page_fault 	= 198,
	sys_raw_spu_recover_page_fault 	= 199,
	sys_spu_thread_group_system_set_next_group 	= 244,
	sys_spu_thread_group_system_unset_next_group 	= 445,
	sys_spu_thread_group_system_set_switch_group 	= 246,
	sys_spu_thread_group_system_unset_switch_group 	= 247,
	sys_spu_thread_group_connect_event_all_threads 	= 251,
	sys_spu_thread_group_disconnect_event_all_threads 	= 252,
	sys_spu_image_open_by_fd 	= 260,
	sys_mmapper_enable_page_fault_notification 	= 327,
	sys_mmapper_free_shared_memory 	= 329,
	sys_mmapper_allocate_address 	= 330,
	sys_mmapper_free_address 	= 331,
	sys_mmapper_allocate_shared_memory 	= 332,
	sys_mmapper_set_shared_memory_flag 	= 333,
	sys_mmapper_map_shared_memory 	= 334,
	sys_mmapper_unmap_shared_memory 	= 335,
	sys_mmapper_change_address_access_right 	= 336,
	sys_mmapper_search_and_map 	= 337,
	sys_mmapper_get_shared_memory_attribute 	= 338,
	sys_memory_container_create 	= 341,
	sys_memory_container_destroy 	= 342,
	sys_memory_container_get_size 	= 343,
	sys_memory_allocate 	= 348,
	sys_memory_free 	= 349,
	sys_memory_allocate_from_container 	= 350,
	sys_memory_get_page_attribute 	= 351,
	sys_memory_get_user_memory_size 	= 352,
	sys_sm_get_ext_event2 	= 378,
	sys_tty_read 	= 402,
	sys_tty_write 	= 403,
	sys_overlay_load_module 	= 450,
	sys_overlay_unload_module 	= 451,
	sys_overlay_get_module_list 	= 452,
	sys_overlay_get_module_info 	= 453,
	sys_overlay_load_module_by_fd 	= 454,
	sys_overlay_get_module_info2 	= 455,
	sys_overlay_get_sdk_version 	= 456,
	sys_overlay_get_module_dbg_info 	= 457,
	sys_prx_get_module_id_by_address 	= 461,
	sys_prx_load_module_by_fd 	= 463,
	sys_prx_load_module_on_memcontainer_by_fd 	= 464,
	sys_prx_load_module 	= 480,
	sys_prx_start_module 	= 481,
	sys_prx_stop_module 	= 482,
	sys_prx_unload_module 	= 483,
	sys_prx_register_module 	= 484,
	sys_prx_query_module 	= 485,
	sys_prx_register_library 	= 486,
	sys_prx_unregister_library 	= 487,
	sys_prx_link_library 	= 488,
	sys_prx_unlink_library 	= 489,
	sys_prx_query_library 	= 490,
	sys_prx_get_module_list 	= 494,
	sys_prx_get_module_info 	= 495,
	sys_prx_get_module_id_by_name 	= 496,
	sys_prx_load_module_on_memcontainer 	= 497,
	sys_prx_start 	= 498,
	sys_prx_stop 	= 499,
	sys_storage_open 	= 600,
	sys_storage_close 	= 601,
	sys_storage_read 	= 602,
	sys_storage_write 	= 603,
	sys_storage_send_device_command 	= 604,
	sys_storage_async_configure 	= 605,
	sys_storage_async_read 	= 606,
	sys_storage_async_write 	= 607,
	sys_storage_async_cancel 	= 608,
	sys_storage_get_device_info 	= 609,
	sys_storage_get_device_config 	= 610,
	sys_storage_report_devices 	= 611,
	sys_storage_configure_medium_event 	= 612,
	sys_storage_set_medium_polling_interval 	= 613,
	sys_storage_create_region 	= 614,
	sys_storage_delete_region 	= 615,
	sys_storage_execute_device_command 	= 616,
	sys_storage_get_region_acl 	= 617,
	sys_storage_set_region_acl 	= 618,
	sys_io_buffer_create 	= 624,
	sys_io_buffer_destroy 	= 625,
	sys_io_buffer_allocate 	= 626,
	sys_io_buffer_free 	= 627,
	sys_gpio_set 	= 630,
	sys_gpio_get 	= 631,
	sys_fsw_connect_event 	= 633,
	sys_fsw_disconnect_event 	= 634,
	sys_rsx_device_open 	= 666,
	sys_rsx_device_close 	= 667,
	sys_rsx_memory_allocate 	= 668,
	sys_rsx_memory_free 	= 669,
	sys_rsx_context_allocate 	= 670,
	sys_rsx_context_free 	= 671,
	sys_rsx_context_iomap 	= 672,
	sys_rsx_context_iounmap 	= 673,
	sys_rsx_context_attribute 	= 674,
	sys_rsx_device_map 	= 675,
	sys_rsx_device_unmap 	= 676,
	sys_rsx_attribute 	= 677,
	sys_net_bnet_accept 	= 700,
	sys_net_bnet_bind 	= 701,
	sys_net_bnet_connect 	= 702,
	sys_net_bnet_getpeername 	= 703,
	sys_net_bnet_getsockname 	= 704,
	sys_net_bnet_getsockopt 	= 705,
	sys_net_bnet_listen 	= 706,
	sys_net_bnet_recvfrom 	= 707,
	sys_net_bnet_recvmsg 	= 708,
	sys_net_bnet_sendmsg 	= 709,
	sys_net_bnet_sendto 	= 710,
	sys_net_bnet_setsockop 	= 711,
	sys_net_bnet_shutdown 	= 712,
	sys_net_bnet_socket 	= 713,
	sys_net_bnet_close 	= 714,
	sys_net_bnet_poll 	= 715,
	sys_net_bnet_select 	= 716,
		
	sys_net_bnet_ioctl 	= 724,
	sys_net_bnet_sysctl 	= 725,
		
	lv2FsOpen 	= 801,
	lv2FsRead 	= 802,
	lv2FsWrite 	= 803,
	lv2FsClose 	= 804,
	lv2FsOpenDir 	= 805,
	lv2FsReadDir 	= 806,
	lv2FsCloseDir 	= 807,
	lv2FsStat 	= 808,
	lv2FsFstat 	= 809,
	lv2FsLink 	= 810,
	lv2FsMkdir 	= 811,
	lv2FsRename 	= 812,
	lv2FsRmdir 	= 813,
	lv2FsUnlink 	= 814,
	lv2FsUtime 	= 815,
		
	lv2FsLSeek 	= 818,
		
	lv2FsFSync 	= 820,
		
	lv2FsTruncate 	= 831,
	lv2FsFTruncate 	= 832,
		
	lv2FsChmod 	= 834,
		
	unknown = 867,
		
	sys_ss_access_control_engine 	= 871,
	sys_ss_get_open_psid 	= 872,
	sys_ss_get_cache_of_product_mode 	= 873,
	sys_ss_get_cache_of_flash_ext_flag 	= 874,
	sys_ss_get_boot_device 	= 875,
	sys_ss_disc_access_control 	= 876,
	sys_ss_ad_sign 	= 878,
	sys_ss_media_id 	= 879,
	sys_deci3_open 	= 880,
	sys_deci3_create_event_path 	= 881,
	sys_deci3_close 	= 882,
	sys_deci3_send 	= 883,
	sys_deci3_receive = 884,
	*/
};