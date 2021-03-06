// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerMsg.proto

#ifndef PROTOBUF_ServerMsg_2eproto__INCLUDED
#define PROTOBUF_ServerMsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace liyuanguo {
namespace qq {
namespace search {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ServerMsg_2eproto();
void protobuf_AssignDesc_ServerMsg_2eproto();
void protobuf_ShutdownFile_ServerMsg_2eproto();

class ServerMessage;
class ServerMessage_GetData;
class ServerMessage_ReceiveContent;

// ===================================================================

class ServerMessage_ReceiveContent : public ::google::protobuf::Message {
 public:
  ServerMessage_ReceiveContent();
  virtual ~ServerMessage_ReceiveContent();

  ServerMessage_ReceiveContent(const ServerMessage_ReceiveContent& from);

  inline ServerMessage_ReceiveContent& operator=(const ServerMessage_ReceiveContent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerMessage_ReceiveContent& default_instance();

  void Swap(ServerMessage_ReceiveContent* other);

  // implements Message ----------------------------------------------

  inline ServerMessage_ReceiveContent* New() const { return New(NULL); }

  ServerMessage_ReceiveContent* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerMessage_ReceiveContent& from);
  void MergeFrom(const ServerMessage_ReceiveContent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerMessage_ReceiveContent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // optional string beizhu = 2;
  void clear_beizhu();
  static const int kBeizhuFieldNumber = 2;
  const ::std::string& beizhu() const;
  void set_beizhu(const ::std::string& value);
  void set_beizhu(const char* value);
  void set_beizhu(const char* value, size_t size);
  ::std::string* mutable_beizhu();
  ::std::string* release_beizhu();
  void set_allocated_beizhu(::std::string* beizhu);

  // optional float distance = 3;
  void clear_distance();
  static const int kDistanceFieldNumber = 3;
  float distance() const;
  void set_distance(float value);

  // optional string userId = 4;
  void clear_userid();
  static const int kUserIdFieldNumber = 4;
  const ::std::string& userid() const;
  void set_userid(const ::std::string& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  ::std::string* mutable_userid();
  ::std::string* release_userid();
  void set_allocated_userid(::std::string* userid);

  // optional string userName = 5;
  void clear_username();
  static const int kUserNameFieldNumber = 5;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // @@protoc_insertion_point(class_scope:com.liyuanguo.qq.search.ServerMessage.ReceiveContent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr beizhu_;
  ::google::protobuf::int32 status_;
  float distance_;
  ::google::protobuf::internal::ArenaStringPtr userid_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerMsg_2eproto();
  friend void protobuf_AssignDesc_ServerMsg_2eproto();
  friend void protobuf_ShutdownFile_ServerMsg_2eproto();

  void InitAsDefaultInstance();
  static ServerMessage_ReceiveContent* default_instance_;
};
// -------------------------------------------------------------------

class ServerMessage_GetData : public ::google::protobuf::Message {
 public:
  ServerMessage_GetData();
  virtual ~ServerMessage_GetData();

  ServerMessage_GetData(const ServerMessage_GetData& from);

  inline ServerMessage_GetData& operator=(const ServerMessage_GetData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerMessage_GetData& default_instance();

  void Swap(ServerMessage_GetData* other);

  // implements Message ----------------------------------------------

  inline ServerMessage_GetData* New() const { return New(NULL); }

  ServerMessage_GetData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerMessage_GetData& from);
  void MergeFrom(const ServerMessage_GetData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerMessage_GetData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string userId = 1;
  void clear_userid();
  static const int kUserIdFieldNumber = 1;
  const ::std::string& userid() const;
  void set_userid(const ::std::string& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  ::std::string* mutable_userid();
  ::std::string* release_userid();
  void set_allocated_userid(::std::string* userid);

  // @@protoc_insertion_point(class_scope:com.liyuanguo.qq.search.ServerMessage.GetData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr userid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerMsg_2eproto();
  friend void protobuf_AssignDesc_ServerMsg_2eproto();
  friend void protobuf_ShutdownFile_ServerMsg_2eproto();

  void InitAsDefaultInstance();
  static ServerMessage_GetData* default_instance_;
};
// -------------------------------------------------------------------

class ServerMessage : public ::google::protobuf::Message {
 public:
  ServerMessage();
  virtual ~ServerMessage();

  ServerMessage(const ServerMessage& from);

  inline ServerMessage& operator=(const ServerMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerMessage& default_instance();

  enum MessageTypeCase {
    kReceiveContent = 1,
    kGetData = 2,
    MESSAGETYPE_NOT_SET = 0,
  };

  void Swap(ServerMessage* other);

  // implements Message ----------------------------------------------

  inline ServerMessage* New() const { return New(NULL); }

  ServerMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerMessage& from);
  void MergeFrom(const ServerMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef ServerMessage_ReceiveContent ReceiveContent;
  typedef ServerMessage_GetData GetData;

  // accessors -------------------------------------------------------

  // optional .com.liyuanguo.qq.search.ServerMessage.ReceiveContent receive_content = 1;
  bool has_receive_content() const;
  void clear_receive_content();
  static const int kReceiveContentFieldNumber = 1;
  const ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent& receive_content() const;
  ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* mutable_receive_content();
  ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* release_receive_content();
  void set_allocated_receive_content(::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* receive_content);

  // optional .com.liyuanguo.qq.search.ServerMessage.GetData get_data = 2;
  bool has_get_data() const;
  void clear_get_data();
  static const int kGetDataFieldNumber = 2;
  const ::com::liyuanguo::qq::search::ServerMessage_GetData& get_data() const;
  ::com::liyuanguo::qq::search::ServerMessage_GetData* mutable_get_data();
  ::com::liyuanguo::qq::search::ServerMessage_GetData* release_get_data();
  void set_allocated_get_data(::com::liyuanguo::qq::search::ServerMessage_GetData* get_data);

  MessageTypeCase MessageType_case() const;
  // @@protoc_insertion_point(class_scope:com.liyuanguo.qq.search.ServerMessage)
 private:
  inline void set_has_receive_content();
  inline void set_has_get_data();

  inline bool has_MessageType() const;
  void clear_MessageType();
  inline void clear_has_MessageType();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union MessageTypeUnion {
    MessageTypeUnion() {}
    ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* receive_content_;
    ::com::liyuanguo::qq::search::ServerMessage_GetData* get_data_;
  } MessageType_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_ServerMsg_2eproto();
  friend void protobuf_AssignDesc_ServerMsg_2eproto();
  friend void protobuf_ShutdownFile_ServerMsg_2eproto();

  void InitAsDefaultInstance();
  static ServerMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerMessage_ReceiveContent

// optional int32 status = 1;
inline void ServerMessage_ReceiveContent::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 ServerMessage_ReceiveContent::status() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.status)
  return status_;
}
inline void ServerMessage_ReceiveContent::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.status)
}

// optional string beizhu = 2;
inline void ServerMessage_ReceiveContent::clear_beizhu() {
  beizhu_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerMessage_ReceiveContent::beizhu() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
  return beizhu_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_beizhu(const ::std::string& value) {
  
  beizhu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
}
inline void ServerMessage_ReceiveContent::set_beizhu(const char* value) {
  
  beizhu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
}
inline void ServerMessage_ReceiveContent::set_beizhu(const char* value, size_t size) {
  
  beizhu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
}
inline ::std::string* ServerMessage_ReceiveContent::mutable_beizhu() {
  
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
  return beizhu_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerMessage_ReceiveContent::release_beizhu() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
  
  return beizhu_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_allocated_beizhu(::std::string* beizhu) {
  if (beizhu != NULL) {
    
  } else {
    
  }
  beizhu_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), beizhu);
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.beizhu)
}

// optional float distance = 3;
inline void ServerMessage_ReceiveContent::clear_distance() {
  distance_ = 0;
}
inline float ServerMessage_ReceiveContent::distance() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.distance)
  return distance_;
}
inline void ServerMessage_ReceiveContent::set_distance(float value) {
  
  distance_ = value;
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.distance)
}

