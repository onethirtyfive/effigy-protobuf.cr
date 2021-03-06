/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: s2_netmessages.proto */

#ifndef PROTOBUF_C_s2_5fnetmessages_2eproto__INCLUDED
#define PROTOBUF_C_s2_5fnetmessages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "netmessages.pb-c.h"

typedef struct _CSVCMsgCreateStringTable CSVCMsgCreateStringTable;
typedef struct _CSVCMsgVoiceData CSVCMsgVoiceData;
typedef struct _CSVCMsgClearAllStringTables CSVCMsgClearAllStringTables;
typedef struct _ProtoFlattenedSerializerFieldT ProtoFlattenedSerializerFieldT;
typedef struct _ProtoFlattenedSerializerT ProtoFlattenedSerializerT;
typedef struct _CSVCMsgFlattenedSerializer CSVCMsgFlattenedSerializer;
typedef struct _CMsgIPCAddress CMsgIPCAddress;
typedef struct _CMsgServerPeer CMsgServerPeer;
typedef struct _CSVCMsgPeerList CSVCMsgPeerList;
typedef struct _CSVCMsgHLTVStatus CSVCMsgHLTVStatus;


/* --- enums --- */

typedef enum _CLCMessages {
  CLC__MESSAGES__clc_ClientInfo = 20,
  CLC__MESSAGES__clc_Move = 21,
  CLC__MESSAGES__clc_VoiceData = 22,
  CLC__MESSAGES__clc_BaselineAck = 23,
  CLC__MESSAGES__clc_ListenEvents = 24,
  CLC__MESSAGES__clc_RespondCvarValue = 25,
  CLC__MESSAGES__clc_FileCRCCheck = 26,
  CLC__MESSAGES__clc_LoadingProgress = 27,
  CLC__MESSAGES__clc_SplitPlayerConnect = 28,
  CLC__MESSAGES__clc_ClientMessage = 29,
  CLC__MESSAGES__clc_SplitPlayerDisconnect = 30,
  CLC__MESSAGES__clc_ServerStatus = 31,
  CLC__MESSAGES__clc_ServerPing = 32,
  CLC__MESSAGES__clc_RequestPause = 33,
  CLC__MESSAGES__clc_CmdKeyValues = 34
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CLC__MESSAGES)
} CLCMessages;
typedef enum _SVCMessages {
  SVC__MESSAGES__svc_ServerInfo = 40,
  SVC__MESSAGES__svc_FlattenedSerializer = 41,
  SVC__MESSAGES__svc_ClassInfo = 42,
  SVC__MESSAGES__svc_SetPause = 43,
  SVC__MESSAGES__svc_CreateStringTable = 44,
  SVC__MESSAGES__svc_UpdateStringTable = 45,
  SVC__MESSAGES__svc_VoiceInit = 46,
  SVC__MESSAGES__svc_VoiceData = 47,
  SVC__MESSAGES__svc_Print = 48,
  SVC__MESSAGES__svc_Sounds = 49,
  SVC__MESSAGES__svc_SetView = 50,
  SVC__MESSAGES__svc_ClearAllStringTables = 51,
  SVC__MESSAGES__svc_CmdKeyValues = 52,
  SVC__MESSAGES__svc_BSPDecal = 53,
  SVC__MESSAGES__svc_SplitScreen = 54,
  SVC__MESSAGES__svc_PacketEntities = 55,
  SVC__MESSAGES__svc_Prefetch = 56,
  SVC__MESSAGES__svc_Menu = 57,
  SVC__MESSAGES__svc_GetCvarValue = 58,
  SVC__MESSAGES__svc_StopSound = 59,
  SVC__MESSAGES__svc_PeerList = 60,
  SVC__MESSAGES__svc_PacketReliable = 61,
  SVC__MESSAGES__svc_HLTVStatus = 62,
  SVC__MESSAGES__svc_FullFrameSplit = 70
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SVC__MESSAGES)
} SVCMessages;

/* --- messages --- */

struct  _CSVCMsgCreateStringTable
{
  ProtobufCMessage base;
  char *name;
  protobuf_c_boolean has_num_entries;
  int32_t num_entries;
  protobuf_c_boolean has_user_data_fixed_size;
  protobuf_c_boolean user_data_fixed_size;
  protobuf_c_boolean has_user_data_size;
  int32_t user_data_size;
  protobuf_c_boolean has_user_data_size_bits;
  int32_t user_data_size_bits;
  protobuf_c_boolean has_flags;
  int32_t flags;
  protobuf_c_boolean has_string_data;
  ProtobufCBinaryData string_data;
  protobuf_c_boolean has_uncompressed_size;
  int32_t uncompressed_size;
  protobuf_c_boolean has_data_compressed;
  protobuf_c_boolean data_compressed;
};
#define CSVCMSG__CREATE_STRING_TABLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__create_string_table__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,{0,NULL}, 0,0, 0,0 }


