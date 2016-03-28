// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/mac/call_with_eh_frame.h"

namespace base {
namespace mac {

void CallWithEHFrame(void (^block)(void)) {
  block();
}

}  // namespace mac
}  // namespace base
