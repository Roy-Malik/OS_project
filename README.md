# OS_project
Open System Call Wrapper in Linux 4.4

This project was developed as part of the Operating Systems (CS2006) course and focuses on understanding Linux kernel internals by modifying and extending the behavior of a core system call. The objective was to implement a custom wrapper around the open() system call in Linux Kernel 4.4.0, recompile the kernel, boot into it, and verify the modified behavior in a controlled environment.

The open() system call is one of the most fundamental interfaces between user space and the Linux kernel. Almost every program interacts with the filesystem through open(), making it a critical point for monitoring, logging, and access control. Wrapping this system call provides direct exposure to kernel–user boundaries and demonstrates low-level systems programming concepts.

Project Overview

The kernel was modified to introduce a custom wrapper around open() that intercepts every file access request. The wrapper logs the filename and access flags to the kernel log and enforces a simple security policy by blocking access to files whose names contain the substring "secret", returning -EACCES.

The implementation required coordinated changes across multiple kernel components:

Adding the wrapper logic in fs/open.c

Registering the new system call in arch/x86/entry/syscalls/syscall_64.tbl

Declaring the system call prototype in include/linux/syscalls.h

Environment and Build Process

All development and testing were performed inside Ubuntu 16.04.7 LTS running in VMware Workstation to ensure isolation and safety. The Linux 4.4.0 kernel source was compiled from scratch after installing the required build dependencies. The modified kernel was installed alongside the default kernel and selected at boot via GRUB.

During testing, common kernel development challenges were encountered, including systemd boot failures, missing dependencies, compilation errors, and virtual disk limitations. These were resolved through kernel boot parameter adjustments, dependency fixes, and filesystem resizing.

Outcome

The project successfully:

Modified and recompiled a stable Linux kernel

Injected and registered a custom system call wrapper

Booted and tested the modified kernel inside a virtual machine

Verified syscall interception, logging, and access blocking behavior

This project demonstrates a strong practical understanding of Linux kernel architecture, system calls, and low-level operating system concepts.
