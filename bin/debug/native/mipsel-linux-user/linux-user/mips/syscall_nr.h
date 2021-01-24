#ifndef LINUX_USER_MIPS_SYSCALL_NR_H
#define LINUX_USER_MIPS_SYSCALL_NR_H

#define TARGET_NR_syscall	(4000 + 0)
#define TARGET_NR_exit	(4000 + 1)
#define TARGET_NR_fork	(4000 + 2)
#define TARGET_NR_read	(4000 + 3)
#define TARGET_NR_write	(4000 + 4)
#define TARGET_NR_open	(4000 + 5)
#define TARGET_NR_close	(4000 + 6)
#define TARGET_NR_waitpid	(4000 + 7)
#define TARGET_NR_creat	(4000 + 8)
#define TARGET_NR_link	(4000 + 9)
#define TARGET_NR_unlink	(4000 + 10)
#define TARGET_NR_execve	(4000 + 11)
#define TARGET_NR_chdir	(4000 + 12)
#define TARGET_NR_time	(4000 + 13)
#define TARGET_NR_mknod	(4000 + 14)
#define TARGET_NR_chmod	(4000 + 15)
#define TARGET_NR_lchown	(4000 + 16)
#define TARGET_NR_break	(4000 + 17)
#define TARGET_NR_unused18	(4000 + 18)
#define TARGET_NR_lseek	(4000 + 19)
#define TARGET_NR_getpid	(4000 + 20)
#define TARGET_NR_mount	(4000 + 21)
#define TARGET_NR_umount	(4000 + 22)
#define TARGET_NR_setuid	(4000 + 23)
#define TARGET_NR_getuid	(4000 + 24)
#define TARGET_NR_stime	(4000 + 25)
#define TARGET_NR_ptrace	(4000 + 26)
#define TARGET_NR_alarm	(4000 + 27)
#define TARGET_NR_unused28	(4000 + 28)
#define TARGET_NR_pause	(4000 + 29)
#define TARGET_NR_utime	(4000 + 30)
#define TARGET_NR_stty	(4000 + 31)
#define TARGET_NR_gtty	(4000 + 32)
#define TARGET_NR_access	(4000 + 33)
#define TARGET_NR_nice	(4000 + 34)
#define TARGET_NR_ftime	(4000 + 35)
#define TARGET_NR_sync	(4000 + 36)
#define TARGET_NR_kill	(4000 + 37)
#define TARGET_NR_rename	(4000 + 38)
#define TARGET_NR_mkdir	(4000 + 39)
#define TARGET_NR_rmdir	(4000 + 40)
#define TARGET_NR_dup	(4000 + 41)
#define TARGET_NR_pipe	(4000 + 42)
#define TARGET_NR_times	(4000 + 43)
#define TARGET_NR_prof	(4000 + 44)
#define TARGET_NR_brk	(4000 + 45)
#define TARGET_NR_setgid	(4000 + 46)
#define TARGET_NR_getgid	(4000 + 47)
#define TARGET_NR_signal	(4000 + 48)
#define TARGET_NR_geteuid	(4000 + 49)
#define TARGET_NR_getegid	(4000 + 50)
#define TARGET_NR_acct	(4000 + 51)
#define TARGET_NR_umount2	(4000 + 52)
#define TARGET_NR_lock	(4000 + 53)
#define TARGET_NR_ioctl	(4000 + 54)
#define TARGET_NR_fcntl	(4000 + 55)
#define TARGET_NR_mpx	(4000 + 56)
#define TARGET_NR_setpgid	(4000 + 57)
#define TARGET_NR_ulimit	(4000 + 58)
#define TARGET_NR_unused59	(4000 + 59)
#define TARGET_NR_umask	(4000 + 60)
#define TARGET_NR_chroot	(4000 + 61)
#define TARGET_NR_ustat	(4000 + 62)
#define TARGET_NR_dup2	(4000 + 63)
#define TARGET_NR_getppid	(4000 + 64)
#define TARGET_NR_getpgrp	(4000 + 65)
#define TARGET_NR_setsid	(4000 + 66)
#define TARGET_NR_sigaction	(4000 + 67)
#define TARGET_NR_sgetmask	(4000 + 68)
#define TARGET_NR_ssetmask	(4000 + 69)
#define TARGET_NR_setreuid	(4000 + 70)
#define TARGET_NR_setregid	(4000 + 71)
#define TARGET_NR_sigsuspend	(4000 + 72)
#define TARGET_NR_sigpending	(4000 + 73)
#define TARGET_NR_sethostname	(4000 + 74)
#define TARGET_NR_setrlimit	(4000 + 75)
#define TARGET_NR_getrlimit	(4000 + 76)
#define TARGET_NR_getrusage	(4000 + 77)
#define TARGET_NR_gettimeofday	(4000 + 78)
#define TARGET_NR_settimeofday	(4000 + 79)
#define TARGET_NR_getgroups	(4000 + 80)
#define TARGET_NR_setgroups	(4000 + 81)
#define TARGET_NR_reserved82	(4000 + 82)
#define TARGET_NR_symlink	(4000 + 83)
#define TARGET_NR_unused84	(4000 + 84)
#define TARGET_NR_readlink	(4000 + 85)
#define TARGET_NR_uselib	(4000 + 86)
#define TARGET_NR_swapon	(4000 + 87)
#define TARGET_NR_reboot	(4000 + 88)
#define TARGET_NR_readdir	(4000 + 89)
#define TARGET_NR_mmap	(4000 + 90)
#define TARGET_NR_munmap	(4000 + 91)
#define TARGET_NR_truncate	(4000 + 92)
#define TARGET_NR_ftruncate	(4000 + 93)
#define TARGET_NR_fchmod	(4000 + 94)
#define TARGET_NR_fchown	(4000 + 95)
#define TARGET_NR_getpriority	(4000 + 96)
#define TARGET_NR_setpriority	(4000 + 97)
#define TARGET_NR_profil	(4000 + 98)
#define TARGET_NR_statfs	(4000 + 99)
#define TARGET_NR_fstatfs	(4000 + 100)
#define TARGET_NR_ioperm	(4000 + 101)
#define TARGET_NR_socketcall	(4000 + 102)
#define TARGET_NR_syslog	(4000 + 103)
#define TARGET_NR_setitimer	(4000 + 104)
#define TARGET_NR_getitimer	(4000 + 105)
#define TARGET_NR_stat	(4000 + 106)
#define TARGET_NR_lstat	(4000 + 107)
#define TARGET_NR_fstat	(4000 + 108)
#define TARGET_NR_unused109	(4000 + 109)
#define TARGET_NR_iopl	(4000 + 110)
#define TARGET_NR_vhangup	(4000 + 111)
#define TARGET_NR_idle	(4000 + 112)
#define TARGET_NR_vm86	(4000 + 113)
#define TARGET_NR_wait4	(4000 + 114)
#define TARGET_NR_swapoff	(4000 + 115)
#define TARGET_NR_sysinfo	(4000 + 116)
#define TARGET_NR_ipc	(4000 + 117)
#define TARGET_NR_fsync	(4000 + 118)
#define TARGET_NR_sigreturn	(4000 + 119)
#define TARGET_NR_clone	(4000 + 120)
#define TARGET_NR_setdomainname	(4000 + 121)
#define TARGET_NR_uname	(4000 + 122)
#define TARGET_NR_modify_ldt	(4000 + 123)
#define TARGET_NR_adjtimex	(4000 + 124)
#define TARGET_NR_mprotect	(4000 + 125)
#define TARGET_NR_sigprocmask	(4000 + 126)
#define TARGET_NR_create_module	(4000 + 127)
#define TARGET_NR_init_module	(4000 + 128)
#define TARGET_NR_delete_module	(4000 + 129)
#define TARGET_NR_get_kernel_syms	(4000 + 130)
#define TARGET_NR_quotactl	(4000 + 131)
#define TARGET_NR_getpgid	(4000 + 132)
#define TARGET_NR_fchdir	(4000 + 133)
#define TARGET_NR_bdflush	(4000 + 134)
#define TARGET_NR_sysfs	(4000 + 135)
#define TARGET_NR_personality	(4000 + 136)
#define TARGET_NR_afs_syscall	(4000 + 137)
#define TARGET_NR_setfsuid	(4000 + 138)
#define TARGET_NR_setfsgid	(4000 + 139)
#define TARGET_NR__llseek	(4000 + 140)
#define TARGET_NR_getdents	(4000 + 141)
#define TARGET_NR__newselect	(4000 + 142)
#define TARGET_NR_flock	(4000 + 143)
#define TARGET_NR_msync	(4000 + 144)
#define TARGET_NR_readv	(4000 + 145)
#define TARGET_NR_writev	(4000 + 146)
#define TARGET_NR_cacheflush	(4000 + 147)
#define TARGET_NR_cachectl	(4000 + 148)
#define TARGET_NR_sysmips	(4000 + 149)
#define TARGET_NR_unused150	(4000 + 150)
#define TARGET_NR_getsid	(4000 + 151)
#define TARGET_NR_fdatasync	(4000 + 152)
#define TARGET_NR__sysctl	(4000 + 153)
#define TARGET_NR_mlock	(4000 + 154)
#define TARGET_NR_munlock	(4000 + 155)
#define TARGET_NR_mlockall	(4000 + 156)
#define TARGET_NR_munlockall	(4000 + 157)
#define TARGET_NR_sched_setparam	(4000 + 158)
#define TARGET_NR_sched_getparam	(4000 + 159)
#define TARGET_NR_sched_setscheduler	(4000 + 160)
#define TARGET_NR_sched_getscheduler	(4000 + 161)
#define TARGET_NR_sched_yield	(4000 + 162)
#define TARGET_NR_sched_get_priority_max	(4000 + 163)
#define TARGET_NR_sched_get_priority_min	(4000 + 164)
#define TARGET_NR_sched_rr_get_interval	(4000 + 165)
#define TARGET_NR_nanosleep	(4000 + 166)
#define TARGET_NR_mremap	(4000 + 167)
#define TARGET_NR_accept	(4000 + 168)
#define TARGET_NR_bind	(4000 + 169)
#define TARGET_NR_connect	(4000 + 170)
#define TARGET_NR_getpeername	(4000 + 171)
#define TARGET_NR_getsockname	(4000 + 172)
#define TARGET_NR_getsockopt	(4000 + 173)
#define TARGET_NR_listen	(4000 + 174)
#define TARGET_NR_recv	(4000 + 175)
#define TARGET_NR_recvfrom	(4000 + 176)
#define TARGET_NR_recvmsg	(4000 + 177)
#define TARGET_NR_send	(4000 + 178)
#define TARGET_NR_sendmsg	(4000 + 179)
#define TARGET_NR_sendto	(4000 + 180)
#define TARGET_NR_setsockopt	(4000 + 181)
#define TARGET_NR_shutdown	(4000 + 182)
#define TARGET_NR_socket	(4000 + 183)
#define TARGET_NR_socketpair	(4000 + 184)
#define TARGET_NR_setresuid	(4000 + 185)
#define TARGET_NR_getresuid	(4000 + 186)
#define TARGET_NR_query_module	(4000 + 187)
#define TARGET_NR_poll	(4000 + 188)
#define TARGET_NR_nfsservctl	(4000 + 189)
#define TARGET_NR_setresgid	(4000 + 190)
#define TARGET_NR_getresgid	(4000 + 191)
#define TARGET_NR_prctl	(4000 + 192)
#define TARGET_NR_rt_sigreturn	(4000 + 193)
#define TARGET_NR_rt_sigaction	(4000 + 194)
#define TARGET_NR_rt_sigprocmask	(4000 + 195)
#define TARGET_NR_rt_sigpending	(4000 + 196)
#define TARGET_NR_rt_sigtimedwait	(4000 + 197)
#define TARGET_NR_rt_sigqueueinfo	(4000 + 198)
#define TARGET_NR_rt_sigsuspend	(4000 + 199)
#define TARGET_NR_pread64	(4000 + 200)
#define TARGET_NR_pwrite64	(4000 + 201)
#define TARGET_NR_chown	(4000 + 202)
#define TARGET_NR_getcwd	(4000 + 203)
#define TARGET_NR_capget	(4000 + 204)
#define TARGET_NR_capset	(4000 + 205)
#define TARGET_NR_sigaltstack	(4000 + 206)
#define TARGET_NR_sendfile	(4000 + 207)
#define TARGET_NR_getpmsg	(4000 + 208)
#define TARGET_NR_putpmsg	(4000 + 209)
#define TARGET_NR_mmap2	(4000 + 210)
#define TARGET_NR_truncate64	(4000 + 211)
#define TARGET_NR_ftruncate64	(4000 + 212)
#define TARGET_NR_stat64	(4000 + 213)
#define TARGET_NR_lstat64	(4000 + 214)
#define TARGET_NR_fstat64	(4000 + 215)
#define TARGET_NR_pivot_root	(4000 + 216)
#define TARGET_NR_mincore	(4000 + 217)
#define TARGET_NR_madvise	(4000 + 218)
#define TARGET_NR_getdents64	(4000 + 219)
#define TARGET_NR_fcntl64	(4000 + 220)
#define TARGET_NR_reserved221	(4000 + 221)
#define TARGET_NR_gettid	(4000 + 222)
#define TARGET_NR_readahead	(4000 + 223)
#define TARGET_NR_setxattr	(4000 + 224)
#define TARGET_NR_lsetxattr	(4000 + 225)
#define TARGET_NR_fsetxattr	(4000 + 226)
#define TARGET_NR_getxattr	(4000 + 227)
#define TARGET_NR_lgetxattr	(4000 + 228)
#define TARGET_NR_fgetxattr	(4000 + 229)
#define TARGET_NR_listxattr	(4000 + 230)
#define TARGET_NR_llistxattr	(4000 + 231)
#define TARGET_NR_flistxattr	(4000 + 232)
#define TARGET_NR_removexattr	(4000 + 233)
#define TARGET_NR_lremovexattr	(4000 + 234)
#define TARGET_NR_fremovexattr	(4000 + 235)
#define TARGET_NR_tkill	(4000 + 236)
#define TARGET_NR_sendfile64	(4000 + 237)
#define TARGET_NR_futex	(4000 + 238)
#define TARGET_NR_sched_setaffinity	(4000 + 239)
#define TARGET_NR_sched_getaffinity	(4000 + 240)
#define TARGET_NR_io_setup	(4000 + 241)
#define TARGET_NR_io_destroy	(4000 + 242)
#define TARGET_NR_io_getevents	(4000 + 243)
#define TARGET_NR_io_submit	(4000 + 244)
#define TARGET_NR_io_cancel	(4000 + 245)
#define TARGET_NR_exit_group	(4000 + 246)
#define TARGET_NR_lookup_dcookie	(4000 + 247)
#define TARGET_NR_epoll_create	(4000 + 248)
#define TARGET_NR_epoll_ctl	(4000 + 249)
#define TARGET_NR_epoll_wait	(4000 + 250)
#define TARGET_NR_remap_file_pages	(4000 + 251)
#define TARGET_NR_set_tid_address	(4000 + 252)
#define TARGET_NR_restart_syscall	(4000 + 253)
#define TARGET_NR_fadvise64_64	(4000 + 254)
#define TARGET_NR_statfs64	(4000 + 255)
#define TARGET_NR_fstatfs64	(4000 + 256)
#define TARGET_NR_timer_create	(4000 + 257)
#define TARGET_NR_timer_settime	(4000 + 258)
#define TARGET_NR_timer_gettime	(4000 + 259)
#define TARGET_NR_timer_getoverrun	(4000 + 260)
#define TARGET_NR_timer_delete	(4000 + 261)
#define TARGET_NR_clock_settime	(4000 + 262)
#define TARGET_NR_clock_gettime	(4000 + 263)
#define TARGET_NR_clock_getres	(4000 + 264)
#define TARGET_NR_clock_nanosleep	(4000 + 265)
#define TARGET_NR_tgkill	(4000 + 266)
#define TARGET_NR_utimes	(4000 + 267)
#define TARGET_NR_mbind	(4000 + 268)
#define TARGET_NR_get_mempolicy	(4000 + 269)
#define TARGET_NR_set_mempolicy	(4000 + 270)
#define TARGET_NR_mq_open	(4000 + 271)
#define TARGET_NR_mq_unlink	(4000 + 272)
#define TARGET_NR_mq_timedsend	(4000 + 273)
#define TARGET_NR_mq_timedreceive	(4000 + 274)
#define TARGET_NR_mq_notify	(4000 + 275)
#define TARGET_NR_mq_getsetattr	(4000 + 276)
#define TARGET_NR_vserver	(4000 + 277)
#define TARGET_NR_waitid	(4000 + 278)
#define TARGET_NR_add_key	(4000 + 280)
#define TARGET_NR_request_key	(4000 + 281)
#define TARGET_NR_keyctl	(4000 + 282)
#define TARGET_NR_set_thread_area	(4000 + 283)
#define TARGET_NR_inotify_init	(4000 + 284)
#define TARGET_NR_inotify_add_watch	(4000 + 285)
#define TARGET_NR_inotify_rm_watch	(4000 + 286)
#define TARGET_NR_migrate_pages	(4000 + 287)
#define TARGET_NR_openat	(4000 + 288)
#define TARGET_NR_mkdirat	(4000 + 289)
#define TARGET_NR_mknodat	(4000 + 290)
#define TARGET_NR_fchownat	(4000 + 291)
#define TARGET_NR_futimesat	(4000 + 292)
#define TARGET_NR_fstatat64	(4000 + 293)
#define TARGET_NR_unlinkat	(4000 + 294)
#define TARGET_NR_renameat	(4000 + 295)
#define TARGET_NR_linkat	(4000 + 296)
#define TARGET_NR_symlinkat	(4000 + 297)
#define TARGET_NR_readlinkat	(4000 + 298)
#define TARGET_NR_fchmodat	(4000 + 299)
#define TARGET_NR_faccessat	(4000 + 300)
#define TARGET_NR_pselect6	(4000 + 301)
#define TARGET_NR_ppoll	(4000 + 302)
#define TARGET_NR_unshare	(4000 + 303)
#define TARGET_NR_splice	(4000 + 304)
#define TARGET_NR_sync_file_range	(4000 + 305)
#define TARGET_NR_tee	(4000 + 306)
#define TARGET_NR_vmsplice	(4000 + 307)
#define TARGET_NR_move_pages	(4000 + 308)
#define TARGET_NR_set_robust_list	(4000 + 309)
#define TARGET_NR_get_robust_list	(4000 + 310)
#define TARGET_NR_kexec_load	(4000 + 311)
#define TARGET_NR_getcpu	(4000 + 312)
#define TARGET_NR_epoll_pwait	(4000 + 313)
#define TARGET_NR_ioprio_set	(4000 + 314)
#define TARGET_NR_ioprio_get	(4000 + 315)
#define TARGET_NR_utimensat	(4000 + 316)
#define TARGET_NR_signalfd	(4000 + 317)
#define TARGET_NR_timerfd	(4000 + 318)
#define TARGET_NR_eventfd	(4000 + 319)
#define TARGET_NR_fallocate	(4000 + 320)
#define TARGET_NR_timerfd_create	(4000 + 321)
#define TARGET_NR_timerfd_gettime	(4000 + 322)
#define TARGET_NR_timerfd_settime	(4000 + 323)
#define TARGET_NR_signalfd4	(4000 + 324)
#define TARGET_NR_eventfd2	(4000 + 325)
#define TARGET_NR_epoll_create1	(4000 + 326)
#define TARGET_NR_dup3	(4000 + 327)
#define TARGET_NR_pipe2	(4000 + 328)
#define TARGET_NR_inotify_init1	(4000 + 329)
#define TARGET_NR_preadv	(4000 + 330)
#define TARGET_NR_pwritev	(4000 + 331)
#define TARGET_NR_rt_tgsigqueueinfo	(4000 + 332)
#define TARGET_NR_perf_event_open	(4000 + 333)
#define TARGET_NR_accept4	(4000 + 334)
#define TARGET_NR_recvmmsg	(4000 + 335)
#define TARGET_NR_fanotify_init	(4000 + 336)
#define TARGET_NR_fanotify_mark	(4000 + 337)
#define TARGET_NR_prlimit64	(4000 + 338)
#define TARGET_NR_name_to_handle_at	(4000 + 339)
#define TARGET_NR_open_by_handle_at	(4000 + 340)
#define TARGET_NR_clock_adjtime	(4000 + 341)
#define TARGET_NR_syncfs	(4000 + 342)
#define TARGET_NR_sendmmsg	(4000 + 343)
#define TARGET_NR_setns	(4000 + 344)
#define TARGET_NR_process_vm_readv	(4000 + 345)
#define TARGET_NR_process_vm_writev	(4000 + 346)
#define TARGET_NR_kcmp	(4000 + 347)
#define TARGET_NR_finit_module	(4000 + 348)
#define TARGET_NR_sched_setattr	(4000 + 349)
#define TARGET_NR_sched_getattr	(4000 + 350)
#define TARGET_NR_renameat2	(4000 + 351)
#define TARGET_NR_seccomp	(4000 + 352)
#define TARGET_NR_getrandom	(4000 + 353)
#define TARGET_NR_memfd_create	(4000 + 354)
#define TARGET_NR_bpf	(4000 + 355)
#define TARGET_NR_execveat	(4000 + 356)
#define TARGET_NR_userfaultfd	(4000 + 357)
#define TARGET_NR_membarrier	(4000 + 358)
#define TARGET_NR_mlock2	(4000 + 359)
#define TARGET_NR_copy_file_range	(4000 + 360)
#define TARGET_NR_preadv2	(4000 + 361)
#define TARGET_NR_pwritev2	(4000 + 362)
#define TARGET_NR_pkey_mprotect	(4000 + 363)
#define TARGET_NR_pkey_alloc	(4000 + 364)
#define TARGET_NR_pkey_free	(4000 + 365)
#define TARGET_NR_statx	(4000 + 366)
#define TARGET_NR_rseq	(4000 + 367)
#define TARGET_NR_io_pgetevents	(4000 + 368)
#define TARGET_NR_semget	(4000 + 393)
#define TARGET_NR_semctl	(4000 + 394)
#define TARGET_NR_shmget	(4000 + 395)
#define TARGET_NR_shmctl	(4000 + 396)
#define TARGET_NR_shmat	(4000 + 397)
#define TARGET_NR_shmdt	(4000 + 398)
#define TARGET_NR_msgget	(4000 + 399)
#define TARGET_NR_msgsnd	(4000 + 400)
#define TARGET_NR_msgrcv	(4000 + 401)
#define TARGET_NR_msgctl	(4000 + 402)
#define TARGET_NR_clock_gettime64	(4000 + 403)
#define TARGET_NR_clock_settime64	(4000 + 404)
#define TARGET_NR_clock_adjtime64	(4000 + 405)
#define TARGET_NR_clock_getres_time64	(4000 + 406)
#define TARGET_NR_clock_nanosleep_time64	(4000 + 407)
#define TARGET_NR_timer_gettime64	(4000 + 408)
#define TARGET_NR_timer_settime64	(4000 + 409)
#define TARGET_NR_timerfd_gettime64	(4000 + 410)
#define TARGET_NR_timerfd_settime64	(4000 + 411)
#define TARGET_NR_utimensat_time64	(4000 + 412)
#define TARGET_NR_pselect6_time64	(4000 + 413)
#define TARGET_NR_ppoll_time64	(4000 + 414)
#define TARGET_NR_io_pgetevents_time64	(4000 + 416)
#define TARGET_NR_recvmmsg_time64	(4000 + 417)
#define TARGET_NR_mq_timedsend_time64	(4000 + 418)
#define TARGET_NR_mq_timedreceive_time64	(4000 + 419)
#define TARGET_NR_semtimedop_time64	(4000 + 420)
#define TARGET_NR_rt_sigtimedwait_time64	(4000 + 421)
#define TARGET_NR_futex_time64	(4000 + 422)
#define TARGET_NR_sched_rr_get_interval_time64	(4000 + 423)
#define TARGET_NR_pidfd_send_signal	(4000 + 424)
#define TARGET_NR_io_uring_setup	(4000 + 425)
#define TARGET_NR_io_uring_enter	(4000 + 426)
#define TARGET_NR_io_uring_register	(4000 + 427)
#define TARGET_NR_open_tree	(4000 + 428)
#define TARGET_NR_move_mount	(4000 + 429)
#define TARGET_NR_fsopen	(4000 + 430)
#define TARGET_NR_fsconfig	(4000 + 431)
#define TARGET_NR_fsmount	(4000 + 432)
#define TARGET_NR_fspick	(4000 + 433)
#define TARGET_NR_pidfd_open	(4000 + 434)
#define TARGET_NR_clone3	(4000 + 435)
#define TARGET_NR_openat2	(4000 + 437)
#define TARGET_NR_pidfd_getfd	(4000 + 438)

#endif /* LINUX_USER_MIPS_SYSCALL_NR_H */
