//          Copyright Odin Holmes 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

#include <kvasir/mpl/sequence/at.hpp>

#include <type_traits>

#include <kvasir/mpl/types/list.hpp>

namespace {
	namespace mpl = kvasir::mpl;

	static_assert(std::is_same<mpl::at<mpl::list<void, char, short>, 1>, char>::value, "");
}
