/*
* Copyright 2020-2023 Toyota Connected North America
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

#ifndef FLUTTER_PLUGIN_PLATFORM_VIEW_INTERFACE_H_
#define FLUTTER_PLUGIN_PLATFORM_VIEW_INTERFACE_H_

#if defined(__cplusplus)
extern "C" {
#endif

struct platform_view_listener {
  void (*resize)(double width, double height, void* data);
  void (*set_direction)(int32_t direction, void* data);
  void (*set_offset)(double left, double top, void* data);
  void (*on_touch)(int32_t action, double x, double y, void* data);
  void (*dispose)(bool hybrid, void* data);
};

typedef void (*PlatformViewAddListener)(
    void* context,
    int32_t id,
    const struct platform_view_listener* listener,
    void* listener_context);

typedef void (*PlatformViewRemoveListener)(void* context, int32_t id);

#if defined(__cplusplus)
}  // extern "C"
#endif

#endif  // FLUTTER_PLUGIN_PLATFORM_VIEW_INTERFACE_H_