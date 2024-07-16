/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_BBRAM_H
#define Z_INCLUDE_SYSCALLS_BBRAM_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_bbram_check_invalid(const struct device * dev);

__pinned_func
static inline int bbram_check_invalid(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_BBRAM_CHECK_INVALID);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_check_invalid(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_check_invalid(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_CHECK_INVALID, bbram_check_invalid, dev); 	syscall__retval = bbram_check_invalid(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_CHECK_INVALID, bbram_check_invalid, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bbram_check_standby_power(const struct device * dev);

__pinned_func
static inline int bbram_check_standby_power(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_BBRAM_CHECK_STANDBY_POWER);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_check_standby_power(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_check_standby_power(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_CHECK_STANDBY_POWER, bbram_check_standby_power, dev); 	syscall__retval = bbram_check_standby_power(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_CHECK_STANDBY_POWER, bbram_check_standby_power, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bbram_check_power(const struct device * dev);

__pinned_func
static inline int bbram_check_power(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_BBRAM_CHECK_POWER);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_check_power(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_check_power(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_CHECK_POWER, bbram_check_power, dev); 	syscall__retval = bbram_check_power(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_CHECK_POWER, bbram_check_power, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bbram_get_size(const struct device * dev, size_t * size);

__pinned_func
static inline int bbram_get_size(const struct device * dev, size_t * size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; size_t * val; } parm1 = { .val = size };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BBRAM_GET_SIZE);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_get_size(dev, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_get_size(dev, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_GET_SIZE, bbram_get_size, dev, size); 	syscall__retval = bbram_get_size(dev, size); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_GET_SIZE, bbram_get_size, dev, size, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bbram_read(const struct device * dev, size_t offset, size_t size, uint8_t * data);

__pinned_func
static inline int bbram_read(const struct device * dev, size_t offset, size_t size, uint8_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; size_t val; } parm1 = { .val = offset };
		union { uintptr_t x; size_t val; } parm2 = { .val = size };
		union { uintptr_t x; uint8_t * val; } parm3 = { .val = data };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_BBRAM_READ);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_read(dev, offset, size, data);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_read(dev, offset, size, data) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_READ, bbram_read, dev, offset, size, data); 	syscall__retval = bbram_read(dev, offset, size, data); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_READ, bbram_read, dev, offset, size, data, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bbram_write(const struct device * dev, size_t offset, size_t size, const uint8_t * data);

__pinned_func
static inline int bbram_write(const struct device * dev, size_t offset, size_t size, const uint8_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; size_t val; } parm1 = { .val = offset };
		union { uintptr_t x; size_t val; } parm2 = { .val = size };
		union { uintptr_t x; const uint8_t * val; } parm3 = { .val = data };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_BBRAM_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_bbram_write(dev, offset, size, data);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bbram_write(dev, offset, size, data) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BBRAM_WRITE, bbram_write, dev, offset, size, data); 	syscall__retval = bbram_write(dev, offset, size, data); 	sys_port_trace_syscall_exit(K_SYSCALL_BBRAM_WRITE, bbram_write, dev, offset, size, data, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
