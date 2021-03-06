/**
* This file is autogenerated by nRFgo Studio 1.21.1.3
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h"
#include "aci.h"


#define SETUP_ID 0
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 298

/* Service: Gap - Characteristic: Device name - Pipe: SET */
#define PIPE_GAP_DEVICE_NAME_SET          1
#define PIPE_GAP_DEVICE_NAME_SET_MAX_SIZE 8

/* Service: GooSci Sensor - Characteristic: Description - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_DESCRIPTION_SET          2
#define PIPE_GOOSCI_SENSOR_DESCRIPTION_SET_MAX_SIZE 20

/* Service: GooSci Sensor - Characteristic: Value - Pipe: TX */
#define PIPE_GOOSCI_SENSOR_VALUE_TX          3
#define PIPE_GOOSCI_SENSOR_VALUE_TX_MAX_SIZE 20

/* Service: GooSci Sensor - Characteristic: Value - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_VALUE_SET_USER_DESCRIPTION          4
#define PIPE_GOOSCI_SENSOR_VALUE_SET_USER_DESCRIPTION_MAX_SIZE 20

/* Service: GooSci Sensor - Characteristic: Value - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_VALUE_SET_VALID_RANGE          5
#define PIPE_GOOSCI_SENSOR_VALUE_SET_VALID_RANGE_MAX_SIZE 20

/* Service: GooSci Sensor - Characteristic: Software Revision String - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_SOFTWARE_REVISION_STRING_SET          6
#define PIPE_GOOSCI_SENSOR_SOFTWARE_REVISION_STRING_SET_MAX_SIZE 10

/* Service: GooSci Sensor - Characteristic: Firmware Revision String - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_FIRMWARE_REVISION_STRING_SET          7
#define PIPE_GOOSCI_SENSOR_FIRMWARE_REVISION_STRING_SET_MAX_SIZE 10

/* Service: GooSci Sensor - Characteristic: Configuration - Pipe: RX_ACK_AUTO */
#define PIPE_GOOSCI_SENSOR_CONFIGURATION_RX_ACK_AUTO          8
#define PIPE_GOOSCI_SENSOR_CONFIGURATION_RX_ACK_AUTO_MAX_SIZE 20

/* Service: GooSci Sensor - Characteristic: Protocol Version - Pipe: SET */
#define PIPE_GOOSCI_SENSOR_PROTOCOL_VERSION_SET          9
#define PIPE_GOOSCI_SENSOR_PROTOCOL_VERSION_SET_MAX_SIZE 2

/* Service: Device Information - Characteristic: Model Number String - Pipe: BROADCAST */
#define PIPE_DEVICE_INFORMATION_MODEL_NUMBER_STRING_BROADCAST          10
#define PIPE_DEVICE_INFORMATION_MODEL_NUMBER_STRING_BROADCAST_MAX_SIZE 20

/* Service: Device Information - Characteristic: Model Number String - Pipe: SET */
#define PIPE_DEVICE_INFORMATION_MODEL_NUMBER_STRING_SET          11
#define PIPE_DEVICE_INFORMATION_MODEL_NUMBER_STRING_SET_MAX_SIZE 20


#define NUMBER_OF_PIPES 11

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX_BROADCAST},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
}

