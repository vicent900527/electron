// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "chrome/common/resource_usage_reporter.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/lib/scoped_task_tracking.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kResourceUsageReporter_GetUsageData_Name = 0;

class ResourceUsageReporter_GetUsageData_Params_Data {
 public:
  static ResourceUsageReporter_GetUsageData_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  ResourceUsageReporter_GetUsageData_Params_Data();
  ~ResourceUsageReporter_GetUsageData_Params_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_Params_Data) == 8,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_Params_Data)");

// static
ResourceUsageReporter_GetUsageData_Params_Data* ResourceUsageReporter_GetUsageData_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ResourceUsageReporter_GetUsageData_Params_Data))) ResourceUsageReporter_GetUsageData_Params_Data();
}

// static
bool ResourceUsageReporter_GetUsageData_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceUsageReporter_GetUsageData_Params_Data* object = static_cast<const ResourceUsageReporter_GetUsageData_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void ResourceUsageReporter_GetUsageData_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ResourceUsageReporter_GetUsageData_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ResourceUsageReporter_GetUsageData_Params_Data::ResourceUsageReporter_GetUsageData_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ResourceUsageReporter_GetUsageData_ResponseParams_Data {
 public:
  static ResourceUsageReporter_GetUsageData_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ResourceUsageData_Data> data;

 private:
  ResourceUsageReporter_GetUsageData_ResponseParams_Data();
  ~ResourceUsageReporter_GetUsageData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data) == 16,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data)");

// static
ResourceUsageReporter_GetUsageData_ResponseParams_Data* ResourceUsageReporter_GetUsageData_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data))) ResourceUsageReporter_GetUsageData_ResponseParams_Data();
}

// static
bool ResourceUsageReporter_GetUsageData_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceUsageReporter_GetUsageData_ResponseParams_Data* object = static_cast<const ResourceUsageReporter_GetUsageData_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in ResourceUsageReporter_GetUsageData_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, bounds_checker))
    return false;

  return true;
}

void ResourceUsageReporter_GetUsageData_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void ResourceUsageReporter_GetUsageData_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

ResourceUsageReporter_GetUsageData_ResponseParams_Data::ResourceUsageReporter_GetUsageData_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
ResourceTypeStat_Data* ResourceTypeStat_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ResourceTypeStat_Data))) ResourceTypeStat_Data();
}

// static
bool ResourceTypeStat_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceTypeStat_Data* object = static_cast<const ResourceTypeStat_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void ResourceTypeStat_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ResourceTypeStat_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ResourceTypeStat_Data::ResourceTypeStat_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ResourceTypeStats_Data* ResourceTypeStats_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ResourceTypeStats_Data))) ResourceTypeStats_Data();
}

// static
bool ResourceTypeStats_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceTypeStats_Data* object = static_cast<const ResourceTypeStats_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->images, "null images field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->images, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->css_style_sheets, "null css_style_sheets field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->css_style_sheets, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scripts, "null scripts field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scripts, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->xsl_style_sheets, "null xsl_style_sheets field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->xsl_style_sheets, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fonts, "null fonts field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->fonts, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->other, "null other field in ResourceTypeStats struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->other, bounds_checker))
    return false;

  return true;
}

void ResourceTypeStats_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&images, handles);
  mojo::internal::Encode(&css_style_sheets, handles);
  mojo::internal::Encode(&scripts, handles);
  mojo::internal::Encode(&xsl_style_sheets, handles);
  mojo::internal::Encode(&fonts, handles);
  mojo::internal::Encode(&other, handles);
}

void ResourceTypeStats_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&images, handles);
  mojo::internal::Decode(&css_style_sheets, handles);
  mojo::internal::Decode(&scripts, handles);
  mojo::internal::Decode(&xsl_style_sheets, handles);
  mojo::internal::Decode(&fonts, handles);
  mojo::internal::Decode(&other, handles);
}

ResourceTypeStats_Data::ResourceTypeStats_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ResourceUsageData_Data* ResourceUsageData_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ResourceUsageData_Data))) ResourceUsageData_Data();
}

