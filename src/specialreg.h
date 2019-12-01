#ifndef _SPECIALREG_H_
#define _SPECIALREG_H_

#define MSR_PPERF		0x64e

#define MSR_IA32_PM_ENABLE	0x770
#define MSR_IA32_HWP_CAPABILITIES	0x771
#define MSR_IA32_HWP_REQUEST_PKG	0x772
#define MSR_IA32_HWP_INTERRUPT		0x773
#define MSR_IA32_HWP_REQUEST	0x774
#define MSR_IA32_HWP_PECI_REQUEST_INFO	0x775
#define MSR_IA32_HWP_STATUS	0x777

/* MSR IA32_HWP_CAPABILITIES */
#define IA32_HWP_CAPABILITIES_HIGHEST_PERFORMANCE(x)	(((x) >> 0) & 0xff)
#define IA32_HWP_CAPABILITIES_GUARANTEED_PERFORMANCE(x)	(((x) >> 8) & 0xff)
#define IA32_HWP_CAPABILITIES_EFFICIENT_PERFORMANCE(x)	(((x) >> 16) & 0xff)
#define IA32_HWP_CAPABILITIES_LOWEST_PERFORMANCE(x)	(((x) >> 24) & 0xff)

/* MSR IA32_HWP_REQUEST */
#define IA32_HWP_REQUEST_MINIMUM_VALID			(1ULL << 63)
#define IA32_HWP_REQUEST_MAXIMUM_VALID			(1ULL << 62)
#define IA32_HWP_REQUEST_DESIRED_VALID			(1ULL << 61)
#define IA32_HWP_REQUEST_EPP_VALID 			(1ULL << 60)
#define IA32_HWP_REQUEST_ACTIVITY_WINDOW_VALID		(1ULL << 59)
#define IA32_HWP_REQUEST_PACKAGE_CONTROL		(1ULL << 42)
#define IA32_HWP_ACTIVITY_WINDOW			(0x3ffULL << 32)
#define IA32_HWP_REQUEST_ENERGY_PERFORMANCE_PREFERENCE	(0xffULL << 24)
#define IA32_HWP_DESIRED_PERFORMANCE			(0xffULL << 16)
#define IA32_HWP_REQUEST_MAXIMUM_PERFORMANCE		(0xffULL << 8)
#define IA32_HWP_MINIMUM_PERFORMANCE			(0xffULL << 0)

/* Eax. */
#define        CPUTPM1_SENSOR                  0x00000001
#define        CPUTPM1_TURBO                   0x00000002
#define        CPUTPM1_ARAT                    0x00000004
#define        CPUTPM1_PLN                     0x00000010
#define        CPUTPM1_ECMD                    0x00000020
#define        CPUTPM1_PTM                     0x00000040
#define        CPUTPM1_HWP                     0x00000080
#define        CPUTPM1_HWP_NOTIFICATION        0x00000100
#define        CPUTPM1_HWP_ACTIVITY_WINDOW     0x00000200
#define        CPUTPM1_HWP_PERF_PREF           0x00000400
#define        CPUTPM1_HWP_PKG                 0x00000800
#define        CPUTPM1_HDC                     0x00002000
#define        CPUTPM1_TURBO30                 0x00004000
#define        CPUTPM1_HWP_CAPABILITIES        0x00008000
#define        CPUTPM1_HWP_PECI_OVR            0x00010000
#define        CPUTPM1_HWP_FLEXIBLE            0x00020000
#define        CPUTPM1_HWP_FAST_MSR            0x00040000
#define        CPUTPM1_HWP_IGN_IDLE            0x00100000

/* Ebx. */
#define        CPUTPM_B_NSENSINTTHRESH         0x0000000f

/* Ecx. */
#define        CPUID_PERF_STAT                 0x00000001
#define        CPUID_PERF_BIAS                 0x00000008

#endif /* _SPECIALREG_H_ */
