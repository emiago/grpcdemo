// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: toyshop.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_toyshop_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_toyshop_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_toyshop_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_toyshop_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_toyshop_2eproto;
namespace api {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class Toy;
class ToyDefaultTypeInternal;
extern ToyDefaultTypeInternal _Toy_default_instance_;
class ToyId;
class ToyIdDefaultTypeInternal;
extern ToyIdDefaultTypeInternal _ToyId_default_instance_;
}  // namespace api
PROTOBUF_NAMESPACE_OPEN
template<> ::api::Empty* Arena::CreateMaybeMessage<::api::Empty>(Arena*);
template<> ::api::Toy* Arena::CreateMaybeMessage<::api::Toy>(Arena*);
template<> ::api::ToyId* Arena::CreateMaybeMessage<::api::ToyId>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace api {

// ===================================================================

class Empty :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:api.Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(nullptr);
  }

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "api.Empty";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_toyshop_2eproto);
    return ::descriptor_table_toyshop_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:api.Empty)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_toyshop_2eproto;
};
// -------------------------------------------------------------------

class ToyId :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:api.ToyId) */ {
 public:
  ToyId();
  virtual ~ToyId();

  ToyId(const ToyId& from);
  ToyId(ToyId&& from) noexcept
    : ToyId() {
    *this = ::std::move(from);
  }

  inline ToyId& operator=(const ToyId& from) {
    CopyFrom(from);
    return *this;
  }
  inline ToyId& operator=(ToyId&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ToyId& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ToyId* internal_default_instance() {
    return reinterpret_cast<const ToyId*>(
               &_ToyId_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ToyId& a, ToyId& b) {
    a.Swap(&b);
  }
  inline void Swap(ToyId* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ToyId* New() const final {
    return CreateMaybeMessage<ToyId>(nullptr);
  }

  ToyId* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ToyId>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ToyId& from);
  void MergeFrom(const ToyId& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ToyId* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "api.ToyId";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_toyshop_2eproto);
    return ::descriptor_table_toyshop_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // int64 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:api.ToyId)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int64 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_toyshop_2eproto;
};
// -------------------------------------------------------------------

class Toy :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:api.Toy) */ {
 public:
  Toy();
  virtual ~Toy();

  Toy(const Toy& from);
  Toy(Toy&& from) noexcept
    : Toy() {
    *this = ::std::move(from);
  }

  inline Toy& operator=(const Toy& from) {
    CopyFrom(from);
    return *this;
  }
  inline Toy& operator=(Toy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Toy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Toy* internal_default_instance() {
    return reinterpret_cast<const Toy*>(
               &_Toy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Toy& a, Toy& b) {
    a.Swap(&b);
  }
  inline void Swap(Toy* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Toy* New() const final {
    return CreateMaybeMessage<Toy>(nullptr);
  }

  Toy* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Toy>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Toy& from);
  void MergeFrom(const Toy& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Toy* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "api.Toy";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_toyshop_2eproto);
    return ::descriptor_table_toyshop_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBrandFieldNumber = 2,
    kModelFieldNumber = 3,
    kCategoryFieldNumber = 4,
    kDescriptionFieldNumber = 5,
    kImageurlFieldNumber = 7,
    kIdFieldNumber = 1,
    kPriceFieldNumber = 6,
  };
  // string brand = 2;
  void clear_brand();
  const std::string& brand() const;
  void set_brand(const std::string& value);
  void set_brand(std::string&& value);
  void set_brand(const char* value);
  void set_brand(const char* value, size_t size);
  std::string* mutable_brand();
  std::string* release_brand();
  void set_allocated_brand(std::string* brand);

  // string model = 3;
  void clear_model();
  const std::string& model() const;
  void set_model(const std::string& value);
  void set_model(std::string&& value);
  void set_model(const char* value);
  void set_model(const char* value, size_t size);
  std::string* mutable_model();
  std::string* release_model();
  void set_allocated_model(std::string* model);

  // string category = 4;
  void clear_category();
  const std::string& category() const;
  void set_category(const std::string& value);
  void set_category(std::string&& value);
  void set_category(const char* value);
  void set_category(const char* value, size_t size);
  std::string* mutable_category();
  std::string* release_category();
  void set_allocated_category(std::string* category);

  // string description = 5;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);

  // string imageurl = 7;
  void clear_imageurl();
  const std::string& imageurl() const;
  void set_imageurl(const std::string& value);
  void set_imageurl(std::string&& value);
  void set_imageurl(const char* value);
  void set_imageurl(const char* value, size_t size);
  std::string* mutable_imageurl();
  std::string* release_imageurl();
  void set_allocated_imageurl(std::string* imageurl);

  // int64 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int64 value);

  // float price = 6;
  void clear_price();
  float price() const;
  void set_price(float value);

  // @@protoc_insertion_point(class_scope:api.Toy)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr brand_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr model_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr category_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr imageurl_;
  ::PROTOBUF_NAMESPACE_ID::int64 id_;
  float price_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_toyshop_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

// -------------------------------------------------------------------

// ToyId

// int64 id = 1;
inline void ToyId::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ToyId::id() const {
  // @@protoc_insertion_point(field_get:api.ToyId.id)
  return id_;
}
inline void ToyId::set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:api.ToyId.id)
}

// -------------------------------------------------------------------

// Toy

// int64 id = 1;
inline void Toy::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Toy::id() const {
  // @@protoc_insertion_point(field_get:api.Toy.id)
  return id_;
}
inline void Toy::set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:api.Toy.id)
}

