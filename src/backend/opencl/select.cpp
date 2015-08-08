/*******************************************************
 * Copyright (c) 2015, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/
#include <ArrayInfo.hpp>
#include <Array.hpp>
#include <select.hpp>
#include <err_opencl.hpp>

namespace opencl
{
    template<typename T>
    void select(Array<T> &out, const Array<char> &cond, const Array<T> &a, const Array<T> &b)
    {
        OPENCL_NOT_SUPPORTED();
    }

    template<typename T, bool flip>
    void select_scalar(Array<T> &out, const Array<char> &cond, const Array<T> &a, const double &b)
    {
        OPENCL_NOT_SUPPORTED();
    }


#define INSTANTIATE(T)                                              \
    template void select<T>(Array<T> &out, const Array<char> &cond, \
                            const Array<T> &a, const Array<T> &b);  \
    template void select_scalar<T, true >(Array<T> &out,            \
                                          const Array<char> &cond,  \
                                          const Array<T> &a,        \
                                          const double &b);         \
    template void select_scalar<T, false>(Array<T> &out, const      \
                                          Array<char> &cond,        \
                                          const Array<T> &a,        \
                                          const double &b);         \

    INSTANTIATE(float  )
    INSTANTIATE(double )
    INSTANTIATE(cfloat )
    INSTANTIATE(cdouble)
    INSTANTIATE(int    )
    INSTANTIATE(uint   )
    INSTANTIATE(intl   )
    INSTANTIATE(uintl  )
    INSTANTIATE(char   )
    INSTANTIATE(uchar  )
}