// optional string userId = 4;
inline void ServerMessage_ReceiveContent::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerMessage_ReceiveContent::userid() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
  return userid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
}
inline void ServerMessage_ReceiveContent::set_userid(const char* value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
}
inline void ServerMessage_ReceiveContent::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
}
inline ::std::string* ServerMessage_ReceiveContent::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerMessage_ReceiveContent::release_userid() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_allocated_userid(::std::string* userid) {
  if (userid != NULL) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userId)
}

// optional string userName = 5;
inline void ServerMessage_ReceiveContent::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerMessage_ReceiveContent::username() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
}
inline void ServerMessage_ReceiveContent::set_username(const char* value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
}
inline void ServerMessage_ReceiveContent::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
}
inline ::std::string* ServerMessage_ReceiveContent::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerMessage_ReceiveContent::release_username() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_ReceiveContent::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.ReceiveContent.userName)
}

// -------------------------------------------------------------------

// ServerMessage_GetData

// optional string userId = 1;
inline void ServerMessage_GetData::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerMessage_GetData::userid() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
  return userid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_GetData::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
}
inline void ServerMessage_GetData::set_userid(const char* value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
}
inline void ServerMessage_GetData::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
}
inline ::std::string* ServerMessage_GetData::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerMessage_GetData::release_userid() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerMessage_GetData::set_allocated_userid(::std::string* userid) {
  if (userid != NULL) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.GetData.userId)
}