// string brand = 2;
inline void Toy::clear_brand() {
  brand_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Toy::brand() const {
  // @@protoc_insertion_point(field_get:api.Toy.brand)
  return brand_.GetNoArena();
}
inline void Toy::set_brand(const std::string& value) {
  
  brand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:api.Toy.brand)
}
inline void Toy::set_brand(std::string&& value) {
  
  brand_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:api.Toy.brand)
}
inline void Toy::set_brand(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  brand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:api.Toy.brand)
}
inline void Toy::set_brand(const char* value, size_t size) {
  
  brand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:api.Toy.brand)
}
inline std::string* Toy::mutable_brand() {
  
  // @@protoc_insertion_point(field_mutable:api.Toy.brand)
  return brand_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Toy::release_brand() {
  // @@protoc_insertion_point(field_release:api.Toy.brand)
  
  return brand_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Toy::set_allocated_brand(std::string* brand) {
  if (brand != nullptr) {
    
  } else {
    
  }
  brand_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), brand);
  // @@protoc_insertion_point(field_set_allocated:api.Toy.brand)
}

// string model = 3;
inline void Toy::clear_model() {
  model_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Toy::model() const {
  // @@protoc_insertion_point(field_get:api.Toy.model)
  return model_.GetNoArena();
}
inline void Toy::set_model(const std::string& value) {
  
  model_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:api.Toy.model)
}
inline void Toy::set_model(std::string&& value) {
  
  model_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:api.Toy.model)
}
inline void Toy::set_model(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  model_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:api.Toy.model)
}
inline void Toy::set_model(const char* value, size_t size) {
  
  model_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:api.Toy.model)
}
inline std::string* Toy::mutable_model() {
  
  // @@protoc_insertion_point(field_mutable:api.Toy.model)
  return model_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Toy::release_model() {
  // @@protoc_insertion_point(field_release:api.Toy.model)
  
  return model_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Toy::set_allocated_model(std::string* model) {
  if (model != nullptr) {
    
  } else {
    
  }
  model_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), model);
  // @@protoc_insertion_point(field_set_allocated:api.Toy.model)
}

// string category = 4;
inline void Toy::clear_category() {
  category_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Toy::category() const {
  // @@protoc_insertion_point(field_get:api.Toy.category)
  return category_.GetNoArena();
}
inline void Toy::set_category(const std::string& value) {
  
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:api.Toy.category)
}
inline void Toy::set_category(std::string&& value) {
  
  category_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:api.Toy.category)
}
inline void Toy::set_category(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:api.Toy.category)
}
inline void Toy::set_category(const char* value, size_t size) {
  
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:api.Toy.category)
}
inline std::string* Toy::mutable_category() {
  
  // @@protoc_insertion_point(field_mutable:api.Toy.category)
  return category_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Toy::release_category() {
  // @@protoc_insertion_point(field_release:api.Toy.category)
  
  return category_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Toy::set_allocated_category(std::string* category) {
  if (category != nullptr) {
    
  } else {
    
  }
  category_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), category);
  // @@protoc_insertion_point(field_set_allocated:api.Toy.category)
}

// string description = 5;
inline void Toy::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Toy::description() const {
  // @@protoc_insertion_point(field_get:api.Toy.description)
  return description_.GetNoArena();
}
inline void Toy::set_description(const std::string& value) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:api.Toy.description)
}
inline void Toy::set_description(std::string&& value) {
  
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:api.Toy.description)
}
inline void Toy::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:api.Toy.description)
}
inline void Toy::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:api.Toy.description)
}
inline std::string* Toy::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:api.Toy.description)
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Toy::release_description() {
  // @@protoc_insertion_point(field_release:api.Toy.description)
  
  return description_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Toy::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:api.Toy.description)
}

// float price = 6;
inline void Toy::clear_price() {
  price_ = 0;
}
inline float Toy::price() const {
  // @@protoc_insertion_point(field_get:api.Toy.price)
  return price_;
}
inline void Toy::set_price(float value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:api.Toy.price)
}

// string imageurl = 7;
inline void Toy::clear_imageurl() {
  imageurl_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Toy::imageurl() const {
  // @@protoc_insertion_point(field_get:api.Toy.imageurl)
  return imageurl_.GetNoArena();
}
inline void Toy::set_imageurl(const std::string& value) {
  
  imageurl_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:api.Toy.imageurl)
}
inline void Toy::set_imageurl(std::string&& value) {
  
  imageurl_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:api.Toy.imageurl)
}
inline void Toy::set_imageurl(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  imageurl_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:api.Toy.imageurl)
}
inline void Toy::set_imageurl(const char* value, size_t size) {
  
  imageurl_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:api.Toy.imageurl)
}
inline std::string* Toy::mutable_imageurl() {
  
  // @@protoc_insertion_point(field_mutable:api.Toy.imageurl)
  return imageurl_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Toy::release_imageurl() {
  // @@protoc_insertion_point(field_release:api.Toy.imageurl)
  
  return imageurl_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Toy::set_allocated_imageurl(std::string* imageurl) {
  if (imageurl != nullptr) {
    
  } else {
    
  }
  imageurl_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), imageurl);
  // @@protoc_insertion_point(field_set_allocated:api.Toy.imageurl)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_toyshop_2eproto