/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AIDL_SYNC_UTIL_H_
#define AIDL_SYNC_UTIL_H_

#include <mutex>

// Utility that provides a global lock to synchronize access between
// the AIDL thread and the legacy HAL's event loop.
namespace aidl {
namespace android {
namespace hardware {
namespace wifi {
namespace aidl_sync_util {
std::unique_lock<std::recursive_mutex> acquireGlobalLock();
}  // namespace aidl_sync_util
}  // namespace wifi
}  // namespace hardware
}  // namespace android
}  // namespace aidl
#endif  // AIDL_SYNC_UTIL_H_
