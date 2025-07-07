#pragma once

#include "matrix.h"

inline matrix fast_multiply(matrix const &a, matrix const &b) {
    auto [a_cols, a_rows] = a.size();
    auto [b_cols, b_rows] = b.size();
    matrix result(a_rows, b_cols, true);

    for (size_t i = 0; i < a_rows; ++i) {
        for (size_t j = 0; j < b_cols; ++j) {
            for (size_t k = 0; k < b_rows; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;
}
