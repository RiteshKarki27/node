/* Extensions and Polyfills for <utility>
 *
 * Author: Philipp Jungkamp <philipp.jungkamp@rwth-aachen.de>
 * SPDX-FileCopyrightText: 2025 Institute for Automation of Complex Power Systems, RWTH Aachen University
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <utility>

namespace villas {

[[noreturn]] inline auto unreachable() -> void {
#ifdef __cpp_lib_unreachable
  std::unreachable();
#elifdef __GNUC__
  __builtin_unreachable();
#endif
}

} // namespace villas
