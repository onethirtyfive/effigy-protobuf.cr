/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: s2_base_gcmessages.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include <libeffigywire/s2_base_gcmessages.pb-c.h>
void   csoecon_item_attribute__init
                     (CSOEconItemAttribute         *message)
{
  static CSOEconItemAttribute init_value = CSOECON_ITEM_ATTRIBUTE__INIT;
  *message = init_value;
}
size_t csoecon_item_attribute__get_packed_size
                     (const CSOEconItemAttribute *message)
{
  assert(message->base.descriptor == &csoecon_item_attribute__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t csoecon_item_attribute__pack
                     (const CSOEconItemAttribute *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &csoecon_item_attribute__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t csoecon_item_attribute__pack_to_buffer
                     (const CSOEconItemAttribute *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &csoecon_item_attribute__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CSOEconItemAttribute *
       csoecon_item_attribute__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CSOEconItemAttribute *)
     protobuf_c_message_unpack (&csoecon_item_attribute__descriptor,
                                allocator, len, data);
}
void   csoecon_item_attribute__free_unpacked
                     (CSOEconItemAttribute *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &csoecon_item_attribute__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   csoecon_item_equipped__init
                     (CSOEconItemEquipped         *message)
{
  static CSOEconItemEquipped init_value = CSOECON_ITEM_EQUIPPED__INIT;
  *message = init_value;
}
size_t csoecon_item_equipped__get_packed_size
                     (const CSOEconItemEquipped *message)
{
  assert(message->base.descriptor == &csoecon_item_equipped__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t csoecon_item_equipped__pack
                     (const CSOEconItemEquipped *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &csoecon_item_equipped__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t csoecon_item_equipped__pack_to_buffer
                     (const CSOEconItemEquipped *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &csoecon_item_equipped__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CSOEconItemEquipped *
       csoecon_item_equipped__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CSOEconItemEquipped *)
     protobuf_c_message_unpack (&csoecon_item_equipped__descriptor,
                                allocator, len, data);
}
void   csoecon_item_equipped__free_unpacked
                     (CSOEconItemEquipped *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &csoecon_item_equipped__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   csoecon_item__init
                     (CSOEconItem         *message)
{
  static CSOEconItem init_value = CSOECON_ITEM__INIT;
  *message = init_value;
}
size_t csoecon_item__get_packed_size
                     (const CSOEconItem *message)
{
  assert(message->base.descriptor == &csoecon_item__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t csoecon_item__pack
                     (const CSOEconItem *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &csoecon_item__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t csoecon_item__pack_to_buffer
                     (const CSOEconItem *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &csoecon_item__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CSOEconItem *
       csoecon_item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CSOEconItem *)
     protobuf_c_message_unpack (&csoecon_item__descriptor,
                                allocator, len, data);
}
void   csoecon_item__free_unpacked
                     (CSOEconItem *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &csoecon_item__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor csoecon_item_attribute__field_descriptors[3] =
{
  {
    "def_index",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItemAttribute, has_def_index),
    offsetof(CSOEconItemAttribute, def_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItemAttribute, has_value),
    offsetof(CSOEconItemAttribute, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value_bytes",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(CSOEconItemAttribute, has_value_bytes),
    offsetof(CSOEconItemAttribute, value_bytes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned csoecon_item_attribute__field_indices_by_name[] = {
  0,   /* field[0] = def_index */
  1,   /* field[1] = value */
  2,   /* field[2] = value_bytes */
};
static const ProtobufCIntRange csoecon_item_attribute__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor csoecon_item_attribute__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CSOEconItemAttribute",
  "CSOEconItemAttribute",
  "CSOEconItemAttribute",
  "",
  sizeof(CSOEconItemAttribute),
  3,
  csoecon_item_attribute__field_descriptors,
  csoecon_item_attribute__field_indices_by_name,
  1,  csoecon_item_attribute__number_ranges,
  (ProtobufCMessageInit) csoecon_item_attribute__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor csoecon_item_equipped__field_descriptors[2] =
{
  {
    "new_class",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItemEquipped, has_new_class),
    offsetof(CSOEconItemEquipped, new_class),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "new_slot",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItemEquipped, has_new_slot),
    offsetof(CSOEconItemEquipped, new_slot),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned csoecon_item_equipped__field_indices_by_name[] = {
  0,   /* field[0] = new_class */
  1,   /* field[1] = new_slot */
};
static const ProtobufCIntRange csoecon_item_equipped__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor csoecon_item_equipped__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CSOEconItemEquipped",
  "CSOEconItemEquipped",
  "CSOEconItemEquipped",
  "",
  sizeof(CSOEconItemEquipped),
  2,
  csoecon_item_equipped__field_descriptors,
  csoecon_item_equipped__field_indices_by_name,
  1,  csoecon_item_equipped__number_ranges,
  (ProtobufCMessageInit) csoecon_item_equipped__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const uint32_t csoecon_item__quantity__default_value = 1u;
static const uint32_t csoecon_item__level__default_value = 1u;
static const uint32_t csoecon_item__quality__default_value = 4u;
static const uint32_t csoecon_item__flags__default_value = 0u;
static const uint32_t csoecon_item__origin__default_value = 0u;
static const protobuf_c_boolean csoecon_item__in_use__default_value = 0;
static const uint32_t csoecon_item__style__default_value = 0u;
static const uint64_t csoecon_item__original_id__default_value = 0ull;
static const ProtobufCFieldDescriptor csoecon_item__field_descriptors[15] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(CSOEconItem, has_id),
    offsetof(CSOEconItem, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "account_id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_account_id),
    offsetof(CSOEconItem, account_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "inventory",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_inventory),
    offsetof(CSOEconItem, inventory),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "def_index",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_def_index),
    offsetof(CSOEconItem, def_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "quantity",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_quantity),
    offsetof(CSOEconItem, quantity),
    NULL,
    &csoecon_item__quantity__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "level",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_level),
    offsetof(CSOEconItem, level),
    NULL,
    &csoecon_item__level__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "quality",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_quality),
    offsetof(CSOEconItem, quality),
    NULL,
    &csoecon_item__quality__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_flags),
    offsetof(CSOEconItem, flags),
    NULL,
    &csoecon_item__flags__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "origin",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_origin),
    offsetof(CSOEconItem, origin),
    NULL,
    &csoecon_item__origin__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "attribute",
    12,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(CSOEconItem, n_attribute),
    offsetof(CSOEconItem, attribute),
    &csoecon_item_attribute__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "interior_item",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CSOEconItem, interior_item),
    &csoecon_item__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "in_use",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(CSOEconItem, has_in_use),
    offsetof(CSOEconItem, in_use),
    NULL,
    &csoecon_item__in_use__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "style",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CSOEconItem, has_style),
    offsetof(CSOEconItem, style),
    NULL,
    &csoecon_item__style__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "original_id",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(CSOEconItem, has_original_id),
    offsetof(CSOEconItem, original_id),
    NULL,
    &csoecon_item__original_id__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "equipped_state",
    18,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(CSOEconItem, n_equipped_state),
    offsetof(CSOEconItem, equipped_state),
    &csoecon_item_equipped__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned csoecon_item__field_indices_by_name[] = {
  1,   /* field[1] = account_id */
  9,   /* field[9] = attribute */
  3,   /* field[3] = def_index */
  14,   /* field[14] = equipped_state */
  7,   /* field[7] = flags */
  0,   /* field[0] = id */
  11,   /* field[11] = in_use */
  10,   /* field[10] = interior_item */
  2,   /* field[2] = inventory */
  5,   /* field[5] = level */
  8,   /* field[8] = origin */
  13,   /* field[13] = original_id */
  6,   /* field[6] = quality */
  4,   /* field[4] = quantity */
  12,   /* field[12] = style */
};
static const ProtobufCIntRange csoecon_item__number_ranges[3 + 1] =
{
  { 1, 0 },
  { 12, 9 },
  { 18, 14 },
  { 0, 15 }
};
const ProtobufCMessageDescriptor csoecon_item__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CSOEconItem",
  "CSOEconItem",
  "CSOEconItem",
  "",
  sizeof(CSOEconItem),
  15,
  csoecon_item__field_descriptors,
  csoecon_item__field_indices_by_name,
  3,  csoecon_item__number_ranges,
  (ProtobufCMessageInit) csoecon_item__init,
  NULL,NULL,NULL    /* reserved[123] */
};
