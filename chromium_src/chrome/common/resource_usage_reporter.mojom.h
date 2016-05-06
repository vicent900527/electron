// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_
#define CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "chrome/common/resource_usage_reporter.mojom-internal.h"

class ResourceUsageReporter;
using ResourceUsageReporterPtr = mojo::InterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedPtr = mojo::AssociatedInterfacePtr<ResourceUsageReporter>;

class ResourceTypeStat;
class ResourceTypeStat_Reader;

using ResourceTypeStatPtr = mojo::InlinedStructPtr<ResourceTypeStat>;


class ResourceTypeStats;
class ResourceTypeStats_Reader;

using ResourceTypeStatsPtr = mojo::StructPtr<ResourceTypeStats>;


class ResourceUsageData;
class ResourceUsageData_Reader;

using ResourceUsageDataPtr = mojo::StructPtr<ResourceUsageData>;



class ResourceUsageReporterProxy;
class ResourceUsageReporterStub;

class ResourceUsageReporterRequestValidator;
class ResourceUsageReporterResponseValidator;

class ResourceUsageReporter {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::ResourceUsageReporter;

  using Proxy_ = ResourceUsageReporterProxy;
  using Stub_ = ResourceUsageReporterStub;

  using RequestValidator_ = ResourceUsageReporterRequestValidator;
  using ResponseValidator_ = ResourceUsageReporterResponseValidator;

  virtual ~ResourceUsageReporter() {}

  using GetUsageDataCallback = mojo::Callback<void(ResourceUsageDataPtr)>;
  virtual void GetUsageData(const GetUsageDataCallback& callback) = 0;
};

