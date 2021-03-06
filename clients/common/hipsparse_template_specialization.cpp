/* ************************************************************************
 * Copyright (c) 2018 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * ************************************************************************ */

#include "hipsparse.hpp"

#include <hipsparse.h>

namespace hipsparse
{

    template <>
    hipsparseStatus_t hipsparseXaxpyi(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      const float*         alpha,
                                      const float*         x_val,
                                      const int*           x_ind,
                                      float*               y,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseSaxpyi(handle, nnz, alpha, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXaxpyi(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      const double*        alpha,
                                      const double*        x_val,
                                      const int*           x_ind,
                                      double*              y,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseDaxpyi(handle, nnz, alpha, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXaxpyi(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      const hipComplex*    alpha,
                                      const hipComplex*    x_val,
                                      const int*           x_ind,
                                      hipComplex*          y,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseCaxpyi(handle, nnz, alpha, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXaxpyi(hipsparseHandle_t       handle,
                                      int                     nnz,
                                      const hipDoubleComplex* alpha,
                                      const hipDoubleComplex* x_val,
                                      const int*              x_ind,
                                      hipDoubleComplex*       y,
                                      hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZaxpyi(handle, nnz, alpha, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdoti(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const float*         x_val,
                                     const int*           x_ind,
                                     const float*         y,
                                     float*               result,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseSdoti(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdoti(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const double*        x_val,
                                     const int*           x_ind,
                                     const double*        y,
                                     double*              result,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseDdoti(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdoti(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const hipComplex*    x_val,
                                     const int*           x_ind,
                                     const hipComplex*    y,
                                     hipComplex*          result,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseCdoti(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdoti(hipsparseHandle_t       handle,
                                     int                     nnz,
                                     const hipDoubleComplex* x_val,
                                     const int*              x_ind,
                                     const hipDoubleComplex* y,
                                     hipDoubleComplex*       result,
                                     hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZdoti(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdotci(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      const hipComplex*    x_val,
                                      const int*           x_ind,
                                      const hipComplex*    y,
                                      hipComplex*          result,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseCdotci(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXdotci(hipsparseHandle_t       handle,
                                      int                     nnz,
                                      const hipDoubleComplex* x_val,
                                      const int*              x_ind,
                                      const hipDoubleComplex* y,
                                      hipDoubleComplex*       result,
                                      hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZdotci(handle, nnz, x_val, x_ind, y, result, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const float*         y,
                                     float*               x_val,
                                     const int*           x_ind,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseSgthr(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const double*        y,
                                     double*              x_val,
                                     const int*           x_ind,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseDgthr(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const hipComplex*    y,
                                     hipComplex*          x_val,
                                     const int*           x_ind,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseCgthr(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthr(hipsparseHandle_t       handle,
                                     int                     nnz,
                                     const hipDoubleComplex* y,
                                     hipDoubleComplex*       x_val,
                                     const int*              x_ind,
                                     hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZgthr(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthrz(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      float*               y,
                                      float*               x_val,
                                      const int*           x_ind,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseSgthrz(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthrz(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      double*              y,
                                      double*              x_val,
                                      const int*           x_ind,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseDgthrz(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthrz(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      hipComplex*          y,
                                      hipComplex*          x_val,
                                      const int*           x_ind,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseCgthrz(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXgthrz(hipsparseHandle_t    handle,
                                      int                  nnz,
                                      hipDoubleComplex*    y,
                                      hipDoubleComplex*    x_val,
                                      const int*           x_ind,
                                      hipsparseIndexBase_t idx_base)
    {
        return hipsparseZgthrz(handle, nnz, y, x_val, x_ind, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXroti(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     float*               x_val,
                                     const int*           x_ind,
                                     float*               y,
                                     const float*         c,
                                     const float*         s,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseSroti(handle, nnz, x_val, x_ind, y, c, s, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXroti(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     double*              x_val,
                                     const int*           x_ind,
                                     double*              y,
                                     const double*        c,
                                     const double*        s,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseDroti(handle, nnz, x_val, x_ind, y, c, s, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXsctr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const float*         x_val,
                                     const int*           x_ind,
                                     float*               y,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseSsctr(handle, nnz, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXsctr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const double*        x_val,
                                     const int*           x_ind,
                                     double*              y,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseDsctr(handle, nnz, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXsctr(hipsparseHandle_t    handle,
                                     int                  nnz,
                                     const hipComplex*    x_val,
                                     const int*           x_ind,
                                     hipComplex*          y,
                                     hipsparseIndexBase_t idx_base)
    {
        return hipsparseCsctr(handle, nnz, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXsctr(hipsparseHandle_t       handle,
                                     int                     nnz,
                                     const hipDoubleComplex* x_val,
                                     const int*              x_ind,
                                     hipDoubleComplex*       y,
                                     hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZsctr(handle, nnz, x_val, x_ind, y, idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      int                       m,
                                      int                       n,
                                      int                       nnz,
                                      const float*              alpha,
                                      const hipsparseMatDescr_t descr,
                                      const float*              csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const float*              x,
                                      const float*              beta,
                                      float*                    y)
    {
        return hipsparseScsrmv(
            handle, trans, m, n, nnz, alpha, descr, csr_val, csr_row_ptr, csr_col_ind, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      int                       m,
                                      int                       n,
                                      int                       nnz,
                                      const double*             alpha,
                                      const hipsparseMatDescr_t descr,
                                      const double*             csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const double*             x,
                                      const double*             beta,
                                      double*                   y)
    {
        return hipsparseDcsrmv(
            handle, trans, m, n, nnz, alpha, descr, csr_val, csr_row_ptr, csr_col_ind, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      int                       m,
                                      int                       n,
                                      int                       nnz,
                                      const hipComplex*         alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipComplex*         csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipComplex*         x,
                                      const hipComplex*         beta,
                                      hipComplex*               y)
    {
        return hipsparseCcsrmv(
            handle, trans, m, n, nnz, alpha, descr, csr_val, csr_row_ptr, csr_col_ind, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      int                       m,
                                      int                       n,
                                      int                       nnz,
                                      const hipDoubleComplex*   alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipDoubleComplex*   csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipDoubleComplex*   x,
                                      const hipDoubleComplex*   beta,
                                      hipDoubleComplex*         y)
    {
        return hipsparseZcsrmv(
            handle, trans, m, n, nnz, alpha, descr, csr_val, csr_row_ptr, csr_col_ind, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                                  hipsparseOperation_t      transA,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  float*                    csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrsv2Info_t              info,
                                                  int*                      pBufferSizeInBytes)
    {
        return hipsparseScsrsv2_bufferSize(handle,
                                           transA,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                                  hipsparseOperation_t      transA,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  double*                   csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrsv2Info_t              info,
                                                  int*                      pBufferSizeInBytes)
    {
        return hipsparseDcsrsv2_bufferSize(handle,
                                           transA,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                                  hipsparseOperation_t      transA,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  hipComplex*               csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrsv2Info_t              info,
                                                  int*                      pBufferSizeInBytes)
    {
        return hipsparseCcsrsv2_bufferSize(handle,
                                           transA,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                                  hipsparseOperation_t      transA,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  hipDoubleComplex*         csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrsv2Info_t              info,
                                                  int*                      pBufferSizeInBytes)
    {
        return hipsparseZcsrsv2_bufferSize(handle,
                                           transA,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     hipsparseOperation_t      transA,
                                                     int                       m,
                                                     int                       nnz,
                                                     const hipsparseMatDescr_t descrA,
                                                     float*                    csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     csrsv2Info_t              info,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseScsrsv2_bufferSizeExt(handle,
                                              transA,
                                              m,
                                              nnz,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              info,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     hipsparseOperation_t      transA,
                                                     int                       m,
                                                     int                       nnz,
                                                     const hipsparseMatDescr_t descrA,
                                                     double*                   csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     csrsv2Info_t              info,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseDcsrsv2_bufferSizeExt(handle,
                                              transA,
                                              m,
                                              nnz,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              info,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     hipsparseOperation_t      transA,
                                                     int                       m,
                                                     int                       nnz,
                                                     const hipsparseMatDescr_t descrA,
                                                     hipComplex*               csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     csrsv2Info_t              info,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseCcsrsv2_bufferSizeExt(handle,
                                              transA,
                                              m,
                                              nnz,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              info,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     hipsparseOperation_t      transA,
                                                     int                       m,
                                                     int                       nnz,
                                                     const hipsparseMatDescr_t descrA,
                                                     hipDoubleComplex*         csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     csrsv2Info_t              info,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseZcsrsv2_bufferSizeExt(handle,
                                              transA,
                                              m,
                                              nnz,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              info,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_analysis(hipsparseHandle_t         handle,
                                                hipsparseOperation_t      transA,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                const float*              csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrsv2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseScsrsv2_analysis(handle,
                                         transA,
                                         m,
                                         nnz,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_analysis(hipsparseHandle_t         handle,
                                                hipsparseOperation_t      transA,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                const double*             csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrsv2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseDcsrsv2_analysis(handle,
                                         transA,
                                         m,
                                         nnz,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_analysis(hipsparseHandle_t         handle,
                                                hipsparseOperation_t      transA,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                const hipComplex*         csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrsv2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseCcsrsv2_analysis(handle,
                                         transA,
                                         m,
                                         nnz,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_analysis(hipsparseHandle_t         handle,
                                                hipsparseOperation_t      transA,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                const hipDoubleComplex*   csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrsv2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseZcsrsv2_analysis(handle,
                                         transA,
                                         m,
                                         nnz,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_solve(hipsparseHandle_t         handle,
                                             hipsparseOperation_t      transA,
                                             int                       m,
                                             int                       nnz,
                                             const float*              alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const float*              csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csrsv2Info_t              info,
                                             const float*              f,
                                             float*                    x,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseScsrsv2_solve(handle,
                                      transA,
                                      m,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      info,
                                      f,
                                      x,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_solve(hipsparseHandle_t         handle,
                                             hipsparseOperation_t      transA,
                                             int                       m,
                                             int                       nnz,
                                             const double*             alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const double*             csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csrsv2Info_t              info,
                                             const double*             f,
                                             double*                   x,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseDcsrsv2_solve(handle,
                                      transA,
                                      m,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      info,
                                      f,
                                      x,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_solve(hipsparseHandle_t         handle,
                                             hipsparseOperation_t      transA,
                                             int                       m,
                                             int                       nnz,
                                             const hipComplex*         alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const hipComplex*         csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csrsv2Info_t              info,
                                             const hipComplex*         f,
                                             hipComplex*               x,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseCcsrsv2_solve(handle,
                                      transA,
                                      m,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      info,
                                      f,
                                      x,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsv2_solve(hipsparseHandle_t         handle,
                                             hipsparseOperation_t      transA,
                                             int                       m,
                                             int                       nnz,
                                             const hipDoubleComplex*   alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const hipDoubleComplex*   csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csrsv2Info_t              info,
                                             const hipDoubleComplex*   f,
                                             hipDoubleComplex*         x,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseZcsrsv2_solve(handle,
                                      transA,
                                      m,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      info,
                                      f,
                                      x,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXhybmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      const float*              alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipsparseHybMat_t   hyb,
                                      const float*              x,
                                      const float*              beta,
                                      float*                    y)
    {
        return hipsparseShybmv(handle, trans, alpha, descr, hyb, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXhybmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      const double*             alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipsparseHybMat_t   hyb,
                                      const double*             x,
                                      const double*             beta,
                                      double*                   y)
    {
        return hipsparseDhybmv(handle, trans, alpha, descr, hyb, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXhybmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      const hipComplex*         alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipsparseHybMat_t   hyb,
                                      const hipComplex*         x,
                                      const hipComplex*         beta,
                                      hipComplex*               y)
    {
        return hipsparseChybmv(handle, trans, alpha, descr, hyb, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXhybmv(hipsparseHandle_t         handle,
                                      hipsparseOperation_t      trans,
                                      const hipDoubleComplex*   alpha,
                                      const hipsparseMatDescr_t descr,
                                      const hipsparseHybMat_t   hyb,
                                      const hipDoubleComplex*   x,
                                      const hipDoubleComplex*   beta,
                                      hipDoubleComplex*         y)
    {
        return hipsparseZhybmv(handle, trans, alpha, descr, hyb, x, beta, y);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmm2(hipsparseHandle_t         handle,
                                       hipsparseOperation_t      trans_A,
                                       hipsparseOperation_t      trans_B,
                                       int                       m,
                                       int                       n,
                                       int                       k,
                                       int                       nnz,
                                       const float*              alpha,
                                       const hipsparseMatDescr_t descr,
                                       const float*              csr_val,
                                       const int*                csr_row_ptr,
                                       const int*                csr_col_ind,
                                       const float*              B,
                                       int                       ldb,
                                       const float*              beta,
                                       float*                    C,
                                       int                       ldc)
    {
        return hipsparseScsrmm2(handle,
                                trans_A,
                                trans_B,
                                m,
                                n,
                                k,
                                nnz,
                                alpha,
                                descr,
                                csr_val,
                                csr_row_ptr,
                                csr_col_ind,
                                B,
                                ldb,
                                beta,
                                C,
                                ldc);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmm2(hipsparseHandle_t         handle,
                                       hipsparseOperation_t      trans_A,
                                       hipsparseOperation_t      trans_B,
                                       int                       m,
                                       int                       n,
                                       int                       k,
                                       int                       nnz,
                                       const double*             alpha,
                                       const hipsparseMatDescr_t descr,
                                       const double*             csr_val,
                                       const int*                csr_row_ptr,
                                       const int*                csr_col_ind,
                                       const double*             B,
                                       int                       ldb,
                                       const double*             beta,
                                       double*                   C,
                                       int                       ldc)
    {
        return hipsparseDcsrmm2(handle,
                                trans_A,
                                trans_B,
                                m,
                                n,
                                k,
                                nnz,
                                alpha,
                                descr,
                                csr_val,
                                csr_row_ptr,
                                csr_col_ind,
                                B,
                                ldb,
                                beta,
                                C,
                                ldc);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmm2(hipsparseHandle_t         handle,
                                       hipsparseOperation_t      trans_A,
                                       hipsparseOperation_t      trans_B,
                                       int                       m,
                                       int                       n,
                                       int                       k,
                                       int                       nnz,
                                       const hipComplex*         alpha,
                                       const hipsparseMatDescr_t descr,
                                       const hipComplex*         csr_val,
                                       const int*                csr_row_ptr,
                                       const int*                csr_col_ind,
                                       const hipComplex*         B,
                                       int                       ldb,
                                       const hipComplex*         beta,
                                       hipComplex*               C,
                                       int                       ldc)
    {
        return hipsparseCcsrmm2(handle,
                                trans_A,
                                trans_B,
                                m,
                                n,
                                k,
                                nnz,
                                alpha,
                                descr,
                                csr_val,
                                csr_row_ptr,
                                csr_col_ind,
                                B,
                                ldb,
                                beta,
                                C,
                                ldc);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrmm2(hipsparseHandle_t         handle,
                                       hipsparseOperation_t      trans_A,
                                       hipsparseOperation_t      trans_B,
                                       int                       m,
                                       int                       n,
                                       int                       k,
                                       int                       nnz,
                                       const hipDoubleComplex*   alpha,
                                       const hipsparseMatDescr_t descr,
                                       const hipDoubleComplex*   csr_val,
                                       const int*                csr_row_ptr,
                                       const int*                csr_col_ind,
                                       const hipDoubleComplex*   B,
                                       int                       ldb,
                                       const hipDoubleComplex*   beta,
                                       hipDoubleComplex*         C,
                                       int                       ldc)
    {
        return hipsparseZcsrmm2(handle,
                                trans_A,
                                trans_B,
                                m,
                                n,
                                k,
                                nnz,
                                alpha,
                                descr,
                                csr_val,
                                csr_row_ptr,
                                csr_col_ind,
                                B,
                                ldb,
                                beta,
                                C,
                                ldc);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     int                       algo,
                                                     hipsparseOperation_t      transA,
                                                     hipsparseOperation_t      transB,
                                                     int                       m,
                                                     int                       nrhs,
                                                     int                       nnz,
                                                     const float*              alpha,
                                                     const hipsparseMatDescr_t descrA,
                                                     const float*              csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     const float*              B,
                                                     int                       ldb,
                                                     csrsm2Info_t              info,
                                                     hipsparseSolvePolicy_t    policy,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseScsrsm2_bufferSizeExt(handle,
                                              algo,
                                              transA,
                                              transB,
                                              m,
                                              nrhs,
                                              nnz,
                                              alpha,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              B,
                                              ldb,
                                              info,
                                              policy,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     int                       algo,
                                                     hipsparseOperation_t      transA,
                                                     hipsparseOperation_t      transB,
                                                     int                       m,
                                                     int                       nrhs,
                                                     int                       nnz,
                                                     const double*             alpha,
                                                     const hipsparseMatDescr_t descrA,
                                                     const double*             csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     const double*             B,
                                                     int                       ldb,
                                                     csrsm2Info_t              info,
                                                     hipsparseSolvePolicy_t    policy,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseDcsrsm2_bufferSizeExt(handle,
                                              algo,
                                              transA,
                                              transB,
                                              m,
                                              nrhs,
                                              nnz,
                                              alpha,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              B,
                                              ldb,
                                              info,
                                              policy,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     int                       algo,
                                                     hipsparseOperation_t      transA,
                                                     hipsparseOperation_t      transB,
                                                     int                       m,
                                                     int                       nrhs,
                                                     int                       nnz,
                                                     const hipComplex*         alpha,
                                                     const hipsparseMatDescr_t descrA,
                                                     const hipComplex*         csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     const hipComplex*         B,
                                                     int                       ldb,
                                                     csrsm2Info_t              info,
                                                     hipsparseSolvePolicy_t    policy,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseCcsrsm2_bufferSizeExt(handle,
                                              algo,
                                              transA,
                                              transB,
                                              m,
                                              nrhs,
                                              nnz,
                                              alpha,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              B,
                                              ldb,
                                              info,
                                              policy,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                     int                       algo,
                                                     hipsparseOperation_t      transA,
                                                     hipsparseOperation_t      transB,
                                                     int                       m,
                                                     int                       nrhs,
                                                     int                       nnz,
                                                     const hipDoubleComplex*   alpha,
                                                     const hipsparseMatDescr_t descrA,
                                                     const hipDoubleComplex*   csrSortedValA,
                                                     const int*                csrSortedRowPtrA,
                                                     const int*                csrSortedColIndA,
                                                     const hipDoubleComplex*   B,
                                                     int                       ldb,
                                                     csrsm2Info_t              info,
                                                     hipsparseSolvePolicy_t    policy,
                                                     size_t*                   pBufferSize)
    {
        return hipsparseZcsrsm2_bufferSizeExt(handle,
                                              algo,
                                              transA,
                                              transB,
                                              m,
                                              nrhs,
                                              nnz,
                                              alpha,
                                              descrA,
                                              csrSortedValA,
                                              csrSortedRowPtrA,
                                              csrSortedColIndA,
                                              B,
                                              ldb,
                                              info,
                                              policy,
                                              pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_analysis(hipsparseHandle_t         handle,
                                                int                       algo,
                                                hipsparseOperation_t      transA,
                                                hipsparseOperation_t      transB,
                                                int                       m,
                                                int                       nrhs,
                                                int                       nnz,
                                                const float*              alpha,
                                                const hipsparseMatDescr_t descrA,
                                                const float*              csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                const float*              B,
                                                int                       ldb,
                                                csrsm2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseScsrsm2_analysis(handle,
                                         algo,
                                         transA,
                                         transB,
                                         m,
                                         nrhs,
                                         nnz,
                                         alpha,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         B,
                                         ldb,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_analysis(hipsparseHandle_t         handle,
                                                int                       algo,
                                                hipsparseOperation_t      transA,
                                                hipsparseOperation_t      transB,
                                                int                       m,
                                                int                       nrhs,
                                                int                       nnz,
                                                const double*             alpha,
                                                const hipsparseMatDescr_t descrA,
                                                const double*             csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                const double*             B,
                                                int                       ldb,
                                                csrsm2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseDcsrsm2_analysis(handle,
                                         algo,
                                         transA,
                                         transB,
                                         m,
                                         nrhs,
                                         nnz,
                                         alpha,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         B,
                                         ldb,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_analysis(hipsparseHandle_t         handle,
                                                int                       algo,
                                                hipsparseOperation_t      transA,
                                                hipsparseOperation_t      transB,
                                                int                       m,
                                                int                       nrhs,
                                                int                       nnz,
                                                const hipComplex*         alpha,
                                                const hipsparseMatDescr_t descrA,
                                                const hipComplex*         csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                const hipComplex*         B,
                                                int                       ldb,
                                                csrsm2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseCcsrsm2_analysis(handle,
                                         algo,
                                         transA,
                                         transB,
                                         m,
                                         nrhs,
                                         nnz,
                                         alpha,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         B,
                                         ldb,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_analysis(hipsparseHandle_t         handle,
                                                int                       algo,
                                                hipsparseOperation_t      transA,
                                                hipsparseOperation_t      transB,
                                                int                       m,
                                                int                       nrhs,
                                                int                       nnz,
                                                const hipDoubleComplex*   alpha,
                                                const hipsparseMatDescr_t descrA,
                                                const hipDoubleComplex*   csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                const hipDoubleComplex*   B,
                                                int                       ldb,
                                                csrsm2Info_t              info,
                                                hipsparseSolvePolicy_t    policy,
                                                void*                     pBuffer)
    {
        return hipsparseZcsrsm2_analysis(handle,
                                         algo,
                                         transA,
                                         transB,
                                         m,
                                         nrhs,
                                         nnz,
                                         alpha,
                                         descrA,
                                         csrSortedValA,
                                         csrSortedRowPtrA,
                                         csrSortedColIndA,
                                         B,
                                         ldb,
                                         info,
                                         policy,
                                         pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_solve(hipsparseHandle_t         handle,
                                             int                       algo,
                                             hipsparseOperation_t      transA,
                                             hipsparseOperation_t      transB,
                                             int                       m,
                                             int                       nrhs,
                                             int                       nnz,
                                             const float*              alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const float*              csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             float*                    B,
                                             int                       ldb,
                                             csrsm2Info_t              info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseScsrsm2_solve(handle,
                                      algo,
                                      transA,
                                      transB,
                                      m,
                                      nrhs,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      B,
                                      ldb,
                                      info,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_solve(hipsparseHandle_t         handle,
                                             int                       algo,
                                             hipsparseOperation_t      transA,
                                             hipsparseOperation_t      transB,
                                             int                       m,
                                             int                       nrhs,
                                             int                       nnz,
                                             const double*             alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const double*             csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             double*                   B,
                                             int                       ldb,
                                             csrsm2Info_t              info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseDcsrsm2_solve(handle,
                                      algo,
                                      transA,
                                      transB,
                                      m,
                                      nrhs,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      B,
                                      ldb,
                                      info,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_solve(hipsparseHandle_t         handle,
                                             int                       algo,
                                             hipsparseOperation_t      transA,
                                             hipsparseOperation_t      transB,
                                             int                       m,
                                             int                       nrhs,
                                             int                       nnz,
                                             const hipComplex*         alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const hipComplex*         csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             hipComplex*               B,
                                             int                       ldb,
                                             csrsm2Info_t              info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseCcsrsm2_solve(handle,
                                      algo,
                                      transA,
                                      transB,
                                      m,
                                      nrhs,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      B,
                                      ldb,
                                      info,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrsm2_solve(hipsparseHandle_t         handle,
                                             int                       algo,
                                             hipsparseOperation_t      transA,
                                             hipsparseOperation_t      transB,
                                             int                       m,
                                             int                       nrhs,
                                             int                       nnz,
                                             const hipDoubleComplex*   alpha,
                                             const hipsparseMatDescr_t descrA,
                                             const hipDoubleComplex*   csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             hipDoubleComplex*         B,
                                             int                       ldb,
                                             csrsm2Info_t              info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
    {
        return hipsparseZcsrsm2_solve(handle,
                                      algo,
                                      transA,
                                      transB,
                                      m,
                                      nrhs,
                                      nnz,
                                      alpha,
                                      descrA,
                                      csrSortedValA,
                                      csrSortedRowPtrA,
                                      csrSortedColIndA,
                                      B,
                                      ldb,
                                      info,
                                      policy,
                                      pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm(hipsparseHandle_t         handle,
                                        hipsparseOperation_t      transA,
                                        hipsparseOperation_t      transB,
                                        int                       m,
                                        int                       n,
                                        int                       k,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const float*              csrValA,
                                        const int*                csrRowPtrA,
                                        const int*                csrColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const float*              csrValB,
                                        const int*                csrRowPtrB,
                                        const int*                csrColIndB,
                                        const hipsparseMatDescr_t descrC,
                                        float*                    csrValC,
                                        const int*                csrRowPtrC,
                                        int*                      csrColIndC)
    {
        return hipsparseScsrgemm(handle,
                                 transA,
                                 transB,
                                 m,
                                 n,
                                 k,
                                 descrA,
                                 nnzA,
                                 csrValA,
                                 csrRowPtrA,
                                 csrColIndA,
                                 descrB,
                                 nnzB,
                                 csrValB,
                                 csrRowPtrB,
                                 csrColIndB,
                                 descrC,
                                 csrValC,
                                 csrRowPtrC,
                                 csrColIndC);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm(hipsparseHandle_t         handle,
                                        hipsparseOperation_t      transA,
                                        hipsparseOperation_t      transB,
                                        int                       m,
                                        int                       n,
                                        int                       k,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const double*             csrValA,
                                        const int*                csrRowPtrA,
                                        const int*                csrColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const double*             csrValB,
                                        const int*                csrRowPtrB,
                                        const int*                csrColIndB,
                                        const hipsparseMatDescr_t descrC,
                                        double*                   csrValC,
                                        const int*                csrRowPtrC,
                                        int*                      csrColIndC)
    {
        return hipsparseDcsrgemm(handle,
                                 transA,
                                 transB,
                                 m,
                                 n,
                                 k,
                                 descrA,
                                 nnzA,
                                 csrValA,
                                 csrRowPtrA,
                                 csrColIndA,
                                 descrB,
                                 nnzB,
                                 csrValB,
                                 csrRowPtrB,
                                 csrColIndB,
                                 descrC,
                                 csrValC,
                                 csrRowPtrC,
                                 csrColIndC);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm(hipsparseHandle_t         handle,
                                        hipsparseOperation_t      transA,
                                        hipsparseOperation_t      transB,
                                        int                       m,
                                        int                       n,
                                        int                       k,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const hipComplex*         csrValA,
                                        const int*                csrRowPtrA,
                                        const int*                csrColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const hipComplex*         csrValB,
                                        const int*                csrRowPtrB,
                                        const int*                csrColIndB,
                                        const hipsparseMatDescr_t descrC,
                                        hipComplex*               csrValC,
                                        const int*                csrRowPtrC,
                                        int*                      csrColIndC)
    {
        return hipsparseCcsrgemm(handle,
                                 transA,
                                 transB,
                                 m,
                                 n,
                                 k,
                                 descrA,
                                 nnzA,
                                 csrValA,
                                 csrRowPtrA,
                                 csrColIndA,
                                 descrB,
                                 nnzB,
                                 csrValB,
                                 csrRowPtrB,
                                 csrColIndB,
                                 descrC,
                                 csrValC,
                                 csrRowPtrC,
                                 csrColIndC);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm(hipsparseHandle_t         handle,
                                        hipsparseOperation_t      transA,
                                        hipsparseOperation_t      transB,
                                        int                       m,
                                        int                       n,
                                        int                       k,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const hipDoubleComplex*   csrValA,
                                        const int*                csrRowPtrA,
                                        const int*                csrColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const hipDoubleComplex*   csrValB,
                                        const int*                csrRowPtrB,
                                        const int*                csrColIndB,
                                        const hipsparseMatDescr_t descrC,
                                        hipDoubleComplex*         csrValC,
                                        const int*                csrRowPtrC,
                                        int*                      csrColIndC)
    {
        return hipsparseZcsrgemm(handle,
                                 transA,
                                 transB,
                                 m,
                                 n,
                                 k,
                                 descrA,
                                 nnzA,
                                 csrValA,
                                 csrRowPtrA,
                                 csrColIndA,
                                 descrB,
                                 nnzB,
                                 csrValB,
                                 csrRowPtrB,
                                 csrColIndB,
                                 descrC,
                                 csrValC,
                                 csrRowPtrC,
                                 csrColIndC);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       k,
                                                       const float*              alpha,
                                                       const hipsparseMatDescr_t descrA,
                                                       int                       nnzA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const hipsparseMatDescr_t descrB,
                                                       int                       nnzB,
                                                       const int*                csrRowPtrB,
                                                       const int*                csrColIndB,
                                                       const float*              beta,
                                                       const hipsparseMatDescr_t descrD,
                                                       int                       nnzD,
                                                       const int*                csrRowPtrD,
                                                       const int*                csrColIndD,
                                                       csrgemm2Info_t            info,
                                                       size_t*                   pBufferSizeInBytes)
    {
        return hipsparseScsrgemm2_bufferSizeExt(handle,
                                                m,
                                                n,
                                                k,
                                                alpha,
                                                descrA,
                                                nnzA,
                                                csrRowPtrA,
                                                csrColIndA,
                                                descrB,
                                                nnzB,
                                                csrRowPtrB,
                                                csrColIndB,
                                                beta,
                                                descrD,
                                                nnzD,
                                                csrRowPtrD,
                                                csrColIndD,
                                                info,
                                                pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       k,
                                                       const double*             alpha,
                                                       const hipsparseMatDescr_t descrA,
                                                       int                       nnzA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const hipsparseMatDescr_t descrB,
                                                       int                       nnzB,
                                                       const int*                csrRowPtrB,
                                                       const int*                csrColIndB,
                                                       const double*             beta,
                                                       const hipsparseMatDescr_t descrD,
                                                       int                       nnzD,
                                                       const int*                csrRowPtrD,
                                                       const int*                csrColIndD,
                                                       csrgemm2Info_t            info,
                                                       size_t*                   pBufferSizeInBytes)
    {
        return hipsparseDcsrgemm2_bufferSizeExt(handle,
                                                m,
                                                n,
                                                k,
                                                alpha,
                                                descrA,
                                                nnzA,
                                                csrRowPtrA,
                                                csrColIndA,
                                                descrB,
                                                nnzB,
                                                csrRowPtrB,
                                                csrColIndB,
                                                beta,
                                                descrD,
                                                nnzD,
                                                csrRowPtrD,
                                                csrColIndD,
                                                info,
                                                pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       k,
                                                       const hipComplex*         alpha,
                                                       const hipsparseMatDescr_t descrA,
                                                       int                       nnzA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const hipsparseMatDescr_t descrB,
                                                       int                       nnzB,
                                                       const int*                csrRowPtrB,
                                                       const int*                csrColIndB,
                                                       const hipComplex*         beta,
                                                       const hipsparseMatDescr_t descrD,
                                                       int                       nnzD,
                                                       const int*                csrRowPtrD,
                                                       const int*                csrColIndD,
                                                       csrgemm2Info_t            info,
                                                       size_t*                   pBufferSizeInBytes)
    {
        return hipsparseCcsrgemm2_bufferSizeExt(handle,
                                                m,
                                                n,
                                                k,
                                                alpha,
                                                descrA,
                                                nnzA,
                                                csrRowPtrA,
                                                csrColIndA,
                                                descrB,
                                                nnzB,
                                                csrRowPtrB,
                                                csrColIndB,
                                                beta,
                                                descrD,
                                                nnzD,
                                                csrRowPtrD,
                                                csrColIndD,
                                                info,
                                                pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       k,
                                                       const hipDoubleComplex*   alpha,
                                                       const hipsparseMatDescr_t descrA,
                                                       int                       nnzA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const hipsparseMatDescr_t descrB,
                                                       int                       nnzB,
                                                       const int*                csrRowPtrB,
                                                       const int*                csrColIndB,
                                                       const hipDoubleComplex*   beta,
                                                       const hipsparseMatDescr_t descrD,
                                                       int                       nnzD,
                                                       const int*                csrRowPtrD,
                                                       const int*                csrColIndD,
                                                       csrgemm2Info_t            info,
                                                       size_t*                   pBufferSizeInBytes)
    {
        return hipsparseZcsrgemm2_bufferSizeExt(handle,
                                                m,
                                                n,
                                                k,
                                                alpha,
                                                descrA,
                                                nnzA,
                                                csrRowPtrA,
                                                csrColIndA,
                                                descrB,
                                                nnzB,
                                                csrRowPtrB,
                                                csrColIndB,
                                                beta,
                                                descrD,
                                                nnzD,
                                                csrRowPtrD,
                                                csrColIndD,
                                                info,
                                                pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       k,
                                         const float*              alpha,
                                         const hipsparseMatDescr_t descrA,
                                         int                       nnzA,
                                         const float*              csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const hipsparseMatDescr_t descrB,
                                         int                       nnzB,
                                         const float*              csrValB,
                                         const int*                csrRowPtrB,
                                         const int*                csrColIndB,
                                         const float*              beta,
                                         const hipsparseMatDescr_t descrD,
                                         int                       nnzD,
                                         const float*              csrValD,
                                         const int*                csrRowPtrD,
                                         const int*                csrColIndD,
                                         const hipsparseMatDescr_t descrC,
                                         float*                    csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         const csrgemm2Info_t      info,
                                         void*                     pBuffer)
    {
        return hipsparseScsrgemm2(handle,
                                  m,
                                  n,
                                  k,
                                  alpha,
                                  descrA,
                                  nnzA,
                                  csrValA,
                                  csrRowPtrA,
                                  csrColIndA,
                                  descrB,
                                  nnzB,
                                  csrValB,
                                  csrRowPtrB,
                                  csrColIndB,
                                  beta,
                                  descrD,
                                  nnzD,
                                  csrValD,
                                  csrRowPtrD,
                                  csrColIndD,
                                  descrC,
                                  csrValC,
                                  csrRowPtrC,
                                  csrColIndC,
                                  info,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       k,
                                         const double*             alpha,
                                         const hipsparseMatDescr_t descrA,
                                         int                       nnzA,
                                         const double*             csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const hipsparseMatDescr_t descrB,
                                         int                       nnzB,
                                         const double*             csrValB,
                                         const int*                csrRowPtrB,
                                         const int*                csrColIndB,
                                         const double*             beta,
                                         const hipsparseMatDescr_t descrD,
                                         int                       nnzD,
                                         const double*             csrValD,
                                         const int*                csrRowPtrD,
                                         const int*                csrColIndD,
                                         const hipsparseMatDescr_t descrC,
                                         double*                   csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         const csrgemm2Info_t      info,
                                         void*                     pBuffer)
    {
        return hipsparseDcsrgemm2(handle,
                                  m,
                                  n,
                                  k,
                                  alpha,
                                  descrA,
                                  nnzA,
                                  csrValA,
                                  csrRowPtrA,
                                  csrColIndA,
                                  descrB,
                                  nnzB,
                                  csrValB,
                                  csrRowPtrB,
                                  csrColIndB,
                                  beta,
                                  descrD,
                                  nnzD,
                                  csrValD,
                                  csrRowPtrD,
                                  csrColIndD,
                                  descrC,
                                  csrValC,
                                  csrRowPtrC,
                                  csrColIndC,
                                  info,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       k,
                                         const hipComplex*         alpha,
                                         const hipsparseMatDescr_t descrA,
                                         int                       nnzA,
                                         const hipComplex*         csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const hipsparseMatDescr_t descrB,
                                         int                       nnzB,
                                         const hipComplex*         csrValB,
                                         const int*                csrRowPtrB,
                                         const int*                csrColIndB,
                                         const hipComplex*         beta,
                                         const hipsparseMatDescr_t descrD,
                                         int                       nnzD,
                                         const hipComplex*         csrValD,
                                         const int*                csrRowPtrD,
                                         const int*                csrColIndD,
                                         const hipsparseMatDescr_t descrC,
                                         hipComplex*               csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         const csrgemm2Info_t      info,
                                         void*                     pBuffer)
    {
        return hipsparseCcsrgemm2(handle,
                                  m,
                                  n,
                                  k,
                                  alpha,
                                  descrA,
                                  nnzA,
                                  csrValA,
                                  csrRowPtrA,
                                  csrColIndA,
                                  descrB,
                                  nnzB,
                                  csrValB,
                                  csrRowPtrB,
                                  csrColIndB,
                                  beta,
                                  descrD,
                                  nnzD,
                                  csrValD,
                                  csrRowPtrD,
                                  csrColIndD,
                                  descrC,
                                  csrValC,
                                  csrRowPtrC,
                                  csrColIndC,
                                  info,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrgemm2(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       k,
                                         const hipDoubleComplex*   alpha,
                                         const hipsparseMatDescr_t descrA,
                                         int                       nnzA,
                                         const hipDoubleComplex*   csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const hipsparseMatDescr_t descrB,
                                         int                       nnzB,
                                         const hipDoubleComplex*   csrValB,
                                         const int*                csrRowPtrB,
                                         const int*                csrColIndB,
                                         const hipDoubleComplex*   beta,
                                         const hipsparseMatDescr_t descrD,
                                         int                       nnzD,
                                         const hipDoubleComplex*   csrValD,
                                         const int*                csrRowPtrD,
                                         const int*                csrColIndD,
                                         const hipsparseMatDescr_t descrC,
                                         hipDoubleComplex*         csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         const csrgemm2Info_t      info,
                                         void*                     pBuffer)
    {
        return hipsparseZcsrgemm2(handle,
                                  m,
                                  n,
                                  k,
                                  alpha,
                                  descrA,
                                  nnzA,
                                  csrValA,
                                  csrRowPtrA,
                                  csrColIndA,
                                  descrB,
                                  nnzB,
                                  csrValB,
                                  csrRowPtrB,
                                  csrColIndB,
                                  beta,
                                  descrD,
                                  nnzD,
                                  csrValD,
                                  csrRowPtrD,
                                  csrColIndD,
                                  descrC,
                                  csrValC,
                                  csrRowPtrC,
                                  csrColIndC,
                                  info,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       nnz,
                                                    const hipsparseMatDescr_t descrA,
                                                    float*                    csrSortedValA,
                                                    const int*                csrSortedRowPtrA,
                                                    const int*                csrSortedColIndA,
                                                    csrilu02Info_t            info,
                                                    int*                      pBufferSizeInBytes)
    {
        return hipsparseScsrilu02_bufferSize(handle,
                                             m,
                                             nnz,
                                             descrA,
                                             csrSortedValA,
                                             csrSortedRowPtrA,
                                             csrSortedColIndA,
                                             info,
                                             pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       nnz,
                                                    const hipsparseMatDescr_t descrA,
                                                    double*                   csrSortedValA,
                                                    const int*                csrSortedRowPtrA,
                                                    const int*                csrSortedColIndA,
                                                    csrilu02Info_t            info,
                                                    int*                      pBufferSizeInBytes)
    {
        return hipsparseDcsrilu02_bufferSize(handle,
                                             m,
                                             nnz,
                                             descrA,
                                             csrSortedValA,
                                             csrSortedRowPtrA,
                                             csrSortedColIndA,
                                             info,
                                             pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       nnz,
                                                    const hipsparseMatDescr_t descrA,
                                                    hipComplex*               csrSortedValA,
                                                    const int*                csrSortedRowPtrA,
                                                    const int*                csrSortedColIndA,
                                                    csrilu02Info_t            info,
                                                    int*                      pBufferSizeInBytes)
    {
        return hipsparseCcsrilu02_bufferSize(handle,
                                             m,
                                             nnz,
                                             descrA,
                                             csrSortedValA,
                                             csrSortedRowPtrA,
                                             csrSortedColIndA,
                                             info,
                                             pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       nnz,
                                                    const hipsparseMatDescr_t descrA,
                                                    hipDoubleComplex*         csrSortedValA,
                                                    const int*                csrSortedRowPtrA,
                                                    const int*                csrSortedColIndA,
                                                    csrilu02Info_t            info,
                                                    int*                      pBufferSizeInBytes)
    {
        return hipsparseZcsrilu02_bufferSize(handle,
                                             m,
                                             nnz,
                                             descrA,
                                             csrSortedValA,
                                             csrSortedRowPtrA,
                                             csrSortedColIndA,
                                             info,
                                             pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       nnz,
                                                       const hipsparseMatDescr_t descrA,
                                                       float*                    csrSortedValA,
                                                       const int*                csrSortedRowPtrA,
                                                       const int*                csrSortedColIndA,
                                                       csrilu02Info_t            info,
                                                       size_t*                   pBufferSize)
    {
        return hipsparseScsrilu02_bufferSizeExt(handle,
                                                m,
                                                nnz,
                                                descrA,
                                                csrSortedValA,
                                                csrSortedRowPtrA,
                                                csrSortedColIndA,
                                                info,
                                                pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       nnz,
                                                       const hipsparseMatDescr_t descrA,
                                                       double*                   csrSortedValA,
                                                       const int*                csrSortedRowPtrA,
                                                       const int*                csrSortedColIndA,
                                                       csrilu02Info_t            info,
                                                       size_t*                   pBufferSize)
    {
        return hipsparseDcsrilu02_bufferSizeExt(handle,
                                                m,
                                                nnz,
                                                descrA,
                                                csrSortedValA,
                                                csrSortedRowPtrA,
                                                csrSortedColIndA,
                                                info,
                                                pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       nnz,
                                                       const hipsparseMatDescr_t descrA,
                                                       hipComplex*               csrSortedValA,
                                                       const int*                csrSortedRowPtrA,
                                                       const int*                csrSortedColIndA,
                                                       csrilu02Info_t            info,
                                                       size_t*                   pBufferSize)
    {
        return hipsparseCcsrilu02_bufferSizeExt(handle,
                                                m,
                                                nnz,
                                                descrA,
                                                csrSortedValA,
                                                csrSortedRowPtrA,
                                                csrSortedColIndA,
                                                info,
                                                pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       nnz,
                                                       const hipsparseMatDescr_t descrA,
                                                       hipDoubleComplex*         csrSortedValA,
                                                       const int*                csrSortedRowPtrA,
                                                       const int*                csrSortedColIndA,
                                                       csrilu02Info_t            info,
                                                       size_t*                   pBufferSize)
    {
        return hipsparseZcsrilu02_bufferSizeExt(handle,
                                                m,
                                                nnz,
                                                descrA,
                                                csrSortedValA,
                                                csrSortedRowPtrA,
                                                csrSortedColIndA,
                                                info,
                                                pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_analysis(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  const float*              csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrilu02Info_t            info,
                                                  hipsparseSolvePolicy_t    policy,
                                                  void*                     pBuffer)
    {
        return hipsparseScsrilu02_analysis(handle,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           policy,
                                           pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_analysis(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  const double*             csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrilu02Info_t            info,
                                                  hipsparseSolvePolicy_t    policy,
                                                  void*                     pBuffer)
    {
        return hipsparseDcsrilu02_analysis(handle,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           policy,
                                           pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_analysis(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  const hipComplex*         csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrilu02Info_t            info,
                                                  hipsparseSolvePolicy_t    policy,
                                                  void*                     pBuffer)
    {
        return hipsparseCcsrilu02_analysis(handle,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           policy,
                                           pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02_analysis(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  const hipDoubleComplex*   csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csrilu02Info_t            info,
                                                  hipsparseSolvePolicy_t    policy,
                                                  void*                     pBuffer)
    {
        return hipsparseZcsrilu02_analysis(handle,
                                           m,
                                           nnz,
                                           descrA,
                                           csrSortedValA,
                                           csrSortedRowPtrA,
                                           csrSortedColIndA,
                                           info,
                                           policy,
                                           pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       nnz,
                                         const hipsparseMatDescr_t descrA,
                                         float*                    csrSortedValA_valM,
                                         /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                         const int*             csrSortedRowPtrA,
                                         const int*             csrSortedColIndA,
                                         csrilu02Info_t         info,
                                         hipsparseSolvePolicy_t policy,
                                         void*                  pBuffer)
    {
        return hipsparseScsrilu02(handle,
                                  m,
                                  nnz,
                                  descrA,
                                  csrSortedValA_valM,
                                  csrSortedRowPtrA,
                                  csrSortedColIndA,
                                  info,
                                  policy,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       nnz,
                                         const hipsparseMatDescr_t descrA,
                                         double*                   csrSortedValA_valM,
                                         /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                         const int*             csrSortedRowPtrA,
                                         const int*             csrSortedColIndA,
                                         csrilu02Info_t         info,
                                         hipsparseSolvePolicy_t policy,
                                         void*                  pBuffer)
    {
        return hipsparseDcsrilu02(handle,
                                  m,
                                  nnz,
                                  descrA,
                                  csrSortedValA_valM,
                                  csrSortedRowPtrA,
                                  csrSortedColIndA,
                                  info,
                                  policy,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       nnz,
                                         const hipsparseMatDescr_t descrA,
                                         hipComplex*               csrSortedValA_valM,
                                         /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                         const int*             csrSortedRowPtrA,
                                         const int*             csrSortedColIndA,
                                         csrilu02Info_t         info,
                                         hipsparseSolvePolicy_t policy,
                                         void*                  pBuffer)
    {
        return hipsparseCcsrilu02(handle,
                                  m,
                                  nnz,
                                  descrA,
                                  csrSortedValA_valM,
                                  csrSortedRowPtrA,
                                  csrSortedColIndA,
                                  info,
                                  policy,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsrilu02(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       nnz,
                                         const hipsparseMatDescr_t descrA,
                                         hipDoubleComplex*         csrSortedValA_valM,
                                         /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                         const int*             csrSortedRowPtrA,
                                         const int*             csrSortedColIndA,
                                         csrilu02Info_t         info,
                                         hipsparseSolvePolicy_t policy,
                                         void*                  pBuffer)
    {
        return hipsparseZcsrilu02(handle,
                                  m,
                                  nnz,
                                  descrA,
                                  csrSortedValA_valM,
                                  csrSortedRowPtrA,
                                  csrSortedColIndA,
                                  info,
                                  policy,
                                  pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSize(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   float*                    csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csric02Info_t             info,
                                                   int*                      pBufferSizeInBytes)
    {
        return hipsparseScsric02_bufferSize(handle,
                                            m,
                                            nnz,
                                            descrA,
                                            csrSortedValA,
                                            csrSortedRowPtrA,
                                            csrSortedColIndA,
                                            info,
                                            pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSize(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   double*                   csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csric02Info_t             info,
                                                   int*                      pBufferSizeInBytes)
    {
        return hipsparseDcsric02_bufferSize(handle,
                                            m,
                                            nnz,
                                            descrA,
                                            csrSortedValA,
                                            csrSortedRowPtrA,
                                            csrSortedColIndA,
                                            info,
                                            pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSize(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   hipComplex*               csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csric02Info_t             info,
                                                   int*                      pBufferSizeInBytes)
    {
        return hipsparseCcsric02_bufferSize(handle,
                                            m,
                                            nnz,
                                            descrA,
                                            csrSortedValA,
                                            csrSortedRowPtrA,
                                            csrSortedColIndA,
                                            info,
                                            pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSize(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   hipDoubleComplex*         csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csric02Info_t             info,
                                                   int*                      pBufferSizeInBytes)
    {
        return hipsparseZcsric02_bufferSize(handle,
                                            m,
                                            nnz,
                                            descrA,
                                            csrSortedValA,
                                            csrSortedRowPtrA,
                                            csrSortedColIndA,
                                            info,
                                            pBufferSizeInBytes);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       nnz,
                                                      const hipsparseMatDescr_t descrA,
                                                      float*                    csrSortedValA,
                                                      const int*                csrSortedRowPtrA,
                                                      const int*                csrSortedColIndA,
                                                      csric02Info_t             info,
                                                      size_t*                   pBufferSize)
    {
        return hipsparseScsric02_bufferSizeExt(handle,
                                               m,
                                               nnz,
                                               descrA,
                                               csrSortedValA,
                                               csrSortedRowPtrA,
                                               csrSortedColIndA,
                                               info,
                                               pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       nnz,
                                                      const hipsparseMatDescr_t descrA,
                                                      double*                   csrSortedValA,
                                                      const int*                csrSortedRowPtrA,
                                                      const int*                csrSortedColIndA,
                                                      csric02Info_t             info,
                                                      size_t*                   pBufferSize)
    {
        return hipsparseDcsric02_bufferSizeExt(handle,
                                               m,
                                               nnz,
                                               descrA,
                                               csrSortedValA,
                                               csrSortedRowPtrA,
                                               csrSortedColIndA,
                                               info,
                                               pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       nnz,
                                                      const hipsparseMatDescr_t descrA,
                                                      hipComplex*               csrSortedValA,
                                                      const int*                csrSortedRowPtrA,
                                                      const int*                csrSortedColIndA,
                                                      csric02Info_t             info,
                                                      size_t*                   pBufferSize)
    {
        return hipsparseCcsric02_bufferSizeExt(handle,
                                               m,
                                               nnz,
                                               descrA,
                                               csrSortedValA,
                                               csrSortedRowPtrA,
                                               csrSortedColIndA,
                                               info,
                                               pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       nnz,
                                                      const hipsparseMatDescr_t descrA,
                                                      hipDoubleComplex*         csrSortedValA,
                                                      const int*                csrSortedRowPtrA,
                                                      const int*                csrSortedColIndA,
                                                      csric02Info_t             info,
                                                      size_t*                   pBufferSize)
    {
        return hipsparseZcsric02_bufferSizeExt(handle,
                                               m,
                                               nnz,
                                               descrA,
                                               csrSortedValA,
                                               csrSortedRowPtrA,
                                               csrSortedColIndA,
                                               info,
                                               pBufferSize);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_analysis(hipsparseHandle_t         handle,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 const float*              csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csric02Info_t             info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 void*                     pBuffer)
    {
        return hipsparseScsric02_analysis(handle,
                                          m,
                                          nnz,
                                          descrA,
                                          csrSortedValA,
                                          csrSortedRowPtrA,
                                          csrSortedColIndA,
                                          info,
                                          policy,
                                          pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_analysis(hipsparseHandle_t         handle,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 const double*             csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csric02Info_t             info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 void*                     pBuffer)
    {
        return hipsparseDcsric02_analysis(handle,
                                          m,
                                          nnz,
                                          descrA,
                                          csrSortedValA,
                                          csrSortedRowPtrA,
                                          csrSortedColIndA,
                                          info,
                                          policy,
                                          pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_analysis(hipsparseHandle_t         handle,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 const hipComplex*         csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csric02Info_t             info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 void*                     pBuffer)
    {
        return hipsparseCcsric02_analysis(handle,
                                          m,
                                          nnz,
                                          descrA,
                                          csrSortedValA,
                                          csrSortedRowPtrA,
                                          csrSortedColIndA,
                                          info,
                                          policy,
                                          pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02_analysis(hipsparseHandle_t         handle,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 const hipDoubleComplex*   csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csric02Info_t             info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 void*                     pBuffer)
    {
        return hipsparseZcsric02_analysis(handle,
                                          m,
                                          nnz,
                                          descrA,
                                          csrSortedValA,
                                          csrSortedRowPtrA,
                                          csrSortedColIndA,
                                          info,
                                          policy,
                                          pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       nnz,
                                        const hipsparseMatDescr_t descrA,
                                        float*                    csrSortedValA_valM,
                                        /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                        const int*             csrSortedRowPtrA,
                                        const int*             csrSortedColIndA,
                                        csric02Info_t          info,
                                        hipsparseSolvePolicy_t policy,
                                        void*                  pBuffer)
    {
        return hipsparseScsric02(handle,
                                 m,
                                 nnz,
                                 descrA,
                                 csrSortedValA_valM,
                                 csrSortedRowPtrA,
                                 csrSortedColIndA,
                                 info,
                                 policy,
                                 pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       nnz,
                                        const hipsparseMatDescr_t descrA,
                                        double*                   csrSortedValA_valM,
                                        /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                        const int*             csrSortedRowPtrA,
                                        const int*             csrSortedColIndA,
                                        csric02Info_t          info,
                                        hipsparseSolvePolicy_t policy,
                                        void*                  pBuffer)
    {
        return hipsparseDcsric02(handle,
                                 m,
                                 nnz,
                                 descrA,
                                 csrSortedValA_valM,
                                 csrSortedRowPtrA,
                                 csrSortedColIndA,
                                 info,
                                 policy,
                                 pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       nnz,
                                        const hipsparseMatDescr_t descrA,
                                        hipComplex*               csrSortedValA_valM,
                                        /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                        const int*             csrSortedRowPtrA,
                                        const int*             csrSortedColIndA,
                                        csric02Info_t          info,
                                        hipsparseSolvePolicy_t policy,
                                        void*                  pBuffer)
    {
        return hipsparseCcsric02(handle,
                                 m,
                                 nnz,
                                 descrA,
                                 csrSortedValA_valM,
                                 csrSortedRowPtrA,
                                 csrSortedColIndA,
                                 info,
                                 policy,
                                 pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsric02(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       nnz,
                                        const hipsparseMatDescr_t descrA,
                                        hipDoubleComplex*         csrSortedValA_valM,
                                        /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                        const int*             csrSortedRowPtrA,
                                        const int*             csrSortedColIndA,
                                        csric02Info_t          info,
                                        hipsparseSolvePolicy_t policy,
                                        void*                  pBuffer)
    {
        return hipsparseZcsric02(handle,
                                 m,
                                 nnz,
                                 descrA,
                                 csrSortedValA_valM,
                                 csrSortedRowPtrA,
                                 csrSortedColIndA,
                                 info,
                                 policy,
                                 pBuffer);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2csc(hipsparseHandle_t    handle,
                                        int                  m,
                                        int                  n,
                                        int                  nnz,
                                        const float*         csr_val,
                                        const int*           csr_row_ptr,
                                        const int*           csr_col_ind,
                                        float*               csc_val,
                                        int*                 csc_row_ind,
                                        int*                 csc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base)
    {
        return hipsparseScsr2csc(handle,
                                 m,
                                 n,
                                 nnz,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 csc_val,
                                 csc_row_ind,
                                 csc_col_ptr,
                                 copy_values,
                                 idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2csc(hipsparseHandle_t    handle,
                                        int                  m,
                                        int                  n,
                                        int                  nnz,
                                        const double*        csr_val,
                                        const int*           csr_row_ptr,
                                        const int*           csr_col_ind,
                                        double*              csc_val,
                                        int*                 csc_row_ind,
                                        int*                 csc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base)
    {
        return hipsparseDcsr2csc(handle,
                                 m,
                                 n,
                                 nnz,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 csc_val,
                                 csc_row_ind,
                                 csc_col_ptr,
                                 copy_values,
                                 idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2csc(hipsparseHandle_t    handle,
                                        int                  m,
                                        int                  n,
                                        int                  nnz,
                                        const hipComplex*    csr_val,
                                        const int*           csr_row_ptr,
                                        const int*           csr_col_ind,
                                        hipComplex*          csc_val,
                                        int*                 csc_row_ind,
                                        int*                 csc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base)
    {
        return hipsparseCcsr2csc(handle,
                                 m,
                                 n,
                                 nnz,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 csc_val,
                                 csc_row_ind,
                                 csc_col_ptr,
                                 copy_values,
                                 idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2csc(hipsparseHandle_t       handle,
                                        int                     m,
                                        int                     n,
                                        int                     nnz,
                                        const hipDoubleComplex* csr_val,
                                        const int*              csr_row_ptr,
                                        const int*              csr_col_ind,
                                        hipDoubleComplex*       csc_val,
                                        int*                    csc_row_ind,
                                        int*                    csc_col_ptr,
                                        hipsparseAction_t       copy_values,
                                        hipsparseIndexBase_t    idx_base)
    {
        return hipsparseZcsr2csc(handle,
                                 m,
                                 n,
                                 nnz,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 csc_val,
                                 csc_row_ind,
                                 csc_col_ptr,
                                 copy_values,
                                 idx_base);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2hyb(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        const hipsparseMatDescr_t descr,
                                        const float*              csr_val,
                                        const int*                csr_row_ptr,
                                        const int*                csr_col_ind,
                                        hipsparseHybMat_t         hyb,
                                        int                       user_ell_width,
                                        hipsparseHybPartition_t   partition_type)
    {
        return hipsparseScsr2hyb(handle,
                                 m,
                                 n,
                                 descr,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 hyb,
                                 user_ell_width,
                                 partition_type);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2hyb(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        const hipsparseMatDescr_t descr,
                                        const double*             csr_val,
                                        const int*                csr_row_ptr,
                                        const int*                csr_col_ind,
                                        hipsparseHybMat_t         hyb,
                                        int                       user_ell_width,
                                        hipsparseHybPartition_t   partition_type)
    {
        return hipsparseDcsr2hyb(handle,
                                 m,
                                 n,
                                 descr,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 hyb,
                                 user_ell_width,
                                 partition_type);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2hyb(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        const hipsparseMatDescr_t descr,
                                        const hipComplex*         csr_val,
                                        const int*                csr_row_ptr,
                                        const int*                csr_col_ind,
                                        hipsparseHybMat_t         hyb,
                                        int                       user_ell_width,
                                        hipsparseHybPartition_t   partition_type)
    {
        return hipsparseCcsr2hyb(handle,
                                 m,
                                 n,
                                 descr,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 hyb,
                                 user_ell_width,
                                 partition_type);
    }

    template <>
    hipsparseStatus_t hipsparseXcsr2hyb(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        const hipsparseMatDescr_t descr,
                                        const hipDoubleComplex*   csr_val,
                                        const int*                csr_row_ptr,
                                        const int*                csr_col_ind,
                                        hipsparseHybMat_t         hyb,
                                        int                       user_ell_width,
                                        hipsparseHybPartition_t   partition_type)
    {
        return hipsparseZcsr2hyb(handle,
                                 m,
                                 n,
                                 descr,
                                 csr_val,
                                 csr_row_ptr,
                                 csr_col_ind,
                                 hyb,
                                 user_ell_width,
                                 partition_type);
    }

    template <>
    hipsparseStatus_t hipsparseXhyb2csr(hipsparseHandle_t         handle,
                                        const hipsparseMatDescr_t descrA,
                                        const hipsparseHybMat_t   hybA,
                                        float*                    csrValA,
                                        int*                      csrRowPtrA,
                                        int*                      csrColIndA)
    {
        return hipsparseShyb2csr(handle, descrA, hybA, csrValA, csrRowPtrA, csrColIndA);
    }

    template <>
    hipsparseStatus_t hipsparseXhyb2csr(hipsparseHandle_t         handle,
                                        const hipsparseMatDescr_t descrA,
                                        const hipsparseHybMat_t   hybA,
                                        double*                   csrValA,
                                        int*                      csrRowPtrA,
                                        int*                      csrColIndA)
    {
        return hipsparseDhyb2csr(handle, descrA, hybA, csrValA, csrRowPtrA, csrColIndA);
    }

    template <>
    hipsparseStatus_t hipsparseXhyb2csr(hipsparseHandle_t         handle,
                                        const hipsparseMatDescr_t descrA,
                                        const hipsparseHybMat_t   hybA,
                                        hipComplex*               csrValA,
                                        int*                      csrRowPtrA,
                                        int*                      csrColIndA)
    {
        return hipsparseChyb2csr(handle, descrA, hybA, csrValA, csrRowPtrA, csrColIndA);
    }

    template <>
    hipsparseStatus_t hipsparseXhyb2csr(hipsparseHandle_t         handle,
                                        const hipsparseMatDescr_t descrA,
                                        const hipsparseHybMat_t   hybA,
                                        hipDoubleComplex*         csrValA,
                                        int*                      csrRowPtrA,
                                        int*                      csrColIndA)
    {
        return hipsparseZhyb2csr(handle, descrA, hybA, csrValA, csrRowPtrA, csrColIndA);
    }

} // namespace hipsparse
