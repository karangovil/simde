/* AUTOMATICALLY GENERATED FILE, DO NOT MODIFY */
/* b5dfc2f7bf7ce08e2836ee7f364b87e03e2e98e9 */
/* :: Begin x86/sse.h :: */
/* Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Copyright:
 *   2017-2020 Evan Nemerson <evan@nemerson.com>
 *   2015-2017 John W. Ratcliff <jratcliffscarab@gmail.com>
 *   2015      Brandon Rowlett <browlett@nvidia.com>
 *   2015      Ken Fast <kfast@gdeb.com>
 */

#if !defined(SIMDE__SSE_H)
#  if !defined(SIMDE__SSE_H)
#    define SIMDE__SSE_H
#  endif
/* :: Begin x86/mmx.h :: */
/* Copyright (c) 2017-2020 Evan Nemerson <evan@nemerson.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined(SIMDE__MMX_H)
#  if !defined(SIMDE__MMX_H)
#    define SIMDE__MMX_H
#  endif
/* :: Begin simde-common.h :: */
/* Copyright (c) 2017-2019 Evan Nemerson <evan@nemerson.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined(SIMDE_COMMON_H)
#define SIMDE_COMMON_H

/* :: Begin hedley.h :: */
/* Hedley - https://nemequ.github.io/hedley
 * Created by Evan Nemerson <evan@nemerson.com>
 *
 * To the extent possible under law, the author(s) have dedicated all
 * copyright and related and neighboring rights to this software to
 * the public domain worldwide. This software is distributed without
 * any warranty.
 *
 * For details, see <http://creativecommons.org/publicdomain/zero/1.0/>.
 * SPDX-License-Identifier: CC0-1.0
 */

#if !defined(HEDLEY_VERSION) || (HEDLEY_VERSION < 12)
#if defined(HEDLEY_VERSION)
#  undef HEDLEY_VERSION
#endif
#define HEDLEY_VERSION 12

#if defined(HEDLEY_STRINGIFY_EX)
#  undef HEDLEY_STRINGIFY_EX
#endif
#define HEDLEY_STRINGIFY_EX(x) #x

#if defined(HEDLEY_STRINGIFY)
#  undef HEDLEY_STRINGIFY
#endif
#define HEDLEY_STRINGIFY(x) HEDLEY_STRINGIFY_EX(x)

#if defined(HEDLEY_CONCAT_EX)
#  undef HEDLEY_CONCAT_EX
#endif
#define HEDLEY_CONCAT_EX(a,b) a##b

#if defined(HEDLEY_CONCAT)
#  undef HEDLEY_CONCAT
#endif
#define HEDLEY_CONCAT(a,b) HEDLEY_CONCAT_EX(a,b)

#if defined(HEDLEY_VERSION_ENCODE)
#  undef HEDLEY_VERSION_ENCODE
#endif
#define HEDLEY_VERSION_ENCODE(major,minor,revision) (((major) * 1000000) + ((minor) * 1000) + (revision))

#if defined(HEDLEY_VERSION_DECODE_MAJOR)
#  undef HEDLEY_VERSION_DECODE_MAJOR
#endif
#define HEDLEY_VERSION_DECODE_MAJOR(version) ((version) / 1000000)

#if defined(HEDLEY_VERSION_DECODE_MINOR)
#  undef HEDLEY_VERSION_DECODE_MINOR
#endif
#define HEDLEY_VERSION_DECODE_MINOR(version) (((version) % 1000000) / 1000)

#if defined(HEDLEY_VERSION_DECODE_REVISION)
#  undef HEDLEY_VERSION_DECODE_REVISION
#endif
#define HEDLEY_VERSION_DECODE_REVISION(version) ((version) % 1000)

#if defined(HEDLEY_GNUC_VERSION)
#  undef HEDLEY_GNUC_VERSION
#endif
#if defined(__GNUC__) && defined(__GNUC_PATCHLEVEL__)
#  define HEDLEY_GNUC_VERSION HEDLEY_VERSION_ENCODE(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#elif defined(__GNUC__)
#  define HEDLEY_GNUC_VERSION HEDLEY_VERSION_ENCODE(__GNUC__, __GNUC_MINOR__, 0)
#endif

#if defined(HEDLEY_GNUC_VERSION_CHECK)
#  undef HEDLEY_GNUC_VERSION_CHECK
#endif
#if defined(HEDLEY_GNUC_VERSION)
#  define HEDLEY_GNUC_VERSION_CHECK(major,minor,patch) (HEDLEY_GNUC_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_GNUC_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_MSVC_VERSION)
#  undef HEDLEY_MSVC_VERSION
#endif
#if defined(_MSC_FULL_VER) && (_MSC_FULL_VER >= 140000000)
#  define HEDLEY_MSVC_VERSION HEDLEY_VERSION_ENCODE(_MSC_FULL_VER / 10000000, (_MSC_FULL_VER % 10000000) / 100000, (_MSC_FULL_VER % 100000) / 100)
#elif defined(_MSC_FULL_VER)
#  define HEDLEY_MSVC_VERSION HEDLEY_VERSION_ENCODE(_MSC_FULL_VER / 1000000, (_MSC_FULL_VER % 1000000) / 10000, (_MSC_FULL_VER % 10000) / 10)
#elif defined(_MSC_VER)
#  define HEDLEY_MSVC_VERSION HEDLEY_VERSION_ENCODE(_MSC_VER / 100, _MSC_VER % 100, 0)
#endif

#if defined(HEDLEY_MSVC_VERSION_CHECK)
#  undef HEDLEY_MSVC_VERSION_CHECK
#endif
#if !defined(_MSC_VER)
#  define HEDLEY_MSVC_VERSION_CHECK(major,minor,patch) (0)
#elif defined(_MSC_VER) && (_MSC_VER >= 1400)
#  define HEDLEY_MSVC_VERSION_CHECK(major,minor,patch) (_MSC_FULL_VER >= ((major * 10000000) + (minor * 100000) + (patch)))
#elif defined(_MSC_VER) && (_MSC_VER >= 1200)
#  define HEDLEY_MSVC_VERSION_CHECK(major,minor,patch) (_MSC_FULL_VER >= ((major * 1000000) + (minor * 10000) + (patch)))
#else
#  define HEDLEY_MSVC_VERSION_CHECK(major,minor,patch) (_MSC_VER >= ((major * 100) + (minor)))
#endif

#if defined(HEDLEY_INTEL_VERSION)
#  undef HEDLEY_INTEL_VERSION
#endif
#if defined(__INTEL_COMPILER) && defined(__INTEL_COMPILER_UPDATE)
#  define HEDLEY_INTEL_VERSION HEDLEY_VERSION_ENCODE(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, __INTEL_COMPILER_UPDATE)
#elif defined(__INTEL_COMPILER)
#  define HEDLEY_INTEL_VERSION HEDLEY_VERSION_ENCODE(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, 0)
#endif

#if defined(HEDLEY_INTEL_VERSION_CHECK)
#  undef HEDLEY_INTEL_VERSION_CHECK
#endif
#if defined(HEDLEY_INTEL_VERSION)
#  define HEDLEY_INTEL_VERSION_CHECK(major,minor,patch) (HEDLEY_INTEL_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_INTEL_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_PGI_VERSION)
#  undef HEDLEY_PGI_VERSION
#endif
#if defined(__PGI) && defined(__PGIC__) && defined(__PGIC_MINOR__) && defined(__PGIC_PATCHLEVEL__)
#  define HEDLEY_PGI_VERSION HEDLEY_VERSION_ENCODE(__PGIC__, __PGIC_MINOR__, __PGIC_PATCHLEVEL__)
#endif

#if defined(HEDLEY_PGI_VERSION_CHECK)
#  undef HEDLEY_PGI_VERSION_CHECK
#endif
#if defined(HEDLEY_PGI_VERSION)
#  define HEDLEY_PGI_VERSION_CHECK(major,minor,patch) (HEDLEY_PGI_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_PGI_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_SUNPRO_VERSION)
#  undef HEDLEY_SUNPRO_VERSION
#endif
#if defined(__SUNPRO_C) && (__SUNPRO_C > 0x1000)
#  define HEDLEY_SUNPRO_VERSION HEDLEY_VERSION_ENCODE((((__SUNPRO_C >> 16) & 0xf) * 10) + ((__SUNPRO_C >> 12) & 0xf), (((__SUNPRO_C >> 8) & 0xf) * 10) + ((__SUNPRO_C >> 4) & 0xf), (__SUNPRO_C & 0xf) * 10)
#elif defined(__SUNPRO_C)
#  define HEDLEY_SUNPRO_VERSION HEDLEY_VERSION_ENCODE((__SUNPRO_C >> 8) & 0xf, (__SUNPRO_C >> 4) & 0xf, (__SUNPRO_C) & 0xf)
#elif defined(__SUNPRO_CC) && (__SUNPRO_CC > 0x1000)
#  define HEDLEY_SUNPRO_VERSION HEDLEY_VERSION_ENCODE((((__SUNPRO_CC >> 16) & 0xf) * 10) + ((__SUNPRO_CC >> 12) & 0xf), (((__SUNPRO_CC >> 8) & 0xf) * 10) + ((__SUNPRO_CC >> 4) & 0xf), (__SUNPRO_CC & 0xf) * 10)
#elif defined(__SUNPRO_CC)
#  define HEDLEY_SUNPRO_VERSION HEDLEY_VERSION_ENCODE((__SUNPRO_CC >> 8) & 0xf, (__SUNPRO_CC >> 4) & 0xf, (__SUNPRO_CC) & 0xf)
#endif

#if defined(HEDLEY_SUNPRO_VERSION_CHECK)
#  undef HEDLEY_SUNPRO_VERSION_CHECK
#endif
#if defined(HEDLEY_SUNPRO_VERSION)
#  define HEDLEY_SUNPRO_VERSION_CHECK(major,minor,patch) (HEDLEY_SUNPRO_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_SUNPRO_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_EMSCRIPTEN_VERSION)
#  undef HEDLEY_EMSCRIPTEN_VERSION
#endif
#if defined(__EMSCRIPTEN__)
#  define HEDLEY_EMSCRIPTEN_VERSION HEDLEY_VERSION_ENCODE(__EMSCRIPTEN_major__, __EMSCRIPTEN_minor__, __EMSCRIPTEN_tiny__)
#endif

#if defined(HEDLEY_EMSCRIPTEN_VERSION_CHECK)
#  undef HEDLEY_EMSCRIPTEN_VERSION_CHECK
#endif
#if defined(HEDLEY_EMSCRIPTEN_VERSION)
#  define HEDLEY_EMSCRIPTEN_VERSION_CHECK(major,minor,patch) (HEDLEY_EMSCRIPTEN_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_EMSCRIPTEN_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_ARM_VERSION)
#  undef HEDLEY_ARM_VERSION
#endif
#if defined(__CC_ARM) && defined(__ARMCOMPILER_VERSION)
#  define HEDLEY_ARM_VERSION HEDLEY_VERSION_ENCODE(__ARMCOMPILER_VERSION / 1000000, (__ARMCOMPILER_VERSION % 1000000) / 10000, (__ARMCOMPILER_VERSION % 10000) / 100)
#elif defined(__CC_ARM) && defined(__ARMCC_VERSION)
#  define HEDLEY_ARM_VERSION HEDLEY_VERSION_ENCODE(__ARMCC_VERSION / 1000000, (__ARMCC_VERSION % 1000000) / 10000, (__ARMCC_VERSION % 10000) / 100)
#endif

#if defined(HEDLEY_ARM_VERSION_CHECK)
#  undef HEDLEY_ARM_VERSION_CHECK
#endif
#if defined(HEDLEY_ARM_VERSION)
#  define HEDLEY_ARM_VERSION_CHECK(major,minor,patch) (HEDLEY_ARM_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_ARM_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_IBM_VERSION)
#  undef HEDLEY_IBM_VERSION
#endif
#if defined(__ibmxl__)
#  define HEDLEY_IBM_VERSION HEDLEY_VERSION_ENCODE(__ibmxl_version__, __ibmxl_release__, __ibmxl_modification__)
#elif defined(__xlC__) && defined(__xlC_ver__)
#  define HEDLEY_IBM_VERSION HEDLEY_VERSION_ENCODE(__xlC__ >> 8, __xlC__ & 0xff, (__xlC_ver__ >> 8) & 0xff)
#elif defined(__xlC__)
#  define HEDLEY_IBM_VERSION HEDLEY_VERSION_ENCODE(__xlC__ >> 8, __xlC__ & 0xff, 0)
#endif

#if defined(HEDLEY_IBM_VERSION_CHECK)
#  undef HEDLEY_IBM_VERSION_CHECK
#endif
#if defined(HEDLEY_IBM_VERSION)
#  define HEDLEY_IBM_VERSION_CHECK(major,minor,patch) (HEDLEY_IBM_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_IBM_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_VERSION)
#  undef HEDLEY_TI_VERSION
#endif
#if \
    defined(__TI_COMPILER_VERSION__) && \
    ( \
      defined(__TMS470__) || defined(__TI_ARM__) || \
      defined(__MSP430__) || \
      defined(__TMS320C2000__) \
    )
#  if (__TI_COMPILER_VERSION__ >= 16000000)
#    define HEDLEY_TI_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#  endif
#endif

#if defined(HEDLEY_TI_VERSION_CHECK)
#  undef HEDLEY_TI_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_VERSION)
#  define HEDLEY_TI_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_CL2000_VERSION)
#  undef HEDLEY_TI_CL2000_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && defined(__TMS320C2000__)
#  define HEDLEY_TI_CL2000_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_CL2000_VERSION_CHECK)
#  undef HEDLEY_TI_CL2000_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_CL2000_VERSION)
#  define HEDLEY_TI_CL2000_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_CL2000_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_CL2000_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_CL430_VERSION)
#  undef HEDLEY_TI_CL430_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && defined(__MSP430__)
#  define HEDLEY_TI_CL430_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_CL430_VERSION_CHECK)
#  undef HEDLEY_TI_CL430_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_CL430_VERSION)
#  define HEDLEY_TI_CL430_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_CL430_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_CL430_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_ARMCL_VERSION)
#  undef HEDLEY_TI_ARMCL_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && (defined(__TMS470__) || defined(__TI_ARM__))
#  define HEDLEY_TI_ARMCL_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_ARMCL_VERSION_CHECK)
#  undef HEDLEY_TI_ARMCL_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_ARMCL_VERSION)
#  define HEDLEY_TI_ARMCL_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_ARMCL_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_ARMCL_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_CL6X_VERSION)
#  undef HEDLEY_TI_CL6X_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && defined(__TMS320C6X__)
#  define HEDLEY_TI_CL6X_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_CL6X_VERSION_CHECK)
#  undef HEDLEY_TI_CL6X_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_CL6X_VERSION)
#  define HEDLEY_TI_CL6X_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_CL6X_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_CL6X_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_CL7X_VERSION)
#  undef HEDLEY_TI_CL7X_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && defined(__C7000__)
#  define HEDLEY_TI_CL7X_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_CL7X_VERSION_CHECK)
#  undef HEDLEY_TI_CL7X_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_CL7X_VERSION)
#  define HEDLEY_TI_CL7X_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_CL7X_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_CL7X_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TI_CLPRU_VERSION)
#  undef HEDLEY_TI_CLPRU_VERSION
#endif
#if defined(__TI_COMPILER_VERSION__) && defined(__PRU__)
#  define HEDLEY_TI_CLPRU_VERSION HEDLEY_VERSION_ENCODE(__TI_COMPILER_VERSION__ / 1000000, (__TI_COMPILER_VERSION__ % 1000000) / 1000, (__TI_COMPILER_VERSION__ % 1000))
#endif

#if defined(HEDLEY_TI_CLPRU_VERSION_CHECK)
#  undef HEDLEY_TI_CLPRU_VERSION_CHECK
#endif
#if defined(HEDLEY_TI_CLPRU_VERSION)
#  define HEDLEY_TI_CLPRU_VERSION_CHECK(major,minor,patch) (HEDLEY_TI_CLPRU_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TI_CLPRU_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_CRAY_VERSION)
#  undef HEDLEY_CRAY_VERSION
#endif
#if defined(_CRAYC)
#  if defined(_RELEASE_PATCHLEVEL)
#    define HEDLEY_CRAY_VERSION HEDLEY_VERSION_ENCODE(_RELEASE_MAJOR, _RELEASE_MINOR, _RELEASE_PATCHLEVEL)
#  else
#    define HEDLEY_CRAY_VERSION HEDLEY_VERSION_ENCODE(_RELEASE_MAJOR, _RELEASE_MINOR, 0)
#  endif
#endif

#if defined(HEDLEY_CRAY_VERSION_CHECK)
#  undef HEDLEY_CRAY_VERSION_CHECK
#endif
#if defined(HEDLEY_CRAY_VERSION)
#  define HEDLEY_CRAY_VERSION_CHECK(major,minor,patch) (HEDLEY_CRAY_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_CRAY_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_IAR_VERSION)
#  undef HEDLEY_IAR_VERSION
#endif
#if defined(__IAR_SYSTEMS_ICC__)
#  if __VER__ > 1000
#    define HEDLEY_IAR_VERSION HEDLEY_VERSION_ENCODE((__VER__ / 1000000), ((__VER__ / 1000) % 1000), (__VER__ % 1000))
#  else
#    define HEDLEY_IAR_VERSION HEDLEY_VERSION_ENCODE(VER / 100, __VER__ % 100, 0)
#  endif
#endif

#if defined(HEDLEY_IAR_VERSION_CHECK)
#  undef HEDLEY_IAR_VERSION_CHECK
#endif
#if defined(HEDLEY_IAR_VERSION)
#  define HEDLEY_IAR_VERSION_CHECK(major,minor,patch) (HEDLEY_IAR_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_IAR_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_TINYC_VERSION)
#  undef HEDLEY_TINYC_VERSION
#endif
#if defined(__TINYC__)
#  define HEDLEY_TINYC_VERSION HEDLEY_VERSION_ENCODE(__TINYC__ / 1000, (__TINYC__ / 100) % 10, __TINYC__ % 100)
#endif

#if defined(HEDLEY_TINYC_VERSION_CHECK)
#  undef HEDLEY_TINYC_VERSION_CHECK
#endif
#if defined(HEDLEY_TINYC_VERSION)
#  define HEDLEY_TINYC_VERSION_CHECK(major,minor,patch) (HEDLEY_TINYC_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_TINYC_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_DMC_VERSION)
#  undef HEDLEY_DMC_VERSION
#endif
#if defined(__DMC__)
#  define HEDLEY_DMC_VERSION HEDLEY_VERSION_ENCODE(__DMC__ >> 8, (__DMC__ >> 4) & 0xf, __DMC__ & 0xf)
#endif

#if defined(HEDLEY_DMC_VERSION_CHECK)
#  undef HEDLEY_DMC_VERSION_CHECK
#endif
#if defined(HEDLEY_DMC_VERSION)
#  define HEDLEY_DMC_VERSION_CHECK(major,minor,patch) (HEDLEY_DMC_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_DMC_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_COMPCERT_VERSION)
#  undef HEDLEY_COMPCERT_VERSION
#endif
#if defined(__COMPCERT_VERSION__)
#  define HEDLEY_COMPCERT_VERSION HEDLEY_VERSION_ENCODE(__COMPCERT_VERSION__ / 10000, (__COMPCERT_VERSION__ / 100) % 100, __COMPCERT_VERSION__ % 100)
#endif

#if defined(HEDLEY_COMPCERT_VERSION_CHECK)
#  undef HEDLEY_COMPCERT_VERSION_CHECK
#endif
#if defined(HEDLEY_COMPCERT_VERSION)
#  define HEDLEY_COMPCERT_VERSION_CHECK(major,minor,patch) (HEDLEY_COMPCERT_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_COMPCERT_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_PELLES_VERSION)
#  undef HEDLEY_PELLES_VERSION
#endif
#if defined(__POCC__)
#  define HEDLEY_PELLES_VERSION HEDLEY_VERSION_ENCODE(__POCC__ / 100, __POCC__ % 100, 0)
#endif

#if defined(HEDLEY_PELLES_VERSION_CHECK)
#  undef HEDLEY_PELLES_VERSION_CHECK
#endif
#if defined(HEDLEY_PELLES_VERSION)
#  define HEDLEY_PELLES_VERSION_CHECK(major,minor,patch) (HEDLEY_PELLES_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_PELLES_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_GCC_VERSION)
#  undef HEDLEY_GCC_VERSION
#endif
#if \
  defined(HEDLEY_GNUC_VERSION) && \
  !defined(__clang__) && \
  !defined(HEDLEY_INTEL_VERSION) && \
  !defined(HEDLEY_PGI_VERSION) && \
  !defined(HEDLEY_ARM_VERSION) && \
  !defined(HEDLEY_TI_VERSION) && \
  !defined(HEDLEY_TI_ARMCL_VERSION) && \
  !defined(HEDLEY_TI_CL430_VERSION) && \
  !defined(HEDLEY_TI_CL2000_VERSION) && \
  !defined(HEDLEY_TI_CL6X_VERSION) && \
  !defined(HEDLEY_TI_CL7X_VERSION) && \
  !defined(HEDLEY_TI_CLPRU_VERSION) && \
  !defined(__COMPCERT__)
#  define HEDLEY_GCC_VERSION HEDLEY_GNUC_VERSION
#endif

#if defined(HEDLEY_GCC_VERSION_CHECK)
#  undef HEDLEY_GCC_VERSION_CHECK
#endif
#if defined(HEDLEY_GCC_VERSION)
#  define HEDLEY_GCC_VERSION_CHECK(major,minor,patch) (HEDLEY_GCC_VERSION >= HEDLEY_VERSION_ENCODE(major, minor, patch))
#else
#  define HEDLEY_GCC_VERSION_CHECK(major,minor,patch) (0)
#endif

#if defined(HEDLEY_HAS_ATTRIBUTE)
#  undef HEDLEY_HAS_ATTRIBUTE
#endif
#if defined(__has_attribute)
#  define HEDLEY_HAS_ATTRIBUTE(attribute) __has_attribute(attribute)
#else
#  define HEDLEY_HAS_ATTRIBUTE(attribute) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_ATTRIBUTE)
#  undef HEDLEY_GNUC_HAS_ATTRIBUTE
#endif
#if defined(__has_attribute)
#  define HEDLEY_GNUC_HAS_ATTRIBUTE(attribute,major,minor,patch) __has_attribute(attribute)
#else
#  define HEDLEY_GNUC_HAS_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_ATTRIBUTE)
#  undef HEDLEY_GCC_HAS_ATTRIBUTE
#endif
#if defined(__has_attribute)
#  define HEDLEY_GCC_HAS_ATTRIBUTE(attribute,major,minor,patch) __has_attribute(attribute)
#else
#  define HEDLEY_GCC_HAS_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_CPP_ATTRIBUTE)
#  undef HEDLEY_HAS_CPP_ATTRIBUTE
#endif
#if \
  defined(__has_cpp_attribute) && \
  defined(__cplusplus) && \
  (!defined(HEDLEY_SUNPRO_VERSION) || HEDLEY_SUNPRO_VERSION_CHECK(5,15,0))
#  define HEDLEY_HAS_CPP_ATTRIBUTE(attribute) __has_cpp_attribute(attribute)
#else
#  define HEDLEY_HAS_CPP_ATTRIBUTE(attribute) (0)
#endif

#if defined(HEDLEY_HAS_CPP_ATTRIBUTE_NS)
#  undef HEDLEY_HAS_CPP_ATTRIBUTE_NS
#endif
#if !defined(__cplusplus) || !defined(__has_cpp_attribute)
#  define HEDLEY_HAS_CPP_ATTRIBUTE_NS(ns,attribute) (0)
#elif \
  !defined(HEDLEY_PGI_VERSION) && \
  !defined(HEDLEY_IAR_VERSION) && \
  (!defined(HEDLEY_SUNPRO_VERSION) || HEDLEY_SUNPRO_VERSION_CHECK(5,15,0)) && \
  (!defined(HEDLEY_MSVC_VERSION) || HEDLEY_MSVC_VERSION_CHECK(19,20,0))
#  define HEDLEY_HAS_CPP_ATTRIBUTE_NS(ns,attribute) HEDLEY_HAS_CPP_ATTRIBUTE(ns::attribute)
#else
#  define HEDLEY_HAS_CPP_ATTRIBUTE_NS(ns,attribute) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_CPP_ATTRIBUTE)
#  undef HEDLEY_GNUC_HAS_CPP_ATTRIBUTE
#endif
#if defined(__has_cpp_attribute) && defined(__cplusplus)
#  define HEDLEY_GNUC_HAS_CPP_ATTRIBUTE(attribute,major,minor,patch) __has_cpp_attribute(attribute)
#else
#  define HEDLEY_GNUC_HAS_CPP_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_CPP_ATTRIBUTE)
#  undef HEDLEY_GCC_HAS_CPP_ATTRIBUTE
#endif
#if defined(__has_cpp_attribute) && defined(__cplusplus)
#  define HEDLEY_GCC_HAS_CPP_ATTRIBUTE(attribute,major,minor,patch) __has_cpp_attribute(attribute)
#else
#  define HEDLEY_GCC_HAS_CPP_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_BUILTIN)
#  undef HEDLEY_HAS_BUILTIN
#endif
#if defined(__has_builtin)
#  define HEDLEY_HAS_BUILTIN(builtin) __has_builtin(builtin)
#else
#  define HEDLEY_HAS_BUILTIN(builtin) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_BUILTIN)
#  undef HEDLEY_GNUC_HAS_BUILTIN
#endif
#if defined(__has_builtin)
#  define HEDLEY_GNUC_HAS_BUILTIN(builtin,major,minor,patch) __has_builtin(builtin)
#else
#  define HEDLEY_GNUC_HAS_BUILTIN(builtin,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_BUILTIN)
#  undef HEDLEY_GCC_HAS_BUILTIN
#endif
#if defined(__has_builtin)
#  define HEDLEY_GCC_HAS_BUILTIN(builtin,major,minor,patch) __has_builtin(builtin)
#else
#  define HEDLEY_GCC_HAS_BUILTIN(builtin,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_FEATURE)
#  undef HEDLEY_HAS_FEATURE
#endif
#if defined(__has_feature)
#  define HEDLEY_HAS_FEATURE(feature) __has_feature(feature)
#else
#  define HEDLEY_HAS_FEATURE(feature) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_FEATURE)
#  undef HEDLEY_GNUC_HAS_FEATURE
#endif
#if defined(__has_feature)
#  define HEDLEY_GNUC_HAS_FEATURE(feature,major,minor,patch) __has_feature(feature)
#else
#  define HEDLEY_GNUC_HAS_FEATURE(feature,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_FEATURE)
#  undef HEDLEY_GCC_HAS_FEATURE
#endif
#if defined(__has_feature)
#  define HEDLEY_GCC_HAS_FEATURE(feature,major,minor,patch) __has_feature(feature)
#else
#  define HEDLEY_GCC_HAS_FEATURE(feature,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_EXTENSION)
#  undef HEDLEY_HAS_EXTENSION
#endif
#if defined(__has_extension)
#  define HEDLEY_HAS_EXTENSION(extension) __has_extension(extension)
#else
#  define HEDLEY_HAS_EXTENSION(extension) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_EXTENSION)
#  undef HEDLEY_GNUC_HAS_EXTENSION
#endif
#if defined(__has_extension)
#  define HEDLEY_GNUC_HAS_EXTENSION(extension,major,minor,patch) __has_extension(extension)
#else
#  define HEDLEY_GNUC_HAS_EXTENSION(extension,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_EXTENSION)
#  undef HEDLEY_GCC_HAS_EXTENSION
#endif
#if defined(__has_extension)
#  define HEDLEY_GCC_HAS_EXTENSION(extension,major,minor,patch) __has_extension(extension)
#else
#  define HEDLEY_GCC_HAS_EXTENSION(extension,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_DECLSPEC_ATTRIBUTE)
#  undef HEDLEY_HAS_DECLSPEC_ATTRIBUTE
#endif
#if defined(__has_declspec_attribute)
#  define HEDLEY_HAS_DECLSPEC_ATTRIBUTE(attribute) __has_declspec_attribute(attribute)
#else
#  define HEDLEY_HAS_DECLSPEC_ATTRIBUTE(attribute) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_DECLSPEC_ATTRIBUTE)
#  undef HEDLEY_GNUC_HAS_DECLSPEC_ATTRIBUTE
#endif
#if defined(__has_declspec_attribute)
#  define HEDLEY_GNUC_HAS_DECLSPEC_ATTRIBUTE(attribute,major,minor,patch) __has_declspec_attribute(attribute)
#else
#  define HEDLEY_GNUC_HAS_DECLSPEC_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_DECLSPEC_ATTRIBUTE)
#  undef HEDLEY_GCC_HAS_DECLSPEC_ATTRIBUTE
#endif
#if defined(__has_declspec_attribute)
#  define HEDLEY_GCC_HAS_DECLSPEC_ATTRIBUTE(attribute,major,minor,patch) __has_declspec_attribute(attribute)
#else
#  define HEDLEY_GCC_HAS_DECLSPEC_ATTRIBUTE(attribute,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_HAS_WARNING)
#  undef HEDLEY_HAS_WARNING
#endif
#if defined(__has_warning)
#  define HEDLEY_HAS_WARNING(warning) __has_warning(warning)
#else
#  define HEDLEY_HAS_WARNING(warning) (0)
#endif

#if defined(HEDLEY_GNUC_HAS_WARNING)
#  undef HEDLEY_GNUC_HAS_WARNING
#endif
#if defined(__has_warning)
#  define HEDLEY_GNUC_HAS_WARNING(warning,major,minor,patch) __has_warning(warning)
#else
#  define HEDLEY_GNUC_HAS_WARNING(warning,major,minor,patch) HEDLEY_GNUC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_GCC_HAS_WARNING)
#  undef HEDLEY_GCC_HAS_WARNING
#endif
#if defined(__has_warning)
#  define HEDLEY_GCC_HAS_WARNING(warning,major,minor,patch) __has_warning(warning)
#else
#  define HEDLEY_GCC_HAS_WARNING(warning,major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

/* HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_ is for
   HEDLEY INTERNAL USE ONLY.  API subject to change without notice. */
#if defined(HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_)
#  undef HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_
#endif
#if defined(__cplusplus)
#  if HEDLEY_HAS_WARNING("-Wc++98-compat")
#    if HEDLEY_HAS_WARNING("-Wc++17-extensions")
#      define HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(xpr) \
         HEDLEY_DIAGNOSTIC_PUSH \
         _Pragma("clang diagnostic ignored \"-Wc++98-compat\"") \
         _Pragma("clang diagnostic ignored \"-Wc++17-extensions\"") \
         xpr \
         HEDLEY_DIAGNOSTIC_POP
#    else
#      define HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(xpr) \
         HEDLEY_DIAGNOSTIC_PUSH \
         _Pragma("clang diagnostic ignored \"-Wc++98-compat\"") \
         xpr \
         HEDLEY_DIAGNOSTIC_POP
#    endif
#  endif
#endif
#if !defined(HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_)
#  define HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(x) x
#endif

