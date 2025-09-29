#pragma once

/************************************************************************************************
 * @file   status.h
 *
 * @brief  Status Library for more verbose error handling
 *
 * @date   2025-09-25
 * @author Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/**
 * @defgroup Status_Code
 * @brief    Global error library
 * @{
 */

/**
 * @brief StatusCodes for various errors.
 */
typedef enum {
  STATUS_OK = 0,
  STATUS_UNKNOWN_HAL,
  STATUS_UNKNOWN,
  STATUS_INVALID_ARGS,
  STATUS_RESOURCE_EXHAUSTED,
  STATUS_UNREACHABLE,
  STATUS_TIMEOUT,
  STATUS_EMPTY,
  STATUS_OUT_OF_RANGE,
  STATUS_UNIMPLEMENTED,
  STATUS_UNINITIALIZED,
  STATUS_INTERNAL_ERROR,
  STATUS_INCOMPLETE,
  NUM_STATUSES,
} Status;

/**
 * @brief Use to forward failures or continue on success.
 */
#define unwrap_status(code)                \
  ({                                       \
    __typeof__(code) status_expr = (code); \
    if (status_expr) return status_expr;   \
  })
/** @} */