// static
bool ResourceUsageData_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceUsageData_Data* object = static_cast<const ResourceUsageData_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->web_cache_stats, bounds_checker))
    return false;

  return true;
}

void ResourceUsageData_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&web_cache_stats, handles);
}

void ResourceUsageData_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&web_cache_stats, handles);
}

ResourceUsageData_Data::ResourceUsageData_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// static
ResourceTypeStatPtr ResourceTypeStat::New() {
  ResourceTypeStatPtr rv;
  mojo::internal::StructHelper<ResourceTypeStat>::Initialize(&rv);
  return rv;
}

ResourceTypeStat::ResourceTypeStat()
    : count(0ULL),
      size(0ULL),
      live_size(0ULL),
      decoded_size(0ULL) {
}

ResourceTypeStat::~ResourceTypeStat() {
}


ResourceTypeStatPtr ResourceTypeStat::Clone() const {
  ResourceTypeStatPtr rv(New());
  rv->count = count;
  rv->size = size;
  rv->live_size = live_size;
  rv->decoded_size = decoded_size;
  return rv;
}


bool ResourceTypeStat::Equals(const ResourceTypeStat& other) const {
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->count, other.count))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->size, other.size))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->live_size, other.live_size))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->decoded_size, other.decoded_size))
    return false;
  return true;
}

// static
ResourceTypeStatsPtr ResourceTypeStats::New() {
  ResourceTypeStatsPtr rv;
  mojo::internal::StructHelper<ResourceTypeStats>::Initialize(&rv);
  return rv;
}

ResourceTypeStats::ResourceTypeStats()
    : images(),
      css_style_sheets(),
      scripts(),
      xsl_style_sheets(),
      fonts(),
      other() {
}

ResourceTypeStats::~ResourceTypeStats() {
}


ResourceTypeStatsPtr ResourceTypeStats::Clone() const {
  ResourceTypeStatsPtr rv(New());
  rv->images = images.Clone();
  rv->css_style_sheets = css_style_sheets.Clone();
  rv->scripts = scripts.Clone();
  rv->xsl_style_sheets = xsl_style_sheets.Clone();
  rv->fonts = fonts.Clone();
  rv->other = other.Clone();
  return rv;
}


bool ResourceTypeStats::Equals(const ResourceTypeStats& other) const {
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->images, other.images))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->css_style_sheets, other.css_style_sheets))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->scripts, other.scripts))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->xsl_style_sheets, other.xsl_style_sheets))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->fonts, other.fonts))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatPtr>::Equals(this->other, other.other))
    return false;
  return true;
}

// static
ResourceUsageDataPtr ResourceUsageData::New() {
  ResourceUsageDataPtr rv;
  mojo::internal::StructHelper<ResourceUsageData>::Initialize(&rv);
  return rv;
}

ResourceUsageData::ResourceUsageData()
    : reports_v8_stats(false),
      v8_bytes_allocated(0ULL),
      v8_bytes_used(0ULL),
      web_cache_stats() {
}

ResourceUsageData::~ResourceUsageData() {
}


ResourceUsageDataPtr ResourceUsageData::Clone() const {
  ResourceUsageDataPtr rv(New());
  rv->reports_v8_stats = reports_v8_stats;
  rv->v8_bytes_allocated = v8_bytes_allocated;
  rv->v8_bytes_used = v8_bytes_used;
  rv->web_cache_stats = web_cache_stats.Clone();
  return rv;
}


bool ResourceUsageData::Equals(const ResourceUsageData& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->reports_v8_stats, other.reports_v8_stats))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->v8_bytes_allocated, other.v8_bytes_allocated))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->v8_bytes_used, other.v8_bytes_used))
    return false;
  if (!mojo::internal::ValueTraits<ResourceTypeStatsPtr>::Equals(this->web_cache_stats, other.web_cache_stats))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ResourceUsageReporter::Name_[] = "::ResourceUsageReporter";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ResourceUsageReporter::Version_;
class ResourceUsageReporter_GetUsageData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ResourceUsageReporter_GetUsageData_ForwardToCallback(
      const ResourceUsageReporter::GetUsageDataCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ResourceUsageReporter::GetUsageDataCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ForwardToCallback);
};
bool ResourceUsageReporter_GetUsageData_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* params =
      reinterpret_cast<internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  ResourceUsageDataPtr p_data{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_data));
  return true;
}

