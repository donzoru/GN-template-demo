//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <queue>

// queue(const queue&) = default;

#include <queue>
#include <cassert>

#include "test_macros.h"

template <class C>
C
make(int n)
{
    C c;
    for (int i = 0; i < n; ++i)
        c.push_back(i);
    return c;
}

int main(int, char**)
{
    std::queue<int> q(make<std::deque<int> >(5));
    std::queue<int> q2 = q;
    assert(q2 == q);

  return 0;
}
