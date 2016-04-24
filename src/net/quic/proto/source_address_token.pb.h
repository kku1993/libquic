// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: source_address_token.proto

#ifndef PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED
#define PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "cached_network_parameters.pb.h"
// @@protoc_insertion_point(includes)

namespace net {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_source_5faddress_5ftoken_2eproto();
void protobuf_AssignDesc_source_5faddress_5ftoken_2eproto();
void protobuf_ShutdownFile_source_5faddress_5ftoken_2eproto();

class SourceAddressToken;
class SourceAddressTokens;

// ===================================================================

class SourceAddressToken : public ::google::protobuf::MessageLite {
 public:
  SourceAddressToken();
  virtual ~SourceAddressToken();

  SourceAddressToken(const SourceAddressToken& from);

  inline SourceAddressToken& operator=(const SourceAddressToken& from) {
    CopyFrom(from);
    return *this;
  }

  static const SourceAddressToken& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SourceAddressToken* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SourceAddressToken* other);

  // implements Message ----------------------------------------------

  SourceAddressToken* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SourceAddressToken& from);
  void MergeFrom(const SourceAddressToken& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const void* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // required int64 timestamp = 2;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  inline ::google::protobuf::int64 timestamp() const;
  inline void set_timestamp(::google::protobuf::int64 value);

  // optional .net.CachedNetworkParameters cached_network_parameters = 3;
  inline bool has_cached_network_parameters() const;
  inline void clear_cached_network_parameters();
  static const int kCachedNetworkParametersFieldNumber = 3;
  inline const ::net::CachedNetworkParameters& cached_network_parameters() const;
  inline ::net::CachedNetworkParameters* mutable_cached_network_parameters();
  inline ::net::CachedNetworkParameters* release_cached_network_parameters();
  inline void set_allocated_cached_network_parameters(::net::CachedNetworkParameters* cached_network_parameters);

  // @@protoc_insertion_point(class_scope:net.SourceAddressToken)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_cached_network_parameters();
  inline void clear_has_cached_network_parameters();

  ::std::string* ip_;
  ::google::protobuf::int64 timestamp_;
  ::net::CachedNetworkParameters* cached_network_parameters_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_source_5faddress_5ftoken_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_source_5faddress_5ftoken_2eproto();
  #endif
  friend void protobuf_AssignDesc_source_5faddress_5ftoken_2eproto();
  friend void protobuf_ShutdownFile_source_5faddress_5ftoken_2eproto();

  void InitAsDefaultInstance();
  static SourceAddressToken* default_instance_;
};
// -------------------------------------------------------------------

class SourceAddressTokens : public ::google::protobuf::MessageLite {
 public:
  SourceAddressTokens();
  virtual ~SourceAddressTokens();

  SourceAddressTokens(const SourceAddressTokens& from);

  inline SourceAddressTokens& operator=(const SourceAddressTokens& from) {
    CopyFrom(from);
    return *this;
  }

  static const SourceAddressTokens& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SourceAddressTokens* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SourceAddressTokens* other);

  // implements Message ----------------------------------------------

  SourceAddressTokens* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SourceAddressTokens& from);
  void MergeFrom(const SourceAddressTokens& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .net.SourceAddressToken tokens = 4;
  inline int tokens_size() const;
  inline void clear_tokens();
  static const int kTokensFieldNumber = 4;
  inline const ::net::SourceAddressToken& tokens(int index) const;
  inline ::net::SourceAddressToken* mutable_tokens(int index);
  inline ::net::SourceAddressToken* add_tokens();
  inline const ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >&
      tokens() const;
  inline ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >*
      mutable_tokens();

  // @@protoc_insertion_point(class_scope:net.SourceAddressTokens)
 private:

  ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken > tokens_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_source_5faddress_5ftoken_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_source_5faddress_5ftoken_2eproto();
  #endif
  friend void protobuf_AssignDesc_source_5faddress_5ftoken_2eproto();
  friend void protobuf_ShutdownFile_source_5faddress_5ftoken_2eproto();

  void InitAsDefaultInstance();
  static SourceAddressTokens* default_instance_;
};
// ===================================================================


// ===================================================================

// SourceAddressToken

// required bytes ip = 1;
inline bool SourceAddressToken::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SourceAddressToken::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SourceAddressToken::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SourceAddressToken::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& SourceAddressToken::ip() const {
  return *ip_;
}
inline void SourceAddressToken::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void SourceAddressToken::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void SourceAddressToken::set_ip(const void* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SourceAddressToken::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* SourceAddressToken::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SourceAddressToken::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int64 timestamp = 2;
inline bool SourceAddressToken::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SourceAddressToken::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SourceAddressToken::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SourceAddressToken::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 SourceAddressToken::timestamp() const {
  return timestamp_;
}
inline void SourceAddressToken::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// optional .net.CachedNetworkParameters cached_network_parameters = 3;
inline bool SourceAddressToken::has_cached_network_parameters() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SourceAddressToken::set_has_cached_network_parameters() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SourceAddressToken::clear_has_cached_network_parameters() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SourceAddressToken::clear_cached_network_parameters() {
  if (cached_network_parameters_ != NULL) cached_network_parameters_->::net::CachedNetworkParameters::Clear();
  clear_has_cached_network_parameters();
}
inline const ::net::CachedNetworkParameters& SourceAddressToken::cached_network_parameters() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return cached_network_parameters_ != NULL ? *cached_network_parameters_ : *default_instance().cached_network_parameters_;
#else
  return cached_network_parameters_ != NULL ? *cached_network_parameters_ : *default_instance_->cached_network_parameters_;
#endif
}
inline ::net::CachedNetworkParameters* SourceAddressToken::mutable_cached_network_parameters() {
  set_has_cached_network_parameters();
  if (cached_network_parameters_ == NULL) cached_network_parameters_ = new ::net::CachedNetworkParameters;
  return cached_network_parameters_;
}
inline ::net::CachedNetworkParameters* SourceAddressToken::release_cached_network_parameters() {
  clear_has_cached_network_parameters();
  ::net::CachedNetworkParameters* temp = cached_network_parameters_;
  cached_network_parameters_ = NULL;
  return temp;
}
inline void SourceAddressToken::set_allocated_cached_network_parameters(::net::CachedNetworkParameters* cached_network_parameters) {
  delete cached_network_parameters_;
  cached_network_parameters_ = cached_network_parameters;
  if (cached_network_parameters) {
    set_has_cached_network_parameters();
  } else {
    clear_has_cached_network_parameters();
  }
}

// -------------------------------------------------------------------

// SourceAddressTokens

// repeated .net.SourceAddressToken tokens = 4;
inline int SourceAddressTokens::tokens_size() const {
  return tokens_.size();
}
inline void SourceAddressTokens::clear_tokens() {
  tokens_.Clear();
}
inline const ::net::SourceAddressToken& SourceAddressTokens::tokens(int index) const {
  return tokens_.Get(index);
}
inline ::net::SourceAddressToken* SourceAddressTokens::mutable_tokens(int index) {
  return tokens_.Mutable(index);
}
inline ::net::SourceAddressToken* SourceAddressTokens::add_tokens() {
  return tokens_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >&
SourceAddressTokens::tokens() const {
  return tokens_;
}
inline ::google::protobuf::RepeatedPtrField< ::net::SourceAddressToken >*
SourceAddressTokens::mutable_tokens() {
  return &tokens_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace net

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_source_5faddress_5ftoken_2eproto__INCLUDED
