/* Extensions and Polyfills for <utility>
 *
 * Author: Philipp Jungkamp <philipp.jungkamp@rwth-aachen.de>
 * SPDX-FileCopyrightText: 2025 Institute for Automation of Complex Power Systems, RWTH Aachen University
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

namespace villas {

[[noreturn]] inline auto unreachable() -> void { __builtin_unreachable(); }

} // namespace villas
