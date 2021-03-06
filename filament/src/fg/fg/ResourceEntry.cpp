/*
 * Copyright (C) 2019 The Android Open Source Project
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

#include "fg/fg/ResourceEntry.h"

#include <fg/FrameGraph.h>

namespace filament {
namespace fg {

VirtualResource::~VirtualResource() = default;

ResourceEntryBase::ResourceEntryBase(const char* name, uint16_t id, bool imported, uint8_t priority) noexcept
        : name(name), id(id), imported(imported), priority(priority) {
}

ResourceAllocatorInterface& ResourceEntryBase::getResourceAllocator(FrameGraph& fg) noexcept {
    return fg.getResourceAllocator();
}

ResourceEntryBase::~ResourceEntryBase() = default;

} // namespace fg
} // namespace filament
