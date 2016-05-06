// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_INTERNAL_H_
#define CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}

class ResourceTypeStat;
class ResourceTypeStats;
class ResourceUsageData;


namespace internal {

class ResourceTypeStat_Data;
class ResourceTypeStats_Data;
class ResourceUsageData_Data;



#pragma pack(push, 1)


class ResourceTypeStat_Data {
 public:
  static ResourceTypeStat_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;

 private:
  ResourceTypeStat_Data();
  ~ResourceTypeStat_Data() = delete;
};
static_assert(sizeof(ResourceTypeStat_Data) == 40,
              "Bad sizeof(ResourceTypeStat_Data)");
class ResourceTypeStats_Data {
 public:
  static ResourceTypeStats_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> images;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> css_style_sheets;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> scripts;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> xsl_style_sheets;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> fonts;
  mojo::internal::StructPointer<internal::ResourceTypeStat_Data> other;

 private:
  ResourceTypeStats_Data();
  ~ResourceTypeStats_Data() = delete;
};
static_assert(sizeof(ResourceTypeStats_Data) == 56,
              "Bad sizeof(ResourceTypeStats_Data)");
class ResourceUsageData_Data {
 public:
  static ResourceUsageData_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t reports_v8_stats : 1;
  uint8_t pad0_[7];
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  mojo::internal::StructPointer<internal::ResourceTypeStats_Data> web_cache_stats;

 private:
  ResourceUsageData_Data();
  ~ResourceUsageData_Data() = delete;
};
static_assert(sizeof(ResourceUsageData_Data) == 40,
              "Bad sizeof(ResourceUsageData_Data)");

#pragma pack(pop)

}  // namespace internal

#endif  // CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_INTERNAL_H_