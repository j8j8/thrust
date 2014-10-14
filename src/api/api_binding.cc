// Copyright (c) 2014 Stanislas Polu. All rights reserved.
// See the LICENSE file.

#include <sstream>
#include <string>

#include "src/api/exo_shell_binding.h"

namespace exo_shell {

APIBinding::APIBinding(
    const std::string& type,
    const unsigned int id)
  : type_(type),
    id_(id)
{
}

APIBinding::~APIBinding()
{
}

void
APIBinding::CallRemoteMethod(
    const std::string& method,
    scoped_ptr<base::DictionaryValue> args,
    const API::MethodCallback& callback)
{
  /* TODO(spolu) */
}

void
APIBinding::Emit(
    const std::string& type,
    scoped_ptr<base::DictionaryValue> event)
{
  /* TODO(spolu) */
}

} // namespace exo_shell