ResourceUsageReporterProxy::ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ResourceUsageReporterProxy::GetUsageData(
    const GetUsageDataCallback& callback) {
  size_t size = sizeof(internal::ResourceUsageReporter_GetUsageData_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kResourceUsageReporter_GetUsageData_Name, size);

  internal::ResourceUsageReporter_GetUsageData_Params_Data* params =
      internal::ResourceUsageReporter_GetUsageData_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ResourceUsageReporter_GetUsageData_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ResourceUsageReporter_GetUsageData_ProxyToResponder
    : public ResourceUsageReporter::GetUsageDataCallback::Runnable {
 public:
  ~ResourceUsageReporter_GetUsageData_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ResourceUsageReporter::GetUsageData(callback) "
        "was never run.";
  }

  ResourceUsageReporter_GetUsageData_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(ResourceUsageDataPtr in_data) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ProxyToResponder);
};
void ResourceUsageReporter_GetUsageData_ProxyToResponder::Run(
    ResourceUsageDataPtr in_data) const {
  size_t size = sizeof(internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kResourceUsageReporter_GetUsageData_Name, size, request_id_);
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* params =
      internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_data), builder.buffer(), &params->data.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ResourceUsageReporter.GetUsageData response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ResourceUsageReporterStub::ResourceUsageReporterStub()
    : sink_(nullptr),
      control_message_handler_(ResourceUsageReporter::Version_) {
}

ResourceUsageReporterStub::~ResourceUsageReporterStub() {}

bool ResourceUsageReporterStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo..ResourceUsageReporter.GetUsageData", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ResourceUsageReporterStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::::ResourceUsageReporter::GetUsageData", __FILE__, __LINE__);
      internal::ResourceUsageReporter_GetUsageData_Params_Data* params =
          reinterpret_cast<internal::ResourceUsageReporter_GetUsageData_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      ResourceUsageReporter::GetUsageDataCallback::Runnable* runnable =
          new ResourceUsageReporter_GetUsageData_ProxyToResponder(
              message->request_id(), responder);
      ResourceUsageReporter::GetUsageDataCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ResourceUsageReporter::GetUsageData");
      sink_->GetUsageData(callback);
      return true;
    }
  }
  return false;
}

ResourceUsageReporterRequestValidator::ResourceUsageReporterRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResourceUsageReporterRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

ResourceUsageReporterResponseValidator::ResourceUsageReporterResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResourceUsageReporterResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
size_t GetSerializedSize_(const ResourceTypeStatPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ResourceTypeStat_Data);
  return size;
}

