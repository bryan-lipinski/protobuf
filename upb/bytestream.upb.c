// This file was generated by upbc (the upb compiler).
// Do not edit -- your changes will be discarded when the file is
// regenerated.

#include "upb/def.h"

const upb_msgdef upb_bytestream_msgs[1];
const upb_fielddef upb_bytestream_fields[1];
const upb_enumdef upb_bytestream_enums[0];
const upb_tabent upb_bytestream_strentries[4];
const upb_tabent upb_bytestream_intentries[0];
const _upb_value upb_bytestream_arrays[3];

const upb_msgdef upb_bytestream_msgs[1] = {
  UPB_MSGDEF_INIT("upb.ByteStream", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &upb_bytestream_arrays[0], 3, 1), UPB_STRTABLE_INIT(1, 3, 9, 2, &upb_bytestream_strentries[0]), 3),
};

const upb_fielddef upb_bytestream_fields[1] = {
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BYTES, 0, false, "bytes", 1, &upb_bytestream_msgs[0], NULL, 0, UPB_VALUE_INIT_NONE),
};

const upb_enumdef upb_bytestream_enums[0] = {
};

const upb_tabent upb_bytestream_strentries[4] = {
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("bytes"), UPB_VALUE_INIT_CONSTPTR(&upb_bytestream_fields[0]), NULL},
};

const upb_tabent upb_bytestream_intentries[0] = {
};

const _upb_value upb_bytestream_arrays[3] = {
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&upb_bytestream_fields[0]),
  UPB_ARRAY_EMPTYENT,
};

