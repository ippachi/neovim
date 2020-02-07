#ifndef NVIM_EVAL_USER_FUNCS_H
#define NVIM_EVAL_USER_FUNCS_H

#include "nvim/eval/typval.h"

///< Structure used by trans_function_name()
typedef struct {
  dict_T *fd_dict;  ///< Dictionary used.
  char_u *fd_newkey;  ///< New key in "dict" in allocated memory.
  dictitem_T  *fd_di;  ///< Dictionary item used.
} funcdict_T;

/// errors for when calling a function
typedef enum {
  ERROR_UNKNOWN = 0,
  ERROR_TOOMANY,
  ERROR_TOOFEW,
  ERROR_SCRIPT,
  ERROR_DICT,
  ERROR_NONE,
  ERROR_OTHER,
  ERROR_BOTH,
  ERROR_DELETED,
} FnameTransError;

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "eval/user_funcs.h.generated.h"
#endif
#endif  // NVIM_EVAL_USER_FUNCS_H