void Serialize_(ResourceTypeStatPtr input, mojo::internal::Buffer* buf,
                internal::ResourceTypeStat_Data** output) {
  if (input) {
    internal::ResourceTypeStat_Data* result =
        internal::ResourceTypeStat_Data::New(buf);
    result->count = input->count;
    result->size = input->size;
    result->live_size = input->live_size;
    result->decoded_size = input->decoded_size;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ResourceTypeStat_Data* input,
                  ResourceTypeStatPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ResourceTypeStatPtr result(ResourceTypeStat::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->count = input->count;
      result->size = input->size;
      result->live_size = input->live_size;
      result->decoded_size = input->decoded_size;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ResourceTypeStat_Reader::ResourceTypeStat_Reader(
    internal::ResourceTypeStat_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const ResourceTypeStatsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ResourceTypeStats_Data);
  size += GetSerializedSize_(input->images);
  size += GetSerializedSize_(input->css_style_sheets);
  size += GetSerializedSize_(input->scripts);
  size += GetSerializedSize_(input->xsl_style_sheets);
  size += GetSerializedSize_(input->fonts);
  size += GetSerializedSize_(input->other);
  return size;
}

void Serialize_(ResourceTypeStatsPtr input, mojo::internal::Buffer* buf,
                internal::ResourceTypeStats_Data** output) {
  if (input) {
    internal::ResourceTypeStats_Data* result =
        internal::ResourceTypeStats_Data::New(buf);
    Serialize_(std::move(input->images), buf, &result->images.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->images.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null images in ResourceTypeStats struct");
    Serialize_(std::move(input->css_style_sheets), buf, &result->css_style_sheets.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->css_style_sheets.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null css_style_sheets in ResourceTypeStats struct");
    Serialize_(std::move(input->scripts), buf, &result->scripts.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->scripts.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scripts in ResourceTypeStats struct");
    Serialize_(std::move(input->xsl_style_sheets), buf, &result->xsl_style_sheets.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->xsl_style_sheets.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null xsl_style_sheets in ResourceTypeStats struct");
    Serialize_(std::move(input->fonts), buf, &result->fonts.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->fonts.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fonts in ResourceTypeStats struct");
    Serialize_(std::move(input->other), buf, &result->other.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->other.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null other in ResourceTypeStats struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ResourceTypeStats_Data* input,
                  ResourceTypeStatsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ResourceTypeStatsPtr result(ResourceTypeStats::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->images.ptr, &result->images, context))
        success = false;
      if (!Deserialize_(input->css_style_sheets.ptr, &result->css_style_sheets, context))
        success = false;
      if (!Deserialize_(input->scripts.ptr, &result->scripts, context))
        success = false;
      if (!Deserialize_(input->xsl_style_sheets.ptr, &result->xsl_style_sheets, context))
        success = false;
      if (!Deserialize_(input->fonts.ptr, &result->fonts, context))
        success = false;
      if (!Deserialize_(input->other.ptr, &result->other, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ResourceTypeStats_Reader::ResourceTypeStats_Reader(
    internal::ResourceTypeStats_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
ResourceTypeStat_Reader ResourceTypeStats_Reader::images() const {
  return ResourceTypeStat_Reader(data_->images.ptr, context_);
}
ResourceTypeStat_Reader ResourceTypeStats_Reader::css_style_sheets() const {
  return ResourceTypeStat_Reader(data_->css_style_sheets.ptr, context_);
}
ResourceTypeStat_Reader ResourceTypeStats_Reader::scripts() const {
  return ResourceTypeStat_Reader(data_->scripts.ptr, context_);
}
ResourceTypeStat_Reader ResourceTypeStats_Reader::xsl_style_sheets() const {
  return ResourceTypeStat_Reader(data_->xsl_style_sheets.ptr, context_);
}
ResourceTypeStat_Reader ResourceTypeStats_Reader::fonts() const {
  return ResourceTypeStat_Reader(data_->fonts.ptr, context_);
}
ResourceTypeStat_Reader ResourceTypeStats_Reader::other() const {
  return ResourceTypeStat_Reader(data_->other.ptr, context_);
}
size_t GetSerializedSize_(const ResourceUsageDataPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ResourceUsageData_Data);
  size += GetSerializedSize_(input->web_cache_stats);
  return size;
}

void Serialize_(ResourceUsageDataPtr input, mojo::internal::Buffer* buf,
                internal::ResourceUsageData_Data** output) {
  if (input) {
    internal::ResourceUsageData_Data* result =
        internal::ResourceUsageData_Data::New(buf);
    result->reports_v8_stats = input->reports_v8_stats;
    result->v8_bytes_allocated = input->v8_bytes_allocated;
    result->v8_bytes_used = input->v8_bytes_used;
    Serialize_(std::move(input->web_cache_stats), buf, &result->web_cache_stats.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ResourceUsageData_Data* input,
                  ResourceUsageDataPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ResourceUsageDataPtr result(ResourceUsageData::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->reports_v8_stats = input->reports_v8_stats;
      result->v8_bytes_allocated = input->v8_bytes_allocated;
      result->v8_bytes_used = input->v8_bytes_used;
      if (!Deserialize_(input->web_cache_stats.ptr, &result->web_cache_stats, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ResourceUsageData_Reader::ResourceUsageData_Reader(
    internal::ResourceUsageData_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
ResourceTypeStats_Reader ResourceUsageData_Reader::web_cache_stats() const {
  return ResourceTypeStats_Reader(data_->web_cache_stats.ptr, context_);
}

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif