//------------------------------------------------------------------------------
/*
    Copyright (c) 2011-2013, OpenCoin, Inc.
*/
//==============================================================================

/** Add this to get the @ref ripple_basio module.

    @file ripple_basio.cpp
    @ingroup ripple_basio
*/

//------------------------------------------------------------------------------

#include "BeastConfig.h"

#include "beast/modules/beast_basics/beast_basics.h"
#include "beast/modules/beast_asio/beast_asio.h"

#include "ripple_basio.h"

#include "ripple_basio_impl.h"

namespace ripple
{

#include "boost/ripple_IoService.cpp"
#include "boost/ripple_SslContext.cpp"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4100)
#pragma warning (disable: 4127) // conditional expression is constant
#endif

#include "tests/ripple_AsioTests.cpp"

#ifdef _MSC_VER
#pragma warning (pop)
#endif

}