// -------------------------------------------------------------------

// ServerMessage

// optional .com.liyuanguo.qq.search.ServerMessage.ReceiveContent receive_content = 1;
inline bool ServerMessage::has_receive_content() const {
  return MessageType_case() == kReceiveContent;
}
inline void ServerMessage::set_has_receive_content() {
  _oneof_case_[0] = kReceiveContent;
}
inline void ServerMessage::clear_receive_content() {
  if (has_receive_content()) {
    delete MessageType_.receive_content_;
    clear_has_MessageType();
  }
}
inline  const ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent& ServerMessage::receive_content() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.receive_content)
  return has_receive_content()
      ? *MessageType_.receive_content_
      : ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent::default_instance();
}
inline ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* ServerMessage::mutable_receive_content() {
  if (!has_receive_content()) {
    clear_MessageType();
    set_has_receive_content();
    MessageType_.receive_content_ = new ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent;
  }
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.receive_content)
  return MessageType_.receive_content_;
}
inline ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* ServerMessage::release_receive_content() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.receive_content)
  if (has_receive_content()) {
    clear_has_MessageType();
    ::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* temp = MessageType_.receive_content_;
    MessageType_.receive_content_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void ServerMessage::set_allocated_receive_content(::com::liyuanguo::qq::search::ServerMessage_ReceiveContent* receive_content) {
  clear_MessageType();
  if (receive_content) {
    set_has_receive_content();
    MessageType_.receive_content_ = receive_content;
  }
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.receive_content)
}

// optional .com.liyuanguo.qq.search.ServerMessage.GetData get_data = 2;
inline bool ServerMessage::has_get_data() const {
  return MessageType_case() == kGetData;
}
inline void ServerMessage::set_has_get_data() {
  _oneof_case_[0] = kGetData;
}
inline void ServerMessage::clear_get_data() {
  if (has_get_data()) {
    delete MessageType_.get_data_;
    clear_has_MessageType();
  }
}
inline  const ::com::liyuanguo::qq::search::ServerMessage_GetData& ServerMessage::get_data() const {
  // @@protoc_insertion_point(field_get:com.liyuanguo.qq.search.ServerMessage.get_data)
  return has_get_data()
      ? *MessageType_.get_data_
      : ::com::liyuanguo::qq::search::ServerMessage_GetData::default_instance();
}
inline ::com::liyuanguo::qq::search::ServerMessage_GetData* ServerMessage::mutable_get_data() {
  if (!has_get_data()) {
    clear_MessageType();
    set_has_get_data();
    MessageType_.get_data_ = new ::com::liyuanguo::qq::search::ServerMessage_GetData;
  }
  // @@protoc_insertion_point(field_mutable:com.liyuanguo.qq.search.ServerMessage.get_data)
  return MessageType_.get_data_;
}
inline ::com::liyuanguo::qq::search::ServerMessage_GetData* ServerMessage::release_get_data() {
  // @@protoc_insertion_point(field_release:com.liyuanguo.qq.search.ServerMessage.get_data)
  if (has_get_data()) {
    clear_has_MessageType();
    ::com::liyuanguo::qq::search::ServerMessage_GetData* temp = MessageType_.get_data_;
    MessageType_.get_data_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void ServerMessage::set_allocated_get_data(::com::liyuanguo::qq::search::ServerMessage_GetData* get_data) {
  clear_MessageType();
  if (get_data) {
    set_has_get_data();
    MessageType_.get_data_ = get_data;
  }
  // @@protoc_insertion_point(field_set_allocated:com.liyuanguo.qq.search.ServerMessage.get_data)
}

inline bool ServerMessage::has_MessageType() const {
  return MessageType_case() != MESSAGETYPE_NOT_SET;
}
inline void ServerMessage::clear_has_MessageType() {
  _oneof_case_[0] = MESSAGETYPE_NOT_SET;
}
inline ServerMessage::MessageTypeCase ServerMessage::MessageType_case() const {
  return ServerMessage::MessageTypeCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace search
}  // namespace qq
}  // namespace liyuanguo
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerMsg_2eproto__INCLUDED