#define GAP_PPCP_MAX_CONN_INT 0xffff /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xffff /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xffff /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 37
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x42,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x0b,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x03,0x90,0x01,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x0a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x0e,0x03,0x00,0x00,0x2a,0x04,0x14,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x08,0x00,0x03,0x2a,0x00,0x01,0x57,0x69,0x6e,0x64,0x6d,0x69,0x6c,0x6c,0x04,0x04,\
            0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x06,0x04,0x03,0x02,0x00,0x05,0x2a,0x01,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
            0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x08,0x00,0x07,0x2a,0x04,0x01,0xff,0xff,0xff,0xff,0x00,0x00,0xff,0xff,0x04,0x04,\
            0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x10,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x10,0x00,0x09,0x28,0x00,0x01,0xe8,0x74,0x2c,0x65,0xf0,0x01,0x38,0x95,0x7a,0x46,\
            0xaa,0x0a,0x01,0x00,0x5a,0x55,0x04,0x04,0x13,0x13,0x00,0x0a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x28,0x03,0x01,0x02,0x0b,0x00,0xe8,0x74,0x2c,0x65,0xf0,0x01,0x38,0x95,0x7a,0x46,\
            0xaa,0x0a,0x02,0x00,0x5a,0x55,0x06,0x04,0x15,0x14,0x00,0x0b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x00,0x02,0x02,0x47,0x6f,0x6f,0x53,0x63,0x69,0x20,0x53,0x65,0x6e,0x73,0x6f,0x72,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x08,0x07,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x0c,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,\
            0x0d,0x28,0x03,0x01,0x10,0x0e,0x00,0xe8,0x74,0x2c,0x65,0xf0,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,0x03,0x00,0x5a,0x55,0x14,0x00,0x14,0x00,0x00,\
            0x0e,0x00,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x08,0x07,\
            0x00,0x0f,0x29,0x04,0x01,0x1b,0x00,0x28,0x27,0x01,0x04,0x29,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x46,0x14,0x03,0x02,0x00,0x10,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x14,0x00,0x00,\
            0x11,0x29,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x14,0x00,\
            0x00,0x12,0x29,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x13,\
            0x13,0x00,0x13,0x28,0x03,0x01,0x02,0x14,0x00,0xe8,0x74,0x2c,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x65,0xf0,0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,0x04,0x00,0x5a,0x55,0x04,0x04,0x0a,\
            0x07,0x00,0x14,0x00,0x04,0x02,0x52,0x65,0x76,0x20,0x30,0x2e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x31,0x00,0x00,0x00,0x06,0x04,0x08,0x07,0x00,0x15,0x29,0x04,0x01,0x19,0x00,0x00,\
            0x00,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x16,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x01,0x02,0x17,0x00,0xe8,0x74,0x2c,0x65,0xf0,0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,\
            0x05,0x00,0x5a,0x55,0x06,0x04,0x0b,0x0a,0x00,0x17,0x00,0x05,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xc0,0x02,0x30,0x31,0x2e,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x08,0x07,0x00,\
            0x18,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xdc,0x04,0x13,0x13,0x00,0x19,0x28,0x03,0x01,0x08,0x1a,0x00,0xe8,0x74,0x2c,0x65,0xf0,\
            0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,0x10,0x00,0x5a,0x55,0x44,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xf8,0x10,0x14,0x00,0x00,0x1a,0x00,0x10,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x14,0x04,0x04,0x13,0x13,0x00,0x1b,0x28,0x03,0x01,0x02,0x1c,0x00,0xe8,0x74,0x2c,0x65,\
            0xf0,0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,0x11,0x00,0x5a,0x55,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x30,0x06,0x04,0x03,0x02,0x00,0x1c,0x00,0x11,0x02,0x00,0x08,0x06,0x04,0x08,0x07,0x00,\
            0x1d,0x29,0x04,0x01,0x06,0x00,0x00,0x00,0x01,0x00,0x00,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x4c,0x04,0x02,0x02,0x00,0x1e,0x28,0x00,0x01,0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x1f,\
            0x28,0x03,0x01,0x02,0x20,0x00,0x24,0x2a,0x04,0x04,0x14,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x68,0x00,0x20,0x2a,0x24,0x01,0x57,0x69,0x6e,0x64,0x6d,0x69,0x6c,0x6c,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x11,0x06,0x22,0x84,0x07,0x00,0x21,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x00,0x01,0x00,0x80,0x04,0x00,0x03,0x00,0x00,0x00,0x02,0x02,0x00,0x80,0x04,\
            0x00,0x0b,0x00,0x00,0x00,0x03,0x02,0x00,0x02,0x04,0x00,0x0e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x10,0x29,0x01,0x01,0x00,0x80,0x05,0x00,0x11,0x00,0x00,0x29,0x06,0x01,0x00,\
            0x80,0x05,0x00,0x12,0x00,0x00,0x00,0x04,0x02,0x00,0x80,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x38,0x00,0x14,0x00,0x00,0x00,0x05,0x02,0x00,0x80,0x04,0x00,0x17,0x00,0x00,0x00,0x10,\
            0x02,0x04,0x00,0x04,0x00,0x1a,0x00,0x00,0x00,0x11,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x40,0x54,0x80,0x04,0x00,0x1c,0x00,0x00,0x2a,0x24,0x01,0x00,0x81,0x04,0x00,0x20,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0xe8,0x74,0x2c,0x65,0xf0,0x01,0x38,0x95,0x7a,0x46,0xaa,0x0a,0x00,0x00,0x5a,0x55,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x60,0x1c,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x0a,0x24,\
        },\
    },\
}

#endif