#if defined(HEDLEY_CONST_CAST)
#  undef HEDLEY_CONST_CAST
#endif
#if defined(__cplusplus)
#  define HEDLEY_CONST_CAST(T, expr) (const_cast<T>(expr))
#elif \
  HEDLEY_HAS_WARNING("-Wcast-qual") || \
  HEDLEY_GCC_VERSION_CHECK(4,6,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_CONST_CAST(T, expr) (__extension__ ({ \
      HEDLEY_DIAGNOSTIC_PUSH \
      HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL \
      ((T) (expr)); \
      HEDLEY_DIAGNOSTIC_POP \
    }))
#else
#  define HEDLEY_CONST_CAST(T, expr) ((T) (expr))
#endif

#if defined(HEDLEY_REINTERPRET_CAST)
#  undef HEDLEY_REINTERPRET_CAST
#endif
#if defined(__cplusplus)
#  define HEDLEY_REINTERPRET_CAST(T, expr) (reinterpret_cast<T>(expr))
#else
#  define HEDLEY_REINTERPRET_CAST(T, expr) ((T) (expr))
#endif

#if defined(HEDLEY_STATIC_CAST)
#  undef HEDLEY_STATIC_CAST
#endif
#if defined(__cplusplus)
#  define HEDLEY_STATIC_CAST(T, expr) (static_cast<T>(expr))
#else
#  define HEDLEY_STATIC_CAST(T, expr) ((T) (expr))
#endif

#if defined(HEDLEY_CPP_CAST)
#  undef HEDLEY_CPP_CAST
#endif
#if defined(__cplusplus)
#  if HEDLEY_HAS_WARNING("-Wold-style-cast")
#    define HEDLEY_CPP_CAST(T, expr) \
       HEDLEY_DIAGNOSTIC_PUSH \
       _Pragma("clang diagnostic ignored \"-Wold-style-cast\"") \
       ((T) (expr)) \
       HEDLEY_DIAGNOSTIC_POP
#  elif HEDLEY_IAR_VERSION_CHECK(8,3,0)
#    define HEDLEY_CPP_CAST(T, expr) \
       HEDLEY_DIAGNOSTIC_PUSH \
       _Pragma("diag_suppress=Pe137") \
       HEDLEY_DIAGNOSTIC_POP \
#  else
#    define HEDLEY_CPP_CAST(T, expr) ((T) (expr))
#  endif
#else
#  define HEDLEY_CPP_CAST(T, expr) (expr)
#endif

#if \
  (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)) || \
  defined(__clang__) || \
  HEDLEY_GCC_VERSION_CHECK(3,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_IAR_VERSION_CHECK(8,0,0) || \
  HEDLEY_PGI_VERSION_CHECK(18,4,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(4,7,0) || \
  HEDLEY_TI_CL430_VERSION_CHECK(2,0,1) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,1,0) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,0,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
  HEDLEY_CRAY_VERSION_CHECK(5,0,0) || \
  HEDLEY_TINYC_VERSION_CHECK(0,9,17) || \
  HEDLEY_SUNPRO_VERSION_CHECK(8,0,0) || \
  (HEDLEY_IBM_VERSION_CHECK(10,1,0) && defined(__C99_PRAGMA_OPERATOR))
#  define HEDLEY_PRAGMA(value) _Pragma(#value)
#elif HEDLEY_MSVC_VERSION_CHECK(15,0,0)
#  define HEDLEY_PRAGMA(value) __pragma(value)
#else
#  define HEDLEY_PRAGMA(value)
#endif

#if defined(HEDLEY_DIAGNOSTIC_PUSH)
#  undef HEDLEY_DIAGNOSTIC_PUSH
#endif
#if defined(HEDLEY_DIAGNOSTIC_POP)
#  undef HEDLEY_DIAGNOSTIC_POP
#endif
#if defined(__clang__)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("clang diagnostic push")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("clang diagnostic pop")
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("warning(push)")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("warning(pop)")
#elif HEDLEY_GCC_VERSION_CHECK(4,6,0)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("GCC diagnostic push")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("GCC diagnostic pop")
#elif HEDLEY_MSVC_VERSION_CHECK(15,0,0)
#  define HEDLEY_DIAGNOSTIC_PUSH __pragma(warning(push))
#  define HEDLEY_DIAGNOSTIC_POP __pragma(warning(pop))
#elif HEDLEY_ARM_VERSION_CHECK(5,6,0)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("push")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("pop")
#elif \
    HEDLEY_TI_VERSION_CHECK(15,12,0) || \
    HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
    HEDLEY_TI_CL430_VERSION_CHECK(4,4,0) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(8,1,0) || \
    HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
    HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("diag_push")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("diag_pop")
#elif HEDLEY_PELLES_VERSION_CHECK(2,90,0)
#  define HEDLEY_DIAGNOSTIC_PUSH _Pragma("warning(push)")
#  define HEDLEY_DIAGNOSTIC_POP _Pragma("warning(pop)")
#else
#  define HEDLEY_DIAGNOSTIC_PUSH
#  define HEDLEY_DIAGNOSTIC_POP
#endif

#if defined(HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED)
#  undef HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED
#endif
#if HEDLEY_HAS_WARNING("-Wdeprecated-declarations")
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"")
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("warning(disable:1478 1786)")
#elif HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("diag_suppress 1215,1444")
#elif HEDLEY_GCC_VERSION_CHECK(4,3,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#elif HEDLEY_MSVC_VERSION_CHECK(15,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED __pragma(warning(disable:4996))
#elif \
    HEDLEY_TI_VERSION_CHECK(15,12,0) || \
    (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
    HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
    (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
    HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
    (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
    HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
    (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
    HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
    HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("diag_suppress 1291,1718")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,13,0) && !defined(__cplusplus)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("error_messages(off,E_DEPRECATED_ATT,E_DEPRECATED_ATT_MESS)")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,13,0) && defined(__cplusplus)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("error_messages(off,symdeprecated,symdeprecated2)")
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("diag_suppress=Pe1444,Pe1215")
#elif HEDLEY_PELLES_VERSION_CHECK(2,90,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED _Pragma("warn(disable:2241)")
#else
#  define HEDLEY_DIAGNOSTIC_DISABLE_DEPRECATED
#endif

#if defined(HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS)
#  undef HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS
#endif
#if HEDLEY_HAS_WARNING("-Wunknown-pragmas")
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("clang diagnostic ignored \"-Wunknown-pragmas\"")
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("warning(disable:161)")
#elif HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("diag_suppress 1675")
#elif HEDLEY_GCC_VERSION_CHECK(4,3,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("GCC diagnostic ignored \"-Wunknown-pragmas\"")
#elif HEDLEY_MSVC_VERSION_CHECK(15,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS __pragma(warning(disable:4068))
#elif \
    HEDLEY_TI_VERSION_CHECK(16,9,0) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(8,0,0) || \
    HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
    HEDLEY_TI_CLPRU_VERSION_CHECK(2,3,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("diag_suppress 163")
#elif HEDLEY_TI_CL6X_VERSION_CHECK(8,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("diag_suppress 163")
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS _Pragma("diag_suppress=Pe161")
#else
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS
#endif

#if defined(HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES)
#  undef HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES
#endif
#if HEDLEY_HAS_WARNING("-Wunknown-attributes")
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("clang diagnostic ignored \"-Wunknown-attributes\"")
#elif HEDLEY_GCC_VERSION_CHECK(4,6,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#elif HEDLEY_INTEL_VERSION_CHECK(17,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("warning(disable:1292)")
#elif HEDLEY_MSVC_VERSION_CHECK(19,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES __pragma(warning(disable:5030))
#elif HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("diag_suppress 1097")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,14,0) && defined(__cplusplus)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("error_messages(off,attrskipunsup)")
#elif \
    HEDLEY_TI_VERSION_CHECK(18,1,0) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(8,3,0) || \
    HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("diag_suppress 1173")
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES _Pragma("diag_suppress=Pe1097")
#else
#  define HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_CPP_ATTRIBUTES
#endif

#if defined(HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL)
#  undef HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL
#endif
#if HEDLEY_HAS_WARNING("-Wcast-qual")
#  define HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL _Pragma("clang diagnostic ignored \"-Wcast-qual\"")
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL _Pragma("warning(disable:2203 2331)")
#elif HEDLEY_GCC_VERSION_CHECK(3,0,0)
#  define HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL _Pragma("GCC diagnostic ignored \"-Wcast-qual\"")
#else
#  define HEDLEY_DIAGNOSTIC_DISABLE_CAST_QUAL
#endif

#if defined(HEDLEY_DEPRECATED)
#  undef HEDLEY_DEPRECATED
#endif
#if defined(HEDLEY_DEPRECATED_FOR)
#  undef HEDLEY_DEPRECATED_FOR
#endif
#if defined(__cplusplus) && (__cplusplus >= 201402L)
#  define HEDLEY_DEPRECATED(since) HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[deprecated("Since " #since)]])
#  define HEDLEY_DEPRECATED_FOR(since, replacement) HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[deprecated("Since " #since "; use " #replacement)]])
#elif \
  HEDLEY_HAS_EXTENSION(attribute_deprecated_with_message) || \
  HEDLEY_GCC_VERSION_CHECK(4,5,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(5,6,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,13,0) || \
  HEDLEY_PGI_VERSION_CHECK(17,10,0) || \
  HEDLEY_TI_VERSION_CHECK(18,1,0) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(18,1,0) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(8,3,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,3,0)
#  define HEDLEY_DEPRECATED(since) __attribute__((__deprecated__("Since " #since)))
#  define HEDLEY_DEPRECATED_FOR(since, replacement) __attribute__((__deprecated__("Since " #since "; use " #replacement)))
#elif \
  HEDLEY_HAS_ATTRIBUTE(deprecated) || \
  HEDLEY_GCC_VERSION_CHECK(3,1,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_DEPRECATED(since) __attribute__((__deprecated__))
#  define HEDLEY_DEPRECATED_FOR(since, replacement) __attribute__((__deprecated__))
#elif HEDLEY_MSVC_VERSION_CHECK(14,0,0)
#  define HEDLEY_DEPRECATED(since) __declspec(deprecated("Since " # since))
#  define HEDLEY_DEPRECATED_FOR(since, replacement) __declspec(deprecated("Since " #since "; use " #replacement))
#elif \
  HEDLEY_MSVC_VERSION_CHECK(13,10,0) || \
  HEDLEY_PELLES_VERSION_CHECK(6,50,0)
#  define HEDLEY_DEPRECATED(since) __declspec(deprecated)
#  define HEDLEY_DEPRECATED_FOR(since, replacement) __declspec(deprecated)
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_DEPRECATED(since) _Pragma("deprecated")
#  define HEDLEY_DEPRECATED_FOR(since, replacement) _Pragma("deprecated")
#else
#  define HEDLEY_DEPRECATED(since)
#  define HEDLEY_DEPRECATED_FOR(since, replacement)
#endif

#if defined(HEDLEY_UNAVAILABLE)
#  undef HEDLEY_UNAVAILABLE
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(warning) || \
  HEDLEY_GCC_VERSION_CHECK(4,3,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_UNAVAILABLE(available_since) __attribute__((__warning__("Not available until " #available_since)))
#else
#  define HEDLEY_UNAVAILABLE(available_since)
#endif

#if defined(HEDLEY_WARN_UNUSED_RESULT)
#  undef HEDLEY_WARN_UNUSED_RESULT
#endif
#if defined(HEDLEY_WARN_UNUSED_RESULT_MSG)
#  undef HEDLEY_WARN_UNUSED_RESULT_MSG
#endif
#if (HEDLEY_HAS_CPP_ATTRIBUTE(nodiscard) >= 201907L)
#  define HEDLEY_WARN_UNUSED_RESULT HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[nodiscard]])
#  define HEDLEY_WARN_UNUSED_RESULT_MSG(msg) HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[nodiscard(msg)]])
#elif HEDLEY_HAS_CPP_ATTRIBUTE(nodiscard)
#  define HEDLEY_WARN_UNUSED_RESULT HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[nodiscard]])
#  define HEDLEY_WARN_UNUSED_RESULT_MSG(msg) HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[nodiscard]])
#elif \
  HEDLEY_HAS_ATTRIBUTE(warn_unused_result) || \
  HEDLEY_GCC_VERSION_CHECK(3,4,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
  (HEDLEY_SUNPRO_VERSION_CHECK(5,15,0) && defined(__cplusplus)) || \
  HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_WARN_UNUSED_RESULT __attribute__((__warn_unused_result__))
#  define HEDLEY_WARN_UNUSED_RESULT_MSG(msg) __attribute__((__warn_unused_result__))
#elif defined(_Check_return_) /* SAL */
#  define HEDLEY_WARN_UNUSED_RESULT _Check_return_
#  define HEDLEY_WARN_UNUSED_RESULT_MSG(msg) _Check_return_
#else
#  define HEDLEY_WARN_UNUSED_RESULT
#  define HEDLEY_WARN_UNUSED_RESULT_MSG(msg)
#endif

#if defined(HEDLEY_SENTINEL)
#  undef HEDLEY_SENTINEL
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(sentinel) || \
  HEDLEY_GCC_VERSION_CHECK(4,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(5,4,0)
#  define HEDLEY_SENTINEL(position) __attribute__((__sentinel__(position)))
#else
#  define HEDLEY_SENTINEL(position)
#endif

#if defined(HEDLEY_NO_RETURN)
#  undef HEDLEY_NO_RETURN
#endif
#if HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_NO_RETURN __noreturn
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_NO_RETURN __attribute__((__noreturn__))
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#  define HEDLEY_NO_RETURN _Noreturn
#elif defined(__cplusplus) && (__cplusplus >= 201103L)
#  define HEDLEY_NO_RETURN HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[noreturn]])
#elif \
  HEDLEY_HAS_ATTRIBUTE(noreturn) || \
  HEDLEY_GCC_VERSION_CHECK(3,2,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_NO_RETURN __attribute__((__noreturn__))
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,10,0)
#  define HEDLEY_NO_RETURN _Pragma("does_not_return")
#elif HEDLEY_MSVC_VERSION_CHECK(13,10,0)
#  define HEDLEY_NO_RETURN __declspec(noreturn)
#elif HEDLEY_TI_CL6X_VERSION_CHECK(6,0,0) && defined(__cplusplus)
#  define HEDLEY_NO_RETURN _Pragma("FUNC_NEVER_RETURNS;")
#elif HEDLEY_COMPCERT_VERSION_CHECK(3,2,0)
#  define HEDLEY_NO_RETURN __attribute((noreturn))
#elif HEDLEY_PELLES_VERSION_CHECK(9,0,0)
#  define HEDLEY_NO_RETURN __declspec(noreturn)
#else
#  define HEDLEY_NO_RETURN
#endif

#if defined(HEDLEY_NO_ESCAPE)
#  undef HEDLEY_NO_ESCAPE
#endif
#if HEDLEY_HAS_ATTRIBUTE(noescape)
#  define HEDLEY_NO_ESCAPE __attribute__((__noescape__))
#else
#  define HEDLEY_NO_ESCAPE
#endif

#if defined(HEDLEY_UNREACHABLE)
#  undef HEDLEY_UNREACHABLE
#endif
#if defined(HEDLEY_UNREACHABLE_RETURN)
#  undef HEDLEY_UNREACHABLE_RETURN
#endif
#if defined(HEDLEY_ASSUME)
#  undef HEDLEY_ASSUME
#endif
#if \
  HEDLEY_MSVC_VERSION_CHECK(13,10,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_ASSUME(expr) __assume(expr)
#elif HEDLEY_HAS_BUILTIN(__builtin_assume)
#  define HEDLEY_ASSUME(expr) __builtin_assume(expr)
#elif \
    HEDLEY_TI_CL2000_VERSION_CHECK(6,2,0) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(4,0,0)
#  if defined(__cplusplus)
#    define HEDLEY_ASSUME(expr) std::_nassert(expr)
#  else
#    define HEDLEY_ASSUME(expr) _nassert(expr)
#  endif
#endif
#if \
  (HEDLEY_HAS_BUILTIN(__builtin_unreachable) && (!defined(HEDLEY_ARM_VERSION))) || \
  HEDLEY_GCC_VERSION_CHECK(4,5,0) || \
  HEDLEY_PGI_VERSION_CHECK(18,10,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_IBM_VERSION_CHECK(13,1,5)
#  define HEDLEY_UNREACHABLE() __builtin_unreachable()
#elif defined(HEDLEY_ASSUME)
#  define HEDLEY_UNREACHABLE() HEDLEY_ASSUME(0)
#endif
#if !defined(HEDLEY_ASSUME)
#  if defined(HEDLEY_UNREACHABLE)
#    define HEDLEY_ASSUME(expr) HEDLEY_STATIC_CAST(void, ((expr) ? 1 : (HEDLEY_UNREACHABLE(), 1)))
#  else
#    define HEDLEY_ASSUME(expr) HEDLEY_STATIC_CAST(void, expr)
#  endif
#endif
#if defined(HEDLEY_UNREACHABLE)
#  if  \
      HEDLEY_TI_CL2000_VERSION_CHECK(6,2,0) || \
      HEDLEY_TI_CL6X_VERSION_CHECK(4,0,0)
#    define HEDLEY_UNREACHABLE_RETURN(value) return (HEDLEY_STATIC_CAST(void, HEDLEY_ASSUME(0)), (value))
#  else
#    define HEDLEY_UNREACHABLE_RETURN(value) HEDLEY_UNREACHABLE()
#  endif
#else
#  define HEDLEY_UNREACHABLE_RETURN(value) return (value)
#endif
#if !defined(HEDLEY_UNREACHABLE)
#  define HEDLEY_UNREACHABLE() HEDLEY_ASSUME(0)
#endif

HEDLEY_DIAGNOSTIC_PUSH
#if HEDLEY_HAS_WARNING("-Wpedantic")
#  pragma clang diagnostic ignored "-Wpedantic"
#endif
#if HEDLEY_HAS_WARNING("-Wc++98-compat-pedantic") && defined(__cplusplus)
#  pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#endif
#if HEDLEY_GCC_HAS_WARNING("-Wvariadic-macros",4,0,0)
#  if defined(__clang__)
#    pragma clang diagnostic ignored "-Wvariadic-macros"
#  elif defined(HEDLEY_GCC_VERSION)
#    pragma GCC diagnostic ignored "-Wvariadic-macros"
#  endif
#endif
#if defined(HEDLEY_NON_NULL)
#  undef HEDLEY_NON_NULL
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(nonnull) || \
  HEDLEY_GCC_VERSION_CHECK(3,3,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0)
#  define HEDLEY_NON_NULL(...) __attribute__((__nonnull__(__VA_ARGS__)))
#else
#  define HEDLEY_NON_NULL(...)
#endif
HEDLEY_DIAGNOSTIC_POP

#if defined(HEDLEY_PRINTF_FORMAT)
#  undef HEDLEY_PRINTF_FORMAT
#endif
#if defined(__MINGW32__) && HEDLEY_GCC_HAS_ATTRIBUTE(format,4,4,0) && !defined(__USE_MINGW_ANSI_STDIO)
#  define HEDLEY_PRINTF_FORMAT(string_idx,first_to_check) __attribute__((__format__(ms_printf, string_idx, first_to_check)))
#elif defined(__MINGW32__) && HEDLEY_GCC_HAS_ATTRIBUTE(format,4,4,0) && defined(__USE_MINGW_ANSI_STDIO)
#  define HEDLEY_PRINTF_FORMAT(string_idx,first_to_check) __attribute__((__format__(gnu_printf, string_idx, first_to_check)))
#elif \
  HEDLEY_HAS_ATTRIBUTE(format) || \
  HEDLEY_GCC_VERSION_CHECK(3,1,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(5,6,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_PRINTF_FORMAT(string_idx,first_to_check) __attribute__((__format__(__printf__, string_idx, first_to_check)))
#elif HEDLEY_PELLES_VERSION_CHECK(6,0,0)
#  define HEDLEY_PRINTF_FORMAT(string_idx,first_to_check) __declspec(vaformat(printf,string_idx,first_to_check))
#else
#  define HEDLEY_PRINTF_FORMAT(string_idx,first_to_check)
#endif

#if defined(HEDLEY_CONSTEXPR)
#  undef HEDLEY_CONSTEXPR
#endif
#if defined(__cplusplus)
#  if __cplusplus >= 201103L
#    define HEDLEY_CONSTEXPR HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(constexpr)
#  endif
#endif
#if !defined(HEDLEY_CONSTEXPR)
#  define HEDLEY_CONSTEXPR
#endif

#if defined(HEDLEY_PREDICT)
#  undef HEDLEY_PREDICT
#endif
#if defined(HEDLEY_LIKELY)
#  undef HEDLEY_LIKELY
#endif
#if defined(HEDLEY_UNLIKELY)
#  undef HEDLEY_UNLIKELY
#endif
#if defined(HEDLEY_UNPREDICTABLE)
#  undef HEDLEY_UNPREDICTABLE
#endif
#if HEDLEY_HAS_BUILTIN(__builtin_unpredictable)
#  define HEDLEY_UNPREDICTABLE(expr) __builtin_unpredictable((expr))
#endif
#if \
  HEDLEY_HAS_BUILTIN(__builtin_expect_with_probability) || \
  HEDLEY_GCC_VERSION_CHECK(9,0,0)
#  define HEDLEY_PREDICT(expr, value, probability) __builtin_expect_with_probability(  (expr), (value), (probability))
#  define HEDLEY_PREDICT_TRUE(expr, probability)   __builtin_expect_with_probability(!!(expr),    1   , (probability))
#  define HEDLEY_PREDICT_FALSE(expr, probability)  __builtin_expect_with_probability(!!(expr),    0   , (probability))
#  define HEDLEY_LIKELY(expr)                      __builtin_expect                 (!!(expr),    1                  )
#  define HEDLEY_UNLIKELY(expr)                    __builtin_expect                 (!!(expr),    0                  )
#elif \
  HEDLEY_HAS_BUILTIN(__builtin_expect) || \
  HEDLEY_GCC_VERSION_CHECK(3,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  (HEDLEY_SUNPRO_VERSION_CHECK(5,15,0) && defined(__cplusplus)) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(4,7,0) || \
  HEDLEY_TI_CL430_VERSION_CHECK(3,1,0) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,1,0) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(6,1,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
  HEDLEY_TINYC_VERSION_CHECK(0,9,27) || \
  HEDLEY_CRAY_VERSION_CHECK(8,1,0)
#  define HEDLEY_PREDICT(expr, expected, probability) \
     (((probability) >= 0.9) ? __builtin_expect((expr), (expected)) : (HEDLEY_STATIC_CAST(void, expected), (expr)))
#  define HEDLEY_PREDICT_TRUE(expr, probability) \
     (__extension__ ({ \
       double hedley_probability_ = (probability); \
       ((hedley_probability_ >= 0.9) ? __builtin_expect(!!(expr), 1) : ((hedley_probability_ <= 0.1) ? __builtin_expect(!!(expr), 0) : !!(expr))); \
     }))
#  define HEDLEY_PREDICT_FALSE(expr, probability) \
     (__extension__ ({ \
       double hedley_probability_ = (probability); \
       ((hedley_probability_ >= 0.9) ? __builtin_expect(!!(expr), 0) : ((hedley_probability_ <= 0.1) ? __builtin_expect(!!(expr), 1) : !!(expr))); \
     }))
#  define HEDLEY_LIKELY(expr)   __builtin_expect(!!(expr), 1)
#  define HEDLEY_UNLIKELY(expr) __builtin_expect(!!(expr), 0)
#else
#  define HEDLEY_PREDICT(expr, expected, probability) (HEDLEY_STATIC_CAST(void, expected), (expr))
#  define HEDLEY_PREDICT_TRUE(expr, probability) (!!(expr))
#  define HEDLEY_PREDICT_FALSE(expr, probability) (!!(expr))
#  define HEDLEY_LIKELY(expr) (!!(expr))
#  define HEDLEY_UNLIKELY(expr) (!!(expr))
#endif
#if !defined(HEDLEY_UNPREDICTABLE)
#  define HEDLEY_UNPREDICTABLE(expr) HEDLEY_PREDICT(expr, 1, 0.5)
#endif

#if defined(HEDLEY_MALLOC)
#  undef HEDLEY_MALLOC
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(malloc) || \
  HEDLEY_GCC_VERSION_CHECK(3,1,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(12,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_MALLOC __attribute__((__malloc__))
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,10,0)
#  define HEDLEY_MALLOC _Pragma("returns_new_memory")
#elif HEDLEY_MSVC_VERSION_CHECK(14, 0, 0)
#  define HEDLEY_MALLOC __declspec(restrict)
#else
#  define HEDLEY_MALLOC
#endif

#if defined(HEDLEY_PURE)
#  undef HEDLEY_PURE
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(pure) || \
  HEDLEY_GCC_VERSION_CHECK(2,96,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
  HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_PURE __attribute__((__pure__))
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,10,0)
#  define HEDLEY_PURE _Pragma("does_not_write_global_data")
#elif defined(__cplusplus) && \
    ( \
      HEDLEY_TI_CL430_VERSION_CHECK(2,0,1) || \
      HEDLEY_TI_CL6X_VERSION_CHECK(4,0,0) || \
      HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) \
    )
#  define HEDLEY_PURE _Pragma("FUNC_IS_PURE;")
#else
#  define HEDLEY_PURE
#endif

#if defined(HEDLEY_CONST)
#  undef HEDLEY_CONST
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(const) || \
  HEDLEY_GCC_VERSION_CHECK(2,5,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
  HEDLEY_PGI_VERSION_CHECK(17,10,0)
#  define HEDLEY_CONST __attribute__((__const__))
#elif \
  HEDLEY_SUNPRO_VERSION_CHECK(5,10,0)
#  define HEDLEY_CONST _Pragma("no_side_effect")
#else
#  define HEDLEY_CONST HEDLEY_PURE
#endif

#if defined(HEDLEY_RESTRICT)
#  undef HEDLEY_RESTRICT
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L) && !defined(__cplusplus)
#  define HEDLEY_RESTRICT restrict
#elif \
  HEDLEY_GCC_VERSION_CHECK(3,1,0) || \
  HEDLEY_MSVC_VERSION_CHECK(14,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_PGI_VERSION_CHECK(17,10,0) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,2,4) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(8,1,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  (HEDLEY_SUNPRO_VERSION_CHECK(5,14,0) && defined(__cplusplus)) || \
  HEDLEY_IAR_VERSION_CHECK(8,0,0) || \
  defined(__clang__)
#  define HEDLEY_RESTRICT __restrict
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,3,0) && !defined(__cplusplus)
#  define HEDLEY_RESTRICT _Restrict
#else
#  define HEDLEY_RESTRICT
#endif

#if defined(HEDLEY_INLINE)
#  undef HEDLEY_INLINE
#endif
#if \
  (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)) || \
  (defined(__cplusplus) && (__cplusplus >= 199711L))
#  define HEDLEY_INLINE inline
#elif \
  defined(HEDLEY_GCC_VERSION) || \
  HEDLEY_ARM_VERSION_CHECK(6,2,0)
#  define HEDLEY_INLINE __inline__
#elif \
  HEDLEY_MSVC_VERSION_CHECK(12,0,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,1,0) || \
  HEDLEY_TI_CL430_VERSION_CHECK(3,1,0) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,2,0) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(8,0,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_INLINE __inline
#else
#  define HEDLEY_INLINE
#endif

#if defined(HEDLEY_ALWAYS_INLINE)
#  undef HEDLEY_ALWAYS_INLINE
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(always_inline) || \
  HEDLEY_GCC_VERSION_CHECK(4,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_ALWAYS_INLINE __attribute__((__always_inline__)) HEDLEY_INLINE
#elif HEDLEY_MSVC_VERSION_CHECK(12,0,0)
#  define HEDLEY_ALWAYS_INLINE __forceinline
#elif defined(__cplusplus) && \
    ( \
      HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
      HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
      HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
      HEDLEY_TI_CL6X_VERSION_CHECK(6,1,0) || \
      HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
      HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) \
    )
#  define HEDLEY_ALWAYS_INLINE _Pragma("FUNC_ALWAYS_INLINE;")
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_ALWAYS_INLINE _Pragma("inline=forced")
#else
#  define HEDLEY_ALWAYS_INLINE HEDLEY_INLINE
#endif

#if defined(HEDLEY_NEVER_INLINE)
#  undef HEDLEY_NEVER_INLINE
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(noinline) || \
  HEDLEY_GCC_VERSION_CHECK(4,0,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(10,1,0) || \
  HEDLEY_TI_VERSION_CHECK(15,12,0) || \
  (HEDLEY_TI_ARMCL_VERSION_CHECK(4,8,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_ARMCL_VERSION_CHECK(5,2,0) || \
  (HEDLEY_TI_CL2000_VERSION_CHECK(6,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL2000_VERSION_CHECK(6,4,0) || \
  (HEDLEY_TI_CL430_VERSION_CHECK(4,0,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL430_VERSION_CHECK(4,3,0) || \
  (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) || \
  HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
  HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0)
#  define HEDLEY_NEVER_INLINE __attribute__((__noinline__))
#elif HEDLEY_MSVC_VERSION_CHECK(13,10,0)
#  define HEDLEY_NEVER_INLINE __declspec(noinline)
#elif HEDLEY_PGI_VERSION_CHECK(10,2,0)
#  define HEDLEY_NEVER_INLINE _Pragma("noinline")
#elif HEDLEY_TI_CL6X_VERSION_CHECK(6,0,0) && defined(__cplusplus)
#  define HEDLEY_NEVER_INLINE _Pragma("FUNC_CANNOT_INLINE;")
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_NEVER_INLINE _Pragma("inline=never")
#elif HEDLEY_COMPCERT_VERSION_CHECK(3,2,0)
#  define HEDLEY_NEVER_INLINE __attribute((noinline))
#elif HEDLEY_PELLES_VERSION_CHECK(9,0,0)
#  define HEDLEY_NEVER_INLINE __declspec(noinline)
#else
#  define HEDLEY_NEVER_INLINE
#endif

#if defined(HEDLEY_PRIVATE)
#  undef HEDLEY_PRIVATE
#endif
#if defined(HEDLEY_PUBLIC)
#  undef HEDLEY_PUBLIC
#endif
#if defined(HEDLEY_IMPORT)
#  undef HEDLEY_IMPORT
#endif
#if defined(_WIN32) || defined(__CYGWIN__)
#  define HEDLEY_PRIVATE
#  define HEDLEY_PUBLIC   __declspec(dllexport)
#  define HEDLEY_IMPORT   __declspec(dllimport)
#else
#  if \
    HEDLEY_HAS_ATTRIBUTE(visibility) || \
    HEDLEY_GCC_VERSION_CHECK(3,3,0) || \
    HEDLEY_SUNPRO_VERSION_CHECK(5,11,0) || \
    HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
    HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
    HEDLEY_IBM_VERSION_CHECK(13,1,0) || \
    ( \
      defined(__TI_EABI__) && \
      ( \
        (HEDLEY_TI_CL6X_VERSION_CHECK(7,2,0) && defined(__TI_GNU_ATTRIBUTE_SUPPORT__)) || \
        HEDLEY_TI_CL6X_VERSION_CHECK(7,5,0) \
      ) \
    )
#    define HEDLEY_PRIVATE __attribute__((__visibility__("hidden")))
#    define HEDLEY_PUBLIC  __attribute__((__visibility__("default")))
#  else
#    define HEDLEY_PRIVATE
#    define HEDLEY_PUBLIC
#  endif
#  define HEDLEY_IMPORT    extern
#endif

#if defined(HEDLEY_NO_THROW)
#  undef HEDLEY_NO_THROW
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(nothrow) || \
  HEDLEY_GCC_VERSION_CHECK(3,3,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_NO_THROW __attribute__((__nothrow__))
#elif \
  HEDLEY_MSVC_VERSION_CHECK(13,1,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0)
#  define HEDLEY_NO_THROW __declspec(nothrow)
#else
#  define HEDLEY_NO_THROW
#endif

#if defined(HEDLEY_FALL_THROUGH)
# undef HEDLEY_FALL_THROUGH
#endif
#if HEDLEY_GNUC_HAS_ATTRIBUTE(fallthrough,7,0,0) && !defined(HEDLEY_PGI_VERSION)
#  define HEDLEY_FALL_THROUGH __attribute__((__fallthrough__))
#elif HEDLEY_HAS_CPP_ATTRIBUTE_NS(clang,fallthrough)
#  define HEDLEY_FALL_THROUGH HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[clang::fallthrough]])
#elif HEDLEY_HAS_CPP_ATTRIBUTE(fallthrough)
#  define HEDLEY_FALL_THROUGH HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_([[fallthrough]])
#elif defined(__fallthrough) /* SAL */
#  define HEDLEY_FALL_THROUGH __fallthrough
#else
#  define HEDLEY_FALL_THROUGH
#endif

#if defined(HEDLEY_RETURNS_NON_NULL)
#  undef HEDLEY_RETURNS_NON_NULL
#endif
#if \
  HEDLEY_HAS_ATTRIBUTE(returns_nonnull) || \
  HEDLEY_GCC_VERSION_CHECK(4,9,0)
#  define HEDLEY_RETURNS_NON_NULL __attribute__((__returns_nonnull__))
#elif defined(_Ret_notnull_) /* SAL */
#  define HEDLEY_RETURNS_NON_NULL _Ret_notnull_
#else
#  define HEDLEY_RETURNS_NON_NULL
#endif

#if defined(HEDLEY_ARRAY_PARAM)
#  undef HEDLEY_ARRAY_PARAM
#endif
#if \
  defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L) && \
  !defined(__STDC_NO_VLA__) && \
  !defined(__cplusplus) && \
  !defined(HEDLEY_PGI_VERSION) && \
  !defined(HEDLEY_TINYC_VERSION)
#  define HEDLEY_ARRAY_PARAM(name) (name)
#else
#  define HEDLEY_ARRAY_PARAM(name)
#endif

#if defined(HEDLEY_IS_CONSTANT)
#  undef HEDLEY_IS_CONSTANT
#endif
#if defined(HEDLEY_REQUIRE_CONSTEXPR)
#  undef HEDLEY_REQUIRE_CONSTEXPR
#endif
/* HEDLEY_IS_CONSTEXPR_ is for
   HEDLEY INTERNAL USE ONLY.  API subject to change without notice. */
#if defined(HEDLEY_IS_CONSTEXPR_)
#  undef HEDLEY_IS_CONSTEXPR_
#endif
#if \
  HEDLEY_HAS_BUILTIN(__builtin_constant_p) || \
  HEDLEY_GCC_VERSION_CHECK(3,4,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_TINYC_VERSION_CHECK(0,9,19) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_IBM_VERSION_CHECK(13,1,0) || \
  HEDLEY_TI_CL6X_VERSION_CHECK(6,1,0) || \
  (HEDLEY_SUNPRO_VERSION_CHECK(5,10,0) && !defined(__cplusplus)) || \
  HEDLEY_CRAY_VERSION_CHECK(8,1,0)
#  define HEDLEY_IS_CONSTANT(expr) __builtin_constant_p(expr)
#endif
#if !defined(__cplusplus)
#  if \
       HEDLEY_HAS_BUILTIN(__builtin_types_compatible_p) || \
       HEDLEY_GCC_VERSION_CHECK(3,4,0) || \
       HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
       HEDLEY_IBM_VERSION_CHECK(13,1,0) || \
       HEDLEY_CRAY_VERSION_CHECK(8,1,0) || \
       HEDLEY_ARM_VERSION_CHECK(5,4,0) || \
       HEDLEY_TINYC_VERSION_CHECK(0,9,24)
#    if defined(__INTPTR_TYPE__)
#      define HEDLEY_IS_CONSTEXPR_(expr) __builtin_types_compatible_p(__typeof__((1 ? (void*) ((__INTPTR_TYPE__) ((expr) * 0)) : (int*) 0)), int*)
#    else
#      include <stdint.h>
#      define HEDLEY_IS_CONSTEXPR_(expr) __builtin_types_compatible_p(__typeof__((1 ? (void*) ((intptr_t) ((expr) * 0)) : (int*) 0)), int*)
#    endif
#  elif \
       ( \
          defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L) && \
          !defined(HEDLEY_SUNPRO_VERSION) && \
          !defined(HEDLEY_PGI_VERSION) && \
          !defined(HEDLEY_IAR_VERSION)) || \
       HEDLEY_HAS_EXTENSION(c_generic_selections) || \
       HEDLEY_GCC_VERSION_CHECK(4,9,0) || \
       HEDLEY_INTEL_VERSION_CHECK(17,0,0) || \
       HEDLEY_IBM_VERSION_CHECK(12,1,0) || \
       HEDLEY_ARM_VERSION_CHECK(5,3,0)
#    if defined(__INTPTR_TYPE__)
#      define HEDLEY_IS_CONSTEXPR_(expr) _Generic((1 ? (void*) ((__INTPTR_TYPE__) ((expr) * 0)) : (int*) 0), int*: 1, void*: 0)
#    else
#      include <stdint.h>
#      define HEDLEY_IS_CONSTEXPR_(expr) _Generic((1 ? (void*) ((intptr_t) * 0) : (int*) 0), int*: 1, void*: 0)
#    endif
#  elif \
       defined(HEDLEY_GCC_VERSION) || \
       defined(HEDLEY_INTEL_VERSION) || \
       defined(HEDLEY_TINYC_VERSION) || \
       defined(HEDLEY_TI_ARMCL_VERSION) || \
       HEDLEY_TI_CL430_VERSION_CHECK(18,12,0) || \
       defined(HEDLEY_TI_CL2000_VERSION) || \
       defined(HEDLEY_TI_CL6X_VERSION) || \
       defined(HEDLEY_TI_CL7X_VERSION) || \
       defined(HEDLEY_TI_CLPRU_VERSION) || \
       defined(__clang__)
#    define HEDLEY_IS_CONSTEXPR_(expr) ( \
         sizeof(void) != \
         sizeof(*( \
           1 ? \
             ((void*) ((expr) * 0L) ) : \
             ((struct { char v[sizeof(void) * 2]; } *) 1) \
           ) \
         ) \
       )
#  endif
#endif
#if defined(HEDLEY_IS_CONSTEXPR_)
#  if !defined(HEDLEY_IS_CONSTANT)
#    define HEDLEY_IS_CONSTANT(expr) HEDLEY_IS_CONSTEXPR_(expr)
#  endif
#  define HEDLEY_REQUIRE_CONSTEXPR(expr) (HEDLEY_IS_CONSTEXPR_(expr) ? (expr) : (-1))
#else
#  if !defined(HEDLEY_IS_CONSTANT)
#    define HEDLEY_IS_CONSTANT(expr) (0)
#  endif
#  define HEDLEY_REQUIRE_CONSTEXPR(expr) (expr)
#endif

#if defined(HEDLEY_BEGIN_C_DECLS)
#  undef HEDLEY_BEGIN_C_DECLS
#endif
#if defined(HEDLEY_END_C_DECLS)
#  undef HEDLEY_END_C_DECLS
#endif
#if defined(HEDLEY_C_DECL)
#  undef HEDLEY_C_DECL
#endif
#if defined(__cplusplus)
#  define HEDLEY_BEGIN_C_DECLS extern "C" {
#  define HEDLEY_END_C_DECLS }
#  define HEDLEY_C_DECL extern "C"
#else
#  define HEDLEY_BEGIN_C_DECLS
#  define HEDLEY_END_C_DECLS
#  define HEDLEY_C_DECL
#endif

#if defined(HEDLEY_STATIC_ASSERT)
#  undef HEDLEY_STATIC_ASSERT
#endif
#if \
  !defined(__cplusplus) && ( \
      (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)) || \
      HEDLEY_HAS_FEATURE(c_static_assert) || \
      HEDLEY_GCC_VERSION_CHECK(6,0,0) || \
      HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
      defined(_Static_assert) \
    )
#  define HEDLEY_STATIC_ASSERT(expr, message) _Static_assert(expr, message)
#elif \
  (defined(__cplusplus) && (__cplusplus >= 201103L)) || \
  HEDLEY_MSVC_VERSION_CHECK(16,0,0)
#  define HEDLEY_STATIC_ASSERT(expr, message) HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(static_assert(expr, message))
#else
#  define HEDLEY_STATIC_ASSERT(expr, message)
#endif

#if defined(HEDLEY_NULL)
#  undef HEDLEY_NULL
#endif
#if defined(__cplusplus)
#  if __cplusplus >= 201103L
#    define HEDLEY_NULL HEDLEY_DIAGNOSTIC_DISABLE_CPP98_COMPAT_WRAP_(nullptr)
#  elif defined(NULL)
#    define HEDLEY_NULL NULL
#  else
#    define HEDLEY_NULL HEDLEY_STATIC_CAST(void*, 0)
#  endif
#elif defined(NULL)
#  define HEDLEY_NULL NULL
#else
#  define HEDLEY_NULL ((void*) 0)
#endif

#if defined(HEDLEY_MESSAGE)
#  undef HEDLEY_MESSAGE
#endif
#if HEDLEY_HAS_WARNING("-Wunknown-pragmas")
#  define HEDLEY_MESSAGE(msg) \
  HEDLEY_DIAGNOSTIC_PUSH \
  HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS \
  HEDLEY_PRAGMA(message msg) \
  HEDLEY_DIAGNOSTIC_POP
#elif \
  HEDLEY_GCC_VERSION_CHECK(4,4,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_MESSAGE(msg) HEDLEY_PRAGMA(message msg)
#elif HEDLEY_CRAY_VERSION_CHECK(5,0,0)
#  define HEDLEY_MESSAGE(msg) HEDLEY_PRAGMA(_CRI message msg)
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  define HEDLEY_MESSAGE(msg) HEDLEY_PRAGMA(message(msg))
#elif HEDLEY_PELLES_VERSION_CHECK(2,0,0)
#  define HEDLEY_MESSAGE(msg) HEDLEY_PRAGMA(message(msg))
#else
#  define HEDLEY_MESSAGE(msg)
#endif

#if defined(HEDLEY_WARNING)
#  undef HEDLEY_WARNING
#endif
#if HEDLEY_HAS_WARNING("-Wunknown-pragmas")
#  define HEDLEY_WARNING(msg) \
  HEDLEY_DIAGNOSTIC_PUSH \
  HEDLEY_DIAGNOSTIC_DISABLE_UNKNOWN_PRAGMAS \
  HEDLEY_PRAGMA(clang warning msg) \
  HEDLEY_DIAGNOSTIC_POP
#elif \
  HEDLEY_GCC_VERSION_CHECK(4,8,0) || \
  HEDLEY_PGI_VERSION_CHECK(18,4,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define HEDLEY_WARNING(msg) HEDLEY_PRAGMA(GCC warning msg)
#elif HEDLEY_MSVC_VERSION_CHECK(15,0,0)
#  define HEDLEY_WARNING(msg) HEDLEY_PRAGMA(message(msg))
#else
#  define HEDLEY_WARNING(msg) HEDLEY_MESSAGE(msg)
#endif

#if defined(HEDLEY_REQUIRE)
#  undef HEDLEY_REQUIRE
#endif
#if defined(HEDLEY_REQUIRE_MSG)
#  undef HEDLEY_REQUIRE_MSG
#endif
#if HEDLEY_HAS_ATTRIBUTE(diagnose_if)
#  if HEDLEY_HAS_WARNING("-Wgcc-compat")
#    define HEDLEY_REQUIRE(expr) \
       HEDLEY_DIAGNOSTIC_PUSH \
       _Pragma("clang diagnostic ignored \"-Wgcc-compat\"") \
       __attribute__((diagnose_if(!(expr), #expr, "error"))) \
       HEDLEY_DIAGNOSTIC_POP
#    define HEDLEY_REQUIRE_MSG(expr,msg) \
       HEDLEY_DIAGNOSTIC_PUSH \
       _Pragma("clang diagnostic ignored \"-Wgcc-compat\"") \
       __attribute__((diagnose_if(!(expr), msg, "error"))) \
       HEDLEY_DIAGNOSTIC_POP
#  else
#    define HEDLEY_REQUIRE(expr) __attribute__((diagnose_if(!(expr), #expr, "error")))
#    define HEDLEY_REQUIRE_MSG(expr,msg) __attribute__((diagnose_if(!(expr), msg, "error")))
#  endif
#else
#  define HEDLEY_REQUIRE(expr)
#  define HEDLEY_REQUIRE_MSG(expr,msg)
#endif

#if defined(HEDLEY_FLAGS)
#  undef HEDLEY_FLAGS
#endif
#if HEDLEY_HAS_ATTRIBUTE(flag_enum)
#  define HEDLEY_FLAGS __attribute__((__flag_enum__))
#endif

#if defined(HEDLEY_FLAGS_CAST)
#  undef HEDLEY_FLAGS_CAST
#endif
#if HEDLEY_INTEL_VERSION_CHECK(19,0,0)
#  define HEDLEY_FLAGS_CAST(T, expr) (__extension__ ({ \
  HEDLEY_DIAGNOSTIC_PUSH \
      _Pragma("warning(disable:188)") \
      ((T) (expr)); \
      HEDLEY_DIAGNOSTIC_POP \
    }))
#else
#  define HEDLEY_FLAGS_CAST(T, expr) HEDLEY_STATIC_CAST(T, expr)
#endif

#if defined(HEDLEY_EMPTY_BASES)
#  undef HEDLEY_EMPTY_BASES
#endif
#if HEDLEY_MSVC_VERSION_CHECK(19,0,23918) && !HEDLEY_MSVC_VERSION_CHECK(20,0,0)
#  define HEDLEY_EMPTY_BASES __declspec(empty_bases)
#else
#  define HEDLEY_EMPTY_BASES
#endif

/* Remaining macros are deprecated. */

#if defined(HEDLEY_GCC_NOT_CLANG_VERSION_CHECK)
#  undef HEDLEY_GCC_NOT_CLANG_VERSION_CHECK
#endif
#if defined(__clang__)
#  define HEDLEY_GCC_NOT_CLANG_VERSION_CHECK(major,minor,patch) (0)
#else
#  define HEDLEY_GCC_NOT_CLANG_VERSION_CHECK(major,minor,patch) HEDLEY_GCC_VERSION_CHECK(major,minor,patch)
#endif

#if defined(HEDLEY_CLANG_HAS_ATTRIBUTE)
#  undef HEDLEY_CLANG_HAS_ATTRIBUTE
#endif
#define HEDLEY_CLANG_HAS_ATTRIBUTE(attribute) HEDLEY_HAS_ATTRIBUTE(attribute)

#if defined(HEDLEY_CLANG_HAS_CPP_ATTRIBUTE)
#  undef HEDLEY_CLANG_HAS_CPP_ATTRIBUTE
#endif
#define HEDLEY_CLANG_HAS_CPP_ATTRIBUTE(attribute) HEDLEY_HAS_CPP_ATTRIBUTE(attribute)

#if defined(HEDLEY_CLANG_HAS_BUILTIN)
#  undef HEDLEY_CLANG_HAS_BUILTIN
#endif
#define HEDLEY_CLANG_HAS_BUILTIN(builtin) HEDLEY_HAS_BUILTIN(builtin)

#if defined(HEDLEY_CLANG_HAS_FEATURE)
#  undef HEDLEY_CLANG_HAS_FEATURE
#endif
#define HEDLEY_CLANG_HAS_FEATURE(feature) HEDLEY_HAS_FEATURE(feature)

#if defined(HEDLEY_CLANG_HAS_EXTENSION)
#  undef HEDLEY_CLANG_HAS_EXTENSION
#endif
#define HEDLEY_CLANG_HAS_EXTENSION(extension) HEDLEY_HAS_EXTENSION(extension)

#if defined(HEDLEY_CLANG_HAS_DECLSPEC_DECLSPEC_ATTRIBUTE)
#  undef HEDLEY_CLANG_HAS_DECLSPEC_DECLSPEC_ATTRIBUTE
#endif
#define HEDLEY_CLANG_HAS_DECLSPEC_ATTRIBUTE(attribute) HEDLEY_HAS_DECLSPEC_ATTRIBUTE(attribute)

#if defined(HEDLEY_CLANG_HAS_WARNING)
#  undef HEDLEY_CLANG_HAS_WARNING
#endif
#define HEDLEY_CLANG_HAS_WARNING(warning) HEDLEY_HAS_WARNING(warning)

#endif /* !defined(HEDLEY_VERSION) || (HEDLEY_VERSION < X) */
/* :: End hedley.h :: */

#define SIMDE_VERSION_MAJOR 0
#define SIMDE_VERSION_MINOR 5
#define SIMDE_VERSION_MICRO 0
#define SIMDE_VERSION HEDLEY_VERSION_ENCODE(SIMDE_VERSION_MAJOR, SIMDE_VERSION_MINOR, SIMDE_VERSION_MICRO)

/* :: Begin simde-arch.h :: */
/* Architecture detection
 * Created by Evan Nemerson <evan@nemerson.com>
 *
 *   To the extent possible under law, the authors have waived all
 *   copyright and related or neighboring rights to this code.  For
 *   details, see the Creative Commons Zero 1.0 Universal license at
 *   <https://creativecommons.org/publicdomain/zero/1.0/>
 *
 * Different compilers define different preprocessor macros for the
 * same architecture.  This is an attempt to provide a single
 * interface which is usable on any compiler.
 *
 * In general, a macro named SIMDE_ARCH_* is defined for each
 * architecture the CPU supports.  When there are multiple possible
 * versions, we try to define the macro to the target version.  For
 * example, if you want to check for i586+, you could do something
 * like:
 *
 *   #if defined(SIMDE_ARCH_X86) && (SIMDE_ARCH_X86 >= 5)
 *   ...
 *   #endif
 *
 * You could also just check that SIMDE_ARCH_X86 >= 5 without checking
 * if it's defined first, but some compilers may emit a warning about
 * an undefined macro being used (e.g., GCC with -Wundef).
 *
 * This was originally created for SIMDe
 * <https://github.com/nemequ/simde> (hence the prefix), but this
 * header has no dependencies and may be used anywhere.  It is
 * originally based on information from
 * <https://sourceforge.net/p/predef/wiki/Architectures/>, though it
 * has been enhanced with additional information.
 *
 * If you improve this file, or find a bug, please file the issue at
 * <https://github.com/nemequ/simde/issues>.  If you copy this into
 * your project, even if you change the prefix, please keep the links
 * to SIMDe intact so others know where to report issues, submit
 * enhancements, and find the latest version. */

#if !defined(SIMDE_ARCH_H)
#define SIMDE_ARCH_H

/* Alpha
   <https://en.wikipedia.org/wiki/DEC_Alpha> */
#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#  if defined(__alpha_ev6__)
#    define SIMDE_ARCH_ALPHA 6
#  elif defined(__alpha_ev5__)
#    define SIMDE_ARCH_ALPHA 5
#  elif defined(__alpha_ev4__)
#    define SIMDE_ARCH_ALPHA 4
#  else
#    define SIMDE_ARCH_ALPHA 1
#  endif
#endif

/* Atmel AVR
   <https://en.wikipedia.org/wiki/Atmel_AVR> */
#if defined(__AVR_ARCH__)
#  define SIMDE_ARCH_AVR __AVR_ARCH__
#endif

/* AMD64 / x86_64
   <https://en.wikipedia.org/wiki/X86-64> */
#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X66) || defined(_M_AMD64)
#  define SIMDE_ARCH_AMD64 1000
#endif

/* ARM
   <https://en.wikipedia.org/wiki/ARM_architecture> */
#if defined(__ARM_ARCH_8A__)
#  define SIMDE_ARCH_ARM 82
#elif defined(__ARM_ARCH_8R__)
#  define SIMDE_ARCH_ARM 81
#elif defined(__ARM_ARCH_8__)
#  define SIMDE_ARCH_ARM 80
#elif defined(__ARM_ARCH_7S__)
#  define SIMDE_ARCH_ARM 74
#elif defined(__ARM_ARCH_7M__)
#  define SIMDE_ARCH_ARM 73
#elif defined(__ARM_ARCH_7R__)
#  define SIMDE_ARCH_ARM 72
#elif defined(__ARM_ARCH_7A__)
#  define SIMDE_ARCH_ARM 71
#elif defined(__ARM_ARCH_7__)
#  define SIMDE_ARCH_ARM 70
#elif defined(__ARM_ARCH)
#  define SIMDE_ARCH_ARM (__ARM_ARCH * 10)
#elif defined(_M_ARM)
#  define SIMDE_ARCH_ARM (_M_ARM * 10)
#elif defined(__arm__) || defined(__thumb__) || defined(__TARGET_ARCH_ARM) || defined(_ARM) || defined(_M_ARM) || defined(_M_ARM)
#  define SIMDE_ARCH_ARM 1
#endif

/* AArch64
   <https://en.wikipedia.org/wiki/ARM_architecture> */
#if defined(__aarch64__) || defined(_M_ARM64)
#  define SIMDE_ARCH_AARCH64 1000
#endif

/* ARM SIMD ISA extensions */
#if defined(__ARM_NEON)
#  if defined(SIMDE_ARCH_AARCH64)
#    define SIMDE_ARCH_ARM_NEON SIMDE_ARCH_AARCH64
#  elif defined(SIMDE_ARCH_ARM)
#    define SIMDE_ARCH_ARM_NEON SIMDE_ARCH_ARM
#  endif
#endif

/* Blackfin
   <https://en.wikipedia.org/wiki/Blackfin> */
#if defined(__bfin) || defined(__BFIN__) || defined(__bfin__)
#  define SIMDE_ARCH_BLACKFIN 1
#endif

/* CRIS
   <https://en.wikipedia.org/wiki/ETRAX_CRIS> */
#if defined(__CRIS_arch_version)
#  define SIMDE_ARCH_CRIS __CRIS_arch_version
#elif defined(__cris__) || defined(__cris) || defined(__CRIS) || defined(__CRIS__)
#  define SIMDE_ARCH_CRIS 1
#endif

/* Convex
   <https://en.wikipedia.org/wiki/Convex_Computer> */
#if defined(__convex_c38__)
#  define SIMDE_ARCH_CONVEX 38
#elif defined(__convex_c34__)
#  define SIMDE_ARCH_CONVEX 34
#elif defined(__convex_c32__)
#  define SIMDE_ARCH_CONVEX 32
#elif defined(__convex_c2__)
#  define SIMDE_ARCH_CONVEX 2
#elif defined(__convex__)
#  define SIMDE_ARCH_CONVEX 1
#endif

/* Adapteva Epiphany
   <https://en.wikipedia.org/wiki/Adapteva_Epiphany> */
#if defined(__epiphany__)
#  define SIMDE_ARCH_EPIPHANY 1
#endif

/* Fujitsu FR-V
   <https://en.wikipedia.org/wiki/FR-V_(microprocessor)> */
#if defined(__frv__)
#  define SIMDE_ARCH_FRV 1
#endif

/* H8/300
   <https://en.wikipedia.org/wiki/H8_Family> */
#if defined(__H8300__)
#  define SIMDE_ARCH_H8300
#endif

/* HP/PA / PA-RISC
   <https://en.wikipedia.org/wiki/PA-RISC> */
#if defined(__PA8000__) || defined(__HPPA20__) || defined(__RISC2_0__) || defined(_PA_RISC2_0)
#  define SIMDE_ARCH_HPPA 20
#elif defined(__PA7100__) || defined(__HPPA11__) || defined(_PA_RISC1_1)
#  define SIMDE_ARCH_HPPA 11
#elif defined(_PA_RISC1_0)
#  define SIMDE_ARCH_HPPA 10
#elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
#  define SIMDE_ARCH_HPPA 1
#endif

/* x86
   <https://en.wikipedia.org/wiki/X86> */
#if defined(_M_IX86)
#  define SIMDE_ARCH_X86 (_M_IX86 / 100)
#elif defined(__I86__)
#  define SIMDE_ARCH_X86 __I86__
#elif defined(i686) || defined(__i686) || defined(__i686__)
#  define SIMDE_ARCH_X86 6
#elif defined(i586) || defined(__i586) || defined(__i586__)
#  define SIMDE_ARCH_X86 5
#elif defined(i486) || defined(__i486) || defined(__i486__)
#  define SIMDE_ARCH_X86 4
#elif defined(i386) || defined(__i386) || defined(__i386__)
#  define SIMDE_ARCH_X86 3
#elif defined(_X86_) || defined(__X86__) || defined(__THW_INTEL__)
#  define SIMDE_ARCH_X86 3
#endif

/* SIMD ISA extensions for x86/x86_64 */
#if defined(SIMDE_ARCH_X86) || defined(SIMDE_ARCH_AMD64)
#  if defined(_M_IX86_FP)
#    define SIMDE_ARCH_X86_MMX
#    if (_M_IX86_FP >= 1)
#      define SIMDE_ARCH_X86_SSE 1
#    endif
#    if (_M_IX86_FP >= 2)
#      define SIMDE_ARCH_X86_SSE2 1
#    endif
#  elif defined(_M_X64)
#    define SIMDE_ARCH_X86_SSE 1
#    define SIMDE_ARCH_X86_SSE2 1
#  else
#    if defined(__MMX__)
#      define SIMDE_ARCH_X86_MMX 1
#    endif
#    if defined(__SSE__)
#      define SIMDE_ARCH_X86_SSE 1
#    endif
#    if defined(__SSE2__)
#      define SIMDE_ARCH_X86_SSE2 1
#    endif
#  endif
#  if defined(__SSE3__)
#    define SIMDE_ARCH_X86_SSE3 1
#  endif
#  if defined(__SSSE3__)
#    define SIMDE_ARCH_X86_SSSE3 1
#  endif
#  if defined(__SSE4_1__)
#    define SIMDE_ARCH_X86_SSE4_1 1
#  endif
#  if defined(__SSE4_2__)
#    define SIMDE_ARCH_X86_SSE4_2 1
#  endif
#  if defined(__AVX__)
#    define SIMDE_ARCH_X86_AVX 1
#    if !defined(SIMDE_ARCH_X86_SSE3)
#      define SIMDE_ARCH_X86_SSE3 1
#    endif
#    if !defined(SIMDE_ARCH_X86_SSE4_1)
#      define SIMDE_ARCH_X86_SSE4_1 1
#    endif
#    if !defined(SIMDE_ARCH_X86_SSE4_1)
#      define SIMDE_ARCH_X86_SSE4_2 1
#    endif
#  endif
#  if defined(__AVX2__)
#    define SIMDE_ARCH_X86_AVX2 1
#  endif
#  if defined(__FMA__)
#    define SIMDE_ARCH_X86_FMA 1
#    if !defined(SIMDE_ARCH_X86_AVX)
#      define SIMDE_ARCH_X86_AVX 1
#    endif
#  endif
#  if defined(__AVX512BW__)
#    define SIMDE_ARCH_X86_AVX512BW 1
#  endif
#  if defined(__AVX512CD__)
#    define SIMDE_ARCH_X86_AVX512CD 1
#  endif
#  if defined(__AVX512DQ__)
#    define SIMDE_ARCH_X86_AVX512DQ 1
#  endif
#  if defined(__AVX512F__)
#    define SIMDE_ARCH_X86_AVX512F 1
#  endif
#  if defined(__AVX512VL__)
#    define SIMDE_ARCH_X86_AVX512VL 1
#  endif
#endif

/* Itanium
   <https://en.wikipedia.org/wiki/Itanium> */
#if defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
#  define SIMDE_ARCH_IA64 1
#endif

/* Renesas M32R
   <https://en.wikipedia.org/wiki/M32R> */
#if defined(__m32r__) || defined(__M32R__)
#  define SIMDE_ARCH_M32R
#endif

/* Motorola 68000
   <https://en.wikipedia.org/wiki/Motorola_68000> */
#if defined(__mc68060__) || defined(__MC68060__)
#  define SIMDE_ARCH_M68K 68060
#elif defined(__mc68040__) || defined(__MC68040__)
#  define SIMDE_ARCH_M68K 68040
#elif defined(__mc68030__) || defined(__MC68030__)
#  define SIMDE_ARCH_M68K 68030
#elif defined(__mc68020__) || defined(__MC68020__)
#  define SIMDE_ARCH_M68K 68020
#elif defined(__mc68010__) || defined(__MC68010__)
#  define SIMDE_ARCH_M68K 68010
#elif defined(__mc68000__) || defined(__MC68000__)
#  define SIMDE_ARCH_M68K 68000
#endif

/* Xilinx MicroBlaze
   <https://en.wikipedia.org/wiki/MicroBlaze> */
#if defined(__MICROBLAZE__) || defined(__microblaze__)
#  define SIMDE_ARCH_MICROBLAZE
#endif

/* MIPS
   <https://en.wikipedia.org/wiki/MIPS_architecture> */
#if defined(_MIPS_ISA_MIPS64R2)
#  define SIMDE_ARCH_MIPS 642
#elif defined(_MIPS_ISA_MIPS64)
#  define SIMDE_ARCH_MIPS 640
#elif defined(_MIPS_ISA_MIPS32R2)
#  define SIMDE_ARCH_MIPS 322
#elif defined(_MIPS_ISA_MIPS32)
#  define SIMDE_ARCH_MIPS 320
#elif defined(_MIPS_ISA_MIPS4)
#  define SIMDE_ARCH_MIPS 4
#elif defined(_MIPS_ISA_MIPS3)
#  define SIMDE_ARCH_MIPS 3
#elif defined(_MIPS_ISA_MIPS2)
#  define SIMDE_ARCH_MIPS 2
#elif defined(_MIPS_ISA_MIPS1)
#  define SIMDE_ARCH_MIPS 1
#elif defined(_MIPS_ISA_MIPS) || defined(__mips) || defined(__MIPS__)
#  define SIMDE_ARCH_MIPS 1
#endif

/* Matsushita MN10300
   <https://en.wikipedia.org/wiki/MN103> */
#if defined(__MN10300__) || defined(__mn10300__)
#  define SIMDE_ARCH_MN10300 1
#endif

/* POWER
   <https://en.wikipedia.org/wiki/IBM_POWER_Instruction_Set_Architecture> */
#if defined(_M_PPC)
#  define SIMDE_ARCH_POWER _M_PPC
#elif defined(_ARCH_PWR9)
#  define SIMDE_ARCH_POWER 900
#elif defined(_ARCH_PWR8)
#  define SIMDE_ARCH_POWER 800
#elif defined(_ARCH_PWR7)
#  define SIMDE_ARCH_POWER 700
#elif defined(_ARCH_PWR6)
#  define SIMDE_ARCH_POWER 600
#elif defined(_ARCH_PWR5)
#  define SIMDE_ARCH_POWER 500
#elif defined(_ARCH_PWR4)
#  define SIMDE_ARCH_POWER 400
#elif defined(_ARCH_440) || defined(__ppc440__)
#  define SIMDE_ARCH_POWER 440
#elif defined(_ARCH_450) || defined(__ppc450__)
#  define SIMDE_ARCH_POWER 450
#elif defined(_ARCH_601) || defined(__ppc601__)
#  define SIMDE_ARCH_POWER 601
#elif defined(_ARCH_603) || defined(__ppc603__)
#  define SIMDE_ARCH_POWER 603
#elif defined(_ARCH_604) || defined(__ppc604__)
#  define SIMDE_ARCH_POWER 604
#elif defined(_ARCH_605) || defined(__ppc605__)
#  define SIMDE_ARCH_POWER 605
#elif defined(_ARCH_620) || defined(__ppc620__)
#  define SIMDE_ARCH_POWER 620
#elif defined(__powerpc) || defined(__powerpc__) || defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) || defined(_ARCH_PPC) || defined(__ppc)
#  define SIMDE_ARCH_POWER 1
#endif

#if defined(__ALTIVEC__)
#  define SIMDE_ARCH_POWER_ALTIVEC SIMDE_ARCH_POWER
#endif

/* SPARC
   <https://en.wikipedia.org/wiki/SPARC> */
#if defined(__sparc_v9__) || defined(__sparcv9)
#  define SIMDE_ARCH_SPARC 9
#elif defined(__sparc_v8__) || defined(__sparcv8)
#  define SIMDE_ARCH_SPARC 8
#elif defined(__sparc_v7__) || defined(__sparcv7)
#  define SIMDE_ARCH_SPARC 7
#elif defined(__sparc_v6__) || defined(__sparcv6)
#  define SIMDE_ARCH_SPARC 6
#elif defined(__sparc_v5__) || defined(__sparcv5)
#  define SIMDE_ARCH_SPARC 5
#elif defined(__sparc_v4__) || defined(__sparcv4)
#  define SIMDE_ARCH_SPARC 4
#elif defined(__sparc_v3__) || defined(__sparcv3)
#  define SIMDE_ARCH_SPARC 3
#elif defined(__sparc_v2__) || defined(__sparcv2)
#  define SIMDE_ARCH_SPARC 2
#elif defined(__sparc_v1__) || defined(__sparcv1)
#  define SIMDE_ARCH_SPARC 1
#elif defined(__sparc__) || defined(__sparc)
#  define SIMDE_ARCH_SPARC 1
#endif

/* SuperH
   <https://en.wikipedia.org/wiki/SuperH> */
#if defined(__sh5__) || defined(__SH5__)
#  define SIMDE_ARCH_SUPERH 5
#elif defined(__sh4__) || defined(__SH4__)
#  define SIMDE_ARCH_SUPERH 4
#elif defined(__sh3__) || defined(__SH3__)
#  define SIMDE_ARCH_SUPERH 3
#elif defined(__sh2__) || defined(__SH2__)
#  define SIMDE_ARCH_SUPERH 2
#elif defined(__sh1__) || defined(__SH1__)
#  define SIMDE_ARCH_SUPERH 1
#elif defined(__sh__) || defined(__SH__)
#  define SIMDE_ARCH_SUPERH 1
#endif

/* IBM System z
   <https://en.wikipedia.org/wiki/IBM_System_z> */
#if defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
#  define SIMDE_ARCH_SYSTEMZ
#endif

/* TMS320 DSP
   <https://en.wikipedia.org/wiki/Texas_Instruments_TMS320> */
#if defined(_TMS320C6740) || defined(__TMS320C6740__)
#  define SIMDE_ARCH_TMS320 6740
#elif defined(_TMS320C6700_PLUS) || defined(__TMS320C6700_PLUS__)
#  define SIMDE_ARCH_TMS320 6701
#elif defined(_TMS320C6700) || defined(__TMS320C6700__)
#  define SIMDE_ARCH_TMS320 6700
#elif defined(_TMS320C6600) || defined(__TMS320C6600__)
#  define SIMDE_ARCH_TMS320 6600
#elif defined(_TMS320C6400_PLUS) || defined(__TMS320C6400_PLUS__)
#  define SIMDE_ARCH_TMS320 6401
#elif defined(_TMS320C6400) || defined(__TMS320C6400__)
#  define SIMDE_ARCH_TMS320 6400
#elif defined(_TMS320C6200) || defined(__TMS320C6200__)
#  define SIMDE_ARCH_TMS320 6200
#elif defined(_TMS320C55X) || defined(__TMS320C55X__)
#  define SIMDE_ARCH_TMS320 550
#elif defined(_TMS320C54X) || defined(__TMS320C54X__)
#  define SIMDE_ARCH_TMS320 540
#elif defined(_TMS320C28X) || defined(__TMS320C28X__)
#  define SIMDE_ARCH_TMS320 280
#endif

/* WebAssembly */
#if defined(__wasm__)
#  define SIMDE_ARCH_WASM 1
#endif

#if defined(SIMDE_ARCH_WASM) && defined(__wasm_simd128__)
#  define SIMDE_ARCH_WASM_SIMD128
#endif

/* Xtensa
   <https://en.wikipedia.org/wiki/> */
#if defined(__xtensa__) || defined(__XTENSA__)
#  define SIMDE_ARCH_XTENSA 1
#endif

#endif /* !defined(SIMDE_ARCH_H) */
/* :: End simde-arch.h :: */

#include <stddef.h>

#if \
  HEDLEY_HAS_ATTRIBUTE(aligned) || \
  HEDLEY_GCC_VERSION_CHECK(2,95,0) || \
  HEDLEY_CRAY_VERSION_CHECK(8,4,0) || \
  HEDLEY_IBM_VERSION_CHECK(11,1,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_PGI_VERSION_CHECK(19,4,0) || \
  HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
  HEDLEY_TINYC_VERSION_CHECK(0,9,24) || \
  HEDLEY_TI_VERSION_CHECK(8,1,0)
#  define SIMDE_ALIGN(alignment) __attribute__((aligned(alignment)))
#elif defined(_MSC_VER) && !(defined(_M_ARM) && !defined(_M_ARM64))
#  define SIMDE_ALIGN(alignment) __declspec(align(alignment))
#elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#  define SIMDE_ALIGN(alignment) _Alignas(alignment)
#elif defined(__cplusplus) && (__cplusplus >= 201103L)
#  define SIMDE_ALIGN(alignment) alignas(alignment)
#else
#  define SIMDE_ALIGN(alignment)
#endif

#if \
  (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)) || \
  HEDLEY_HAS_FEATURE(c11_alignof)
#  define SIMDE_ALIGN_OF(T) (_Alignof(T))
#elif \
  (defined(__cplusplus) && (__cplusplus >= 201103L)) || \
  HEDLEY_HAS_FEATURE(cxx_alignof)
#  define SIMDE_ALIGN_OF(T) (alignof(T))
#elif HEDLEY_GCC_VERSION_CHECK(2,95,0) || \
    HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
    HEDLEY_IBM_VERSION_CHECK(11,1,0)
#  define SIMDE_ALIGN_OF(T) (__alignof__(T))
#endif

#if defined(SIMDE_ALIGN_OF)
#  define SIMDE_ALIGN_AS(N, T) SIMDE_ALIGN(SIMDE_ALIGN_OF(T))
#else
#  define SIMDE_ALIGN_AS(N, T) SIMDE_ALIGN(N)
#endif

#define simde_assert_aligned(alignment, val) \
  simde_assert_int(HEDLEY_REINTERPRET_CAST(uintptr_t, HEDLEY_REINTERPRET_CAST(const void*, (val))) % (alignment), ==, 0)

/* TODO: this should really do something like
   HEDLEY_STATIC_CAST(T, (simde_assert_int(alignment, v), v))
   but I need to think about how to handle it in all compilers...
   may end up moving to Hedley, too. */
#if HEDLEY_HAS_BUILTIN(__builtin_assume_aligned)
#  define SIMDE_CAST_ALIGN(alignment, T, v) HEDLEY_REINTERPRET_CAST(T, __builtin_assume_aligned(v, alignment))
#elif HEDLEY_HAS_WARNING("-Wcast-align")
#  define SIMDE_CAST_ALIGN(alignment, T, v) \
    HEDLEY_DIAGNOSTIC_PUSH \
    _Pragma("clang diagnostic ignored \"-Wcast-align\"") \
    HEDLEY_REINTERPRET_CAST(T, (v)) \
    HEDLEY_DIAGNOSTIC_POP
#else
#  define SIMDE_CAST_ALIGN(alignment, T, v) HEDLEY_REINTERPRET_CAST(T, (v))
#endif

#if \
  (HEDLEY_HAS_ATTRIBUTE(may_alias) && !defined(HEDLEY_SUNPRO_VERSION)) || \
  HEDLEY_GCC_VERSION_CHECK(3,3,0) || \
  HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
  HEDLEY_IBM_VERSION_CHECK(13,1,0)
#  define SIMDE_MAY_ALIAS __attribute__((__may_alias__))
#else
#  define SIMDE_MAY_ALIAS
#endif

/*  Lots of compilers support GCC-style vector extensions, but many
    don't support all the features.  Define different macros depending
    on support for
    
    * SIMDE_VECTOR - Declaring a vector.
    * SIMDE_VECTOR_OPS - basic operations (binary and unary).
    * SIMDE_VECTOR_SCALAR - For binary operators, the second argument
        can be a scalar, in which case the result is as if that scalar
        had been broadcast to all lanes of a vector.
    * SIMDE_VECTOR_SUBSCRIPT - Supports array subscript notation for
        extracting/inserting a single element.=
    
    SIMDE_VECTOR can be assumed if any others are defined, the
    others are independent. */
#if !defined(SIMDE_NO_VECTOR)
#  if \
    HEDLEY_GCC_VERSION_CHECK(4,8,0)
#    define SIMDE_VECTOR(size) __attribute__((__vector_size__(size)))
#    define SIMDE_VECTOR_OPS
#    define SIMDE_VECTOR_SCALAR
#    define SIMDE_VECTOR_SUBSCRIPT
#  elif HEDLEY_INTEL_VERSION_CHECK(16,0,0)
#    define SIMDE_VECTOR(size) __attribute__((__vector_size__(size)))
#    define SIMDE_VECTOR_OPS
/* ICC only supports SIMDE_VECTOR_SCALAR for constants */
#    define SIMDE_VECTOR_SUBSCRIPT
#  elif \
    HEDLEY_GCC_VERSION_CHECK(4,1,0) || \
    HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#    define SIMDE_VECTOR(size) __attribute__((__vector_size__(size)))
#    define SIMDE_VECTOR_OPS
#  elif HEDLEY_SUNPRO_VERSION_CHECK(5,12,0)
#    define SIMDE_VECTOR(size) __attribute__((__vector_size__(size)))
#  elif HEDLEY_HAS_ATTRIBUTE(vector_size)
#    define SIMDE_VECTOR(size) __attribute__((__vector_size__(size)))
#    define SIMDE_VECTOR_OPS
#    define SIMDE_VECTOR_SUBSCRIPT
#    if HEDLEY_HAS_ATTRIBUTE(diagnose_if) /* clang 4.0 */
#      define SIMDE_VECTOR_SCALAR
#    endif
#  endif

/* GCC and clang have built-in functions to handle shuffling and
   converting of vectors, but the implementations are slightly
   different.  This macro is just an abstraction over them.  Note that
   elem_size is in bits but vec_size is in bytes. */
#  if !defined(SIMDE_NO_SHUFFLE_VECTOR) && defined(SIMDE_VECTOR_SUBSCRIPT)
#    if HEDLEY_HAS_BUILTIN(__builtin_shufflevector)
#      define SIMDE__SHUFFLE_VECTOR(elem_size, vec_size, a, b, ...) __builtin_shufflevector(a, b, __VA_ARGS__)
#    elif HEDLEY_GCC_HAS_BUILTIN(__builtin_shuffle,4,7,0) && !defined(__INTEL_COMPILER)
#      define SIMDE__SHUFFLE_VECTOR(elem_size, vec_size, a, b, ...) (__extension__ ({ \
         int##elem_size##_t SIMDE_VECTOR(vec_size) simde_shuffle_ = { __VA_ARGS__ }; \
           __builtin_shuffle(a, b, simde_shuffle_); \
         }))
#    endif
#  endif

/* TODO: this actually works on XL C/C++ without SIMDE_VECTOR_SUBSCRIPT
   but the code needs to be refactored a bit to take advantage. */
#  if !defined(SIMDE_NO_CONVERT_VECTOR) && defined(SIMDE_VECTOR_SUBSCRIPT)
#    if HEDLEY_HAS_BUILTIN(__builtin_convertvector) || HEDLEY_GCC_VERSION_CHECK(9,0,0)
#      if HEDLEY_GCC_VERSION_CHECK(9,0,0) && !HEDLEY_GCC_VERSION_CHECK(9,3,0)
         /* https://gcc.gnu.org/bugzilla/show_bug.cgi?id=93557 */
#        define SIMDE__CONVERT_VECTOR(to, from) ((to) = (__extension__({ \
             __typeof__(from) from_ = (from); \
             ((void) from_); \
             __builtin_convertvector(from_, __typeof__(to)); \
           })))
#      else
#        define SIMDE__CONVERT_VECTOR(to, from) ((to) = __builtin_convertvector((from), __typeof__(to)))
#      endif
#    endif
#  endif
#endif

/* Since we currently require SUBSCRIPT before using a vector in a
   union, we define these as dependencies of SUBSCRIPT.  They are
   likely to disappear in the future, once SIMDe learns how to make
   use of vectors without using the union members.  Do not use them
   in your code unless you're okay with it breaking when SIMDe
   changes. */
#if defined(SIMDE_VECTOR_SUBSCRIPT)
#  if defined(SIMDE_VECTOR_OPS)
#    define SIMDE_VECTOR_SUBSCRIPT_OPS
#  endif
#  if defined(SIMDE_VECTOR_SCALAR)
#    define SIMDE_VECTOR_SUBSCRIPT_SCALAR
#  endif
#endif

#if !defined(SIMDE_ENABLE_OPENMP) && ((defined(_OPENMP) && (_OPENMP >= 201307L)) || (defined(_OPENMP_SIMD) && (_OPENMP_SIMD >= 201307L)))
#  define SIMDE_ENABLE_OPENMP
#endif

#if !defined(SIMDE_ENABLE_CILKPLUS) && (defined(__cilk) || defined(HEDLEY_INTEL_VERSION))
#  define SIMDE_ENABLE_CILKPLUS
#endif

#if defined(SIMDE_ENABLE_OPENMP)
#  define SIMDE__VECTORIZE _Pragma("omp simd")
#  define SIMDE__VECTORIZE_SAFELEN(l) HEDLEY_PRAGMA(omp simd safelen(l))
#  define SIMDE__VECTORIZE_REDUCTION(r) HEDLEY_PRAGMA(omp simd reduction(r))
#  define SIMDE__VECTORIZE_ALIGNED(a) HEDLEY_PRAGMA(omp simd aligned(a))
#elif defined(SIMDE_ENABLE_CILKPLUS)
#  define SIMDE__VECTORIZE _Pragma("simd")
#  define SIMDE__VECTORIZE_SAFELEN(l) HEDLEY_PRAGMA(simd vectorlength(l))
#  define SIMDE__VECTORIZE_REDUCTION(r) HEDLEY_PRAGMA(simd reduction(r))
#  define SIMDE__VECTORIZE_ALIGNED(a) HEDLEY_PRAGMA(simd aligned(a))
#elif defined(__clang__)
#  define SIMDE__VECTORIZE _Pragma("clang loop vectorize(enable)")
#  define SIMDE__VECTORIZE_SAFELEN(l) HEDLEY_PRAGMA(clang loop vectorize_width(l))
#  define SIMDE__VECTORIZE_REDUCTION(r) SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_ALIGNED(a)
#elif HEDLEY_GCC_VERSION_CHECK(4,9,0)
#  define SIMDE__VECTORIZE _Pragma("GCC ivdep")
#  define SIMDE__VECTORIZE_SAFELEN(l) SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_REDUCTION(r) SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_ALIGNED(a)
#elif HEDLEY_CRAY_VERSION_CHECK(5,0,0)
#  define SIMDE__VECTORIZE _Pragma("_CRI ivdep")
#  define SIMDE__VECTORIZE_SAFELEN(l) SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_REDUCTION(r) SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_ALIGNED(a)
#else
#  define SIMDE__VECTORIZE
#  define SIMDE__VECTORIZE_SAFELEN(l)
#  define SIMDE__VECTORIZE_REDUCTION(r)
#  define SIMDE__VECTORIZE_ALIGNED(a)
#endif

#define SIMDE__MASK_NZ(v, mask) (((v) & (mask)) | !((v) & (mask)))

/* Intended for checking coverage, you should never use this in
   production. */
#if defined(SIMDE_NO_INLINE)
#  define SIMDE__FUNCTION_ATTRIBUTES HEDLEY_NEVER_INLINE static
#else
#  define SIMDE__FUNCTION_ATTRIBUTES HEDLEY_ALWAYS_INLINE static
#endif

#if \
    HEDLEY_HAS_ATTRIBUTE(unused) || \
    HEDLEY_GCC_VERSION_CHECK(2,95,0)
#  define SIMDE__FUNCTION_POSSIBLY_UNUSED __attribute__((__unused__))
#else
#  define SIMDE__FUNCTION_POSSIBLY_UNUSED
#endif

#if HEDLEY_HAS_WARNING("-Wused-but-marked-unused")
#  define SIMDE_DIAGNOSTIC_DISABLE_USED_BUT_MARKED_UNUSED _Pragma("clang diagnostic ignored \"-Wused-but-marked-unused\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_USED_BUT_MARKED_UNUSED
#endif

#if defined(_MSC_VER)
#  define SIMDE__BEGIN_DECLS HEDLEY_DIAGNOSTIC_PUSH __pragma(warning(disable:4996 4204)) HEDLEY_BEGIN_C_DECLS
#  define SIMDE__END_DECLS HEDLEY_DIAGNOSTIC_POP HEDLEY_END_C_DECLS
#else
#  define SIMDE__BEGIN_DECLS \
     HEDLEY_DIAGNOSTIC_PUSH \
     SIMDE_DIAGNOSTIC_DISABLE_USED_BUT_MARKED_UNUSED \
     HEDLEY_BEGIN_C_DECLS
#  define SIMDE__END_DECLS \
     HEDLEY_END_C_DECLS \
     HEDLEY_DIAGNOSTIC_POP
#endif

#if HEDLEY_HAS_WARNING("-Wpedantic")
#  define SIMDE_DIAGNOSTIC_DISABLE_INT128 _Pragma("clang diagnostic ignored \"-Wpedantic\"")
#elif defined(HEDLEY_GCC_VERSION)
#  define SIMDE_DIAGNOSTIC_DISABLE_INT128 _Pragma("GCC diagnostic ignored \"-Wpedantic\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_INT128
#endif

#if defined(__SIZEOF_INT128__)
#  define SIMDE__HAVE_INT128
HEDLEY_DIAGNOSTIC_PUSH
SIMDE_DIAGNOSTIC_DISABLE_INT128
typedef __int128 simde_int128;
typedef unsigned __int128 simde_uint128;
HEDLEY_DIAGNOSTIC_POP
#endif

#if defined(__BYTE_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && defined(__ORDER_BIG_ENDIAN__)
#  if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#    define SIMDE_BYTE_ORDER_LE
#  else
#    define SIMDE_BYTE_ORDER_BE
#  endif
#endif

/* TODO: we should at least make an attempt to detect the correct
   types for simde_float32/float64 instead of just assuming float and
   double. */

#if !defined(SIMDE_FLOAT32_TYPE)
#  define SIMDE_FLOAT32_TYPE float
#  define SIMDE_FLOAT32_C(value) value##f
#else
#  define SIMDE_FLOAT32_C(value) ((SIMDE_FLOAT32_TYPE) value)
#endif
typedef SIMDE_FLOAT32_TYPE simde_float32;
HEDLEY_STATIC_ASSERT(sizeof(simde_float32) == 4, "Unable to find 32-bit floating-point type.");

#if !defined(SIMDE_FLOAT64_TYPE)
#  define SIMDE_FLOAT64_TYPE double
#  define SIMDE_FLOAT64_C(value) value
#else
#  define SIMDE_FLOAT32_C(value) ((SIMDE_FLOAT64_TYPE) value)
#endif
typedef SIMDE_FLOAT64_TYPE simde_float64;
HEDLEY_STATIC_ASSERT(sizeof(simde_float64) == 8, "Unable to find 64-bit floating-point type.");

/* Whether to assume that the compiler can auto-vectorize reasonably
   well.  This will cause SIMDe to attempt to compose vector
   operations using more simple vector operations instead of minimize
   serial work.

   As an example, consider the _mm_add_ss(a, b) function from SSE,
   which returns { a0 + b0, a1, a2, a3 }.  This pattern is repeated
   for other operations (sub, mul, etc.).

   The naïve implementation would result in loading a0 and b0, adding
   them into a temporary variable, then splicing that value into a new
   vector with the remaining elements from a.

   On platforms which support vectorization, it's generally faster to
   simply perform the operation on the entire vector to avoid having
   to move data between SIMD registers and non-SIMD registers.
   Basically, instead of the temporary variable being (a0 + b0) it
   would be a vector of (a + b), which is then combined with a to form
   the result.

   By default, SIMDe will prefer the pure-vector versions if we detect
   a vector ISA extension, but this can be overridden by defining
   SIMDE_NO_ASSUME_VECTORIZATION.  You can also define
   SIMDE_ASSUME_VECTORIZATION if you want to force SIMDe to use the
   vectorized version. */
#if !defined(SIMDE_NO_ASSUME_VECTORIZATION) && !defined(SIMDE_ASSUME_VECTORIZATION)
#  if defined(__SSE__) || defined(__ARM_NEON) || defined(__mips_msa) || defined(__ALTIVEC__)
#    define SIMDE_ASSUME_VECTORIZATION
#  endif
#endif

#if HEDLEY_HAS_WARNING("-Wbad-function-cast")
#  define SIMDE_CONVERT_FTOI(T,v) \
    HEDLEY_DIAGNOSTIC_PUSH \
    _Pragma("clang diagnostic ignored \"-Wbad-function-cast\"") \
    HEDLEY_STATIC_CAST(T, (v)) \
    HEDLEY_DIAGNOSTIC_POP
#else
#  define SIMDE_CONVERT_FTOI(T,v) ((T) (v))
#endif

/* This behaves like reinterpret_cast<to>(value), except that it will
   attempt te verify that value is of type "from" or "to". */
#if defined(__cplusplus)
  template <typename To, typename From> class SIMDeCheckedReinterpretCastImpl {
    public:
      static To convert (To value) { return value; };
      static To convert (From value) { return reinterpret_cast<To>(value); };
  };
  #define SIMDE_CHECKED_REINTERPRET_CAST(to, from, value) (SIMDeCheckedReinterpretCastImpl<to, from>::convert(value))
#elif \
    HEDLEY_HAS_BUILTIN(__builtin_types_compatible_p) || \
    HEDLEY_GCC_VERSION_CHECK(3,4,0) || \
    HEDLEY_ARM_VERSION_CHECK(5,0,4) || \
    HEDLEY_CRAY_VERSION_CHECK(8,1,0) || \
    HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
    HEDLEY_IBM_VERSION_CHECK(16,1,0)
  #define SIMDE_CHECKED_REINTERPRET_CAST(to, from, value) \
    (__extension__({ \
      HEDLEY_STATIC_ASSERT(__builtin_types_compatible_p(from, __typeof__(value)) || \
		    __builtin_types_compatible_p(to, __typeof__(value)), \
		    "Type of `" #value "` must be either `" #to "` or `" #from "`"); \
      HEDLEY_REINTERPRET_CAST(to, value); \
    }))
#else
  #define SIMDE_CHECKED_REINTERPRET_CAST(to, from, value) HEDLEY_REINTERPRET_CAST(to, value)
#endif

#if HEDLEY_HAS_WARNING("-Wfloat-equal")
#  define SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL _Pragma("clang diagnostic ignored \"-Wfloat-equal\"")
#elif HEDLEY_GCC_VERSION_CHECK(3,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL _Pragma("GCC diagnostic ignored \"-Wfloat-equal\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL
#endif

/* Some algorithms are iterative, and fewer iterations means less
   accuracy.  Lower values here will result in faster, but less
   accurate, calculations for some functions. */
#if !defined(SIMDE_ACCURACY_ITERS)
#  define SIMDE_ACCURACY_ITERS 2
#endif

#if defined(SIMDE__ASSUME_ALIGNED)
#  undef SIMDE__ASSUME_ALIGNED
#endif
#if HEDLEY_INTEL_VERSION_CHECK(9,0,0)
#  define SIMDE__ASSUME_ALIGNED(ptr, align) __assume_aligned(ptr, align)
#elif HEDLEY_MSVC_VERSION_CHECK(13,10,0)
#  define SIMDE__ASSUME_ALIGNED(ptr, align) __assume((((char*) ptr) - ((char*) 0)) % (align) == 0)
#elif HEDLEY_GCC_HAS_BUILTIN(__builtin_assume_aligned,4,7,0)
#  define SIMDE__ASSUME_ALIGNED(ptr, align) (ptr = (__typeof__(ptr)) __builtin_assume_aligned((ptr), align))
#elif HEDLEY_CLANG_HAS_BUILTIN(__builtin_assume)
#  define SIMDE__ASSUME_ALIGNED(ptr, align) __builtin_assume((((char*) ptr) - ((char*) 0)) % (align) == 0)
#elif HEDLEY_GCC_HAS_BUILTIN(__builtin_unreachable,4,5,0)
#  define SIMDE__ASSUME_ALIGNED(ptr, align) ((((char*) ptr) - ((char*) 0)) % (align) == 0) ? (1) : (__builtin_unreachable(), 0)
#else
#  define SIMDE__ASSUME_ALIGNED(ptr, align)
#endif

/* This is only to help us implement functions like _mm_undefined_ps. */
#if defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
#  undef SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_
#endif
#if HEDLEY_HAS_WARNING("-Wuninitialized")
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("clang diagnostic ignored \"-Wuninitialized\"")
#elif HEDLEY_GCC_VERSION_CHECK(4,2,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("GCC diagnostic ignored \"-Wuninitialized\"")
#elif HEDLEY_PGI_VERSION_CHECK(19,10,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("diag_suppress 549")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,14,0) && defined(__cplusplus)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("error_messages(off,SEC_UNINITIALIZED_MEM_READ,SEC_UNDEFINED_RETURN_VALUE,unassigned)")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,14,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("error_messages(off,SEC_UNINITIALIZED_MEM_READ,SEC_UNDEFINED_RETURN_VALUE)")
#elif HEDLEY_SUNPRO_VERSION_CHECK(5,12,0) && defined(__cplusplus)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("error_messages(off,unassigned)")
/* #elif \
     HEDLEY_TI_VERSION_CHECK(16,9,9) || \
     HEDLEY_TI_CL6X_VERSION_CHECK(8,0,0) || \
     HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
     HEDLEY_TI_CLPRU_VERSION_CHECK(2,3,2)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("diag_suppress 551") */
#elif HEDLEY_INTEL_VERSION_CHECK(13,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ _Pragma("warning(disable:592)")
#elif HEDLEY_MSVC_VERSION_CHECK(19,0,0) && !defined(__MSVC_RUNTIME_CHECKS)
#  define SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_ __pragma(warning(disable:4700))
#endif

#if HEDLEY_GCC_VERSION_CHECK(8,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_PSABI_ _Pragma("GCC diagnostic ignored \"-Wpsabi\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_PSABI_
#endif

#if HEDLEY_INTEL_VERSION_CHECK(19,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_NO_EMMS_INSTRUCTION_ _Pragma("warning(disable:13200 13203)")
#elif defined(HEDLEY_MSVC_VERSION)
#  define SIMDE_DIAGNOSTIC_DISABLE_NO_EMMS_INSTRUCTION_ __pragma(warning(disable:4799))
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_NO_EMMS_INSTRUCTION_
#endif

#if HEDLEY_INTEL_VERSION_CHECK(18,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_SIMD_PRAGMA_DEPRECATED_ _Pragma("warning(disable:3948)")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_SIMD_PRAGMA_DEPRECATED_
#endif

#if \
  HEDLEY_HAS_WARNING("-Wtautological-compare") || \
  HEDLEY_GCC_VERSION_CHECK(7,0,0)
#  if defined(__cplusplus)
#    if (__cplusplus >= 201402L)
#      define SIMDE_TAUTOLOGICAL_COMPARE_(expr) \
        (([](auto expr_){ \
          HEDLEY_DIAGNOSTIC_PUSH \
          _Pragma("GCC diagnostic ignored \"-Wtautological-compare\"") \
          return (expr_); \
          HEDLEY_DIAGNOSTIC_POP \
        })(expr))
#    endif
#  else
#    define SIMDE_TAUTOLOGICAL_COMPARE_(expr) \
       (__extension__ ({ \
         HEDLEY_DIAGNOSTIC_PUSH \
         _Pragma("GCC diagnostic ignored \"-Wtautological-compare\"") \
         (expr); \
         HEDLEY_DIAGNOSTIC_POP \
     }))
#  endif
#endif
#if !defined(SIMDE_TAUTOLOGICAL_COMPARE_)
#  define SIMDE_TAUTOLOGICAL_COMPARE_(expr) (expr)
#endif

#if \
  defined(HEDLEY_MSVC_VERSION)
#  define SIMDE_DIAGNOSTIC_DISABLE_NON_CONSTANT_AGGREGATE_INITIALIZER_ __pragma(warning(disable:4204))
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_NON_CONSTANT_AGGREGATE_INITIALIZER_
#endif

#if \
  HEDLEY_HAS_WARNING("-Wconditional-uninitialized")
#  define SIMDE_DIAGNOSTIC_DISABLE_CONDITIONAL_UNINITIALIZED_ _Pragma("clang diagnostic ignored \"-Wconditional-uninitialized\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_CONDITIONAL_UNINITIALIZED_
#endif

#if \
  HEDLEY_HAS_WARNING("-Wfloat-equal") || \
  HEDLEY_GCC_VERSION_CHECK(3,0,0)
#  define SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL_ _Pragma("GCC diagnostic ignored \"-Wfloat-equal\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL_
#endif

#if HEDLEY_HAS_WARNING("-Wcast-align")
#  define SIMDE_DIAGNOSTIC_DISABLE_CAST_ALIGN_ _Pragma("clang diagnostic ignored \"-Wcast-align\"")
#else
#  define SIMDE_DIAGNOSTIC_DISABLE_CAST_ALIGN_
#endif

#define SIMDE_DISABLE_UNWANTED_DIAGNOSTICS \
  SIMDE_DIAGNOSTIC_DISABLE_PSABI_ \
  SIMDE_DIAGNOSTIC_DISABLE_NO_EMMS_INSTRUCTION_ \
  SIMDE_DIAGNOSTIC_DISABLE_SIMD_PRAGMA_DEPRECATED_ \
  SIMDE_DIAGNOSTIC_DISABLE_CONDITIONAL_UNINITIALIZED_ \
  SIMDE_DIAGNOSTIC_DISABLE_FLOAT_EQUAL_ \
  SIMDE_DIAGNOSTIC_DISABLE_NON_CONSTANT_AGGREGATE_INITIALIZER_

#if defined(__STDC_HOSTED__)
#  define SIMDE_STDC_HOSTED __STDC_HOSTED__
#else
#  if \
     defined(HEDLEY_PGI_VERSION_CHECK) || \
     defined(HEDLEY_MSVC_VERSION_CHECK)
#    define SIMDE_STDC_HOSTED 1
#  else
#    define SIMDE_STDC_HOSTED 0
#  endif
#endif

/* Try to deal with environments without a standard library. */
#if !defined(simde_memcpy) || !defined(simde_memset)
  #if !defined(SIMDE_NO_STRING_H) && defined(__has_include)
    #if __has_include(<string.h>)
      #include <string.h>
      #if !defined(simde_memcpy)
        #define simde_memcpy(dest, src, n) memcpy(dest, src, n)
      #endif
      #if !defined(simde_memset)
        #define simde_memset(s, c, n) memset(s, c, n)
      #endif
    #else
      #define SIMDE_NO_STRING_H
    #endif
  #endif
#endif
#if !defined(simde_memcpy) || !defined(simde_memset)
  #if !defined(SIMDE_NO_STRING_H) && (SIMDE_STDC_HOSTED == 1)
    #include <string.h>
    #if !defined(simde_memcpy)
      #define simde_memcpy(dest, src, n) memcpy(dest, src, n)
    #endif
    #if !defined(simde_memset)
      #define simde_memset(s, c, n) memset(s, c, n)
    #endif
  #elif (HEDLEY_HAS_BUILTIN(__builtin_memcpy) && HEDLEY_HAS_BUILTIN(__builtin_memset)) || HEDLEY_GCC_VERSION_CHECK(4,2,0)
    #if !defined(simde_memcpy)
      #define simde_memcpy(dest, src, n) __builtin_memcpy(dest, src, n)
    #endif
    #if !defined(simde_memset)
      #define simde_memset(s, c, n) __builtin_memset(s, c, n)
    #endif
  #else
    /* These are meant to be portable, not fast.  If you're hitting them you
     * should think about providing your own (by defining the simde_memcpy
     * macro prior to including any SIMDe files) or submitting a patch to
     * SIMDe so we can detect your system-provided memcpy/memset, like by
     * adding your compiler to the checks for __builtin_memcpy and/or
     * __builtin_memset. */
    #if !defined(simde_memcpy)
      SIMDE__FUNCTION_ATTRIBUTES
      void
      simde_memcpy_(void* dest, const void* src, size_t len) {
        char* dest_ = HEDLEY_STATIC_CAST(char*, dest);
        char* src_ = HEDLEY_STATIC_CAST(const char*, src);
        for (size_t i = 0 ; i < len ; i++) {
          dest_[i] = src_[i];
        }
      }
      #define simde_memcpy(dest, src, n) simde_memcpy_(dest, src, n)
    #endif

    #if !defined(simde_memset)
      SIMDE__FUNCTION_ATTRIBUTES
      void
      simde_memset_(void* s, int c, size_t len) {
        char* s_ = HEDLEY_STATIC_CAST(char*, s);
        char c_ = HEDLEY_STATIC_CAST(char, c);
        for (size_t i = 0 ; i < len ; i++) {
          s_[i] = c_[i];
        }
      }
      #define simde_memset(s, c, n) simde_memset_(s, c, n)
    #endif
  #endif /* !defined(SIMDE_NO_STRING_H) && (SIMDE_STDC_HOSTED == 1) */
#endif /* !defined(simde_memcpy) || !defined(simde_memset) */

#if !defined(SIMDE_NO_MATH_H)
  #if defined(HUGE_VAL)
    /* <math.h> has already been included */
  #elif defined(__has_include)
    #if !__has_include(<math.h>)
      #define SIMDE_NO_MATH_H
    #endif
  #elif SIMDE_STDC_HOSTED == 0
    #define SIMDE_NO_MATH_H
  #endif
#endif

#if !defined(SIMDE_NO_MATH_H)
  #define SIMDE_HAVE_MATH_H
  #include <math.h>
#endif

#if !defined(simde_isnan)
  #if !defined(SIMDE_NO_MATH_H)
    #define simde_isnan(v) isnan(v)
  #elif \
      HEDLEY_HAS_BUILTIN(__builtin_isnan) || \
      HEDLEY_GCC_VERSION_CHECK(4,4,0) || \
      HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
      HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
      HEDLEY_IBM_VERSION_CHECK(13,1,0)
    #define simde_isnan(v) __builtin_isnan(v)
  #endif
#endif

#if !defined(simde_isnanf)
  #if !defined(SIMDE_NO_MATH_H)
    #define simde_isnanf(v) isnan(v)
  #elif \
      HEDLEY_HAS_BUILTIN(__builtin_isnanf) || \
      HEDLEY_GCC_VERSION_CHECK(4,4,0) || \
      HEDLEY_ARM_VERSION_CHECK(4,1,0) || \
      HEDLEY_INTEL_VERSION_CHECK(13,0,0) || \
      HEDLEY_IBM_VERSION_CHECK(13,1,0)
    #define simde_isnanf(v) __builtin_isnanf(v)
  #endif
#endif

#if defined(__has_include)
#  if __has_include(<fenv.h>)
#    include <fenv.h>
#  endif
#  if __has_include(<stdlib.h>)
#    include <stdlib.h>
#  endif
#elif SIMDE_STDC_HOSTED == 1
#  include <stdlib.h>
#  include <fenv.h>
#endif

#if defined(SIMDE_HAVE_FENV_H)
#  include <fenv.h>
#endif
#if defined(SIMDE_HAVE_STDLIB_H)
#  include <stdlib.h>
#endif

#if !defined(SIMDE_HAVE_FENV_H) && defined(FE_DIVBYZERO)
#  define SIMDE_HAVE_FENV_H
#endif
#if !defined(SIMDE_HAVE_STDLIB_H) && defined(EXIT_SUCCESS)
#  define SIMDE_HAVE_STDLIB_H
#endif

/* :: Begin check.h :: */
/* Check (assertions)
 * Portable Snippets - https://gitub.com/nemequ/portable-snippets
 * Created by Evan Nemerson <evan@nemerson.com>
 *
 *   To the extent possible under law, the authors have waived all
 *   copyright and related or neighboring rights to this code.  For
 *   details, see the Creative Commons Zero 1.0 Universal license at
 *   https://creativecommons.org/publicdomain/zero/1.0/
 */

#if !defined(SIMDE_CHECK_H)
#define SIMDE_CHECK_H

#if !defined(SIMDE_NDEBUG) && !defined(SIMDE_DEBUG)
#  define SIMDE_NDEBUG 1
#endif

#include <stdint.h>

#if !defined(_WIN32)
#  define SIMDE_SIZE_MODIFIER "z"
#  define SIMDE_CHAR_MODIFIER "hh"
#  define SIMDE_SHORT_MODIFIER "h"
#else
#  if defined(_M_X64) || defined(__amd64__)
#    define SIMDE_SIZE_MODIFIER "I64"
#  else
#    define SIMDE_SIZE_MODIFIER ""
#  endif
#  define SIMDE_CHAR_MODIFIER ""
#  define SIMDE_SHORT_MODIFIER ""
#endif

#if defined(_MSC_VER) &&  (_MSC_VER >= 1500)
#  define SIMDE__PUSH_DISABLE_MSVC_C4127 __pragma(warning(push)) __pragma(warning(disable:4127))
#  define SIMDE__POP_DISABLE_MSVC_C4127 __pragma(warning(pop))
#else
#  define SIMDE__PUSH_DISABLE_MSVC_C4127
#  define SIMDE__POP_DISABLE_MSVC_C4127
#endif

#if !defined(simde_errorf)
#  if defined(__has_include)
#    if __has_include(<stdio.h>)
#      include <stdio.h>
#    endif
#  elif defined(SIMDE_STDC_HOSTED)
#    if SIMDE_STDC_HOSTED == 1
#      include <stdio.h>
#    endif
#  elif defined(__STDC_HOSTED__)
#    if __STDC_HOSTETD__ == 1
#      include <stdio.h>
#    endif
#  endif

/* :: Begin debug-trap.h :: */
/* Debugging assertions and traps
 * Portable Snippets - https://gitub.com/nemequ/portable-snippets
 * Created by Evan Nemerson <evan@nemerson.com>
 *
 *   To the extent possible under law, the authors have waived all
 *   copyright and related or neighboring rights to this code.  For
 *   details, see the Creative Commons Zero 1.0 Universal license at
 *   https://creativecommons.org/publicdomain/zero/1.0/
 */

#if !defined(SIMDE_DEBUG_TRAP_H)
#define SIMDE_DEBUG_TRAP_H

#if !defined(SIMDE_NDEBUG) && defined(NDEBUG) && !defined(SIMDE_DEBUG)
#  define SIMDE_NDEBUG 1
#endif

#if defined(__has_builtin) && !defined(__ibmxl__)
#  if __has_builtin(__builtin_debugtrap)
#    define simde_trap() __builtin_debugtrap()
#  elif __has_builtin(__debugbreak)
#    define simde_trap() __debugbreak()
#  endif
#endif
#if !defined(simde_trap)
#  if defined(_MSC_VER) || defined(__INTEL_COMPILER)
#    define simde_trap() __debugbreak()
#  elif defined(__ARMCC_VERSION)
#    define simde_trap() __breakpoint(42)
#  elif defined(__ibmxl__) || defined(__xlC__)
#    include <builtins.h>
#    define simde_trap() __trap(42)
#  elif defined(__DMC__) && defined(_M_IX86)
     static inline void simde_trap(void) { __asm int 3h; }
#  elif defined(__i386__) || defined(__x86_64__)
     static inline void simde_trap(void) { __asm__ __volatile__("int $03"); }
#  elif defined(__thumb__)
     static inline void simde_trap(void) { __asm__ __volatile__(".inst 0xde01"); }
#  elif defined(__aarch64__)
     static inline void simde_trap(void) { __asm__ __volatile__(".inst 0xd4200000"); }
#  elif defined(__arm__)
     static inline void simde_trap(void) { __asm__ __volatile__(".inst 0xe7f001f0"); }
#  elif defined (__alpha__) && !defined(__osf__)
     static inline void simde_trap(void) { __asm__ __volatile__("bpt"); }
#  elif defined(_54_)
     static inline void simde_trap(void) { __asm__ __volatile__("ESTOP"); }
#  elif defined(_55_)
     static inline void simde_trap(void) { __asm__ __volatile__(";\n .if (.MNEMONIC)\n ESTOP_1\n .else\n ESTOP_1()\n .endif\n NOP"); }
#  elif defined(_64P_)
     static inline void simde_trap(void) { __asm__ __volatile__("SWBP 0"); }
#  elif defined(_6x_)
     static inline void simde_trap(void) { __asm__ __volatile__("NOP\n .word 0x10000000"); }
#  elif defined(__STDC_HOSTED__) && (__STDC_HOSTED__ == 0) && defined(__GNUC__)
#    define simde_trap() __builtin_trap()
#  else
#    include <signal.h>
#    if defined(SIGTRAP)
#      define simde_trap() raise(SIGTRAP)
#    else
#      define simde_trap() raise(SIGABRT)
#    endif
#  endif
#endif

#if defined(HEDLEY_LIKELY)
#  define SIMDE_DBG_LIKELY(expr) HEDLEY_LIKELY(expr)
#elif defined(__GNUC__) && (__GNUC__ >= 3)
#  define SIMDE_DBG_LIKELY(expr) __builtin_expect(!!(expr), 1)
#else
#  define SIMDE_DBG_LIKELY(expr) (!!(expr))
#endif

#if !defined(SIMDE_NDEBUG) || (SIMDE_NDEBUG == 0)
#  define simde_dbg_assert(expr) do { \
    if (!SIMDE_DBG_LIKELY(expr)) { \
      simde_trap(); \
    } \
  } while (0)
#else
#  define simde_dbg_assert(expr)
#endif

#endif /* !defined(SIMDE_DEBUG_TRAP_H) */
/* :: End debug-trap.h :: */

#  if defined(EOF)
#    define simde_errorf(format, ...) (fprintf(stderr, format, __VA_ARGS__), abort())
#  else
#    define simde_errorf(format, ...) (simde_trap())
#  endif
#endif

#define simde_error(msg) simde_errorf("%s", msg)

#if defined(SIMDE_NDEBUG)
#  if defined(SIMDE_CHECK_FAIL_DEFINED)
#    define simde_assert(expr)
#  else
#    if defined(HEDLEY_ASSUME)
#      define simde_assert(expr) HEDLEY_ASSUME(expr)
#    elif HEDLEY_GCC_VERSION_CHECK(4,5,0)
#      define simde_assert(expr) ((void) (!!(expr) ? 1 : (__builtin_unreachable(), 1)))
#    elif HEDLEY_MSVC_VERSION_CHECK(13,10,0)
#      define simde_assert(expr) __assume(expr)
#    else
#      define simde_assert(expr)
#    endif
#  endif
#  define simde_assert_true(expr) simde_assert(expr)
#  define simde_assert_false(expr) simde_assert(!(expr))
#  define simde_assert_type_full(prefix, suffix, T, fmt, a, op, b) simde_assert(((a) op (b)))
#  define simde_assert_double_equal(a, b, precision)
#  define simde_assert_string_equal(a, b)
#  define simde_assert_string_not_equal(a, b)
#  define simde_assert_memory_equal(size, a, b)
#  define simde_assert_memory_not_equal(size, a, b)
#else
#  define simde_assert(expr) \
    do { \
      if (!HEDLEY_LIKELY(expr)) { \
        simde_error("assertion failed: " #expr "\n"); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_true(expr) \
    do { \
      if (!HEDLEY_LIKELY(expr)) { \
        simde_error("assertion failed: " #expr " is not true\n"); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_false(expr) \
    do { \
      if (!HEDLEY_LIKELY(!(expr))) { \
        simde_error("assertion failed: " #expr " is not false\n"); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_type_full(prefix, suffix, T, fmt, a, op, b)   \
    do { \
      T simde_tmp_a_ = (a); \
      T simde_tmp_b_ = (b); \
      if (!(simde_tmp_a_ op simde_tmp_b_)) { \
        simde_errorf("assertion failed: %s %s %s (" prefix "%" fmt suffix " %s " prefix "%" fmt suffix ")\n", \
                     #a, #op, #b, simde_tmp_a_, #op, simde_tmp_b_); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_double_equal(a, b, precision) \
    do { \
      const double simde_tmp_a_ = (a); \
      const double simde_tmp_b_ = (b); \
      const double simde_tmp_diff_ = ((simde_tmp_a_ - simde_tmp_b_) < 0) ? \
        -(simde_tmp_a_ - simde_tmp_b_) : \
        (simde_tmp_a_ - simde_tmp_b_); \
      if (HEDLEY_UNLIKELY(simde_tmp_diff_ > 1e-##precision)) { \
        simde_errorf("assertion failed: %s == %s (%0." #precision "g == %0." #precision "g)\n", \
                     #a, #b, simde_tmp_a_, simde_tmp_b_); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  include <string.h>
#  define simde_assert_string_equal(a, b) \
    do { \
      const char* simde_tmp_a_ = a; \
      const char* simde_tmp_b_ = b; \
      if (HEDLEY_UNLIKELY(strcmp(simde_tmp_a_, simde_tmp_b_) != 0)) { \
        simde_errorf("assertion failed: string %s == %s (\"%s\" == \"%s\")\n", \
                     #a, #b, simde_tmp_a_, simde_tmp_b_); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_string_not_equal(a, b) \
    do { \
      const char* simde_tmp_a_ = a; \
      const char* simde_tmp_b_ = b; \
      if (HEDLEY_UNLIKELY(strcmp(simde_tmp_a_, simde_tmp_b_) == 0)) { \
        simde_errorf("assertion failed: string %s != %s (\"%s\" == \"%s\")\n", \
                     #a, #b, simde_tmp_a_, simde_tmp_b_); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_memory_equal(size, a, b) \
    do { \
      const unsigned char* simde_tmp_a_ = (const unsigned char*) (a); \
      const unsigned char* simde_tmp_b_ = (const unsigned char*) (b); \
      const size_t simde_tmp_size_ = (size); \
      if (HEDLEY_UNLIKELY(memcmp(simde_tmp_a_, simde_tmp_b_, simde_tmp_size_)) != 0) { \
        size_t simde_tmp_pos_; \
        for (simde_tmp_pos_ = 0 ; simde_tmp_pos_ < simde_tmp_size_ ; simde_tmp_pos_++) { \
          if (simde_tmp_a_[simde_tmp_pos_] != simde_tmp_b_[simde_tmp_pos_]) { \
            simde_errorf("assertion failed: memory %s == %s, at offset %" SIMDE_SIZE_MODIFIER "u\n", \
                         #a, #b, simde_tmp_pos_); \
            break; \
          } \
        } \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127

#  define simde_assert_memory_not_equal(size, a, b) \
    do { \
      const unsigned char* simde_tmp_a_ = (const unsigned char*) (a); \
      const unsigned char* simde_tmp_b_ = (const unsigned char*) (b); \
      const size_t simde_tmp_size_ = (size); \
      if (HEDLEY_UNLIKELY(memcmp(simde_tmp_a_, simde_tmp_b_, simde_tmp_size_)) == 0) { \
        simde_errorf("assertion failed: memory %s != %s (%" SIMDE_SIZE_MODIFIER "u bytes)\n", \
                     #a, #b, simde_tmp_size_); \
      } \
      SIMDE__PUSH_DISABLE_MSVC_C4127 \
    } while (0) \
    SIMDE__POP_DISABLE_MSVC_C4127
#endif

#define simde_assert_type(T, fmt, a, op, b) \
  simde_assert_type_full("", "", T, fmt, a, op, b)

#define simde_assert_char(a, op, b) \
  simde_assert_type_full("'\\x", "'", char, "02" SIMDE_CHAR_MODIFIER "x", a, op, b)
#define simde_assert_uchar(a, op, b) \
  simde_assert_type_full("'\\x", "'", unsigned char, "02" SIMDE_CHAR_MODIFIER "x", a, op, b)
#define simde_assert_short(a, op, b) \
  simde_assert_type(short, SIMDE_SHORT_MODIFIER "d", a, op, b)
#define simde_assert_ushort(a, op, b) \
  simde_assert_type(unsigned short, SIMDE_SHORT_MODIFIER "u", a, op, b)
#define simde_assert_int(a, op, b) \
  simde_assert_type(int, "d", a, op, b)
#define simde_assert_uint(a, op, b) \
  simde_assert_type(unsigned int, "u", a, op, b)
#define simde_assert_long(a, op, b) \
  simde_assert_type(long int, "ld", a, op, b)
#define simde_assert_ulong(a, op, b) \
  simde_assert_type(unsigned long int, "lu", a, op, b)
#define simde_assert_llong(a, op, b) \
  simde_assert_type(long long int, "lld", a, op, b)
#define simde_assert_ullong(a, op, b) \
  simde_assert_type(unsigned long long int, "llu", a, op, b)

#define simde_assert_size(a, op, b) \
  simde_assert_type(size_t, SIMDE_SIZE_MODIFIER "u", a, op, b)

#define simde_assert_float(a, op, b) \
  simde_assert_type(float, "f", a, op, b)
#define simde_assert_double(a, op, b) \
  simde_assert_type(double, "g", a, op, b)
#define simde_assert_ptr(a, op, b) \
  simde_assert_type(const void*, "p", a, op, b)

#define simde_assert_int8(a, op, b) \
  simde_assert_type(int8_t, PRIi8, a, op, b)
#define simde_assert_uint8(a, op, b) \
  simde_assert_type(uint8_t, PRIu8, a, op, b)
#define simde_assert_int16(a, op, b) \
  simde_assert_type(int16_t, PRIi16, a, op, b)
#define simde_assert_uint16(a, op, b) \
  simde_assert_type(uint16_t, PRIu16, a, op, b)
#define simde_assert_int32(a, op, b) \
  simde_assert_type(int32_t, PRIi32, a, op, b)
#define simde_assert_uint32(a, op, b) \
  simde_assert_type(uint32_t, PRIu32, a, op, b)
#define simde_assert_int64(a, op, b) \
  simde_assert_type(int64_t, PRIi64, a, op, b)
#define simde_assert_uint64(a, op, b) \
  simde_assert_type(uint64_t, PRIu64, a, op, b)

#define simde_assert_ptr_equal(a, b) \
  simde_assert_ptr(a, ==, b)
#define simde_assert_ptr_not_equal(a, b) \
  simde_assert_ptr(a, !=, b)
#define simde_assert_null(ptr) \
  simde_assert_ptr(ptr, ==, NULL)
#define simde_assert_not_null(ptr) \
  simde_assert_ptr(ptr, !=, NULL)
#define simde_assert_ptr_null(ptr) \
  simde_assert_ptr(ptr, ==, NULL)
#define simde_assert_ptr_not_null(ptr) \
  simde_assert_ptr(ptr, !=, NULL)

#endif /* !defined(SIMDE_CHECK_H) */
/* :: End check.h :: */

/* Sometimes we run into problems with specific versions of compilers
   which make the native versions unusable for us.  Often this is due
   to missing functions, sometimes buggy implementations, etc.  These
   macros are how we check for specific bugs.  As they are fixed we'll
   start only defining them for problematic compiler versions. */

#if !defined(SIMDE_IGNORE_COMPILER_BUGS)
#  if defined(HEDLEY_GCC_VERSION)
#    if !HEDLEY_GCC_VERSION_CHECK(4,9,0)
#      define SIMDE_BUG_GCC_REV_208793
#    endif
#    if !HEDLEY_GCC_VERSION_CHECK(5,0,0)
#      define SIMDE_BUG_GCC_BAD_MM_SRA_EPI32 /* TODO: find relevant bug or commit */
#    endif
#    if !HEDLEY_GCC_VERSION_CHECK(4,6,0)
#      define SIMDE_BUG_GCC_BAD_MM_EXTRACT_EPI8 /* TODO: find relevant bug or commit */
#    endif
#    if !HEDLEY_GCC_VERSION_CHECK(10,0,0)
#      define SIMDE_BUG_GCC_REV_274313
#    endif
#    if !HEDLEY_GCC_VERSION_CHECK(9,0,0) && defined(SIMDE_ARCH_AARCH64)
#      define SIMDE_BUG_GCC_ARM_SHIFT_SCALAR
#    endif
#    if defined(SIMDE_ARCH_X86) && !defined(SIMDE_ARCH_AMD64)
#      define SIMDE_BUG_GCC_94482
#    endif
#    if defined(SIMDE_ARCH_AARCH64)
#      define SIMDE_BUG_GCC_94488
#    endif
#  elif defined(__clang__)
#    if defined(SIMDE_ARCH_AARCH64)
#      define SIMDE_BUG_CLANG_45541
#    endif
#  endif
#  if defined(HEDLEY_EMSCRIPTEN_VERSION)
#    define SIMDE_BUG_EMSCRIPTEN_MISSING_IMPL /* Placeholder for (as yet) unfiled issues. */
#    define SIMDE_BUG_EMSCRIPTEN_5242
#  endif
#endif

#endif /* !defined(SIMDE_COMMON_H) */
/* :: End simde-common.h :: */

HEDLEY_DIAGNOSTIC_PUSH
SIMDE_DISABLE_UNWANTED_DIAGNOSTICS

#  if defined(SIMDE_MMX_FORCE_NATIVE)
#    define SIMDE_MMX_NATIVE
#  elif defined(SIMDE_ARCH_X86_MMX) && !defined(SIMDE_MMX_NO_NATIVE) && !defined(SIMDE_NO_NATIVE)
#    define SIMDE_MMX_NATIVE
#  elif defined(SIMDE_ARCH_ARM_NEON) && !defined(SIMDE_MMX_NO_NEON) && !defined(SIMDE_NO_NEON)
#    define SIMDE_MMX_NEON
#  endif

#  if defined(SIMDE_MMX_NATIVE)
#    define SIMDE_MMX_USE_NATIVE_TYPE
#  elif defined(SIMDE_ARCH_X86_SSE)
#    define SIMDE_MMX_USE_NATIVE_TYPE
#  endif

#  if defined(SIMDE_MMX_USE_NATIVE_TYPE)
#    include <mmintrin.h>
#  else
#    if defined(SIMDE_MMX_NEON)
#      include <arm_neon.h>
#    endif
#  endif
#  include <stdint.h>
#  include <limits.h>

SIMDE__BEGIN_DECLS

typedef union {
#if defined(SIMDE_VECTOR_SUBSCRIPT)
  SIMDE_ALIGN(8) int8_t          i8 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) int16_t        i16 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) int32_t        i32 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) int64_t        i64 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) uint8_t         u8 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) uint16_t       u16 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) uint32_t       u32 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) uint64_t       u64 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) simde_float32  f32 SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) int_fast32_t  i32f SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(8) uint_fast32_t u32f SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
#else
  SIMDE_ALIGN(8) int8_t          i8[8];
  SIMDE_ALIGN(8) int16_t        i16[4];
  SIMDE_ALIGN(8) int32_t        i32[2];
  SIMDE_ALIGN(8) int64_t        i64[1];
  SIMDE_ALIGN(8) uint8_t         u8[8];
  SIMDE_ALIGN(8) uint16_t       u16[4];
  SIMDE_ALIGN(8) uint32_t       u32[2];
  SIMDE_ALIGN(8) uint64_t       u64[1];
  SIMDE_ALIGN(8) simde_float32  f32[2];
  SIMDE_ALIGN(8) int_fast32_t  i32f[8 / sizeof(int_fast32_t)];
  SIMDE_ALIGN(8) uint_fast32_t u32f[8 / sizeof(uint_fast32_t)];
#endif

#if defined(SIMDE_MMX_USE_NATIVE_TYPE)
  __m64          n;
#endif
#if defined(SIMDE_MMX_NEON)
  int8x8_t       neon_i8;
  int16x4_t      neon_i16;
  int32x2_t      neon_i32;
  int64x1_t      neon_i64;
  uint8x8_t      neon_u8;
  uint16x4_t     neon_u16;
  uint32x2_t     neon_u32;
  uint64x1_t     neon_u64;
  float32x2_t    neon_f32;
#endif
} simde__m64_private;

#if defined(SIMDE_MMX_USE_NATIVE_TYPE)
  typedef __m64 simde__m64;
#elif defined(SIMDE_MMX_NEON)
  typedef int32x2_t simde__m64;
#elif defined(SIMDE_VECTOR_SUBSCRIPT)
  typedef int32_t simde__m64 SIMDE_ALIGN(8) SIMDE_VECTOR(8) SIMDE_MAY_ALIAS;
#else
  typedef simde__m64_private simde__m64;
#endif

#if !defined(SIMDE_MMX_USE_NATIVE_TYPE) && defined(SIMDE_ENABLE_NATIVE_ALIASES)
  #define SIMDE_MMX_ENABLE_NATIVE_ALIASES
  typedef simde__m64 __m64;
#endif

HEDLEY_STATIC_ASSERT(8 == sizeof(simde__m64), "__m64 size incorrect");
HEDLEY_STATIC_ASSERT(8 == sizeof(simde__m64_private), "__m64 size incorrect");
#if defined(SIMDE_CHECK_ALIGNMENT) && defined(SIMDE_ALIGN_OF)
HEDLEY_STATIC_ASSERT(SIMDE_ALIGN_OF(simde__m64) == 8, "simde__m64 is not 8-byte aligned");
HEDLEY_STATIC_ASSERT(SIMDE_ALIGN_OF(simde__m64_private) == 8, "simde__m64_private is not 8-byte aligned");
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde__m64_from_private(simde__m64_private v) {
  simde__m64 r;
  simde_memcpy(&r, &v, sizeof(r));
  return r;
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64_private
simde__m64_to_private(simde__m64 v) {
  simde__m64_private r;
  simde_memcpy(&r, &v, sizeof(r));
  return r;
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_add_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_add_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

  #if defined(SIMDE_MMX_NEON)
    r_.neon_i8 = vadd_s8(a_.neon_i8, b_.neon_i8);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i8 = a_.i8 + b_.i8;
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
      r_.i8[i] = a_.i8[i] + b_.i8[i];
    }
  #endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddb(a, b) simde_mm_add_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_add_pi8(a, b) simde_mm_add_pi8(a, b)
#  define _m_paddb(a, b) simde_m_paddb(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_add_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_add_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vadd_s16(a_.neon_i16, b_.neon_i16);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i16 = a_.i16 + b_.i16;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = a_.i16[i] + b_.i16[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddw(a, b) simde_mm_add_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_add_pi16(a, b) simde_mm_add_pi16(a, b)
#  define _m_add_paddw(a, b) simde_mm_add_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_add_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_add_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vadd_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32 = a_.i32 + b_.i32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i] + b_.i32[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddd(a, b) simde_mm_add_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_add_pi32(a, b) simde_mm_add_pi32(a, b)
#  define _m_add_paddd(a, b) simde_mm_add_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_adds_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_adds_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vqadd_s8(a_.neon_i8, b_.neon_i8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
    if ((((b_.i8[i]) > 0) && ((a_.i8[i]) > (INT8_MAX - (b_.i8[i]))))) {
      r_.i8[i] = INT8_MAX;
    } else if ((((b_.i8[i]) < 0) && ((a_.i8[i]) < (INT8_MIN - (b_.i8[i]))))) {
      r_.i8[i] = INT8_MIN;
    } else {
      r_.i8[i] = (a_.i8[i]) + (b_.i8[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddsb(a, b) simde_mm_adds_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_adds_pi8(a, b) simde_mm_adds_pi8(a, b)
#  define _m_add_paddsb(a, b) simde_mm_adds_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_adds_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_adds_pu8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_u8 = vqadd_u8(a_.neon_u8, b_.neon_u8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    const uint_fast16_t x = HEDLEY_STATIC_CAST(uint_fast16_t, a_.u8[i]) + HEDLEY_STATIC_CAST(uint_fast16_t, b_.u8[i]);
    if (x > UINT8_MAX)
      r_.u8[i] = UINT8_MAX;
    else
      r_.u8[i] = HEDLEY_STATIC_CAST(uint8_t, x);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddusb(a, b) simde_mm_adds_pu8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_adds_pu8(a, b) simde_mm_adds_pu8(a, b)
#  define _m_paddusb(a, b) simde_mm_adds_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_adds_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_adds_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vqadd_s16(a_.neon_i16, b_.neon_i16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if ((((b_.i16[i]) > 0) && ((a_.i16[i]) > (INT16_MAX - (b_.i16[i]))))) {
      r_.i16[i] = INT16_MAX;
    } else if ((((b_.i16[i]) < 0) && ((a_.i16[i]) < (SHRT_MIN - (b_.i16[i]))))) {
      r_.i16[i] = SHRT_MIN;
    } else {
      r_.i16[i] = (a_.i16[i]) + (b_.i16[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddsw(a, b) simde_mm_adds_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_adds_pi16(a, b) simde_mm_adds_pi16(a, b)
#  define _m_paddsw(a, b) simde_mm_adds_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_adds_pu16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_adds_pu16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_u16 = vqadd_u16(a_.neon_u16, b_.neon_u16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    const uint32_t x = a_.u16[i] + b_.u16[i];
    if (x > UINT16_MAX)
      r_.u16[i] = UINT16_MAX;
    else
      r_.u16[i] = HEDLEY_STATIC_CAST(uint16_t, x);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_paddusw(a, b) simde_mm_adds_pu16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_adds_pu16(a, b) simde_mm_adds_pu16(a, b)
#  define _m_paddusw(a, b) simde_mm_adds_pu16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_and_si64 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_and_si64(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vand_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i64 = a_.i64 & b_.i64;
#else
  r_.i64[0] = a_.i64[0] & b_.i64[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pand(a, b) simde_mm_and_si64(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_and_si64(a, b) simde_mm_and_si64(a, b)
#  define _m_pand(a, b) simde_mm_and_si64(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_andnot_si64 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_andnot_si64(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vbic_s32(b_.neon_i32, a_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32f = ~a_.i32f & b_.i32f;
#else
  r_.u64[0] = (~(a_.u64[0])) & (b_.u64[0]);
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pandn(a, b) simde_mm_andnot_si64(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_andnot_si64(a, b) simde_mm_andnot_si64(a, b)
#  define _m_pandn(a, b) simde_mm_andnot_si64(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpeq_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpeq_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vreinterpret_s8_u8(vceq_s8(a_.neon_i8, b_.neon_i8));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
    r_.i8[i] = (a_.i8[i] == b_.i8[i]) ? ~INT8_C(0) : INT8_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpeqb(a, b) simde_mm_cmpeq_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpeq_pi8(a, b) simde_mm_cmpeq_pi8(a, b)
#  define _m_pcmpeqb(a, b) simde_mm_cmpeq_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpeq_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpeq_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vreinterpret_s16_u16(vceq_s16(a_.neon_i16, b_.neon_i16));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = (a_.i16[i] == b_.i16[i]) ? ~INT16_C(0) : INT16_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpeqw(a, b) simde_mm_cmpeq_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpeq_pi16(a, b) simde_mm_cmpeq_pi16(a, b)
#  define _m_pcmpeqw(a, b) simde_mm_cmpeq_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpeq_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpeq_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vreinterpret_s32_u32(vceq_s32(a_.neon_i32, b_.neon_i32));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = (a_.i32[i] == b_.i32[i]) ? ~INT32_C(0) : INT32_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpeqd(a, b) simde_mm_cmpeq_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpeq_pi32(a, b) simde_mm_cmpeq_pi32(a, b)
#  define _m_pcmpeqd(a, b) simde_mm_cmpeq_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpgt_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpgt_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vreinterpret_s8_u8(vcgt_s8(a_.neon_i8, b_.neon_i8));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
    r_.i8[i] = (a_.i8[i] > b_.i8[i]) ? ~INT8_C(0) : INT8_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpgtb(a, b) simde_mm_cmpgt_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpgt_pi8(a, b) simde_mm_cmpgt_pi8(a, b)
#  define _m_pcmpgtb(a, b) simde_mm_cmpgt_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpgt_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpgt_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vreinterpret_s16_u16(vcgt_s16(a_.neon_i16, b_.neon_i16));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = (a_.i16[i] > b_.i16[i]) ? ~INT16_C(0) : INT16_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpgtw(a, b) simde_mm_cmpgt_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpgt_pi16(a, b) simde_mm_cmpgt_pi16(a, b)
#  define _m_pcmpgtw(a, b) simde_mm_cmpgt_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cmpgt_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cmpgt_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vreinterpret_s32_u32(vcgt_s32(a_.neon_i32, b_.neon_i32));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = (a_.i32[i] > b_.i32[i]) ? ~INT32_C(0) : INT32_C(0);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pcmpgtd(a, b) simde_mm_cmpgt_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpgt_pi32(a, b) simde_mm_cmpgt_pi32(a, b)
#  define _m_pcmpgtd(a, b) simde_mm_cmpgt_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
int64_t
simde_mm_cvtm64_si64 (simde__m64 a) {
#if defined(SIMDE_MMX_NATIVE) && defined(SIMDE_ARCH_AMD64) && !defined(__PGI)
  return _mm_cvtm64_si64(a);
#else
  simde__m64_private a_ = simde__m64_to_private(a);
  
  #if defined(SIMDE_MMX_NEON)
    return vget_lane_s64(a_.neon_i64, 0);
  #else
    return a_.i64[0];
  #endif
#endif
}
#define simde_m_to_int64(a) simde_mm_cvtm64_si64(a)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtm64_si64(a) simde_mm_cvtm64_si64(a)
#  define _m_to_int64(a) simde_mm_cvtm64_si64(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtsi32_si64 (int32_t a) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cvtsi32_si64(a);
#else
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  const int32_t av[sizeof(r_.neon_i32) / sizeof(r_.neon_i32[0])] = { a, 0 };
  r_.neon_i32 = vld1_s32(av);
#else
  r_.i32[0] = a;
  r_.i32[1] = 0;
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_from_int(a) simde_mm_cvtsi32_si64(a)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtsi32_si64(a) simde_mm_cvtsi32_si64(a)
#  define _m_from_int(a) simde_mm_cvtsi32_si64(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtsi64_m64 (int64_t a) {
#if defined(SIMDE_MMX_NATIVE) && defined(SIMDE_ARCH_AMD64) && !defined(__PGI)
  return _mm_cvtsi64_m64(a);
#else
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  r_.neon_i64 = vld1_s64(&a);
#else
  r_.i64[0] = a;
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_from_int64(a) simde_mm_cvtsi64_m64(a)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtsi64_m64(a) simde_mm_cvtsi64_m64(a)
#  define _m_from_int64(a) simde_mm_cvtsi64_m64(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
int32_t
simde_mm_cvtsi64_si32 (simde__m64 a) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_cvtsi64_si32(a);
#else
  simde__m64_private a_ = simde__m64_to_private(a);

  #if defined(SIMDE_MMX_NEON)
    return vget_lane_s32(a_.neon_i32, 0);
  #else
    return a_.i32[0];
  #endif
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtsi64_si32(a) simde_mm_cvtsi64_si32(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_empty (void) {
#if defined(SIMDE_MMX_NATIVE)
  _mm_empty();
#else
#endif
}
#define simde_m_empty() simde_mm_empty()
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_empty() simde_mm_empty()
#  define _m_empty() simde_mm_empty()
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_madd_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_madd_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  int32x4_t i1 = vmull_s16(a_.neon_i16, b_.neon_i16);
  r_.neon_i32 = vpadd_s32(vget_low_s32(i1), vget_high_s32(i1));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i += 2) {
    r_.i32[i / 2] = (a_.i16[i] * b_.i16[i]) + (a_.i16[i + 1] * b_.i16[i + 1]);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmaddwd(a, b) simde_mm_madd_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_madd_pi16(a, b) simde_mm_madd_pi16(a, b)
#  define _m_pmaddwd(a, b) simde_mm_madd_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_mulhi_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_mulhi_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  const int32x4_t t1 = vmull_s16(a_.neon_i16, b_.neon_i16);
  const uint32x4_t t2 = vshrq_n_u32(vreinterpretq_u32_s32(t1), 16);
  const uint16x4_t t3 = vmovn_u32(t2);
  r_.neon_i16 = vreinterpret_s16_u16(t3);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = HEDLEY_STATIC_CAST(int16_t, ((a_.i16[i] * b_.i16[i]) >> 16));
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmulhw(a, b) simde_mm_mulhi_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_mulhi_pi16(a, b) simde_mm_mulhi_pi16(a, b)
#  define _m_pmulhw(a, b) simde_mm_mulhi_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_mullo_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_mullo_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  const int32x4_t t1 = vmull_s16(a_.neon_i16, b_.neon_i16);
  const uint16x4_t t2 = vmovn_u32(vreinterpretq_u32_s32(t1));
  r_.neon_i16 = vreinterpret_s16_u16(t2);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = HEDLEY_STATIC_CAST(int16_t, ((a_.i16[i] * b_.i16[i]) & 0xffff));
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmullw(a, b) simde_mm_mullo_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_mullo_pi16(a, b) simde_mm_mullo_pi16(a, b)
#  define _m_pmullw(a, b) simde_mm_mullo_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_or_si64 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_or_si64(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vorr_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i64 = a_.i64 | b_.i64;
#else
  r_.i64[0] = a_.i64[0] | b_.i64[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_por(a, b) simde_mm_or_si64(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_or_si64(a, b) simde_mm_or_si64(a, b)
#  define _m_por(a, b) simde_mm_or_si64(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_packs_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_packs_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vqmovn_s16(vcombine_s16(a_.neon_i16, b_.neon_i16));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if (a_.i16[i] < INT8_MIN) {
      r_.i8[i] = INT8_MIN;
    } else if (a_.i16[i] > INT8_MAX) {
      r_.i8[i] = INT8_MAX;
    } else {
      r_.i8[i] = HEDLEY_STATIC_CAST(int8_t, a_.i16[i]);
    }
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if (b_.i16[i] < INT8_MIN) {
      r_.i8[i + 4] = INT8_MIN;
    } else if (b_.i16[i] > INT8_MAX) {
      r_.i8[i + 4] = INT8_MAX;
    } else {
      r_.i8[i + 4] = HEDLEY_STATIC_CAST(int8_t, b_.i16[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_packsswb(a, b) simde_mm_packs_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_packs_pi16(a, b) simde_mm_packs_pi16(a, b)
#  define _m_packsswb(a, b) mm_packs_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_packs_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_packs_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vqmovn_s32(vcombine_s32(a_.neon_i32, b_.neon_i32));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (8 / sizeof(a_.i32[0])) ; i++) {
    if (a_.i32[i] < SHRT_MIN) {
      r_.i16[i] = SHRT_MIN;
    } else if (a_.i32[i] > INT16_MAX) {
      r_.i16[i] = INT16_MAX;
    } else {
      r_.i16[i] = HEDLEY_STATIC_CAST(int16_t, a_.i32[i]);
    }
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (8 / sizeof(b_.i32[0])) ; i++) {
    if (b_.i32[i] < SHRT_MIN) {
      r_.i16[i + 2] = SHRT_MIN;
    } else if (b_.i32[i] > INT16_MAX) {
      r_.i16[i + 2] = INT16_MAX;
    } else {
      r_.i16[i + 2] = HEDLEY_STATIC_CAST(int16_t, b_.i32[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_packssdw(a, b) simde_mm_packs_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_packs_pi32(a, b) simde_mm_packs_pi32(a, b)
#  define _m_packssdw(a, b) simde_mm_packs_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_packs_pu16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_packs_pu16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  const int16x8_t t1 = vcombine_s16(a_.neon_i16, b_.neon_i16);

  /* Set elements which are < 0 to 0 */
  const int16x8_t t2 = vandq_s16(t1, vreinterpretq_s16_u16(vcgezq_s16(t1)));

  /* Vector with all s16 elements set to UINT8_MAX */
  const int16x8_t vmax = vmovq_n_s16((int16_t) UINT8_MAX);

  /* Elements which are within the acceptable range */
  const int16x8_t le_max = vandq_s16(t2, vreinterpretq_s16_u16(vcleq_s16(t2, vmax)));
  const int16x8_t gt_max = vandq_s16(vmax, vreinterpretq_s16_u16(vcgtq_s16(t2, vmax)));

  /* Final values as 16-bit integers */
  const int16x8_t values = vorrq_s16(le_max, gt_max);

  r_.neon_u8 = vmovn_u16(vreinterpretq_u16_s16(values));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if (a_.i16[i] > UINT8_MAX) {
      r_.u8[i] = UINT8_MAX;
    } else if (a_.i16[i] < 0) {
      r_.u8[i] = 0;
    } else {
      r_.u8[i] = HEDLEY_STATIC_CAST(uint8_t, a_.i16[i]);
    }
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if (b_.i16[i] > UINT8_MAX) {
      r_.u8[i + 4] = UINT8_MAX;
    } else if (b_.i16[i] < 0) {
      r_.u8[i + 4] = 0;
    } else {
      r_.u8[i + 4] = HEDLEY_STATIC_CAST(uint8_t, b_.i16[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_packuswb(a, b) simde_mm_packs_pu16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_packs_pu16(a, b) simde_mm_packs_pu16(a, b)
#  define _m_packuswb(a, b) simde_mm_packs_pu16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set_pi8 (int8_t e7, int8_t e6, int8_t e5, int8_t e4, int8_t e3, int8_t e2, int8_t e1, int8_t e0) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_set_pi8(e7, e6, e5, e4, e3, e2, e1, e0);
#else
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  const int8_t v[sizeof(r_.i8) / sizeof(r_.i8[0])] = { e0, e1, e2, e3, e4, e5, e6, e7 };
  r_.neon_i8 = vld1_s8(v);
#else
  r_.i8[0] = e0;
  r_.i8[1] = e1;
  r_.i8[2] = e2;
  r_.i8[3] = e3;
  r_.i8[4] = e4;
  r_.i8[5] = e5;
  r_.i8[6] = e6;
  r_.i8[7] = e7;
#endif

  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set_pi8(e7, e6, e5, e4, e3, e2, e1, e0) simde_mm_set_pi8(e7, e6, e5, e4, e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_x_mm_set_pu8 (uint8_t e7, uint8_t e6, uint8_t e5, uint8_t e4, uint8_t e3, uint8_t e2, uint8_t e1, uint8_t e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NATIVE)
  r_.n = _mm_set_pi8(
      HEDLEY_STATIC_CAST(int8_t, e7),
      HEDLEY_STATIC_CAST(int8_t, e6),
      HEDLEY_STATIC_CAST(int8_t, e5),
      HEDLEY_STATIC_CAST(int8_t, e4),
      HEDLEY_STATIC_CAST(int8_t, e3),
      HEDLEY_STATIC_CAST(int8_t, e2),
      HEDLEY_STATIC_CAST(int8_t, e1),
      HEDLEY_STATIC_CAST(int8_t, e0));
#elif defined(SIMDE_MMX_NEON)
  const uint8_t v[sizeof(r_.u8) / sizeof(r_.u8[0])] = { e0, e1, e2, e3, e4, e5, e6, e7 };
  r_.neon_u8 = vld1_u8(v);
#else
  r_.u8[0] = e0;
  r_.u8[1] = e1;
  r_.u8[2] = e2;
  r_.u8[3] = e3;
  r_.u8[4] = e4;
  r_.u8[5] = e5;
  r_.u8[6] = e6;
  r_.u8[7] = e7;
#endif

  return simde__m64_from_private(r_);
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set_pi16 (int16_t e3, int16_t e2, int16_t e1, int16_t e0) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_set_pi16(e3, e2, e1, e0);
#else
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  const int16_t v[sizeof(r_.i16) / sizeof(r_.i16[0])] = { e0, e1, e2, e3 };
  r_.neon_i16 = vld1_s16(v);
#else
  r_.i16[0] = e0;
  r_.i16[1] = e1;
  r_.i16[2] = e2;
  r_.i16[3] = e3;
#endif
  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set_pi16(e3, e2, e1, e0) simde_mm_set_pi16(e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_x_mm_set_pu16 (uint16_t e3, uint16_t e2, uint16_t e1, uint16_t e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NATIVE)
  r_.n = _mm_set_pi16(
      HEDLEY_STATIC_CAST(int16_t, e3),
      HEDLEY_STATIC_CAST(int16_t, e2),
      HEDLEY_STATIC_CAST(int16_t, e1),
      HEDLEY_STATIC_CAST(int16_t, e0)
    );
#elif defined(SIMDE_MMX_NEON)
  const uint16_t v[sizeof(r_.u16) / sizeof(r_.u16[0])] = { e0, e1, e2, e3 };
  r_.neon_u16 = vld1_u16(v);
#else
  r_.u16[0] = e0;
  r_.u16[1] = e1;
  r_.u16[2] = e2;
  r_.u16[3] = e3;
#endif

  return simde__m64_from_private(r_);
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_x_mm_set_pu32 (uint32_t e1, uint32_t e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NATIVE)
  r_.n = _mm_set_pi32(
      HEDLEY_STATIC_CAST(int32_t, e1),
      HEDLEY_STATIC_CAST(int32_t, e0));
#elif defined(SIMDE_MMX_NEON)
  const uint32_t v[sizeof(r_.u32) / sizeof(r_.u32[0])] = { e0, e1 };
  r_.neon_u32 = vld1_u32(v);
#else
  r_.u32[0] = e0;
  r_.u32[1] = e1;
#endif

  return simde__m64_from_private(r_);
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set_pi32 (int32_t e1, int32_t e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NATIVE)
  r_.n = _mm_set_pi32(e1, e0);
#elif defined(SIMDE_MMX_NEON)
  const int32_t v[sizeof(r_.i32) / sizeof(r_.i32[0])] = { e0, e1 };
  r_.neon_i32 = vld1_s32(v);
#else
  r_.i32[0] = e0;
  r_.i32[1] = e1;
#endif

  return simde__m64_from_private(r_);
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set_pi32(e1, e0) simde_mm_set_pi32(e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_x_mm_set_pi64 (int64_t e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  const int64_t v[sizeof(r_.i64) / sizeof(r_.i64[0])] = { e0 };
  r_.neon_i64 = vld1_s64(v);
#else
  r_.i64[0] = e0;
#endif

  return simde__m64_from_private(r_);
}


SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_x_mm_set_f32x2 (simde_float32 e1, simde_float32 e0) {
  simde__m64_private r_;

#if defined(SIMDE_MMX_NEON)
  const simde_float32 v[sizeof(r_.f32) / sizeof(r_.f32[0])] = { e0, e1 };
  r_.neon_f32 = vld1_f32(v);
#else
  r_.f32[0] = e0;
  r_.f32[1] = e1;
#endif

  return simde__m64_from_private(r_);
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set1_pi8 (int8_t a) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_set1_pi8(a);
#elif defined(SIMDE_MMX_NEON)
  simde__m64_private r_;
  r_.neon_i8 = vmov_n_s8(a);
  return simde__m64_from_private(r_);
#else
  return simde_mm_set_pi8(a, a, a, a, a, a, a, a);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set1_pi8(a) simde_mm_set1_pi8(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set1_pi16 (int16_t a) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_set1_pi16(a);
#elif defined(SIMDE_MMX_NEON)
  simde__m64_private r_;
  r_.neon_i16 = vmov_n_s16(a);
  return simde__m64_from_private(r_);
#else
  return simde_mm_set_pi16(a, a, a, a);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set1_pi16(a) simde_mm_set1_pi16(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_set1_pi32 (int32_t a) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_set1_pi32(a);
#elif defined(SIMDE_MMX_NEON)
  simde__m64_private r_;
  r_.neon_i32 = vmov_n_s32(a);
  return simde__m64_from_private(r_);
#else
  return simde_mm_set_pi32(a, a);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_set1_pi32(a) simde_mm_set1_pi32(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_setr_pi8 (int8_t e7, int8_t e6, int8_t e5, int8_t e4, int8_t e3, int8_t e2, int8_t e1, int8_t e0) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_setr_pi8(e7, e6, e5, e4, e3, e2, e1, e0);
#else
  return simde_mm_set_pi8(e0, e1, e2, e3, e4, e5, e6, e7);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_setr_pi8(e7, e6, e5, e4, e3, e2, e1, e0) simde_mm_setr_pi8(e7, e6, e5, e4, e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_setr_pi16 (int16_t e3, int16_t e2, int16_t e1, int16_t e0) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_setr_pi16(e3, e2, e1, e0);
#else
  return simde_mm_set_pi16(e0, e1, e2, e3);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_setr_pi16(e3, e2, e1, e0) simde_mm_setr_pi16(e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_setr_pi32 (int32_t e1, int32_t e0) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_setr_pi32(e1, e0);
#else
  return simde_mm_set_pi32(e0, e1);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_setr_pi32(e1, e0) simde_mm_setr_pi32(e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_setzero_si64 (void) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_setzero_si64();
#elif defined(SIMDE_MMX_NEON)
  simde__m64_private r_;
  r_.neon_u32 = vmov_n_u32(0);
  return simde__m64_from_private(r_);
#else
  return simde_mm_set_pi32(0, 0);
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_setzero_si64() simde_mm_setzero_si64()
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_setone_si64 (void) {
#if defined(SIMDE_SSE_NATIVE)
  __m64 t = _mm_undefined_ps();
  return _mm_andnot_ps(t, t);
#else
  simde__m64 r;
  simde_memset(&r, ~0, sizeof(r));
  return r;
#endif
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sll_pi16 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sll_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vshl_s16(a_.neon_i16, vmov_n_s16((int16_t) vget_lane_u64(count_.neon_u64, 0)));
#elif defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i16 = a_.i16 << count_.u64[0];
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 15)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    r_.u16[i] = (uint16_t) (a_.u16[i] << count_.u64[0]);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psllw(a, count) simde_mm_sll_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sll_pi16(a, count) simde_mm_sll_pi16(a, count)
#  define _m_psllw(a, count) simde_mm_sll_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sll_pi32 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sll_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vshl_s32(a_.neon_i32, vmov_n_s32((int32_t) vget_lane_u64(count_.neon_u64, 0)));
#elif defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i32 = a_.i32 << count_.u64[0];
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 31)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i] << count_.u64[0];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pslld(a, count) simde_mm_sll_pi32(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sll_pi32(a, count) simde_mm_sll_pi32(a, count)
#  define _m_pslld(a, count) simde_mm_sll_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_slli_pi16 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_slli_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i16 = a_.i16 << count;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vshl_s16(a_.neon_i16, vmov_n_s16((int16_t) count));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    r_.u16[i] = (uint16_t) (a_.u16[i] << count);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psllwi(a, count) simde_mm_slli_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_slli_pi16(a, count) simde_mm_slli_pi16(a, count)
#  define _m_psllwi(a, count) simde_mm_slli_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_slli_pi32 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_slli_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i32 = a_.i32 << count;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vshl_s32(a_.neon_i32, vmov_n_s32((int32_t) count));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i] << count;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pslldi(a, b) simde_mm_slli_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_slli_pi32(a, count) simde_mm_slli_pi32(a, count)
#  define _m_pslldi(a, count) simde_mm_slli_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_slli_si64 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_slli_si64(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i64 = a_.i64 << count;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i64 = vshl_s64(a_.neon_i64, vmov_n_s64((int64_t) count));
#else
  r_.u64[0] = a_.u64[0] << count;
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psllqi(a, count) simde_mm_slli_si64(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_slli_si64(a, count) simde_mm_slli_si64(a, count)
#  define _m_psllqi(a, count) simde_mm_slli_si64(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sll_si64 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sll_si64(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i64 = vshl_s64(a_.neon_i64, count_.neon_i64);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i64 = a_.i64 << count_.i64;
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 63)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  r_.u64[0] = a_.u64[0] << count_.u64[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psllq(a, count) simde_mm_sll_si64(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sll_si64(a, count) simde_mm_sll_si64(a, count)
#  define _m_psllq(a, count) simde_mm_sll_si64(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srl_pi16 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_srl_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.u16 = a_.u16 >> count_.u64[0];
#elif defined(SIMDE_MMX_NEON)
  r_.neon_u16 = vshl_u16(a_.neon_u16, vmov_n_s16(-((int16_t) vget_lane_u64(count_.neon_u64, 0))));
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 15)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < sizeof(r_.u16) / sizeof(r_.u16[0]) ; i++) {
    r_.u16[i] = a_.u16[i] >> count_.u64[0];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrlw(a, count) simde_mm_srl_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srl_pi16(a, count) simde_mm_srl_pi16(a, count)
#  define _m_psrlw(a, count) simde_mm_srl_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srl_pi32 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_srl_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.u32 = a_.u32 >> count_.u64[0];
#elif defined(SIMDE_MMX_NEON)
  r_.neon_u32 = vshl_u32(a_.neon_u32, vmov_n_s32(-((int32_t) vget_lane_u64(count_.neon_u64, 0))));
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 31)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < sizeof(r_.u32) / sizeof(r_.u32[0]) ; i++) {
    r_.u32[i] = a_.u32[i] >> count_.u64[0];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrld(a, count) simde_mm_srl_pi32(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srl_pi32(a, count) simde_mm_srl_pi32(a, count)
#  define _m_psrld(a, count) simde_mm_srl_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srli_pi16 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_srli_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.u16 = a_.u16 >> count;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_u16 = vshl_u16(a_.neon_u16, vmov_n_s16(-((int16_t) count)));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    r_.u16[i] = a_.u16[i] >> count;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrlwi(a, count) simde_mm_srli_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srli_pi16(a, count) simde_mm_srli_pi16(a, count)
#  define _m_psrlwi(a, count) simde_mm_srli_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srli_pi32 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_srli_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.u32 = a_.u32 >> count;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_u32 = vshl_u32(a_.neon_u32, vmov_n_s32(-((int32_t) count)));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i] >> count;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrldi(a, count) simde_mm_srli_pi32(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srli_pi32(a, count) simde_mm_srli_pi32(a, count)
#  define _m_psrldi(a, count) simde_mm_srli_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srli_si64 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_srli_si64(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_MMX_NEON)
  r_.neon_u64 = vshl_u64(a_.neon_u64, vmov_n_s64(-count));
#elif defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.u64 = a_.u64 >> count;
#else
  r_.u64[0] = a_.u64[0] >> count;
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrlqi(a, count) simde_mm_srli_si64(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srli_si64(a, count) simde_mm_srli_si64(a, count)
#  define _m_psrlqi(a, count) simde_mm_srli_si64(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srl_si64 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_srl_si64(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_u64 = vshl_u64(a_.neon_u64, vneg_s64(count_.neon_i64));
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.u64 = a_.u64 >> count_.u64;
#else
  if (HEDLEY_UNLIKELY(count_.u64[0] > 63)) {
    simde_memset(&r_, 0, sizeof(r_));
    return simde__m64_from_private(r_);
  }

  r_.u64[0] = a_.u64[0] >> count_.u64[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrlq(a, count) simde_mm_srl_si64(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srl_si64(a, count) simde_mm_srl_si64(a, count)
#  define _m_psrlq(a, count) simde_mm_srl_si64(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srai_pi16 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_srai_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i16 = a_.i16 >> (count & 0xff);
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vshl_s16(a_.neon_i16, vmov_n_s16(-HEDLEY_STATIC_CAST(int16_t, count));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = a_.i16[i] >> (count & 0xff);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrawi(a, count) simde_mm_srai_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srai_pi16(a, count) simde_mm_srai_pi16(a, count)
#  define _m_psrawi(a, count) simde_mm_srai_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_srai_pi32 (simde__m64 a, int count) {
#if defined(SIMDE_MMX_NATIVE) && !defined(__PGI)
  return _mm_srai_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i32 = a_.i32 >> (count & 0xff);
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vshl_s32(a_.neon_i32, vmov_n_s32(-HEDLEY_STATIC_CAST(int32_t, count)));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i] >> (count & 0xff);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psradi(a, count) simde_mm_srai_pi32(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_srai_pi32(a, count) simde_mm_srai_pi32(a, count)
#  define _m_srai_pi32(a, count) simde_mm_srai_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sra_pi16 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sra_pi16(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);
  const int cnt = HEDLEY_STATIC_CAST(int, (count_.i64[0] > 15 ? 15 : count_.i64[0]));

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i16 = a_.i16 >> cnt;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vshl_s16(a_.neon_i16, vmov_n_s16(-HEDLEY_STATIC_CAST(int16_t, vget_lane_u64(count_.neon_u64, 0))));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = a_.i16[i] >> cnt;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psraw(a, count) simde_mm_sra_pi16(a, count)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sra_pi16(a, count) simde_mm_sra_pi16(a, count)
#  define _m_psraw(a, count) simde_mm_sra_pi16(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sra_pi32 (simde__m64 a, simde__m64 count) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sra_pi32(a, count);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private count_ = simde__m64_to_private(count);
  const int32_t cnt = (count_.u64[0] > 31) ? 31 : HEDLEY_STATIC_CAST(int32_t, count_.u64[0]);

#if defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.i32 = a_.i32 >> cnt;
#elif defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vshl_s32(a_.neon_i32, vmov_n_s32(-HEDLEY_STATIC_CAST(int32_t, vget_lane_u64(count_.neon_u64, 0))));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i] >> cnt;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psrad(a, b) simde_mm_sra_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sra_pi32(a, count) simde_mm_sra_pi32(a, count)
#  define _m_psrad(a, count) simde_mm_sra_pi32(a, count)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sub_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sub_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vsub_s8(a_.neon_i8, b_.neon_i8);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i8 = a_.i8 - b_.i8;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
    r_.i8[i] = a_.i8[i] - b_.i8[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubb(a, b) simde_mm_sub_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sub_pi8(a, b) simde_mm_sub_pi8(a, b)
#  define _m_psubb(a, b) simde_mm_sub_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sub_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sub_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vsub_s16(a_.neon_i16, b_.neon_i16);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i16 = a_.i16 - b_.i16;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = a_.i16[i] - b_.i16[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubw(a, b) simde_mm_sub_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sub_pi16(a, b) simde_mm_sub_pi16(a, b)
#  define _m_psubw(a, b) simde_mm_sub_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sub_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_sub_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = vsub_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32 = a_.i32 - b_.i32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i] - b_.i32[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubd(a, b) simde_mm_sub_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_sub_pi32(a, b) simde_mm_sub_pi32(a, b)
#  define _m_psubd(a, b) simde_mm_sub_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_subs_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_subs_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i8 = vqsub_s8(a_.neon_i8, b_.neon_i8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i8) / sizeof(r_.i8[0])) ; i++) {
    if (((b_.i8[i]) > 0 && (a_.i8[i]) < INT8_MIN + (b_.i8[i]))) {
      r_.i8[i] = INT8_MIN;
    } else if ((b_.i8[i]) < 0 && (a_.i8[i]) > INT8_MAX + (b_.i8[i])) {
      r_.i8[i] = INT8_MAX;
    } else {
      r_.i8[i] = (a_.i8[i]) - (b_.i8[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubsb(a, b) simde_mm_subs_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_subs_pi8(a, b) simde_mm_subs_pi8(a, b)
#  define _m_psubsb(a, b) simde_mm_subs_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_subs_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_subs_pu8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_u8 = vqsub_u8(a_.neon_u8, b_.neon_u8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    const int32_t x = a_.u8[i] - b_.u8[i];
    if (x < 0) {
      r_.u8[i] = 0;
    } else if (x > UINT8_MAX) {
      r_.u8[i] = UINT8_MAX;
    } else {
      r_.u8[i] = HEDLEY_STATIC_CAST(uint8_t, x);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubusb(a, b) simde_mm_subs_pu8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_subs_pu8(a, b) simde_mm_subs_pu8(a, b)
#  define _m_psubusb(a, b) simde_mm_subs_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_subs_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_subs_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i16 = vqsub_s16(a_.neon_i16, b_.neon_i16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    if (((b_.i16[i]) > 0 && (a_.i16[i]) < SHRT_MIN + (b_.i16[i]))) {
      r_.i16[i] = SHRT_MIN;
    } else if ((b_.i16[i]) < 0 && (a_.i16[i]) > INT16_MAX + (b_.i16[i])) {
      r_.i16[i] = INT16_MAX;
    } else {
      r_.i16[i] = (a_.i16[i]) - (b_.i16[i]);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubsw(a, b) simde_mm_subs_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_subs_pi16(a, b) simde_mm_subs_pi16(a, b)
#  define _m_psubsw(a, b) simde_mm_subs_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_subs_pu16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_subs_pu16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_u16 = vqsub_u16(a_.neon_u16, b_.neon_u16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    const int x = a_.u16[i] - b_.u16[i];
    if (x < 0) {
      r_.u16[i] = 0;
    } else if (x > UINT16_MAX) {
      r_.u16[i] = UINT16_MAX;
    } else {
      r_.u16[i] = HEDLEY_STATIC_CAST(uint16_t, x);
    }
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psubusw(a, b) simde_mm_subs_pu16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_subs_pu16(a, b) simde_mm_subs_pu16(a, b)
#  define _m_psubusw(a, b) simde_mm_subs_pu16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpackhi_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpackhi_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i8 = vzip2_s8(a_.neon_i8, b_.neon_i8);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i8 = SIMDE__SHUFFLE_VECTOR(8, 8, a_.i8, b_.i8, 4, 12, 5, 13, 6, 14, 7, 15);
#else
  r_.i8[0] = a_.i8[4];
  r_.i8[1] = b_.i8[4];
  r_.i8[2] = a_.i8[5];
  r_.i8[3] = b_.i8[5];
  r_.i8[4] = a_.i8[6];
  r_.i8[5] = b_.i8[6];
  r_.i8[6] = a_.i8[7];
  r_.i8[7] = b_.i8[7];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpckhbw(a, b) simde_mm_unpackhi_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpackhi_pi8(a, b) simde_mm_unpackhi_pi8(a, b)
#  define _m_punpckhbw(a, b) simde_mm_unpackhi_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpackhi_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpackhi_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i16 = vzip2_s16(a_.neon_i16, b_.neon_i16);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i16 = SIMDE__SHUFFLE_VECTOR(16, 8, a_.i16, b_.i16, 2, 6, 3, 7);
#else
  r_.i16[0] = a_.i16[2];
  r_.i16[1] = b_.i16[2];
  r_.i16[2] = a_.i16[3];
  r_.i16[3] = b_.i16[3];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpckhwd(a, b) simde_mm_unpackhi_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpackhi_pi16(a, b) simde_mm_unpackhi_pi16(a, b)
#  define _m_punpckhwd(a, b) simde_mm_unpackhi_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpackhi_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpackhi_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i32 = vzip2_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i32 = SIMDE__SHUFFLE_VECTOR(32, 8, a_.i32, b_.i32, 1, 3);
#else
  r_.i32[0] = a_.i32[1];
  r_.i32[1] = b_.i32[1];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpckhdq(a, b) simde_mm_unpackhi_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpackhi_pi32(a, b) simde_mm_unpackhi_pi32(a, b)
#  define _m_punpckhdq(a, b) simde_mm_unpackhi_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpacklo_pi8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpacklo_pi8(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i8 = vzip1_s8(a_.neon_i8, b_.neon_i8);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i8 = SIMDE__SHUFFLE_VECTOR(8, 8, a_.i8, b_.i8, 0, 8, 1, 9, 2, 10, 3, 11);
#else
  r_.i8[0] = a_.i8[0];
  r_.i8[1] = b_.i8[0];
  r_.i8[2] = a_.i8[1];
  r_.i8[3] = b_.i8[1];
  r_.i8[4] = a_.i8[2];
  r_.i8[5] = b_.i8[2];
  r_.i8[6] = a_.i8[3];
  r_.i8[7] = b_.i8[3];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpcklbw(a, b) simde_mm_unpacklo_pi8(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpacklo_pi8(a, b) simde_mm_unpacklo_pi8(a, b)
#  define _m_punpcklbw(a, b) simde_mm_unpacklo_pi8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpacklo_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpacklo_pi16(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i16 = vzip1_s16(a_.neon_i16, b_.neon_i16);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i16 = SIMDE__SHUFFLE_VECTOR(16, 8, a_.i16, b_.i16, 0, 4, 1, 5);
#else
  r_.i16[0] = a_.i16[0];
  r_.i16[1] = b_.i16[0];
  r_.i16[2] = a_.i16[1];
  r_.i16[3] = b_.i16[1];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpcklwd(a, b) simde_mm_unpacklo_pi16(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpacklo_pi16(a, b) simde_mm_unpacklo_pi16(a, b)
#  define _m_punpcklwd(a, b) simde_mm_unpacklo_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_unpacklo_pi32 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_unpacklo_pi32(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_i32 = vzip1_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.i32 = SIMDE__SHUFFLE_VECTOR(32, 8, a_.i32, b_.i32, 0, 2);
#else
  r_.i32[0] = a_.i32[0];
  r_.i32[1] = b_.i32[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_punpckldq(a, b) simde_mm_unpacklo_pi32(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_unpacklo_pi32(a, b) simde_mm_unpacklo_pi32(a, b)
#  define _m_punpckldq(a, b) simde_mm_unpacklo_pi32(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_xor_si64 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_MMX_NATIVE)
  return _mm_xor_si64(a, b);
#else
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_MMX_NEON)
  r_.neon_i32 = veor_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32f = a_.i32f ^ b_.i32f;
#else
  r_.u64[0] = a_.u64[0] ^ b_.u64[0];
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pxor(a, b) simde_mm_xor_si64(a, b)
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _mm_xor_si64(a, b) simde_mm_xor_si64(a, b)
#  define _m_pxor(a, b) simde_mm_xor_si64(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
int32_t
simde_m_to_int (simde__m64 a) {
#if defined(SIMDE_MMX_NATIVE)
  return _m_to_int(a);
#else
  simde__m64_private a_ = simde__m64_to_private(a);

  #if defined(SIMDE_MMX_NEON)
    return vget_lane_s32(a_.neon_i32, 0);
  #else
    return a_.i32[0];
  #endif
#endif
}
#if defined(SIMDE_MMX_ENABLE_NATIVE_ALIASES)
#  define _m_to_int(a) simde_m_to_int(a)
#endif

SIMDE__END_DECLS

HEDLEY_DIAGNOSTIC_POP

#endif /* !defined(SIMDE__MMX_H) */
/* :: End x86/mmx.h :: */

HEDLEY_DIAGNOSTIC_PUSH
SIMDE_DISABLE_UNWANTED_DIAGNOSTICS

#  if defined(SIMDE_SSE_NATIVE)
#    undef SIMDE_SSE_NATIVE
#  endif
#  if defined(SIMDE_ARCH_X86_SSE) && !defined(SIMDE_SSE_NO_NATIVE) && !defined(SIMDE_NO_NATIVE)
#    define SIMDE_SSE_NATIVE
#  elif defined(SIMDE_ARCH_ARM_NEON) && !defined(SIMDE_SSE_NO_NEON) && !defined(SIMDE_NO_NEON)
#    define SIMDE_SSE_NEON
#  elif defined(SIMDE_ARCH_WASM_SIMD128)
#    define SIMDE_SSE_WASM_SIMD128
#  elif defined(SIMDE_ARCH_POWER_ALTIVEC)
#    define SIMDE_SSE_POWER_ALTIVEC
#  endif

#  if defined(SIMDE_SSE_NATIVE)
#    include <xmmintrin.h>
#  else
#    if defined(SIMDE_SSE_NEON)
#      include <arm_neon.h>
#    endif
#    if defined(SIMDE_SSE_WASM_SIMD128)
#      if !defined(__wasm_unimplemented_simd128__)
#        define __wasm_unimplemented_simd128__
#      endif
#      include <wasm_simd128.h>
#    endif
#    if defined(SIMDE_SSE_POWER_ALTIVEC)
#      include <altivec.h>
#    endif

#    if !defined(HEDLEY_INTEL_VERSION) && !defined(HEDLEY_EMSCRIPTEN_VERSION) && defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L) && !defined(__STDC_NO_ATOMICS__)
#      include <stdatomic.h>
#    elif defined(_WIN32)
#      include <windows.h>
#    endif
#  endif

SIMDE__BEGIN_DECLS

typedef union {
#if defined(SIMDE_VECTOR_SUBSCRIPT)
  SIMDE_ALIGN(16) int8_t          i8 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) int16_t        i16 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) int32_t        i32 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) int64_t        i64 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) uint8_t         u8 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) uint16_t       u16 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) uint32_t       u32 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) uint64_t       u64 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  #if defined(SIMDE__HAVE_INT128)
  SIMDE_ALIGN(16) simde_int128  i128 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) simde_uint128 u128 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  #endif
  SIMDE_ALIGN(16) simde_float32  f32 SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) int_fast32_t  i32f SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
  SIMDE_ALIGN(16) uint_fast32_t u32f SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
#else
  SIMDE_ALIGN(16) int8_t         i8[16];
  SIMDE_ALIGN(16) int16_t        i16[8];
  SIMDE_ALIGN(16) int32_t        i32[4];
  SIMDE_ALIGN(16) int64_t        i64[2];
  SIMDE_ALIGN(16) uint8_t        u8[16];
  SIMDE_ALIGN(16) uint16_t       u16[8];
  SIMDE_ALIGN(16) uint32_t       u32[4];
  SIMDE_ALIGN(16) uint64_t       u64[2];
  #if defined(SIMDE__HAVE_INT128)
  SIMDE_ALIGN(16) simde_int128  i128[1];
  SIMDE_ALIGN(16) simde_uint128 u128[1];
  #endif
  SIMDE_ALIGN(16) simde_float32  f32[4];
  SIMDE_ALIGN(16) int_fast32_t  i32f[16 / sizeof(int_fast32_t)];
  SIMDE_ALIGN(16) uint_fast32_t u32f[16 / sizeof(uint_fast32_t)];
#endif

  SIMDE_ALIGN(16) simde__m64_private m64_private[2];
  SIMDE_ALIGN(16) simde__m64         m64[2];

#if defined(SIMDE_SSE_NATIVE)
  SIMDE_ALIGN(16) __m128         n;
#elif defined(SIMDE_SSE_NEON)
  SIMDE_ALIGN(16) int8x16_t      neon_i8;
  SIMDE_ALIGN(16) int16x8_t      neon_i16;
  SIMDE_ALIGN(16) int32x4_t      neon_i32;
  SIMDE_ALIGN(16) int64x2_t      neon_i64;
  SIMDE_ALIGN(16) uint8x16_t     neon_u8;
  SIMDE_ALIGN(16) uint16x8_t     neon_u16;
  SIMDE_ALIGN(16) uint32x4_t     neon_u32;
  SIMDE_ALIGN(16) uint64x2_t     neon_u64;
  SIMDE_ALIGN(16) float32x4_t    neon_f32;
  #if defined(SIMDE_ARCH_AARCH64)
  SIMDE_ALIGN(16) float64x2_t    neon_f64;
  #endif
#elif defined(SIMDE_SSE_WASM_SIMD128)
  SIMDE_ALIGN(16) v128_t         wasm_v128;
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  SIMDE_ALIGN(16) vector unsigned char      altivec_u8;
  SIMDE_ALIGN(16) vector unsigned short     altivec_u16;
  SIMDE_ALIGN(16) vector unsigned int       altivec_u32;
  SIMDE_ALIGN(16) vector unsigned long long altivec_u64;
  SIMDE_ALIGN(16) vector signed char        altivec_i8;
  SIMDE_ALIGN(16) vector signed short       altivec_i16;
  SIMDE_ALIGN(16) vector signed int         altivec_i32;
  SIMDE_ALIGN(16) vector signed long long   altivec_i64;
  SIMDE_ALIGN(16) vector float              altivec_f32;
  SIMDE_ALIGN(16) vector double             altivec_f64;
#endif
} simde__m128_private;

#if defined(SIMDE_SSE_NATIVE)
  typedef __m128 simde__m128;
#elif defined(SIMDE_SSE_NEON)
   typedef float32x4_t simde__m128;
#elif defined(SIMDE_SSE_WASM_SIMD128)
   typedef v128_t simde__m128;
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
   typedef vector float simde__m128;
#elif defined(SIMDE_VECTOR_SUBSCRIPT)
  typedef simde_float32 simde__m128 SIMDE_ALIGN(16) SIMDE_VECTOR(16) SIMDE_MAY_ALIAS;
#else
  typedef simde__m128_private simde__m128;
#endif

#if !defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ENABLE_NATIVE_ALIASES)
  #define SIMDE_SSE_ENABLE_NATIVE_ALIASES
  typedef simde__m128 __m128;
#endif

HEDLEY_STATIC_ASSERT(16 == sizeof(simde__m128), "simde__m128 size incorrect");
HEDLEY_STATIC_ASSERT(16 == sizeof(simde__m128_private), "simde__m128_private size incorrect");
#if defined(SIMDE_CHECK_ALIGNMENT) && defined(SIMDE_ALIGN_OF)
HEDLEY_STATIC_ASSERT(SIMDE_ALIGN_OF(simde__m128) == 16, "simde__m128 is not 16-byte aligned");
HEDLEY_STATIC_ASSERT(SIMDE_ALIGN_OF(simde__m128_private) == 16, "simde__m128_private is not 16-byte aligned");
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde__m128_from_private(simde__m128_private v) {
  simde__m128 r;
  simde_memcpy(&r, &v, sizeof(r));
  return r;
}

SIMDE__FUNCTION_ATTRIBUTES
simde__m128_private
simde__m128_to_private(simde__m128 v) {
  simde__m128_private r;
  simde_memcpy(&r, &v, sizeof(r));
  return r;
}

#if defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
  HEDLEY_DIAGNOSTIC_POP
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_set_ps (simde_float32 e3, simde_float32 e2, simde_float32 e1, simde_float32 e0) {
  #if defined(SIMDE_SSE_NATIVE)
    return _mm_set_ps(e3, e2, e1, e0);
  #else
    simde__m128_private r_;

    #if defined(SIMDE_SSE_NEON)
      SIMDE_ALIGN(16) simde_float32 data[4] = { e0, e1, e2, e3 };
      r_.neon_f32 = vld1q_f32(data);
    #elif defined(SIMDE_SSE_WASM_SIMD128)
      r_.wasm_v128 = wasm_f32x4_make(e0, e1, e2, e3);
    #else
      r_.f32[0] = e0;
      r_.f32[1] = e1;
      r_.f32[2] = e2;
      r_.f32[3] = e3;
    #endif

    return simde__m128_from_private(r_);
  #endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_set_ps(e3, e2, e1, e0) simde_mm_set_ps(e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_set_ps1 (simde_float32 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_set_ps1(a);
#elif defined(SIMDE_SSE_NEON)
  return vdupq_n_f32(a);
#else
  return simde_mm_set_ps(a, a, a, a);
#endif
}
#define simde_mm_set1_ps(a) simde_mm_set_ps1(a)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_set_ps1(a) simde_mm_set_ps1(a)
#  define _mm_set1_ps(a) simde_mm_set1_ps(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_move_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_move_ss(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsetq_lane_f32(vgetq_lane_f32(b_.neon_f32, 0), a_.neon_f32, 0);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  vector unsigned char m = {
    16, 17, 18, 19,
     4,  5,  6,  7,
     8,  9, 10, 11,
    12, 13, 14, 15
  };
  r_.altivec_f32 = vec_perm(a_.altivec_f32, b_.altivec_f32, m);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, b_.f32, 4, 1, 2, 3);
#else
  r_.f32[0] = b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_move_ss(a, b) simde_mm_move_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_add_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_add_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vaddq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_WASM_SIMD128)
  r_.wasm_v128 = wasm_f32x4_add(a_.wasm_v128, b_.wasm_v128);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_add(a_.altivec_f32, b_.altivec_f32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.f32 = a_.f32 + b_.f32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = a_.f32[i] + b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_add_ps(a, b) simde_mm_add_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_add_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_add_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_add_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = a_.f32[0] + b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_add_ss(a, b) simde_mm_add_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_and_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_and_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vandq_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_SSE_WASM_SIMD128)
  r_.wasm_v128 = wasm_v128_and(a_.wasm_v128, b_.wasm_v128);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32 = a_.i32 & b_.i32;
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_and(a_.altivec_f32, b_.altivec_f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i] & b_.i32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_and_ps(a, b) simde_mm_and_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_andnot_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_andnot_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vbicq_s32(b_.neon_i32, a_.neon_i32);
#elif defined(SIMDE_SSE_WASM_SIMD128)
  r_.wasm_v128 = wasm_v128_andnot(b_.wasm_v128, a_.wasm_v128);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_andc(b_.altivec_f32, a_.altivec_f32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32 = ~a_.i32 & b_.i32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = ~(a_.i32[i]) & b_.i32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_andnot_ps(a, b) simde_mm_andnot_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_avg_pu16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_avg_pu16(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_u16 = vrhadd_u16(b_.neon_u16, a_.neon_u16);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS) && defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR) && defined(SIMDE__CONVERT_VECTOR)
  uint32_t wa SIMDE_VECTOR(16);
  uint32_t wb SIMDE_VECTOR(16);
  uint32_t wr SIMDE_VECTOR(16);
  SIMDE__CONVERT_VECTOR(wa, a_.u16);
  SIMDE__CONVERT_VECTOR(wb, b_.u16);
  wr = (wa + wb + 1) >> 1;
  SIMDE__CONVERT_VECTOR(r_.u16, wr);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    r_.u16[i] = (a_.u16[i] + b_.u16[i] + 1) >> 1;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pavgw(a, b) simde_mm_avg_pu16(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_avg_pu16(a, b) simde_mm_avg_pu16(a, b)
#  define _m_pavgw(a, b) simde_mm_avg_pu16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_avg_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_avg_pu8(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_u8 = vrhadd_u8(b_.neon_u8, a_.neon_u8);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS) && defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR) && defined(SIMDE__CONVERT_VECTOR)
  uint16_t wa SIMDE_VECTOR(16);
  uint16_t wb SIMDE_VECTOR(16);
  uint16_t wr SIMDE_VECTOR(16);
  SIMDE__CONVERT_VECTOR(wa, a_.u8);
  SIMDE__CONVERT_VECTOR(wb, b_.u8);
  wr = (wa + wb + 1) >> 1;
  SIMDE__CONVERT_VECTOR(r_.u8, wr);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    r_.u8[i] = (a_.u8[i] + b_.u8[i] + 1) >> 1;
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pavgb(a, b) simde_mm_avg_pu8(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_avg_pu8(a, b) simde_mm_avg_pu8(a, b)
#  define _m_pavgb(a, b) simde_mm_avg_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpeq_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpeq_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vceqq_f32(a_.neon_f32, b_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_eq(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC)
    r_.altivec_f32 = (vector float) vec_cmpeq(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = HEDLEY_STATIC_CAST(__typeof__(r_.i32), a_.f32 == b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] == b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpeq_ps(a, b) simde_mm_cmpeq_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpeq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpeq_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpeq_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] == b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpeq_ss(a, b) simde_mm_cmpeq_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpge_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpge_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vcgeq_f32(a_.neon_f32, b_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_ge(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC)
    r_.altivec_f32 = (vector float) vec_cmpge(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = (__typeof__(r_.i32)) (a_.f32 >= b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] >= b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpge_ps(a, b) simde_mm_cmpge_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpge_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE) && !defined(__PGI)
  return _mm_cmpge_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpge_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] >= b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpge_ss(a, b) simde_mm_cmpge_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpgt_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpgt_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vcgtq_f32(a_.neon_f32, b_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_gt(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC)
    r_.altivec_f32 = (vector float) vec_cmpgt(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = (__typeof__(r_.i32)) (a_.f32 > b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] > b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpgt_ps(a, b) simde_mm_cmpgt_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpgt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE) && !defined(__PGI)
  return _mm_cmpgt_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpgt_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] > b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpgt_ss(a, b) simde_mm_cmpgt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmple_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmple_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vcleq_f32(a_.neon_f32, b_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_le(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC)
    r_.altivec_f32 = (vector float) vec_cmple(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = (__typeof__(r_.i32)) (a_.f32 <= b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] <= b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmple_ps(a, b) simde_mm_cmple_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmple_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmple_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmple_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] <= b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmple_ss(a, b) simde_mm_cmple_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmplt_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmplt_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vcltq_f32(a_.neon_f32, b_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_lt(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC)
    r_.altivec_f32 = (vector float) vec_cmplt(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = (__typeof__(r_.i32)) (a_.f32 < b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] < b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmplt_ps(a, b) simde_mm_cmplt_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmplt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmplt_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmplt_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] < b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmplt_ss(a, b) simde_mm_cmplt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpneq_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpneq_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE_SSE_NEON)
    r_.neon_u32 = vmvnq_u32(vceqq_f32(a_.neon_f32, b_.neon_f32));
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 = wasm_f32x4_ne(a_.wasm_v128, b_.wasm_v128);
  #elif defined(SIMDE_SSE_POWER_ALTIVEC) && (SIMDE_ARCH_POWER >= 900) && !defined(HEDLEY_IBM_VERSION)
    /* vec_cmpne(vector float, vector float) is missing from XL C/C++ v16.1.1,
       though the documentation (table 89 on page 432 of the IBM XL C/C++ for
       Linux Compiler Reference, Version 16.1.1) shows that it should be
       present.  Both GCC and clang support it. */
    r_.altivec_f32 = (vector float) vec_cmpne(a_.altivec_f32, b_.altivec_f32);
  #elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
    r_.i32 = (__typeof__(r_.i32)) (a_.f32 != b_.f32);
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
      r_.u32[i] = (a_.f32[i] != b_.f32[i]) ? ~UINT32_C(0) : UINT32_C(0);
    }
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpneq_ps(a, b) simde_mm_cmpneq_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpneq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpneq_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpneq_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.u32[0] = (a_.f32[0] != b_.f32[0]) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpneq_ss(a, b) simde_mm_cmpneq_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnge_ps (simde__m128 a, simde__m128 b) {
  return simde_mm_cmplt_ps(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnge_ps(a, b) simde_mm_cmpnge_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnge_ss (simde__m128 a, simde__m128 b) {
  return simde_mm_cmplt_ss(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnge_ss(a, b) simde_mm_cmpnge_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpngt_ps (simde__m128 a, simde__m128 b) {
  return simde_mm_cmple_ps(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpngt_ps(a, b) simde_mm_cmpngt_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpngt_ss (simde__m128 a, simde__m128 b) {
  return simde_mm_cmple_ss(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpngt_ss(a, b) simde_mm_cmpngt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnle_ps (simde__m128 a, simde__m128 b) {
  return simde_mm_cmpgt_ps(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnle_ps(a, b) simde_mm_cmpnle_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnle_ss (simde__m128 a, simde__m128 b) {
  return simde_mm_cmpgt_ss(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnle_ss(a, b) simde_mm_cmpnle_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnlt_ps (simde__m128 a, simde__m128 b) {
  return simde_mm_cmpge_ps(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnlt_ps(a, b) simde_mm_cmpnlt_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpnlt_ss (simde__m128 a, simde__m128 b) {
  return simde_mm_cmpge_ss(a, b);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpnlt_ss(a, b) simde_mm_cmpnlt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpord_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpord_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  /* Note: NEON does not have ordered compare builtin
     Need to compare a eq a and b eq b to check for NaN
     Do AND of results to get final */
  uint32x4_t ceqaa = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t ceqbb = vceqq_f32(b_.neon_f32, b_.neon_f32);
  r_.neon_u32 = vandq_u32(ceqaa, ceqbb);
#elif defined(simde_isnanf)
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = (simde_isnanf(a_.f32[i]) || simde_isnanf(b_.f32[i])) ? UINT32_C(0) : ~UINT32_C(0);
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpord_ps(a, b) simde_mm_cmpord_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpunord_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpunord_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(simde_isnanf)
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = (simde_isnanf(a_.f32[i]) || simde_isnanf(b_.f32[i])) ? ~UINT32_C(0) : UINT32_C(0);
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpunord_ps(a, b) simde_mm_cmpunord_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpunord_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE) && !defined(__PGI)
  return _mm_cmpunord_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpunord_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(simde_isnanf)
  r_.u32[0] = (simde_isnanf(a_.f32[0]) || simde_isnanf(b_.f32[0])) ? ~UINT32_C(0) : UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpunord_ss(a, b) simde_mm_cmpunord_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comieq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comieq_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_or_b_nan = vmvnq_u32(vandq_u32(a_not_nan, b_not_nan));
  uint32x4_t a_eq_b = vceqq_f32(a_.neon_f32, b_.neon_f32);
  return !!(vgetq_lane_u32(vorrq_u32(a_or_b_nan, a_eq_b), 0) != 0);
#else
  return a_.f32[0] == b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comieq_ss(a, b) simde_mm_comieq_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comige_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comige_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_and_b_not_nan = vandq_u32(a_not_nan, b_not_nan);
  uint32x4_t a_ge_b = vcgeq_f32(a_.neon_f32, b_.neon_f32);
  return !!(vgetq_lane_u32(vandq_u32(a_and_b_not_nan, a_ge_b), 0) != 0);
#else
  return a_.f32[0] >= b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comige_ss(a, b) simde_mm_comige_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comigt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comigt_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_and_b_not_nan = vandq_u32(a_not_nan, b_not_nan);
  uint32x4_t a_gt_b = vcgtq_f32(a_.neon_f32, b_.neon_f32);
  return !!(vgetq_lane_u32(vandq_u32(a_and_b_not_nan, a_gt_b), 0) != 0);
#else
  return a_.f32[0] > b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comigt_ss(a, b) simde_mm_comigt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comile_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comile_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_or_b_nan = vmvnq_u32(vandq_u32(a_not_nan, b_not_nan));
  uint32x4_t a_le_b = vcleq_f32(a_.neon_f32, b_.neon_f32);
  return !!(vgetq_lane_u32(vorrq_u32(a_or_b_nan, a_le_b), 0) != 0);
#else
  return a_.f32[0] <= b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comile_ss(a, b) simde_mm_comile_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comilt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comilt_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_or_b_nan = vmvnq_u32(vandq_u32(a_not_nan, b_not_nan));
  uint32x4_t a_lt_b = vcltq_f32(a_.neon_f32, b_.neon_f32);
  return !!(vgetq_lane_u32(vorrq_u32(a_or_b_nan, a_lt_b), 0) != 0);
#else
  return a_.f32[0] < b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comilt_ss(a, b) simde_mm_comilt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_comineq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_comineq_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  uint32x4_t a_not_nan = vceqq_f32(a_.neon_f32, a_.neon_f32);
  uint32x4_t b_not_nan = vceqq_f32(b_.neon_f32, b_.neon_f32);
  uint32x4_t a_and_b_not_nan = vandq_u32(a_not_nan, b_not_nan);
  uint32x4_t a_neq_b = vmvnq_u32(vceqq_f32(a_.neon_f32, b_.neon_f32));
  return !!(vgetq_lane_u32(vandq_u32(a_and_b_not_nan, a_neq_b), 0) != 0);
#else
  return a_.f32[0] != b_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_comineq_ss(a, b) simde_mm_comineq_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvt_pi2ps (simde__m128 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvt_pi2ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcombine_f32(vcvt_f32_s32(b_.neon_i32), vget_high_f32(a_.neon_f32));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.m64_private[0].f32, b_.i32);
  r_.m64_private[1] = a_.m64_private[1];

#else
  r_.f32[0] = (simde_float32) b_.i32[0];
  r_.f32[1] = (simde_float32) b_.i32[1];
  r_.i32[2] = a_.i32[2];
  r_.i32[3] = a_.i32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvt_pi2ps(a, b) simde_mm_cvt_pi2ps((a), b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvt_ps2pi (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvt_ps2pi(a);
#else
  simde__m64_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vcvt_s32_f32(vget_low_f32(a_.neon_f32));
#elif defined(SIMDE__CONVERT_VECTOR) && !defined(__clang__)
  SIMDE__CONVERT_VECTOR(r_.i32, a_.m64_private[0].f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = (int32_t) a_.f32[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvt_ps2pi(a) simde_mm_cvt_ps2pi((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvt_si2ss (simde__m128 a, int32_t b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cvt_si2ss(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsetq_lane_f32((float) b, a_.neon_f32, 0);
#else
  r_.f32[0] = (simde_float32) b;
  r_.i32[1] = a_.i32[1];
  r_.i32[2] = a_.i32[2];
  r_.i32[3] = a_.i32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvt_si2ss(a, b) simde_mm_cvt_si2ss((a), b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
int32_t
simde_mm_cvt_ss2si (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cvt_ss2si(a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

  #if defined(SIMDE_SSE_NEON)
    return SIMDE_CONVERT_FTOI(int32_t, nearbyintf(vgetq_lane_f32(a_.neon_f32, 0)));
  #elif defined(SIMDE_HAVE_MATH_H)
    return SIMDE_CONVERT_FTOI(int32_t, nearbyintf(a_.f32[0]));
  #else
    HEDLEY_UNREACHABLE();
  #endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvt_ss2si(a) simde_mm_cvt_ss2si((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpi16_ps (simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpi16_ps(a);
#else
  simde__m128_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_SSE_NEON) && 0 /* TODO */
  r_.neon_f32 = vmovl_s16(vget_low_s16(vuzp1q_s16(a_.neon_i16, vmovq_n_s16(0))));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.f32, a_.i16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    simde_float32 v = a_.i16[i];
    r_.f32[i] = v;
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpi16_ps(a) simde_mm_cvtpi16_ps(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpi32_ps (simde__m128 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpi32_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);
  simde__m64_private b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcombine_f32(vcvt_f32_s32(b_.neon_i32), vget_high_f32(a_.neon_f32));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.m64_private[0].f32, b_.i32);
  r_.m64_private[1] = a_.m64_private[1];
#else
  r_.f32[0] = (simde_float32) b_.i32[0];
  r_.f32[1] = (simde_float32) b_.i32[1];
  r_.i32[2] = a_.i32[2];
  r_.i32[3] = a_.i32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpi32_ps(a, b) simde_mm_cvtpi32_ps((a), b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpi32x2_ps (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpi32x2_ps(a, b);
#else
  simde__m128_private r_;
  simde__m64_private
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcvtq_f32_s32(vcombine_s32(a_.neon_i32, b_.neon_i32));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.m64_private[0].f32, a_.i32);
  SIMDE__CONVERT_VECTOR(r_.m64_private[1].f32, b_.i32);
#else
  r_.f32[0] = (simde_float32) a_.i32[0];
  r_.f32[1] = (simde_float32) a_.i32[1];
  r_.f32[2] = (simde_float32) b_.i32[0];
  r_.f32[3] = (simde_float32) b_.i32[1];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpi32x2_ps(a, b) simde_mm_cvtpi32x2_ps(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpi8_ps (simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpi8_ps(a);
#else
  simde__m128_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcvtq_f32_s32(vmovl_s16(vget_low_s16(vmovl_s8(a_.neon_i8))));
#else
  r_.f32[0] = (simde_float32) a_.i8[0];
  r_.f32[1] = (simde_float32) a_.i8[1];
  r_.f32[2] = (simde_float32) a_.i8[2];
  r_.f32[3] = (simde_float32) a_.i8[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpi8_ps(a) simde_mm_cvtpi8_ps(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtps_pi16 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtps_pi16(a);
#else
  simde__m64_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

  #if defined(SIMDE__CONVERT_VECTOR)
    SIMDE__CONVERT_VECTOR(r_.i16, a_.f32);
  #elif defined(SIMDE_SSE_NEON)
    r_.neon_i16 = vmovn_s32(vcvtq_s32_f32(a_.neon_f32));
  #else
    SIMDE__VECTORIZE
    for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
      r_.i16[i] = SIMDE_CONVERT_FTOI(int16_t, a_.f32[i]);
    }
  #endif

  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtps_pi16(a) simde_mm_cvtps_pi16((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtps_pi32 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtps_pi32(a);
#else
  simde__m64_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vcvt_s32_f32(vget_low_f32(a_.neon_f32));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.i32, a_.m64_private[0].f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = SIMDE_CONVERT_FTOI(int32_t, a_.f32[i]);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtps_pi32(a) simde_mm_cvtps_pi32((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtps_pi8 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtps_pi8(a);
#else
  simde__m64_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  int16x4_t b = vmovn_s32(vcvtq_s32_f32(a_.neon_f32));
  int16x8_t c = vcombine_s16(b, vmov_n_s16(0));
  r_.neon_i8 = vmovn_s16(c);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(a_.f32) / sizeof(a_.f32[0])) ; i++) {
    r_.i8[i] = SIMDE_CONVERT_FTOI(int8_t, a_.f32[i]);
  }
  /* Note: the upper half is undefined */
#endif

  return simde__m64_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtps_pi8(a) simde_mm_cvtps_pi8((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpu16_ps (simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpu16_ps(a);
#else
  simde__m128_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcvtq_f32_u32(vmovl_u16(a_.neon_u16));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.f32, a_.u16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = (simde_float32) a_.u16[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpu16_ps(a) simde_mm_cvtpu16_ps(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtpu8_ps (simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtpu8_ps(a);
#else
  simde__m128_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcvtq_f32_u32(vmovl_u16(vget_low_u16(vmovl_u8(a_.neon_u8))));
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = (simde_float32) a_.u8[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtpu8_ps(a) simde_mm_cvtpu8_ps(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
  simde_mm_cvtsi32_ss (simde__m128 a, int32_t b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cvtsi32_ss(a, b);
#else
  simde__m128_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsetq_lane_f32((simde_float32) b, a_.neon_f32, 0);
#else
  r_.f32[0] = (simde_float32) b;
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.i32) / sizeof(r_.i32[0])) ; i++) {
    r_.i32[i] = a_.i32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtsi32_ss(a, b) simde_mm_cvtsi32_ss((a), b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cvtsi64_ss (simde__m128 a, int64_t b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_AMD64)
  #if !defined(__PGI)
    return _mm_cvtsi64_ss(a, b);
  #else
    return _mm_cvtsi64x_ss(a, b);
  #endif
#else
  simde__m128_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsetq_lane_f32((simde_float32) b, a_.neon_f32, 0);
#else
  r_ = a_;
  r_.f32[0] = (simde_float32) b;
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtsi64_ss(a, b) simde_mm_cvtsi64_ss((a), b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde_float32
simde_mm_cvtss_f32 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cvtss_f32(a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);
#if defined(SIMDE_SSE_NEON)
  return vgetq_lane_f32(a_.neon_f32, 0);
#else
  return a_.f32[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtss_f32(a) simde_mm_cvtss_f32((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int32_t
simde_mm_cvtss_si32 (simde__m128 a) {
  return simde_mm_cvt_ss2si(a);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtss_si32(a) simde_mm_cvtss_si32((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int64_t
simde_mm_cvtss_si64 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_AMD64)
  #if !defined(__PGI)
    return _mm_cvtss_si64(a);
  #else
    return _mm_cvtss_si64x(a);
  #endif
#else
  simde__m128_private a_ = simde__m128_to_private(a);
  #if defined(SIMDE_SSE_NEON)
    return SIMDE_CONVERT_FTOI(int64_t, vgetq_lane_f32(a_.neon_f32, 0));
  #else
    return SIMDE_CONVERT_FTOI(int64_t, a_.f32[0]);
  #endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtss_si64(a) simde_mm_cvtss_si64((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_cvtt_ps2pi (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_cvtt_ps2pi(a);
#else
  simde__m64_private r_;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vcvt_s32_f32(vget_low_f32(a_.neon_f32));
#elif defined(SIMDE__CONVERT_VECTOR)
  SIMDE__CONVERT_VECTOR(r_.i32, a_.m64_private[0].f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.i32[i] = SIMDE_CONVERT_FTOI(int32_t, a_.f32[i]);
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_mm_cvttps_pi32(a) simde_mm_cvtt_ps2pi(a)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtt_ps2pi(a) simde_mm_cvtt_ps2pi((a))
#  define _mm_cvttps_pi32(a) simde_mm_cvttps_pi32((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int32_t
simde_mm_cvtt_ss2si (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cvtt_ss2si(a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  return SIMDE_CONVERT_FTOI(int32_t, vgetq_lane_f32(a_.neon_f32, 0));
#else
  return SIMDE_CONVERT_FTOI(int32_t, a_.f32[0]);
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvtt_ss2si(a) simde_mm_cvtt_ss2si((a))
#  define _mm_cvttss_si32(a) simde_mm_cvttss_si32((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int64_t
simde_mm_cvttss_si64 (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_AMD64) && !defined(_MSC_VER)
  #if defined(__PGI)
    return _mm_cvttss_si64x(a);
  #else
    return _mm_cvttss_si64(a);
  #endif
#else
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  return SIMDE_CONVERT_FTOI(int64_t, vgetq_lane_f32(a_.neon_f32, 0));
#else
  return SIMDE_CONVERT_FTOI(int64_t, a_.f32[0]);
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cvttss_si64(a) simde_mm_cvttss_si64((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_cmpord_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_cmpord_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_cmpord_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(simde_isnanf)
  r_.u32[0] = (simde_isnanf(simde_mm_cvtss_f32(a)) || simde_isnanf(simde_mm_cvtss_f32(b))) ? UINT32_C(0) : ~UINT32_C(0);
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.u32[i] = a_.u32[i];
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_cmpord_ss(a, b) simde_mm_cmpord_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_div_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_div_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON) && defined(SIMDE_ARCH_AARCH64)
  r_.neon_f32 = vdivq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_NEON)
  float32x4_t recip0 = vrecpeq_f32(b_.neon_f32);
  float32x4_t recip1 = vmulq_f32(recip0, vrecpsq_f32(recip0, b_.neon_f32));
  r_.neon_f32 = vmulq_f32(a_.neon_f32, recip1);
#elif defined(SIMDE_SSE_WASM_SIMD128)
    r_.wasm_v128 =  wasm_f32x4_div(a_.wasm_v128, b_.wasm_v128);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.f32 = a_.f32 / b_.f32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = a_.f32[i] / b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_div_ps(a, b) simde_mm_div_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_div_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_div_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_div_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = a_.f32[0] / b_.f32[0];
  SIMDE__VECTORIZE
  for (size_t i = 1 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = a_.f32[i];
  }

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_div_ss(a, b) simde_mm_div_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int16_t
simde_mm_extract_pi16 (simde__m64 a, const int imm8)
    HEDLEY_REQUIRE_MSG((imm8 & 3) == imm8, "imm8 must be in range [0, 3]") {
  simde__m64_private a_ = simde__m64_to_private(a);
  return a_.i16[imm8];
}
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX) && !defined(HEDLEY_PGI_VERSION)
#  if HEDLEY_HAS_WARNING("-Wvector-conversion")
     /* https://bugs.llvm.org/show_bug.cgi?id=44589 */
#    define simde_mm_extract_pi16(a, imm8) ( \
         HEDLEY_DIAGNOSTIC_PUSH \
         _Pragma("clang diagnostic ignored \"-Wvector-conversion\"") \
         HEDLEY_STATIC_CAST(int16_t, _mm_extract_pi16((a), (imm8))) \
         HEDLEY_DIAGNOSTIC_POP \
       )
#  else
#    define simde_mm_extract_pi16(a, imm8) ((int16_t) (_mm_extract_pi16(a, imm8)))
#  endif
#elif defined(SIMDE_SSE_NEON)
#  define simde_mm_extract_pi16(a, imm8) ((int16_t) (vget_lane_s16(simde__m64_to_private(a).neon_i16, imm8)))
#endif
#define simde_m_pextrw(a, imm8) simde_mm_extract_pi16(a, imm8)

enum {
#if defined(SIMDE_SSE_NATIVE)
  SIMDE_MM_ROUND_NEAREST     = _MM_ROUND_NEAREST,
  SIMDE_MM_ROUND_DOWN        = _MM_ROUND_DOWN,
  SIMDE_MM_ROUND_UP          = _MM_ROUND_UP,
  SIMDE_MM_ROUND_TOWARD_ZERO = _MM_ROUND_TOWARD_ZERO
#else
  SIMDE_MM_ROUND_NEAREST
#if defined(FE_TONEAREST)
  = FE_TONEAREST
#endif
  ,

  SIMDE_MM_ROUND_DOWN
#if defined(FE_DOWNWARD)
  = FE_DOWNWARD
#endif
  ,

  SIMDE_MM_ROUND_UP
#if defined(FE_UPWARD)
  = FE_UPWARD
#endif
  ,

  SIMDE_MM_ROUND_TOWARD_ZERO
#if defined(FE_TOWARDZERO)
  = FE_TOWARDZERO
#endif
#endif
};

SIMDE__FUNCTION_ATTRIBUTES
unsigned int
SIMDE_MM_GET_ROUNDING_MODE(void) {
#if defined(SIMDE_SSE_NATIVE)
  return _MM_GET_ROUNDING_MODE();
#elif defined(SIMDE_HAVE_MATH_H)
  return (unsigned int) fegetround();
#else
  HEDLEY_UNREACHABLE();
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_extract_pi16(a, imm8) simde_mm_extract_pi16((a), imm8)
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
SIMDE_MM_SET_ROUNDING_MODE(unsigned int a) {
#if defined(SIMDE_SSE_NATIVE)
  _MM_SET_ROUNDING_MODE(a);
#else
  fesetround((int) a);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _MM_SET_ROUNDING_MODE(a) SIMDE_MM_SET_ROUNDING_MODE(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_insert_pi16 (simde__m64 a, int16_t i, const int imm8)
    HEDLEY_REQUIRE_MSG((imm8 & 3) == imm8, "imm8 must be in range [0, 3]") {
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a);

  r_.i64[0] = a_.i64[0];
  r_.i16[imm8] = i;

  return simde__m64_from_private(r_);
}
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX) && !defined(__PGI)
#  if HEDLEY_HAS_WARNING("-Wvector-conversion")
     /* https://bugs.llvm.org/show_bug.cgi?id=44589 */
#    define ssimde_mm_insert_pi16(a, i, imm8) ( \
         HEDLEY_DIAGNOSTIC_PUSH \
         _Pragma("clang diagnostic ignored \"-Wvector-conversion\"") \
        (_mm_insert_pi16((a), (i), (imm8))) \
         HEDLEY_DIAGNOSTIC_POP \
       )
#  else
#    define simde_mm_insert_pi16(a, i, imm8) _mm_insert_pi16(a, i, imm8)
#  endif
#elif defined(SIMDE_SSE_NEON)
#  define simde_mm_insert_pi16(a, i, imm8) simde__m64_from_private((simde__m64_private) { .neon_i16 = vset_lane_s16(i, simde__m64_to_private(a).neon_i16, (imm8)) })
#endif
#define simde_m_pinsrw(a, i, imm8) (simde_mm_insert_pi16(a, i, imm8))
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_insert_pi16(a, i, imm8) simde_mm_insert_pi16(a, i, imm8)
#  define _m_pinsrw(a, i, imm8) simde_mm_insert_pi16(a, i, imm8)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_load_ps (simde_float32 const mem_addr[HEDLEY_ARRAY_PARAM(4)]) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  return _mm_load_ps(mem_addr);
#else
  simde__m128_private r_;

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vld1q_f32(mem_addr);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_ld(0, mem_addr);
#else
  r_ = *SIMDE_CAST_ALIGN(16, simde__m128_private const*, mem_addr);
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_load_ps(mem_addr) simde_mm_load_ps(mem_addr)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_load_ps1 (simde_float32 const* mem_addr) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_load_ps1(mem_addr);
#else
  simde__m128_private r_;

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vld1q_dup_f32(mem_addr);
#else
  r_ = simde__m128_to_private(simde_mm_set1_ps(*mem_addr));
#endif

  return simde__m128_from_private(r_);
#endif
}
#define simde_mm_load1_ps(mem_addr) simde_mm_load_ps1(mem_addr)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_load_ps1(mem_addr) simde_mm_load_ps1(mem_addr)
#  define _mm_load1_ps(mem_addr) simde_mm_load_ps1(mem_addr)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_load_ss (simde_float32 const* mem_addr) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_load_ss(mem_addr);
#else
  simde__m128_private r_;

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsetq_lane_f32(*mem_addr, vdupq_n_f32(0), 0);
#else
  r_.f32[0] = *mem_addr;
  r_.i32[1] = 0;
  r_.i32[2] = 0;
  r_.i32[3] = 0;
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_load_ss(mem_addr) simde_mm_load_ss(mem_addr)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_loadh_pi (simde__m128 a, simde__m64 const* mem_addr) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_loadh_pi(a, HEDLEY_REINTERPRET_CAST(__m64 const*, mem_addr));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcombine_f32(vget_low_f32(a_.neon_f32), vld1_f32(HEDLEY_REINTERPRET_CAST(const float32_t*, mem_addr)));
#else
  simde__m64_private b_ = *HEDLEY_REINTERPRET_CAST(simde__m64_private const*, mem_addr);
  r_.f32[0] = a_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = b_.f32[0];
  r_.f32[3] = b_.f32[1];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_loadh_pi(a, mem_addr) simde_mm_loadh_pi((a), (simde__m64 const*) (mem_addr))
#endif

/* The SSE documentation says that there are no alignment requirements
   for mem_addr.  Unfortunately they used the __m64 type for the argument
   which is supposed to be 8-byte aligned, so some compilers (like clang
   with -Wcast-align) will generate a warning if you try to cast, say,
   a simde_float32* to a simde__m64* for this function.

   I think the choice of argument type is unfortunate, but I do think we
   need to stick to it here.  If there is demand I can always add something
   like simde_x_mm_loadl_f32(simde__m128, simde_float32 mem_addr[2]) */
SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_loadl_pi (simde__m128 a, simde__m64 const* mem_addr) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_loadl_pi(a, HEDLEY_REINTERPRET_CAST(__m64 const*, mem_addr));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vcombine_f32(vld1_f32(HEDLEY_REINTERPRET_CAST(const float32_t*, mem_addr)), vget_high_f32(a_.neon_f32));
#else
  simde__m64_private b_;
  simde_memcpy(&b_, mem_addr, sizeof(b_));
  r_.i32[0] = b_.i32[0];
  r_.i32[1] = b_.i32[1];
  r_.i32[2] = a_.i32[2];
  r_.i32[3] = a_.i32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_loadl_pi(a, mem_addr) simde_mm_loadl_pi((a), (simde__m64 const*) (mem_addr))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_loadr_ps (simde_float32 const mem_addr[HEDLEY_ARRAY_PARAM(4)]) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  return _mm_loadr_ps(mem_addr);
#else
  simde__m128_private
    r_,
    v_ = simde__m128_to_private(simde_mm_load_ps(mem_addr));

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vrev64q_f32(v_.neon_f32);
  r_.neon_f32 = vextq_f32(r_.neon_f32, r_.neon_f32, 2);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, v_.f32, v_.f32, 3, 2, 1, 0);
#else
  r_.f32[0] = v_.f32[3];
  r_.f32[1] = v_.f32[2];
  r_.f32[2] = v_.f32[1];
  r_.f32[3] = v_.f32[0];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_loadr_ps(mem_addr) simde_mm_loadr_ps(mem_addr)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_loadu_ps (simde_float32 const mem_addr[HEDLEY_ARRAY_PARAM(4)]) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_loadu_ps(mem_addr);
#else
  simde__m128_private r_;

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vld1q_f32(HEDLEY_REINTERPRET_CAST(const float32_t*, mem_addr));
#else
  r_.f32[0] = mem_addr[0];
  r_.f32[1] = mem_addr[1];
  r_.f32[2] = mem_addr[2];
  r_.f32[3] = mem_addr[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_loadu_ps(mem_addr) simde_mm_loadu_ps(mem_addr)
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_maskmove_si64 (simde__m64 a, simde__m64 mask, int8_t* mem_addr) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  _mm_maskmove_si64(a, mask, HEDLEY_REINTERPRET_CAST(char*, mem_addr));
#else
  simde__m64_private
    a_ = simde__m64_to_private(a),
    mask_ = simde__m64_to_private(mask);

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(a_.i8) / sizeof(a_.i8[0])) ; i++)
    if (mask_.i8[i] < 0)
      mem_addr[i] = a_.i8[i];
#endif
}
#define simde_m_maskmovq(a, mask, mem_addr) simde_mm_maskmove_si64(a, mask, mem_addr)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_maskmove_si64(a, mask, mem_addr) simde_mm_maskmove_si64((a), SIMDE_CHECKED_REINTERPRET_CAST(int8_t*, char*, mask), (mem_addr))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_max_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_max_pi16(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i16 = vmax_s16(a_.neon_i16, b_.neon_i16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = (a_.i16[i] > b_.i16[i]) ? a_.i16[i] : b_.i16[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmaxsw(a, b) simde_mm_max_pi16(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_max_pi16(a, b) simde_mm_max_pi16(a, b)
#  define _m_pmaxsw(a, b) simde_mm_max_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_max_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_max_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vmaxq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_max(a_.altivec_f32, b_.altivec_f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = (a_.f32[i] > b_.f32[i]) ? a_.f32[i] : b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_max_ps(a, b) simde_mm_max_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_max_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_max_pu8(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_u8 = vmax_u8(a_.neon_u8, b_.neon_u8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    r_.u8[i] = (a_.u8[i] > b_.u8[i]) ? a_.u8[i] : b_.u8[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmaxub(a, b) simde_mm_max_pu8(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_max_pu8(a, b) simde_mm_max_pu8(a, b)
#  define _m_pmaxub(a, b) simde_mm_max_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_max_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_max_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_max_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = (a_.f32[0] > b_.f32[0]) ? a_.f32[0] : b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_max_ss(a, b) simde_mm_max_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_min_pi16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_min_pi16(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i16 = vmin_s16(a_.neon_i16, b_.neon_i16);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.i16) / sizeof(r_.i16[0])) ; i++) {
    r_.i16[i] = (a_.i16[i] < b_.i16[i]) ? a_.i16[i] : b_.i16[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pminsw(a, b) simde_mm_min_pi16(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_min_pi16(a, b) simde_mm_min_pi16(a, b)
#  define _m_pminsw(a, b) simde_mm_min_pi16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_min_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_min_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vminq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_POWER_ALTIVEC)
  r_.altivec_f32 = vec_min(a_.altivec_f32, b_.altivec_f32);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = (a_.f32[i] < b_.f32[i]) ? a_.f32[i] : b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_min_ps(a, b) simde_mm_min_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_min_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_min_pu8(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_u8 = vmin_u8(a_.neon_u8, b_.neon_u8);
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    r_.u8[i] = (a_.u8[i] < b_.u8[i]) ? a_.u8[i] : b_.u8[i];
  }
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pminub(a, b) simde_mm_min_pu8(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_min_pu8(a, b) simde_mm_min_pu8(a, b)
#  define _m_pminub(a, b) simde_mm_min_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_min_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_min_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_min_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = (a_.f32[0] < b_.f32[0]) ? a_.f32[0] : b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_min_ss(a, b) simde_mm_min_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_movehl_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_movehl_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE__SHUFFLE_VECTOR)
    r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, b_.f32, 6, 7, 2, 3);
  #else
    r_.f32[0] = b_.f32[2];
    r_.f32[1] = b_.f32[3];
    r_.f32[2] = a_.f32[2];
    r_.f32[3] = a_.f32[3];
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_movehl_ps(a, b) simde_mm_movehl_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_movelh_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_movelh_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  #if defined(SIMDE__SHUFFLE_VECTOR)
    r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, b_.f32, 0, 1, 4, 5);
  #else
    r_.f32[0] = a_.f32[0];
    r_.f32[1] = a_.f32[1];
    r_.f32[2] = b_.f32[0];
    r_.f32[3] = b_.f32[1];
  #endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_movelh_ps(a, b) simde_mm_movelh_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_movemask_pi8 (simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_movemask_pi8(a);
#else
  simde__m64_private a_ = simde__m64_to_private(a);
  int r = 0;
  const size_t nmemb = sizeof(a_.i8) / sizeof(a_.i8[0]);

  SIMDE__VECTORIZE_REDUCTION(|:r)
  for (size_t i = 0 ; i < nmemb ; i++) {
    r |= (a_.u8[nmemb - 1 - i] >> 7) << (nmemb - 1 - i);
  }

  return r;
#endif
}
#define simde_m_pmovmskb(a, b) simde_mm_movemask_pi8(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_movemask_pi8(a) simde_mm_movemask_pi8(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_movemask_ps (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_movemask_ps(a);
#else
  int r = 0;
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  /* TODO: check to see if NEON version is faster than the portable version */
  static const uint32x4_t movemask = { 1, 2, 4, 8 };
  static const uint32x4_t highbit = { 0x80000000, 0x80000000, 0x80000000, 0x80000000 };
  uint32x4_t t0 = a_.neon_u32;
  uint32x4_t t1 = vtstq_u32(t0, highbit);
  uint32x4_t t2 = vandq_u32(t1, movemask);
  uint32x2_t t3 = vorr_u32(vget_low_u32(t2), vget_high_u32(t2));
  r = vget_lane_u32(t3, 0) | vget_lane_u32(t3, 1);
#else
  SIMDE__VECTORIZE_REDUCTION(|:r)
  for (size_t i = 0 ; i < sizeof(a_.u32) / sizeof(a_.u32[0]) ; i++) {
    r |= (a_.u32[i] >> ((sizeof(a_.u32[i]) * CHAR_BIT) - 1)) << i;
  }
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_movemask_ps(a) simde_mm_movemask_ps((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_mul_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_mul_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vmulq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_WASM_SIMD128)
  r_.wasm_v128 = wasm_f32x4_mul(a_.wasm_v128, b_.wasm_v128);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.f32 = a_.f32 * b_.f32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = a_.f32[i] * b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_mul_ps(a, b) simde_mm_mul_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_mul_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_mul_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_mul_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = a_.f32[0] * b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_mul_ss(a, b) simde_mm_mul_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_mulhi_pu16 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_mulhi_pu16(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);

  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u16) / sizeof(r_.u16[0])) ; i++) {
    r_.u16[i] = HEDLEY_STATIC_CAST(uint16_t, ((HEDLEY_STATIC_CAST(uint32_t, a_.u16[i]) * HEDLEY_STATIC_CAST(uint32_t, b_.u16[i])) >> UINT32_C(16)));
  }

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_pmulhuw(a, b) simde_mm_mulhi_pu16(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_mulhi_pu16(a, b) simde_mm_mulhi_pu16(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_or_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_or_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = vorrq_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32f = a_.i32f | b_.i32f;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i] | b_.u32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_or_ps(a, b) simde_mm_or_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_prefetch (char const* p, int i) {
  (void) p;
  (void) i;
}
#if defined(SIMDE_SSE_NATIVE)
#  define simde_mm_prefetch(p, i) _mm_prefetch(p, i)
#endif
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_prefetch(p, i) simde_mm_prefetch(p, i)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_rcp_ps (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_rcp_ps(a);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  float32x4_t recip = vrecpeq_f32(a_.neon_f32);

#  if !defined(SIMDE_MM_RCP_PS_ITERS)
#    define SIMDE_MM_RCP_PS_ITERS SIMDE_ACCURACY_ITERS
#  endif

  for (int i = 0; i < SIMDE_MM_RCP_PS_ITERS ; ++i) {
    recip = vmulq_f32(recip, vrecpsq_f32(recip, a_.neon_f32));
  }

  r_.neon_f32 = recip;
#elif defined(SIMDE_VECTOR_SUBSCRIPT_SCALAR)
  r_.f32 = 1.0f / a_.f32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = 1.0f / a_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_rcp_ps(a) simde_mm_rcp_ps((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_rcp_ss (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_rcp_ss(a);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_rcp_ps(a));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

  r_.f32[0] = 1.0f / a_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_rcp_ss(a) simde_mm_rcp_ss((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_rsqrt_ps (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_rsqrt_ps(a);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vrsqrteq_f32(a_.neon_f32);
#elif defined(__STDC_IEC_559__)
  /* http://h14s.p5r.org/2012/09/0x5f3759df.html?mwh=1 */
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.i32[i]  = INT32_C(0x5f3759df) - (a_.i32[i] >> 1);

#if SIMDE_ACCURACY_ITERS > 2
    const float half = SIMDE_FLOAT32_C(0.5) * a_.f32[i];
    for (int ai = 2 ; ai < SIMDE_ACCURACY_ITERS ; ai++)
      r_.f32[i] *= SIMDE_FLOAT32_C(1.5) - (half * r_.f32[i] * r_.f32[i]);
#endif
  }
#elif defined(SIMDE_HAVE_MATH_H)
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = 1.0f / sqrtf(a_.f32[i]);
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_rsqrt_ps(a) simde_mm_rsqrt_ps((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_rsqrt_ss (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_rsqrt_ss(a);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_rsqrt_ps(a));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(__STDC_IEC_559__)
  {
    r_.i32[0]  = INT32_C(0x5f3759df) - (a_.i32[0] >> 1);

#if SIMDE_ACCURACY_ITERS > 2
    float half = SIMDE_FLOAT32_C(0.5) * a_.f32[0];
    for (int ai = 2 ; ai < SIMDE_ACCURACY_ITERS ; ai++)
      r_.f32[0] *= SIMDE_FLOAT32_C(1.5) - (half * r_.f32[0] * r_.f32[0]);
#endif
  }
  r_.f32[0] = 1.0f / sqrtf(a_.f32[0]);
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];
#elif defined(SIMDE_HAVE_MATH_H)
  r_.f32[0] = 1.0f / sqrtf(a_.f32[0]);
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_rsqrt_ss(a) simde_mm_rsqrt_ss((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_sad_pu8 (simde__m64 a, simde__m64 b) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  return _mm_sad_pu8(a, b);
#else
  simde__m64_private
    r_,
    a_ = simde__m64_to_private(a),
    b_ = simde__m64_to_private(b);
  uint16_t sum = 0;

#if defined(SIMDE_HAVE_STDLIB_H)
  SIMDE__VECTORIZE_REDUCTION(+:sum)
  for (size_t i = 0 ; i < (sizeof(r_.u8) / sizeof(r_.u8[0])) ; i++) {
    sum += (uint8_t) abs(a_.u8[i] - b_.u8[i]);
  }

  r_.i16[0] = (int16_t) sum;
  r_.i16[1] = 0;
  r_.i16[2] = 0;
  r_.i16[3] = 0;
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m64_from_private(r_);
#endif
}
#define simde_m_psadbw(a, b) simde_mm_sad_pu8(a, b)
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sad_pu8(a, b) simde_mm_sad_pu8(a, b)
#  define _m_psadbw(a, b) simde_mm_sad_pu8(a, b)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_set_ss (simde_float32 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_set_ss(a);
#elif defined(SIMDE_SSE_NEON)
  return vsetq_lane_f32(a, vdupq_n_f32(SIMDE_FLOAT32_C(0.0)), 0);
#else
  return simde_mm_set_ps(SIMDE_FLOAT32_C(0.0), SIMDE_FLOAT32_C(0.0), SIMDE_FLOAT32_C(0.0), a);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_set_ss(a) simde_mm_set_ss(a)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_setr_ps (simde_float32 e3, simde_float32 e2, simde_float32 e1, simde_float32 e0) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_setr_ps(e3, e2, e1, e0);
#elif defined(SIMDE_SSE_NEON)
  SIMDE_ALIGN(16) simde_float32 data[4] = { e3, e2, e1, e0 };
  return vld1q_f32(data);
#else
  return simde_mm_set_ps(e0, e1, e2, e3);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_setr_ps(e3, e2, e1, e0) simde_mm_setr_ps(e3, e2, e1, e0)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_setzero_ps (void) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_setzero_ps();
#elif defined(SIMDE_SSE_NEON)
  return vdupq_n_f32(SIMDE_FLOAT32_C(0.0));
#else
  simde__m128 r;
  simde_memset(&r, 0, sizeof(r));
  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_setzero_ps() simde_mm_setzero_ps()
#endif

#if defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
HEDLEY_DIAGNOSTIC_PUSH
SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_undefined_ps (void) {
  simde__m128_private r_;

#if defined(SIMDE__HAVE_UNDEFINED128)
  r_.n = _mm_undefined_ps();
#elif !defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
  r_ = simde__m128_to_private(simde_mm_setzero_ps());
#endif

 return simde__m128_from_private(r_);
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_undefined_ps() simde_mm_undefined_ps()
#endif

#if defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
HEDLEY_DIAGNOSTIC_POP
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_setone_ps (void) {
  simde__m128 t = simde_mm_setzero_ps();
  return simde_mm_cmpeq_ps(t, t);
}

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_sfence (void) {
  /* TODO: Use Hedley. */
#if defined(SIMDE_SSE_NATIVE)
  _mm_sfence();
#elif defined(__GNUC__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 7))
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
#elif !defined(__INTEL_COMPILER) && defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L) && !defined(__STDC_NO_ATOMICS__)
#  if defined(__GNUC__) && (__GNUC__ == 4) && (__GNUC_MINOR__ < 9)
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
#  else
  atomic_thread_fence(memory_order_seq_cst);
#  endif
#elif defined(_MSC_VER)
  MemoryBarrier();
#elif HEDLEY_HAS_EXTENSION(c_atomic)
  __c11_atomic_thread_fence(__ATOMIC_SEQ_CST);
#elif defined(__GNUC__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 1))
  __sync_synchronize();
#elif defined(_OPENMP)
#  pragma omp critical(simde_mm_sfence_)
  { }
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sfence() simde_mm_sfence()
#endif

#define SIMDE_MM_SHUFFLE(z, y, x, w) (((z) << 6) | ((y) << 4) | ((x) << 2) | (w))
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _MM_SHUFFLE(z, y, x, w) SIMDE_MM_SHUFFLE(z, y, x, w)
#endif

#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX) && !defined(__PGI)
#  define simde_mm_shuffle_pi16(a, imm8) _mm_shuffle_pi16(a, imm8)
#elif defined(SIMDE__SHUFFLE_VECTOR)
#  define simde_mm_shuffle_pi16(a, imm8) (__extension__ ({ \
      const simde__m64_private simde__tmp_a_ = simde__m64_to_private(a); \
      simde__m64_from_private((simde__m64_private) { .i16 = \
        SIMDE__SHUFFLE_VECTOR(16, 8, \
          (simde__tmp_a_).i16, \
          (simde__tmp_a_).i16, \
          (((imm8)     ) & 3), \
          (((imm8) >> 2) & 3), \
          (((imm8) >> 4) & 3), \
          (((imm8) >> 6) & 3)) }); }))
#else
SIMDE__FUNCTION_ATTRIBUTES
simde__m64
simde_mm_shuffle_pi16 (simde__m64 a, const int imm8)
    HEDLEY_REQUIRE_MSG((imm8 & 0xff) == imm8, "imm8 must be in range [0, 255]") {
  simde__m64_private r_;
  simde__m64_private a_ = simde__m64_to_private(a);

  for (size_t i = 0 ; i < sizeof(r_.i16) / sizeof(r_.i16[0]) ; i++) {
    r_.i16[i] = a_.i16[(imm8 >> (i * 2)) & 3];
  }

HEDLEY_DIAGNOSTIC_PUSH
#if HEDLEY_HAS_WARNING("-Wconditional-uninitialized")
#  pragma clang diagnostic ignored "-Wconditional-uninitialized"
#endif
  return simde__m64_from_private(r_);
HEDLEY_DIAGNOSTIC_POP
}
#endif
#if defined(SIMDE_SSE_NATIVE) && !defined(__PGI)
#  define simde_m_pshufw(a, imm8) _m_pshufw(a, imm8)
#else
#  define simde_m_pshufw(a, imm8) simde_mm_shuffle_pi16(a, imm8)
#endif
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_shuffle_pi16(a, imm8) simde_mm_shuffle_pi16(a, imm8)
#  define _m_pshufw(a, imm8) simde_mm_shuffle_pi16(a, imm8)
#endif

#if defined(SIMDE_SSE_NATIVE) && !defined(__PGI)
#  define simde_mm_shuffle_ps(a, b, imm8) _mm_shuffle_ps(a, b, imm8)
#elif defined(SIMDE__SHUFFLE_VECTOR)
#  define simde_mm_shuffle_ps(a, b, imm8) (__extension__ ({ \
      simde__m128_from_private((simde__m128_private) { .f32 = \
        SIMDE__SHUFFLE_VECTOR(32, 16, \
          simde__m128_to_private(a).f32, \
          simde__m128_to_private(b).f32, \
          (((imm8)     ) & 3), \
          (((imm8) >> 2) & 3), \
          (((imm8) >> 4) & 3) + 4, \
          (((imm8) >> 6) & 3) + 4) }); }))
#else
SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_shuffle_ps (simde__m128 a, simde__m128 b, const int imm8)
    HEDLEY_REQUIRE_MSG((imm8 & 0xff) == imm8, "imm8 must be in range [0, 255]") {
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = a_.f32[(imm8 >> 0) & 3];
  r_.f32[1] = a_.f32[(imm8 >> 2) & 3];
  r_.f32[2] = b_.f32[(imm8 >> 4) & 3];
  r_.f32[3] = b_.f32[(imm8 >> 6) & 3];

  return simde__m128_from_private(r_);
}
#endif
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_shuffle_ps(a, b, imm8) simde_mm_shuffle_ps((a), (b), imm8)
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_sqrt_ps (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_sqrt_ps(a);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  float32x4_t recipsq = vrsqrteq_f32(a_.neon_f32);
  float32x4_t sq = vrecpeq_f32(recipsq);
  /* ??? use step versions of both sqrt and recip for better accuracy? */
  r_.neon_f32 = sq;
#elif defined(SIMDE_HAVE_MATH_H)
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < sizeof(r_.f32) / sizeof(r_.f32[0]) ; i++) {
    r_.f32[i] = sqrtf(a_.f32[i]);
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sqrt_ps(a) simde_mm_sqrt_ps((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_sqrt_ss (simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_sqrt_ss(a);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_sqrt_ps(a));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a);

#if defined(SIMDE_HAVE_MATH_H)
  r_.f32[0] = sqrtf(a_.f32[0]);
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];
#else
  HEDLEY_UNREACHABLE();
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sqrt_ss(a) simde_mm_sqrt_ss((a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_store_ps (simde_float32 mem_addr[4], simde__m128 a) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  _mm_store_ps(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

  #if defined(SIMDE_SSE_NEON)
    vst1q_f32(mem_addr, a_.neon_f32);
  #elif defined(SIMDE_SSE_WASM_SIMD128)
    wasm_v128_store(mem_addr, a_.wasm_v128);
  #else
    SIMDE__VECTORIZE_ALIGNED(mem_addr:16)
    for (size_t i = 0 ; i < sizeof(a_.f32) / sizeof(a_.f32[0]) ; i++) {
      mem_addr[i] = a_.f32[i];
    }
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_store_ps(mem_addr, a) simde_mm_store_ps(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_store_ps1 (simde_float32 mem_addr[4], simde__m128 a) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  _mm_store_ps1(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

  SIMDE__VECTORIZE_ALIGNED(mem_addr:16)
  for (size_t i = 0 ; i < sizeof(a_.f32) / sizeof(a_.f32[0]) ; i++) {
    mem_addr[i] = a_.f32[0];
  }
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_store_ps1(mem_addr, a) simde_mm_store_ps1(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_store_ss (simde_float32* mem_addr, simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  _mm_store_ss(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

  #if defined(SIMDE_SSE_NEON)
    vst1q_lane_f32(mem_addr, a_.neon_f32, 0);
  #else
    *mem_addr = a_.f32[0];
  #endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_store_ss(mem_addr, a) simde_mm_store_ss(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_store1_ps (simde_float32 mem_addr[4], simde__m128 a) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  _mm_store1_ps(mem_addr, a);
#else
  simde_mm_store_ps1(mem_addr, a);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_store1_ps(mem_addr, a) simde_mm_store1_ps(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_storeh_pi (simde__m64* mem_addr, simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  _mm_storeh_pi(HEDLEY_REINTERPRET_CAST(__m64*, mem_addr), a);
#else
  simde__m64_private* dest_ = HEDLEY_REINTERPRET_CAST(simde__m64_private*, mem_addr);
  simde__m128_private a_ = simde__m128_to_private(a);

  dest_->f32[0] = a_.f32[2];
  dest_->f32[1] = a_.f32[3];
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_storeh_pi(mem_addr, a) simde_mm_storeh_pi(mem_addr, (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_storel_pi (simde__m64* mem_addr, simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  _mm_storel_pi(HEDLEY_REINTERPRET_CAST(__m64*, mem_addr), a);
#else
  simde__m64_private* dest_ = HEDLEY_REINTERPRET_CAST(simde__m64_private*, mem_addr);
  simde__m128_private a_ = simde__m128_to_private(a);

  dest_->f32[0] = a_.f32[0];
  dest_->f32[1] = a_.f32[1];
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_storel_pi(mem_addr, a) simde_mm_storel_pi(mem_addr, (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_storer_ps (simde_float32 mem_addr[4], simde__m128 a) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  _mm_storer_ps(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

  #if defined(SIMDE__SHUFFLE_VECTOR)
    a_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, a_.f32, 3, 2, 1, 0);
    simde_mm_store_ps(mem_addr, simde__m128_from_private(a_));
  #else
    SIMDE__VECTORIZE_ALIGNED(mem_addr:16)
    for (size_t i = 0 ; i < sizeof(a_.f32) / sizeof(a_.f32[0]) ; i++) {
      mem_addr[i] = a_.f32[((sizeof(a_.f32) / sizeof(a_.f32[0])) - 1) - i];
    }
  #endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_storer_ps(mem_addr, a) simde_mm_storer_ps(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_storeu_ps (simde_float32 mem_addr[4], simde__m128 a) {
#if defined(SIMDE_SSE_NATIVE)
  _mm_storeu_ps(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  vst1q_f32(mem_addr, a_.neon_f32);
#else
  simde_memcpy(mem_addr, &a_, sizeof(a_));
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_storeu_ps(mem_addr, a) simde_mm_storeu_ps(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_sub_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_sub_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_f32 = vsubq_f32(a_.neon_f32, b_.neon_f32);
#elif defined(SIMDE_SSE_WASM_SIMD128)
  r_.wasm_v128 = wasm_f32x4_sub(a_.wasm_v128, b_.wasm_v128);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.f32 = a_.f32 - b_.f32;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.f32) / sizeof(r_.f32[0])) ; i++) {
    r_.f32[i] = a_.f32[i] - b_.f32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sub_ps(a, b) simde_mm_sub_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_sub_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_sub_ss(a, b);
#elif defined(SIMDE_ASSUME_VECTORIZATION)
  return simde_mm_move_ss(a, simde_mm_sub_ps(a, b));
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

  r_.f32[0] = a_.f32[0] - b_.f32[0];
  r_.f32[1] = a_.f32[1];
  r_.f32[2] = a_.f32[2];
  r_.f32[3] = a_.f32[3];

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_sub_ss(a, b) simde_mm_sub_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomieq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomieq_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] == b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomieq_ss(a, b) simde_mm_ucomieq_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomige_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomige_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] >= b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomige_ss(a, b) simde_mm_ucomige_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomigt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomigt_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] > b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomigt_ss(a, b) simde_mm_ucomigt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomile_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomile_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] <= b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomile_ss(a, b) simde_mm_ucomile_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomilt_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomilt_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] < b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomilt_ss(a, b) simde_mm_ucomilt_ss((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
int
simde_mm_ucomineq_ss (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_ucomineq_ss(a, b);
#else
  simde__m128_private
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);
  int r;

#if defined(SIMDE_HAVE_FENV_H)
  fenv_t envp;
  int x = feholdexcept(&envp);
  r = a_.f32[0] != b_.f32[0];
  if (HEDLEY_LIKELY(x == 0))
    fesetenv(&envp);
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_ucomineq_ss(a, b) simde_mm_ucomineq_ss((a), (b))
#endif

#if defined(SIMDE_SSE_NATIVE)
#  if defined(__has_builtin)
#    if __has_builtin(__builtin_ia32_undef128)
#      define SIMDE__HAVE_UNDEFINED128
#    endif
#  elif !defined(__PGI) && !defined(SIMDE_BUG_GCC_REV_208793) && !defined(_MSC_VER)
#    define SIMDE__HAVE_UNDEFINED128
#  endif
#endif

#if defined(SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_)
  HEDLEY_DIAGNOSTIC_PUSH
  SIMDE_DIAGNOSTIC_DISABLE_UNINITIALIZED_
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_unpackhi_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_unpackhi_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  float32x2_t a1 = vget_high_f32(a_.neon_f32);
  float32x2_t b1 = vget_high_f32(b_.neon_f32);
  float32x2x2_t result = vzip_f32(a1, b1);
  r_.neon_f32 = vcombine_f32(result.val[0], result.val[1]);
#elif defined(SIMDE__SHUFFLE_VECTOR)
  r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, b_.f32, 2, 6, 3, 7);
#else
  r_.f32[0] = a_.f32[2];
  r_.f32[1] = b_.f32[2];
  r_.f32[2] = a_.f32[3];
  r_.f32[3] = b_.f32[3];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_unpackhi_ps(a, b) simde_mm_unpackhi_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_unpacklo_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_unpacklo_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE__SHUFFLE_VECTOR)
  r_.f32 = SIMDE__SHUFFLE_VECTOR(32, 16, a_.f32, b_.f32, 0, 4, 1, 5);
#elif defined(SIMDE_SSE_NEON)
  float32x2_t a1 = vget_low_f32(a_.neon_f32);
  float32x2_t b1 = vget_low_f32(b_.neon_f32);
  float32x2x2_t result = vzip_f32(a1, b1);
  r_.neon_f32 = vcombine_f32(result.val[0], result.val[1]);
#else
  r_.f32[0] = a_.f32[0];
  r_.f32[1] = b_.f32[0];
  r_.f32[2] = a_.f32[1];
  r_.f32[3] = b_.f32[1];
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_unpacklo_ps(a, b) simde_mm_unpacklo_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
simde__m128
simde_mm_xor_ps (simde__m128 a, simde__m128 b) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_xor_ps(a, b);
#else
  simde__m128_private
    r_,
    a_ = simde__m128_to_private(a),
    b_ = simde__m128_to_private(b);

#if defined(SIMDE_SSE_NEON)
  r_.neon_i32 = veorq_s32(a_.neon_i32, b_.neon_i32);
#elif defined(SIMDE_VECTOR_SUBSCRIPT_OPS)
  r_.i32f = a_.i32f ^ b_.i32f;
#else
  SIMDE__VECTORIZE
  for (size_t i = 0 ; i < (sizeof(r_.u32) / sizeof(r_.u32[0])) ; i++) {
    r_.u32[i] = a_.u32[i] ^ b_.u32[i];
  }
#endif

  return simde__m128_from_private(r_);
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_xor_ps(a, b) simde_mm_xor_ps((a), (b))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_stream_pi (simde__m64* mem_addr, simde__m64 a) {
#if defined(SIMDE_SSE_NATIVE) && defined(SIMDE_ARCH_X86_MMX)
  _mm_stream_pi(HEDLEY_REINTERPRET_CAST(__m64*, mem_addr), a);
#else
  simde__m64_private*
    dest = HEDLEY_REINTERPRET_CAST(simde__m64_private*, mem_addr),
    a_ = simde__m64_to_private(a);

#if defined(SIMDE_SSE_NEON)
  dest->i64[0] = vget_lane_s64(a_.neon_i64, 0);
#else
  dest->i64[0] = a_.i64[0];
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_stream_pi(mem_addr, a) simde_mm_stream_pi(mem_addr, (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_stream_ps (simde_float32 mem_addr[4], simde__m128 a) {
  simde_assert_aligned(16, mem_addr);

#if defined(SIMDE_SSE_NATIVE)
  _mm_stream_ps(mem_addr, a);
#else
  simde__m128_private a_ = simde__m128_to_private(a);

#if defined(SIMDE_SSE_NEON)
  vst1q_f32(mem_addr, a_.neon_f32);
#else
  SIMDE__ASSUME_ALIGNED(mem_addr, 16);
  simde_memcpy(mem_addr, &a_, sizeof(a_));
#endif
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_stream_ps(mem_addr, a) simde_mm_stream_ps(SIMDE_CHECKED_REINTERPRET_CAST(float*, simde_float32*, mem_addr), (a))
#endif

SIMDE__FUNCTION_ATTRIBUTES
uint32_t
simde_mm_getcsr (void) {
#if defined(SIMDE_SSE_NATIVE)
  return _mm_getcsr();
#else
  uint32_t r = 0;

#if defined(SIMDE_HAVE_FENV_H)
  int rounding_mode = fegetround();

  switch(rounding_mode) {
#if defined(FE_TONEAREST)
    case FE_TONEAREST:
      break;
#endif
#if defined(FE_UPWARD)
    case FE_UPWARD:
      r |= 2 << 13;
      break;
#endif
#if defined(FE_DOWNWARD)
    case FE_DOWNWARD:
      r |= 1 << 13;
      break;
#endif
#if defined(FE_TOWARDZERO)
    case FE_TOWARDZERO:
      r = 3 << 13;
      break;
#endif
  }
#else
  HEDLEY_UNREACHABLE();
#endif

  return r;
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_getcsr() simde_mm_getcsr()
#endif

SIMDE__FUNCTION_ATTRIBUTES
void
simde_mm_setcsr (uint32_t a) {
#if defined(SIMDE_SSE_NATIVE)
  _mm_setcsr(a);
#else
  switch((a >> 13) & 3) {
#if defined(FE_TONEAREST)
    case 0:
      fesetround(FE_TONEAREST);
#endif
#if defined(FE_DOWNWARD)
      break;
    case 1:
      fesetround(FE_DOWNWARD);
#endif
#if defined(FE_UPWARD)
      break;
    case 2:
      fesetround(FE_UPWARD);
#endif
#if defined(FE_TOWARDZERO)
      break;
    case 3:
      fesetround(FE_TOWARDZERO);
      break;
#endif
  }
#endif
}
#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _mm_setcsr(a) simde_mm_setcsr(a)
#endif

#define SIMDE_MM_TRANSPOSE4_PS(row0, row1, row2, row3) \
  do { \
    simde__m128 tmp3, tmp2, tmp1, tmp0; \
    tmp0 = simde_mm_unpacklo_ps((row0), (row1)); \
    tmp2 = simde_mm_unpacklo_ps((row2), (row3)); \
    tmp1 = simde_mm_unpackhi_ps((row0), (row1)); \
    tmp3 = simde_mm_unpackhi_ps((row2), (row3)); \
    row0 = simde_mm_movelh_ps(tmp0, tmp2); \
    row1 = simde_mm_movehl_ps(tmp2, tmp0); \
    row2 = simde_mm_movelh_ps(tmp1, tmp3); \
    row3 = simde_mm_movehl_ps(tmp3, tmp1); \
  } while (0)

#if defined(SIMDE_SSE_ENABLE_NATIVE_ALIASES)
#  define _MM_TRANSPOSE4_PS(row0, row1, row2, row3) SIMDE_MM_TRANSPOSE4_PS(row0, row1, row2, row3)
#endif

#if defined(_MM_EXCEPT_INVALID)
#  define SIMDE_MM_EXCEPT_INVALID _MM_EXCEPT_INVALID
#else
#  define SIMDE_MM_EXCEPT_INVALID (0x0001)
#endif
#if defined(_MM_EXCEPT_DENORM)
#  define SIMDE_MM_EXCEPT_DENORM _MM_EXCEPT_DENORM
#else
#  define SIMDE_MM_EXCEPT_DENORM (0x0002)
#endif
#if defined(_MM_EXCEPT_DIV_ZERO)
#  define SIMDE_MM_EXCEPT_DIV_ZERO _MM_EXCEPT_DIV_ZERO
#else
#  define SIMDE_MM_EXCEPT_DIV_ZERO (0x0004)
#endif
#if defined(_MM_EXCEPT_OVERFLOW)
#  define SIMDE_MM_EXCEPT_OVERFLOW _MM_EXCEPT_OVERFLOW
#else
#  define SIMDE_MM_EXCEPT_OVERFLOW (0x0008)
#endif
#if defined(_MM_EXCEPT_UNDERFLOW)
#  define SIMDE_MM_EXCEPT_UNDERFLOW _MM_EXCEPT_UNDERFLOW
#else
#  define SIMDE_MM_EXCEPT_UNDERFLOW (0x0010)
#endif
#if defined(_MM_EXCEPT_INEXACT)
#  define SIMDE_MM_EXCEPT_INEXACT _MM_EXCEPT_INEXACT
#else
#  define SIMDE_MM_EXCEPT_INEXACT (0x0020)
#endif
#if defined(_MM_EXCEPT_MASK)
#  define SIMDE_MM_EXCEPT_MASK _MM_EXCEPT_MASK
#else
#  define SIMDE_MM_EXCEPT_MASK \
     (SIMDE_MM_EXCEPT_INVALID | SIMDE_MM_EXCEPT_DENORM | \
      SIMDE_MM_EXCEPT_DIV_ZERO | SIMDE_MM_EXCEPT_OVERFLOW | \
      SIMDE_MM_EXCEPT_UNDERFLOW | SIMDE_MM_EXCEPT_INEXACT)
#endif

#if defined(_MM_MASK_INVALID)
#  define SIMDE_MM_MASK_INVALID _MM_MASK_INVALID
#else
#  define SIMDE_MM_MASK_INVALID (0x0080)
#endif
#if defined(_MM_MASK_DENORM)
#  define SIMDE_MM_MASK_DENORM _MM_MASK_DENORM
#else
#  define SIMDE_MM_MASK_DENORM (0x0100)
#endif
#if defined(_MM_MASK_DIV_ZERO)
#  define SIMDE_MM_MASK_DIV_ZERO _MM_MASK_DIV_ZERO
#else
#  define SIMDE_MM_MASK_DIV_ZERO (0x0200)
#endif
#if defined(_MM_MASK_OVERFLOW)
#  define SIMDE_MM_MASK_OVERFLOW _MM_MASK_OVERFLOW
#else
#  define SIMDE_MM_MASK_OVERFLOW (0x0400)
#endif
#if defined(_MM_MASK_UNDERFLOW)
#  define SIMDE_MM_MASK_UNDERFLOW _MM_MASK_UNDERFLOW
#else
#  define SIMDE_MM_MASK_UNDERFLOW (0x0800)
#endif
#if defined(_MM_MASK_INEXACT)
#  define SIMDE_MM_MASK_INEXACT _MM_MASK_INEXACT
#else
#  define SIMDE_MM_MASK_INEXACT (0x1000)
#endif
#if defined(_MM_MASK_MASK)
#  define SIMDE_MM_MASK_MASK _MM_MASK_MASK
#else
#  define SIMDE_MM_MASK_MASK \
     (SIMDE_MM_MASK_INVALID | SIMDE_MM_MASK_DENORM | \
      SIMDE_MM_MASK_DIV_ZERO | SIMDE_MM_MASK_OVERFLOW | \
      SIMDE_MM_MASK_UNDERFLOW | SIMDE_MM_MASK_INEXACT)
#endif

#if defined(_MM_FLUSH_ZERO_MASK)
#  define SIMDE_MM_FLUSH_ZERO_MASK _MM_FLUSH_ZERO_MASK
#else
#  define SIMDE_MM_FLUSH_ZERO_MASK (0x8000)
#endif
#if defined(_MM_FLUSH_ZERO_ON)
#  define SIMDE_MM_FLUSH_ZERO_ON _MM_FLUSH_ZERO_ON
#else
#  define SIMDE_MM_FLUSH_ZERO_ON (0x8000)
#endif
#if defined(_MM_FLUSH_ZERO_OFF)
#  define SIMDE_MM_FLUSH_ZERO_OFF _MM_FLUSH_ZERO_OFF
#else
#  define SIMDE_MM_FLUSH_ZERO_OFF (0x0000)
#endif

SIMDE__END_DECLS

HEDLEY_DIAGNOSTIC_POP

#endif /* !defined(SIMDE__SSE_H) */
/* :: End x86/sse.h :: */