struct  _CSVCMsgVoiceData
{
  ProtobufCMessage base;
  CMsgVoiceAudio *audio;
  protobuf_c_boolean has_client;
  int32_t client;
  protobuf_c_boolean has_proximity;
  protobuf_c_boolean proximity;
  protobuf_c_boolean has_xuid;
  uint64_t xuid;
  protobuf_c_boolean has_audible_mask;
  int32_t audible_mask;
  protobuf_c_boolean has_tick;
  uint32_t tick;
};
#define CSVCMSG__VOICE_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__voice_data__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _CSVCMsgClearAllStringTables
{
  ProtobufCMessage base;
  char *mapname;
  protobuf_c_boolean has_map_crc;
  uint32_t map_crc;
};
#define CSVCMSG__CLEAR_ALL_STRING_TABLES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__clear_all_string_tables__descriptor) \
    , NULL, 0,0 }


struct  _ProtoFlattenedSerializerFieldT
{
  ProtobufCMessage base;
  protobuf_c_boolean has_var_type_sym;
  int32_t var_type_sym;
  protobuf_c_boolean has_var_name_sym;
  int32_t var_name_sym;
  protobuf_c_boolean has_bit_count;
  int32_t bit_count;
  protobuf_c_boolean has_low_value;
  float low_value;
  protobuf_c_boolean has_high_value;
  float high_value;
  protobuf_c_boolean has_encode_flags;
  int32_t encode_flags;
  protobuf_c_boolean has_field_serializer_name_sym;
  int32_t field_serializer_name_sym;
  protobuf_c_boolean has_field_serializer_version;
  int32_t field_serializer_version;
  protobuf_c_boolean has_send_node_sym;
  int32_t send_node_sym;
  protobuf_c_boolean has_var_encoder_sym;
  int32_t var_encoder_sym;
};
#define PROTO_FLATTENED_SERIALIZER_FIELD_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto_flattened_serializer_field_t__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _ProtoFlattenedSerializerT
{
  ProtobufCMessage base;
  protobuf_c_boolean has_serializer_name_sym;
  int32_t serializer_name_sym;
  protobuf_c_boolean has_serializer_version;
  int32_t serializer_version;
  size_t n_fields_index;
  int32_t *fields_index;
};
#define PROTO_FLATTENED_SERIALIZER_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto_flattened_serializer_t__descriptor) \
    , 0,0, 0,0, 0,NULL }


struct  _CSVCMsgFlattenedSerializer
{
  ProtobufCMessage base;
  size_t n_serializers;
  ProtoFlattenedSerializerT **serializers;
  size_t n_symbols;
  char **symbols;
  size_t n_fields;
  ProtoFlattenedSerializerFieldT **fields;
};
#define CSVCMSG__FLATTENED_SERIALIZER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__flattened_serializer__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL }


struct  _CMsgIPCAddress
{
  ProtobufCMessage base;
  protobuf_c_boolean has_computer_guid;
  uint64_t computer_guid;
  protobuf_c_boolean has_process_id;
  uint32_t process_id;
};
#define CMSG_IPCADDRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmsg_ipcaddress__descriptor) \
    , 0,0, 0,0 }


struct  _CMsgServerPeer
{
  ProtobufCMessage base;
  protobuf_c_boolean has_player_slot;
  int32_t player_slot;
  protobuf_c_boolean has_steamid;
  uint64_t steamid;
  CMsgIPCAddress *ipc;
  protobuf_c_boolean has_they_hear_you;
  protobuf_c_boolean they_hear_you;
  protobuf_c_boolean has_you_hear_them;
  protobuf_c_boolean you_hear_them;
  protobuf_c_boolean has_is_listenserver_host;
  protobuf_c_boolean is_listenserver_host;
};
#define CMSG_SERVER_PEER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmsg_server_peer__descriptor) \
    , 0,0, 0,0, NULL, 0,0, 0,0, 0,0 }


struct  _CSVCMsgPeerList
{
  ProtobufCMessage base;
  size_t n_peer;
  CMsgServerPeer **peer;
};
#define CSVCMSG__PEER_LIST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__peer_list__descriptor) \
    , 0,NULL }


struct  _CSVCMsgHLTVStatus
{
  ProtobufCMessage base;
  char *master;
  protobuf_c_boolean has_clients;
  int32_t clients;
  protobuf_c_boolean has_slots;
  int32_t slots;
  protobuf_c_boolean has_proxies;
  int32_t proxies;
};
#define CSVCMSG__HLTVSTATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&csvcmsg__hltvstatus__descriptor) \
    , NULL, 0,0, 0,0, 0,0 }