class ResourceUsageReporterProxy
    : public ResourceUsageReporter,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetUsageData(
      const GetUsageDataCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ResourceUsageReporterStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ResourceUsageReporterStub();
  ~ResourceUsageReporterStub() override;
  void set_sink(ResourceUsageReporter* sink) { sink_ = sink; }
  ResourceUsageReporter* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ResourceUsageReporter* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ResourceUsageReporterRequestValidator : public mojo::MessageFilter {
 public:
  explicit ResourceUsageReporterRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ResourceUsageReporterResponseValidator : public mojo::MessageFilter {
 public:
  explicit ResourceUsageReporterResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class ResourceTypeStat_Reader;

class ResourceTypeStat {
 public:
  using Data_ = internal::ResourceTypeStat_Data;
  using Reader = ResourceTypeStat_Reader;

  static ResourceTypeStatPtr New();

  template <typename U>
  static ResourceTypeStatPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStat>::Convert(*this);
  }

  ResourceTypeStat();
  ~ResourceTypeStat();


  ResourceTypeStatPtr Clone() const;
  bool Equals(const ResourceTypeStat& other) const;

  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;
};






class ResourceTypeStats_Reader;

class ResourceTypeStats {
 public:
  using Data_ = internal::ResourceTypeStats_Data;
  using Reader = ResourceTypeStats_Reader;

  static ResourceTypeStatsPtr New();

  template <typename U>
  static ResourceTypeStatsPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStats>::Convert(*this);
  }

  ResourceTypeStats();
  ~ResourceTypeStats();


  ResourceTypeStatsPtr Clone() const;
  bool Equals(const ResourceTypeStats& other) const;

  ResourceTypeStatPtr images;
  ResourceTypeStatPtr css_style_sheets;
  ResourceTypeStatPtr scripts;
  ResourceTypeStatPtr xsl_style_sheets;
  ResourceTypeStatPtr fonts;
  ResourceTypeStatPtr other;
};


class ResourceUsageData_Reader;

class ResourceUsageData {
 public:
  using Data_ = internal::ResourceUsageData_Data;
  using Reader = ResourceUsageData_Reader;

  static ResourceUsageDataPtr New();

  template <typename U>
  static ResourceUsageDataPtr From(const U& u) {
    return mojo::TypeConverter<ResourceUsageDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceUsageData>::Convert(*this);
  }

  ResourceUsageData();
  ~ResourceUsageData();


  ResourceUsageDataPtr Clone() const;
  bool Equals(const ResourceUsageData& other) const;

  bool reports_v8_stats;
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  ResourceTypeStatsPtr web_cache_stats;
};


size_t GetSerializedSize_(const ResourceTypeStatPtr& input);
void Serialize_(ResourceTypeStatPtr input, mojo::internal::Buffer* buffer,
                internal::ResourceTypeStat_Data** output);
bool Deserialize_(internal::ResourceTypeStat_Data* input,
                  ResourceTypeStatPtr* output,
                  mojo::internal::SerializationContext* context);


class ResourceTypeStat_Reader {
 public:
  ResourceTypeStat_Reader(internal::ResourceTypeStat_Data* data,
                         mojo::internal::SerializationContext* context);
  uint64_t count() const { return data_->count; }
  uint64_t size() const { return data_->size; }
  uint64_t live_size() const { return data_->live_size; }
  uint64_t decoded_size() const { return data_->decoded_size; }

 private:
  internal::ResourceTypeStat_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ResourceTypeStat_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ResourceTypeStat_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ResourceTypeStat_Data** output) {
    internal::ResourceTypeStat_Data* result =
        internal::ResourceTypeStat_Data::New(buffer);
    result->count = mojo::StructTraits<ResourceTypeStat, NativeType>
        ::count(input);
    result->size = mojo::StructTraits<ResourceTypeStat, NativeType>
        ::size(input);
    result->live_size = mojo::StructTraits<ResourceTypeStat, NativeType>
        ::live_size(input);
    result->decoded_size = mojo::StructTraits<ResourceTypeStat, NativeType>
        ::decoded_size(input);
    *output = result;
  }

  static bool Deserialize(internal::ResourceTypeStat_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ResourceTypeStat, NativeType>::Read(
        ResourceTypeStat_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ResourceTypeStatsPtr& input);
void Serialize_(ResourceTypeStatsPtr input, mojo::internal::Buffer* buffer,
                internal::ResourceTypeStats_Data** output);
bool Deserialize_(internal::ResourceTypeStats_Data* input,
                  ResourceTypeStatsPtr* output,
                  mojo::internal::SerializationContext* context);


class ResourceTypeStats_Reader {
 public:
  ResourceTypeStats_Reader(internal::ResourceTypeStats_Data* data,
                         mojo::internal::SerializationContext* context);
  ResourceTypeStat::Reader images() const;
  ResourceTypeStat::Reader css_style_sheets() const;
  ResourceTypeStat::Reader scripts() const;
  ResourceTypeStat::Reader xsl_style_sheets() const;
  ResourceTypeStat::Reader fonts() const;
  ResourceTypeStat::Reader other() const;

 private:
  internal::ResourceTypeStats_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ResourceTypeStats_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ResourceTypeStats_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field images";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field css_style_sheets";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field scripts";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field xsl_style_sheets";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field fonts";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field other";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ResourceTypeStats_Data** output) {
    internal::ResourceTypeStats_Data* result =
        internal::ResourceTypeStats_Data::New(buffer);
    result->images = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::images(input);
    result->css_style_sheets = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::css_style_sheets(input);
    result->scripts = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::scripts(input);
    result->xsl_style_sheets = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::xsl_style_sheets(input);
    result->fonts = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::fonts(input);
    result->other = mojo::StructTraits<ResourceTypeStats, NativeType>
        ::other(input);
    *output = result;
  }

  static bool Deserialize(internal::ResourceTypeStats_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ResourceTypeStats, NativeType>::Read(
        ResourceTypeStats_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ResourceUsageDataPtr& input);
void Serialize_(ResourceUsageDataPtr input, mojo::internal::Buffer* buffer,
                internal::ResourceUsageData_Data** output);
bool Deserialize_(internal::ResourceUsageData_Data* input,
                  ResourceUsageDataPtr* output,
                  mojo::internal::SerializationContext* context);


class ResourceUsageData_Reader {
 public:
  ResourceUsageData_Reader(internal::ResourceUsageData_Data* data,
                         mojo::internal::SerializationContext* context);
  bool reports_v8_stats() const { return data_->reports_v8_stats; }
  uint64_t v8_bytes_allocated() const { return data_->v8_bytes_allocated; }
  uint64_t v8_bytes_used() const { return data_->v8_bytes_used; }
  ResourceTypeStats::Reader web_cache_stats() const;

 private:
  internal::ResourceUsageData_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ResourceUsageData_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ResourceUsageData_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field web_cache_stats";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ResourceUsageData_Data** output) {
    internal::ResourceUsageData_Data* result =
        internal::ResourceUsageData_Data::New(buffer);
    result->reports_v8_stats = mojo::StructTraits<ResourceUsageData, NativeType>
        ::reports_v8_stats(input);
    result->v8_bytes_allocated = mojo::StructTraits<ResourceUsageData, NativeType>
        ::v8_bytes_allocated(input);
    result->v8_bytes_used = mojo::StructTraits<ResourceUsageData, NativeType>
        ::v8_bytes_used(input);
    result->web_cache_stats = mojo::StructTraits<ResourceUsageData, NativeType>
        ::web_cache_stats(input);
    *output = result;
  }

  static bool Deserialize(internal::ResourceUsageData_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ResourceUsageData, NativeType>::Read(
        ResourceUsageData_Reader(input, context), output);
  }
};  

#endif  // CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_