/* CSVCMsgCreateStringTable methods */
void   csvcmsg__create_string_table__init
                     (CSVCMsgCreateStringTable         *message);
size_t csvcmsg__create_string_table__get_packed_size
                     (const CSVCMsgCreateStringTable   *message);
size_t csvcmsg__create_string_table__pack
                     (const CSVCMsgCreateStringTable   *message,
                      uint8_t             *out);
size_t csvcmsg__create_string_table__pack_to_buffer
                     (const CSVCMsgCreateStringTable   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgCreateStringTable *
       csvcmsg__create_string_table__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__create_string_table__free_unpacked
                     (CSVCMsgCreateStringTable *message,
                      ProtobufCAllocator *allocator);
/* CSVCMsgVoiceData methods */
void   csvcmsg__voice_data__init
                     (CSVCMsgVoiceData         *message);
size_t csvcmsg__voice_data__get_packed_size
                     (const CSVCMsgVoiceData   *message);
size_t csvcmsg__voice_data__pack
                     (const CSVCMsgVoiceData   *message,
                      uint8_t             *out);
size_t csvcmsg__voice_data__pack_to_buffer
                     (const CSVCMsgVoiceData   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgVoiceData *
       csvcmsg__voice_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__voice_data__free_unpacked
                     (CSVCMsgVoiceData *message,
                      ProtobufCAllocator *allocator);
/* CSVCMsgClearAllStringTables methods */
void   csvcmsg__clear_all_string_tables__init
                     (CSVCMsgClearAllStringTables         *message);
size_t csvcmsg__clear_all_string_tables__get_packed_size
                     (const CSVCMsgClearAllStringTables   *message);
size_t csvcmsg__clear_all_string_tables__pack
                     (const CSVCMsgClearAllStringTables   *message,
                      uint8_t             *out);
size_t csvcmsg__clear_all_string_tables__pack_to_buffer
                     (const CSVCMsgClearAllStringTables   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgClearAllStringTables *
       csvcmsg__clear_all_string_tables__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__clear_all_string_tables__free_unpacked
                     (CSVCMsgClearAllStringTables *message,
                      ProtobufCAllocator *allocator);
/* ProtoFlattenedSerializerFieldT methods */
void   proto_flattened_serializer_field_t__init
                     (ProtoFlattenedSerializerFieldT         *message);
size_t proto_flattened_serializer_field_t__get_packed_size
                     (const ProtoFlattenedSerializerFieldT   *message);
size_t proto_flattened_serializer_field_t__pack
                     (const ProtoFlattenedSerializerFieldT   *message,
                      uint8_t             *out);
size_t proto_flattened_serializer_field_t__pack_to_buffer
                     (const ProtoFlattenedSerializerFieldT   *message,
                      ProtobufCBuffer     *buffer);
ProtoFlattenedSerializerFieldT *
       proto_flattened_serializer_field_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto_flattened_serializer_field_t__free_unpacked
                     (ProtoFlattenedSerializerFieldT *message,
                      ProtobufCAllocator *allocator);
/* ProtoFlattenedSerializerT methods */
void   proto_flattened_serializer_t__init
                     (ProtoFlattenedSerializerT         *message);
size_t proto_flattened_serializer_t__get_packed_size
                     (const ProtoFlattenedSerializerT   *message);
size_t proto_flattened_serializer_t__pack
                     (const ProtoFlattenedSerializerT   *message,
                      uint8_t             *out);
size_t proto_flattened_serializer_t__pack_to_buffer
                     (const ProtoFlattenedSerializerT   *message,
                      ProtobufCBuffer     *buffer);
ProtoFlattenedSerializerT *
       proto_flattened_serializer_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto_flattened_serializer_t__free_unpacked
                     (ProtoFlattenedSerializerT *message,
                      ProtobufCAllocator *allocator);
/* CSVCMsgFlattenedSerializer methods */
void   csvcmsg__flattened_serializer__init
                     (CSVCMsgFlattenedSerializer         *message);
size_t csvcmsg__flattened_serializer__get_packed_size
                     (const CSVCMsgFlattenedSerializer   *message);
size_t csvcmsg__flattened_serializer__pack
                     (const CSVCMsgFlattenedSerializer   *message,
                      uint8_t             *out);
size_t csvcmsg__flattened_serializer__pack_to_buffer
                     (const CSVCMsgFlattenedSerializer   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgFlattenedSerializer *
       csvcmsg__flattened_serializer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__flattened_serializer__free_unpacked
                     (CSVCMsgFlattenedSerializer *message,
                      ProtobufCAllocator *allocator);
/* CMsgIPCAddress methods */
void   cmsg_ipcaddress__init
                     (CMsgIPCAddress         *message);
size_t cmsg_ipcaddress__get_packed_size
                     (const CMsgIPCAddress   *message);
size_t cmsg_ipcaddress__pack
                     (const CMsgIPCAddress   *message,
                      uint8_t             *out);
size_t cmsg_ipcaddress__pack_to_buffer
                     (const CMsgIPCAddress   *message,
                      ProtobufCBuffer     *buffer);
CMsgIPCAddress *
       cmsg_ipcaddress__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmsg_ipcaddress__free_unpacked
                     (CMsgIPCAddress *message,
                      ProtobufCAllocator *allocator);
/* CMsgServerPeer methods */
void   cmsg_server_peer__init
                     (CMsgServerPeer         *message);
size_t cmsg_server_peer__get_packed_size
                     (const CMsgServerPeer   *message);
size_t cmsg_server_peer__pack
                     (const CMsgServerPeer   *message,
                      uint8_t             *out);
size_t cmsg_server_peer__pack_to_buffer
                     (const CMsgServerPeer   *message,
                      ProtobufCBuffer     *buffer);
CMsgServerPeer *
       cmsg_server_peer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmsg_server_peer__free_unpacked
                     (CMsgServerPeer *message,
                      ProtobufCAllocator *allocator);
/* CSVCMsgPeerList methods */
void   csvcmsg__peer_list__init
                     (CSVCMsgPeerList         *message);
size_t csvcmsg__peer_list__get_packed_size
                     (const CSVCMsgPeerList   *message);
size_t csvcmsg__peer_list__pack
                     (const CSVCMsgPeerList   *message,
                      uint8_t             *out);
size_t csvcmsg__peer_list__pack_to_buffer
                     (const CSVCMsgPeerList   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgPeerList *
       csvcmsg__peer_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__peer_list__free_unpacked
                     (CSVCMsgPeerList *message,
                      ProtobufCAllocator *allocator);
/* CSVCMsgHLTVStatus methods */
void   csvcmsg__hltvstatus__init
                     (CSVCMsgHLTVStatus         *message);
size_t csvcmsg__hltvstatus__get_packed_size
                     (const CSVCMsgHLTVStatus   *message);
size_t csvcmsg__hltvstatus__pack
                     (const CSVCMsgHLTVStatus   *message,
                      uint8_t             *out);
size_t csvcmsg__hltvstatus__pack_to_buffer
                     (const CSVCMsgHLTVStatus   *message,
                      ProtobufCBuffer     *buffer);
CSVCMsgHLTVStatus *
       csvcmsg__hltvstatus__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   csvcmsg__hltvstatus__free_unpacked
                     (CSVCMsgHLTVStatus *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CSVCMsgCreateStringTable_Closure)
                 (const CSVCMsgCreateStringTable *message,
                  void *closure_data);
typedef void (*CSVCMsgVoiceData_Closure)
                 (const CSVCMsgVoiceData *message,
                  void *closure_data);
typedef void (*CSVCMsgClearAllStringTables_Closure)
                 (const CSVCMsgClearAllStringTables *message,
                  void *closure_data);
typedef void (*ProtoFlattenedSerializerFieldT_Closure)
                 (const ProtoFlattenedSerializerFieldT *message,
                  void *closure_data);
typedef void (*ProtoFlattenedSerializerT_Closure)
                 (const ProtoFlattenedSerializerT *message,
                  void *closure_data);
typedef void (*CSVCMsgFlattenedSerializer_Closure)
                 (const CSVCMsgFlattenedSerializer *message,
                  void *closure_data);
typedef void (*CMsgIPCAddress_Closure)
                 (const CMsgIPCAddress *message,
                  void *closure_data);
typedef void (*CMsgServerPeer_Closure)
                 (const CMsgServerPeer *message,
                  void *closure_data);
typedef void (*CSVCMsgPeerList_Closure)
                 (const CSVCMsgPeerList *message,
                  void *closure_data);
typedef void (*CSVCMsgHLTVStatus_Closure)
                 (const CSVCMsgHLTVStatus *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    clc__messages__descriptor;
extern const ProtobufCEnumDescriptor    svc__messages__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__create_string_table__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__voice_data__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__clear_all_string_tables__descriptor;
extern const ProtobufCMessageDescriptor proto_flattened_serializer_field_t__descriptor;
extern const ProtobufCMessageDescriptor proto_flattened_serializer_t__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__flattened_serializer__descriptor;
extern const ProtobufCMessageDescriptor cmsg_ipcaddress__descriptor;
extern const ProtobufCMessageDescriptor cmsg_server_peer__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__peer_list__descriptor;
extern const ProtobufCMessageDescriptor csvcmsg__hltvstatus__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_s2_5fnetmessages_2eproto__INCLUDED */
