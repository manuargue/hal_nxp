/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_SDMA_SCRIPT_H_
#define FSL_SDMA_SCRIPT_H_

/*! @brief SDMA start address. */
#define FSL_SDMA_START_ADDR 0
#define FSL_SDMA_START_SIZE 20
/*! @brief SDMA core address. */
#define FSL_SDMA_CORE_ADDR 80
#define FSL_SDMA_CORE_SIZE 232
/*! @brief SDMA common address */
#define FSL_SDMA_COMMON_ADDR 312
#define FSL_SDMA_COMMON_SIZE 332

/*! @brief SDMA memoery to memory address. */
#ifndef FSL_FEATURE_SDMA_M2M_ADDR
#define FSL_SDMA_M2M_ADDR 644
#else
#define FSL_SDMA_M2M_ADDR FSL_FEATURE_SDMA_M2M_ADDR
#endif
#define FSL_SDMA_M2M_SIZE 41

/*! @brief SDMA peripheral to memory */
#ifndef FSL_FEATURE_SDMA_P2M_ADDR
#define FSL_SDMA_P2M_ADDR 685
#else
#define FSL_SDMA_P2M_ADDR FSL_FEATURE_SDMA_P2M_ADDR
#endif
#define FSL_SDMA_P2M_SIZE 64

/*! @brief SDMA memory to peripheral. */
#ifndef FSL_FEATURE_SDMA_M2P_ADDR
#define FSL_SDMA_M2P_ADDR 749
#else
#define FSL_SDMA_M2P_ADDR FSL_FEATURE_SDMA_M2P_ADDR
#endif
#define FSL_SDMA_M2P_SIZE 70

/*! @brief SDMA UART to mcu. */
#ifndef FSL_FEATURE_SDMA_UART2M_ADDR
#define FSL_SDMA_UART2M_ADDR 819
#else
#define FSL_SDMA_UART2M_ADDR FSL_FEATURE_SDMA_UART2M_ADDR
#endif
#define FSL_SDMA_UART2M_SIZE 74

/* @brief SDMA ROM peripheral on SPBA to memory script start address. */
#ifndef FSL_FEATURE_SDMA_SHP2M_ADDR
#define FSL_SDMA_SHP2M_ADDR 893
#else
#define FSL_SDMA_SHP2M_ADDR FSL_FEATURE_SDMA_SHP2M_ADDR
#endif
#define FSL_SDMA_SHP2M_SIZE 69

/* @brief SDMA ROM memory to peripheral on SPBA script start address. */
#ifndef FSL_FEATURE_SDMA_M2SHP_ADDR
#define FSL_SDMA_M2SHP_ADDR 962
#else
#define FSL_SDMA_M2SHP_ADDR FSL_FEATURE_SDMA_M2SHP_ADDR
#endif
#define FSL_SDMA_M2SHP_ASIZE 72

/* @brief SDMA ROM UART on SPBA to memory script start address. */
#ifndef FSL_FEATURE_SDMA_UARTSH2M_ADDR
#define FSL_SDMA_UARTSH2M_ADDR 1034
#else
#define FSL_SDMA_UARTSH2M_ADDR FSL_FEATURE_SDMA_UARTSH2M_ADDR
#endif
#define FSL_SDMA_UARTSH2M_ASIZE 68

/* @brief SDMA ROM SPDIF to memory script start address. */
#ifndef FSL_FEATURE_SDMA_SPDIF2M_ADDR
#define FSL_SDMA_SPDIF2M_ADDR 1102
#else
#define FSL_SDMA_SPDIF2M_ADDR FSL_FEATURE_SDMA_SPDIF2M_ADDR
#endif
#define FSL_SDMA_SPDIF2M_SIZE 34

/* @brief SDMA ROM memory to SPDIF script start address. */
#ifndef FSL_FEATURE_SDMA_M2SPDIF_ADDR
#define FSL_SDMA_M2SPDIF_ADDR 1136
#else
#define FSL_SDMA_M2SPDIF_ADDR FSL_FEATURE_SDMA_M2SPDIF_ADDR
#endif
#define FSL_SDMA_M2SPDIF_SIZE 59

/*! @brief SDMA LOOP routine address. */
#define FSL_SDMA_LOOP_DMAs_ROUTINES_ADDR 1195
#define FSL_SDMA_LOOP_DMAs_ROUTINES_SIZE 227

/*! @brief SDMA test address. */
#define FSL_SDMA_TEST_ADDR 1422
#define FSL_SDMA_TEST_SIZE 63

/*! @brief SDMA signature address */
#define FSL_SDMA_SIGNATURE_ADDR 1023
#define FSL_SDMA_SIGNATURE_SIZE 1

/*!
 * SDMA RAM scripts start addresses and sizes
 */
/*! @brief SDMA I2C to MCU address. */
#define FSL_SDMA_I2C_TO_MCU_ADDR 6144
#define FSL_SDMA_I2C_TO_MCU_SIZE 34

/*! @brief SDMA MCU to ECSPI address. */
#define FSL_SDMA_MCU_TO_ECSPI_ADDR 6178
#define FSL_SDMA_MCU_TO_ECSPI_SIZE 91

/*! @brief SDMA I2C to MCU address. */
#define FSL_SDMA_MCU_TO_I2C_ADDR 6269
#define FSL_SDMA_MCU_TO_I2C_SIZE 39

/*! @brief SDMA SAI TX address. */
#define FSL_SDMA_MULTI_FIFO_SAI_TX_ADDR (6308)
#define FSL_SDMA_MULTI_FIFO_SAI_TX_SIZE (151)

/*! @brief SDMA MCU to SSISH. */
#define FSL_SDMA_MCU_TO_SSISH_ADDR 6459
#define FSL_SDMA_MCU_TO_SSISH_SIZE 89

/*! @brief SDMA peripheral to peripheral address */
#define FSL_SDMA_PERIPHERAL_TO_PERIPHERAL_ADDR 6548
#define FSL_SDMA_PERIPHERAL_TO_PERIPHERAL_SIZE 314

/* @brief SDMA sai RX address. */
#define FSL_SDMA_MULTI_FIFO_SAI_RX_ADDR (6862)
#define FSL_SDMA_MULTI_FIFO_SAI_RX_SIZE (151)

/*! @brief SDMA SSISH to MCU address. */
#define FSL_SDMA_SSISH_TO_MCU_ADDR 7013
#define FSL_SDMA_SSISH_TO_MCU_SIZE 84

/*! @brief SDMA UART TO MCU address. */
#define FSL_SDMA_UART_TO_MCU_ADDR 7097
#define FSL_SDMA_UART_TO_MCU_SIZE 92

/*! @brief SDMA UARTSH to MCU fixed address. */
#define FSL_SDMA_UARTSH_TO_MCU_FIXED_ADDR 7189
#define FSL_SDMA_UARTSH_TO_MCU_FIXED_SIZE 74

/*! @brief SDMA canfd to mcu address. */
#define FSL_SDMA_ZCANFD_TO_MCU_ADDR 7263
#define FSL_SDMA_ZCANFD_TO_MCU_SIZE 101

/*! @brief SDMA hdmi  address. */
#define FSL_SDMA_ZHDMI_ADDR 7364
#define FSL_SDMA_ZHDMI_SIZE 55

/*! @brief SDMA qspi to mcu address. */
#define FSL_SDMA_ZQSPI_TO_MCU_ADDR 7419
#define FSL_SDMA_ZQSPI_TO_MCU_SIZE 102

/*! @brief SDMA mcu to qspi address. */
#define FSL_SDMA_ZZMCU_TO_QSPI_ADDR 7521
#define FSL_SDMA_ZZMCU_TO_QSPI_SIZE 114

/*! @brief SDMA script code ram start address */
#define FSL_SDMA_SCRIPT_CODE_START_ADDR 6144
/*! @brief SDMA script code size */
#define FSL_SDMA_SCRIPT_CODE_SIZE 1491 * sizeof(short)

/*! @brief SDMA script version */
#define FSL_SDMA_SCRIPT_VERSION "I.MX7D_4_6"

#define FSL_SDMA_MULTI_FIFO_SCRIPT { \
0xc1e5, 0x57db, 0x52f3, 0x6a05, 0x52fb, 0x2204, 0x6ac2, 0x6ad2, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x62c8, 0x3202, 0x6ac8,\
    0x52fb, 0x6ac2, 0x05a0, 0x7802, 0x62c8, 0x6a09, 0x7c08, 0x6a28, 0x7f06, 0x0000, 0x4d00, 0x7d05, 0xc1fc, 0x57db,\
    0x9804, 0xc279, 0x0454, 0xc20c, 0x9801, 0xc1e5, 0x57db, 0x52f3, 0x6a01, 0x52fb, 0x6ad3, 0x52fb, 0x1a1c, 0x6ac3,\
    0x62e8, 0x0211, 0x3aff, 0x0830, 0x02d0, 0x7c3f, 0x008f, 0x003f, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x5deb, 0x0478,\
    0x7d03, 0x0479, 0x7d1c, 0x7c20, 0x0479, 0x7c15, 0x56ee, 0x0660, 0x7d05, 0x6509, 0x7e33, 0x620a, 0x7e31, 0x984b,\
    0x620a, 0x7e2e, 0x6509, 0x7e2c, 0x0512, 0x0512, 0x02ad, 0x6ac8, 0x7f27, 0x2003, 0x4800, 0x7ced, 0x9863, 0x7802,\
    0x6209, 0x6ac8, 0x9862, 0x0015, 0x7802, 0x620a, 0x6ac8, 0x9862, 0x0015, 0x0015, 0x7802, 0x620b, 0x6ac8, 0x7c14,\
    0x6ddf, 0x7f12, 0x077f, 0x7d09, 0x52fb, 0x1a04, 0x6ac3, 0x6ad3, 0x62c8, 0x2a04, 0x6ac8, 0x52fb, 0x6ad3, 0x0000,\
    0x55eb, 0x4d00, 0x7d07, 0xc1fc, 0x57db, 0x9828, 0x0007, 0x68cc, 0x680c, 0xc215, 0xc20c, 0x9823, 0xc1e5, 0x57db,\
    0x52f3, 0x6a01, 0x52fb, 0x2204, 0x6ac2, 0x6ad2, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x62c8, 0x3202, 0x6ac8, 0x52fb,\
    0x6ad2, 0x05a0, 0x5deb, 0x7802, 0x6209, 0x6ac8, 0x9894, 0x7c09, 0x6dde, 0x7f07, 0x0000, 0x55eb, 0x4d00, 0x7d07,\
    0xc1fc, 0x57db, 0x9881, 0x0007, 0x68cc, 0x680c, 0xc215, 0xc20c, 0x987e, 0xc1d9, 0xc1e5, 0x57db, 0x52f3, 0x6a01,\
    0x59eb, 0x080f, 0x0011, 0x18ff, 0x00bf, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x04a0, 0x5ce3, 0x56fb, 0x0478, 0x7d03,\
    0x0479, 0x7d28, 0x7c37, 0x0479, 0x7c16, 0xd91e, 0x620a, 0x7e77, 0x6509, 0x7e75, 0x0512, 0x0512, 0x02ad, 0x5a06,\
    0x7f70, 0x2101, 0x2003, 0x4900, 0x7cf3, 0xd92d, 0x069c, 0x2701, 0x4f00, 0x7cee, 0x4800, 0x7ceb, 0x9902, 0xd91e,\
    0x6209, 0x5a06, 0x2101, 0x2001, 0x4900, 0x7cfa, 0xd92d, 0x069c, 0x2701, 0x4f00, 0x7cf5, 0x4800, 0x7cf2, 0x9901,\
    0x0015, 0xd91e, 0x620a, 0x5a06, 0x2101, 0x2001, 0x4900, 0x7cfa, 0xd92d, 0x069c, 0x2701, 0x4f00, 0x7cf5, 0x4800,\
    0x7cf2, 0x9901, 0x0015, 0x0015, 0xd91e, 0x620b, 0x5a06, 0x2101, 0x2001, 0x4900, 0x7cfa, 0xd92d, 0x069c, 0x2701,\
    0x4f00, 0x7cf5, 0x4800, 0x7cf2, 0x7c34, 0x57db, 0x0777, 0x7c0c, 0x0710, 0x3f0f, 0x0717, 0x0717, 0x0e70, 0x0611,\
    0x0c70, 0x0411, 0x069c, 0x069f, 0x0c01, 0x5c06, 0x0000, 0x54e3, 0x57db, 0x51eb, 0x0dff, 0x0511, 0x1dff, 0x05bc,\
    0x4d00, 0x7d1e, 0xc1fc, 0x57db, 0x98a9, 0x56fb, 0x57db, 0x048f, 0x0711, 0x3ff0, 0x0715, 0x0715, 0x0715, 0x0715,\
    0x0410, 0x0411, 0x3c0f, 0x1c01, 0x0417, 0x0417, 0x51db, 0x0110, 0x39f0, 0x0115, 0x0115, 0x0115, 0x0115, 0x1901,\
    0x0006, 0x0007, 0x680c, 0xc215, 0xc20c, 0x98a6, 0xc1d9, 0xc1e5, 0x57db, 0x5fe3, 0x57e3, 0x52f3, 0x6a21, 0x008f,\
    0x00d5, 0x7d01, 0x008d, 0x05a0, 0x5deb, 0x56fb, 0x0478, 0x7d03, 0x0479, 0x7d2a, 0x7c31, 0x0479, 0x7c20, 0x0b70,\
    0x0311, 0x53eb, 0x0f00, 0x0360, 0x7d05, 0x6509, 0x7e37, 0x620a, 0x7e35, 0x995f, 0x620a, 0x7e32, 0x6509, 0x7e30,\
    0x0512, 0x0512, 0x02ad, 0x0760, 0x7c02, 0x5a06, 0x9967, 0x5a26, 0x7f27, 0x1f01, 0x2003, 0x4800, 0x7ce8, 0x0b70,\
    0x0311, 0x5313, 0x9988, 0x0015, 0x7804, 0x6209, 0x5a06, 0x6209, 0x5a26, 0x9987, 0x0015, 0x0015, 0x7804, 0x620a,\
    0x5a06, 0x620a, 0x5a26, 0x9987, 0x0015, 0x0015, 0x0015, 0x7804, 0x620b, 0x5a06, 0x620b, 0x5a26, 0x7c07, 0x0000,\
    0x55eb, 0x4d00, 0x7d06, 0xc1fc, 0x57e3, 0x9942, 0x0007, 0x680c, 0xc215, 0xc20c, 0x993f, 0x0b70, 0x0311, 0x5313,\
    0x076c, 0x7c01, 0xc1d9, 0x5efb, 0x068a, 0x076b, 0x7c01, 0xc1d9, 0x5ef3, 0x59db, 0x58d3, 0x018f, 0x0110, 0x390f,\
    0x008b, 0xc13c, 0x7d2b, 0x5ac0, 0x5bc8, 0xc14e, 0x7c27, 0x0388, 0x0689, 0x5ce3, 0x0dff, 0x0511, 0x1dff, 0x05bc,\
    0x073e, 0x4d00, 0x7d18, 0x0870, 0x0011, 0x077e, 0x7d09, 0x077d, 0x7d02, 0x5228, 0x99bf, 0x52f8, 0x54db, 0x02bc,\
    0x02cc, 0x7c09, 0x077c, 0x7d02, 0x5228, 0x99c8, 0x52f8, 0x54d3, 0x02bc, 0x02cc, 0x7d09, 0x0400, 0x99b6, 0x008b,\
    0x52c0, 0x53c8, 0xc159, 0x7dd6, 0x0200, 0x99a6, 0x08ff, 0x00bf, 0x077f, 0x7d15, 0x0488, 0x00d5, 0x7d01, 0x008d,\
    0x05a0, 0x5deb, 0x028f, 0x0212, 0x0212, 0x3aff, 0x05da, 0x7c02, 0x073e, 0x99f3, 0x02a4, 0x02dd, 0x7d02, 0x073e,\
    0x99f3, 0x075e, 0x99f3, 0x55eb, 0x4d00, 0x7c02, 0x0598, 0x5deb, 0x52f3, 0x54fb, 0x076a, 0x7d38, 0x076c, 0x7d01,\
    0x9a42, 0x076b, 0x7c7d, 0x0769, 0x7d04, 0x0768, 0x7d02, 0x0e01, 0x9a0a, 0x5893, 0x00d6, 0x7d01, 0x008e, 0x5593,\
    0x05a0, 0x5d93, 0x06a0, 0x076d, 0x7d06, 0x076e, 0x7d0b, 0x7802, 0x5502, 0x5d04, 0x9a1f, 0x0015, 0x7804, 0x5502,\
    0x5d04, 0x5522, 0x5d04, 0x9a1f, 0x0015, 0x7804, 0x5502, 0x5d04, 0x5502, 0x5d24, 0x7c1d, 0x4e00, 0x7c08, 0x0769,\
    0x7d03, 0x5502, 0x7e17, 0x9a29, 0x5d04, 0x7f14, 0x0689, 0x5093, 0x4800, 0x7d01, 0x9a02, 0x9ab5, 0x0015, 0x7806,\
    0x5502, 0x5d04, 0x074f, 0x5502, 0x5d24, 0x072f, 0x7c01, 0x9ab5, 0x0017, 0x076f, 0x7c01, 0x2001, 0x5593, 0x009d,\
    0x0007, 0xdabc, 0x99ce, 0x0769, 0x7d04, 0x0768, 0x7d02, 0x0e01, 0x9a50, 0x5893, 0x00d6, 0x7d01, 0x008e, 0x5593,\
    0x05a0, 0x5d93, 0x06a0, 0x076d, 0x7d07, 0x076e, 0x7d0d, 0x6cd3, 0x7802, 0x5502, 0x6dc8, 0x9a68, 0x0015, 0x6cd3,\
    0x7804, 0x5502, 0x6dc8, 0x5522, 0x6dc8, 0x9a68, 0x0015, 0x7805, 0x6cd7, 0x5502, 0x6dc8, 0x5502, 0x6dc8, 0x7c0f,\
    0x4e00, 0x7c08, 0x0769, 0x7d03, 0x5502, 0x7e09, 0x9a72, 0x6dc8, 0x7f06, 0x0689, 0x5093, 0x4800, 0x7d01, 0x9a48,\
    0x9ab5, 0x9aaf, 0x0769, 0x7d04, 0x0768, 0x7d02, 0x0e01, 0x9a87, 0x5893, 0x00d6, 0x7d01, 0x008e, 0x5593, 0x05a0,\
    0x5d93, 0x06a0, 0x076d, 0x7d07, 0x076e, 0x7d0d, 0x6ac3, 0x7802, 0x65c8, 0x5d04, 0x9a9f, 0x0015, 0x7805, 0x6ac7,\
    0x65c8, 0x5d04, 0x65c8, 0x5d04, 0x9a9f, 0x0015, 0x6ac3, 0x7804, 0x65c8, 0x5d04, 0x65c8, 0x5d24, 0x7c0f, 0x4e00,\
    0x7c08, 0x0769, 0x7d03, 0x65c8, 0x7e09, 0x9aa9, 0x5d04, 0x7f06, 0x0689, 0x5093, 0x4800, 0x7d01, 0x9a7f, 0x9ab5,\
    0x5593, 0x009d, 0x0007, 0x6cff, 0xdabc, 0x99ce, 0x0000, 0x54e3, 0x55eb, 0x4d00, 0x7c01, 0x99ce, 0x99b6, 0x54e3,\
    0x55eb, 0x0aff, 0x0211, 0x1aff, 0x077f, 0x7c02, 0x05a0, 0x9ac9, 0x009d, 0x058c, 0x05ba, 0x05a0, 0x0210, 0x04ba,\
    0x04ad, 0x0454, 0x0006, 0xc1d9, 0xc1e5, 0x57db, 0x52f3, 0x6a05, 0x59eb, 0x080f, 0x0011, 0x18ff, 0x00bf, 0x00d5,\
    0x7d01, 0x008d, 0x05a0, 0x04a0, 0x5ce3, 0x56fb, 0x0478, 0x7d03, 0x0479, 0x7d29, 0x7c17, 0x0479, 0x7c36, 0xdb49,\
    0x6a09, 0x7f78, 0x0212, 0x6a09, 0x7f75, 0x0212, 0x6a09, 0x7f72, 0x2101, 0x2003, 0x4900, 0x7cf4, 0xdb58, 0x069c,\
    0x2701, 0x4f00, 0x7cef, 0x4800, 0x7cec, 0x9b2b, 0x0015, 0x0015, 0xdb49, 0x5206, 0x6a0b, 0x2101, 0x2001, 0x4900,\
    0x7cfa, 0xdb58, 0x069c, 0x2701, 0x4f00, 0x7cf5, 0x4800, 0x7cf2, 0x9b2a, 0x0015, 0xdb49, 0x5206, 0x6a0a, 0x2101,\
    0x2001, 0x4900, 0x7cfa, 0xdb58, 0x069c, 0x2701, 0x4f00, 0x7cf5, 0x4800, 0x7cf2, 0x9b2a, 0xdb49, 0x5206, 0x6a09,\
    0x2101, 0x2001, 0x4900, 0x7cfa, 0xdb58, 0x069c, 0x2701, 0x4f00, 0x7cf5, 0x4800, 0x7cf2, 0x7c36, 0x6a28, 0x7f34,\
    0x57db, 0x0777, 0x7c0c, 0x0710, 0x3f0f, 0x0717, 0x0717, 0x0e70, 0x0611, 0x0c70, 0x0411, 0x069c, 0x069f, 0x0c01,\
    0x5c06, 0x0000, 0x54e3, 0x57db, 0x51eb, 0x0dff, 0x0511, 0x1dff, 0x05bc, 0x4d00, 0x7d1d, 0xc1fc, 0x57db, 0x9ad3,\
    0x56fb, 0x57db, 0x048f, 0x0711, 0x3ff0, 0x0715, 0x0715, 0x0715, 0x0715, 0x0410, 0x0411, 0x3c0f, 0x1c01, 0x0417,\
    0x0417, 0x51db, 0x0110, 0x39f0, 0x0115, 0x0115, 0x0115, 0x0115, 0x1901, 0x0006, 0xc279, 0x0454, 0xc20c, 0x9ad0,\
    0xc1d9, 0xc1e5, 0x57db, 0x52f3, 0x6a05, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x56fb, 0x0478, 0x7d03, 0x0479,\
    0x7d29, 0x7c1f, 0x0479, 0x7c2e, 0x5de3, 0x0d70, 0x0511, 0x55ed, 0x0f00, 0x0760, 0x7d02, 0x5206, 0x9b81, 0x5226,\
    0x7e33, 0x0560, 0x7d02, 0x0210, 0x0212, 0x6a09, 0x7f2d, 0x0212, 0x6a09, 0x7f2a, 0x0212, 0x6a09, 0x7f27, 0x1f01,\
    0x2003, 0x4800, 0x7cea, 0x55e3, 0x9bac, 0x0015, 0x0015, 0x0015, 0x7804, 0x5206, 0x6a0b, 0x5226, 0x6a0b, 0x9bab,\
    0x0015, 0x0015, 0x7804, 0x5206, 0x6a0a, 0x5226, 0x6a0a, 0x9bab, 0x0015, 0x7804, 0x5206, 0x6a09, 0x5226, 0x6a09,\
    0x7c09, 0x6a28, 0x7f07, 0x0000, 0x57db, 0x4d00, 0x7d05, 0xc1fc, 0x57db, 0x9b6a, 0xc279, 0x0454, 0xc20c, 0x9b67,\
    0xc1e5, 0x57db, 0x52f3, 0x6a05, 0x56fb, 0x028e, 0x1a94, 0x6ac3, 0x62c8, 0x0269, 0x7d26, 0x1e94, 0x6ec3, 0x6ed3,\
    0x62c8, 0x0a01, 0x0211, 0x6ac8, 0x2694, 0x1e98, 0x6ec3, 0x62c8, 0x2698, 0x6ec3, 0x0260, 0x7d0f, 0x1e98, 0x6ec3,\
    0x62c8, 0x026c, 0x7d03, 0x2698, 0x6ec3, 0x9bf8, 0x0a10, 0x0211, 0x6ed3, 0x6ac8, 0x2698, 0x6ec3, 0x9c08, 0x62c8,\
    0x9be4, 0x6a09, 0x7f18, 0x2501, 0x4d00, 0x7d1f, 0x9bcc, 0x6ee3, 0x008f, 0x05d8, 0x7d01, 0x008d, 0x62c8, 0x6a09,\
    0x7f0c, 0x2501, 0x2001, 0x7cfa, 0x57db, 0x4d00, 0x7d10, 0x6a28, 0x7f04, 0x0000, 0xc1fc, 0x57db, 0x9bbd, 0x0007,\
    0x6204, 0x6a0c, 0x9c05, 0x6a28, 0x7ffa, 0x6204, 0xc27c, 0x0458, 0x0454, 0x08ff, 0x0011, 0x18ff, 0x00bc, 0x00cd,\
    0x7c01, 0x9bf8, 0x6a28, 0x7fed, 0x6204, 0xc27c, 0xc20c, 0x9bba, 0xc1d9, 0xc1e5, 0x57db, 0x52f3, 0x6a05, 0x56fb,\
    0x028e, 0x1a94, 0x5202, 0x0269, 0x7d1d, 0x1e94, 0x5206, 0x0248, 0x5a06, 0x2694, 0x1e98, 0x5206, 0x024c, 0x5a06,\
    0x2698, 0x1e98, 0x5206, 0x0260, 0x7c0a, 0x2698, 0x5206, 0x026e, 0x7d23, 0x6a09, 0x7f1d, 0x2501, 0x4d00, 0x7d24,\
    0x9c2a, 0x6a28, 0x7f17, 0x6204, 0xc27c, 0x9c5b, 0x008f, 0x05d8, 0x7d01, 0x008d, 0x05a0, 0x5206, 0x026e, 0x7d10,\
    0x6a09, 0x7f0a, 0x2001, 0x7cf9, 0x6a28, 0x7f06, 0x0000, 0x4d00, 0x7d0d, 0xc1fc, 0x57db, 0x9c1a, 0x0007, 0x6204,\
    0x6a0c, 0x9c58, 0x6a28, 0x7ffa, 0x6204, 0xc27c, 0x0458, 0x0454, 0x6a28, 0x7ff4, 0xc20c, 0x9c17, 0xdca3, 0x57db,\
    0x52f3, 0x6a05, 0x69c7, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x0478, 0x7d03, 0x0479, 0x7d1c, 0x7c15, 0x0479,\
    0x7c1e, 0x56ee, 0x62c8, 0x7e28, 0x0660, 0x7d02, 0x0210, 0x0212, 0x6a09, 0x7f22, 0x0212, 0x6a09, 0x7f1f, 0x0212,\
    0x6a09, 0x7f1c, 0x2003, 0x4800, 0x7cef, 0x9c92, 0x0015, 0x0015, 0x7802, 0x62c8, 0x6a0b, 0x9c91, 0x0015, 0x7802,\
    0x62c8, 0x6a0a, 0x9c91, 0x7802, 0x62c8, 0x6a09, 0x7c09, 0x6a28, 0x7f07, 0x4d00, 0x7d07, 0x52d3, 0x0801, 0x5802,\
    0x0400, 0x9c63, 0xc279, 0x0454, 0x52d3, 0x0801, 0x5802, 0x0401, 0xdcbb, 0x9c60, 0x0b70, 0x0311, 0x5313, 0x5fdb,\
    0x070a, 0x58d3, 0x008b, 0x5efb, 0xc13c, 0x7d15, 0x5ac0, 0x5bc8, 0xc14e, 0x7c11, 0x0388, 0x5df0, 0x0dff, 0x0511,\
    0x1dff, 0x05bc, 0x4d00, 0x7d04, 0x9cba, 0x0708, 0x5fdb, 0x070a, 0x008b, 0x52c3, 0x53cb, 0xc159, 0x7dec, 0x0200,\
    0x9cab, 0x6e01, 0x610b, 0x7e2f, 0x620b, 0x7e2d, 0x630b, 0x7e2b, 0x0d0c, 0x0417, 0x0417, 0x0417, 0x049d, 0x1d08,\
    0x05cc, 0x7c01, 0x0d0c, 0x6ad1, 0x0f00, 0x0742, 0x6fc8, 0x6fdd, 0x7f1c, 0x008e, 0x009d, 0x6801, 0x670b, 0x7e17,\
    0x6bd5, 0x0804, 0x7802, 0x6fc8, 0x0712, 0x7c11, 0x670b, 0x7e0f, 0x0804, 0x7802, 0x6fc8, 0x0712, 0x7c0a, 0x6fdd,\
    0x7f08, 0x69d1, 0x0f01, 0x6fc8, 0x6fdd, 0x7f03, 0x0101, 0x0400, 0x9cd0, 0x0007, 0x68ff, 0x680c, 0x0200, 0x9cd0,\
    0xdd40, 0x57db, 0x52f3, 0x6a05, 0x52fb, 0x6ac7, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x0478, 0x7d03, 0x0479,\
    0x7d1c, 0x7c15, 0x0479, 0x7c1e, 0x56ee, 0x62c8, 0x7e28, 0x0660, 0x7d02, 0x0210, 0x0212, 0x6a09, 0x7f22, 0x0212,\
    0x6a09, 0x7f1f, 0x0212, 0x6a09, 0x7f1c, 0x2003, 0x4800, 0x7cef, 0x9d2f, 0x0015, 0x0015, 0x7802, 0x62c8, 0x6a0b,\
    0x9d2e, 0x0015, 0x7802, 0x62c8, 0x6a0a, 0x9d2e, 0x7802, 0x62c8, 0x6a09, 0x7c09, 0x6a28, 0x7f07, 0x4d00, 0x7d07,\
    0x52d3, 0x0801, 0x5802, 0x0400, 0x9cff, 0xc279, 0x0454, 0x52d3, 0x0801, 0x5802, 0x0401, 0xdd58, 0x9cfc, 0x0b70,\
    0x0311, 0x5313, 0x5fdb, 0x070a, 0x58d3, 0x008b, 0x5efb, 0xc13c, 0x7d15, 0x5ac0, 0x5bc8, 0xc14e, 0x7c11, 0x0388,\
    0x5df0, 0x0dff, 0x0511, 0x1dff, 0x05bc, 0x4d00, 0x7d04, 0x9d57, 0x0708, 0x5fdb, 0x070a, 0x008b, 0x52c3, 0x53cb,\
    0xc159, 0x7dec, 0x0200, 0x9d48, 0xddb2, 0x52f3, 0x6a01, 0x57db, 0x52fb, 0x077f, 0x7d02, 0x6ad3, 0x9d6b, 0x6ad7,\
    0x008f, 0x38ff, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x5deb, 0x0478, 0x7d03, 0x0479, 0x7d1c, 0x7c20, 0x0479, 0x7c15,\
    0x56ee, 0x0660, 0x7d05, 0x6509, 0x7e2a, 0x620a, 0x7e28, 0x9d85, 0x620a, 0x7e25, 0x6509, 0x7e23, 0x0512, 0x0512,\
    0x02ad, 0x6ac8, 0x7f1e, 0x2003, 0x4800, 0x7ced, 0x9d9d, 0x7802, 0x6209, 0x6ac8, 0x9d9c, 0x0015, 0x7802, 0x620a,\
    0x6ac8, 0x9d9c, 0x0015, 0x0015, 0x7802, 0x620b, 0x6ac8, 0x7c0b, 0x6ddf, 0x7f09, 0x0000, 0x55eb, 0x4d00, 0x7d09,\
    0x52d3, 0x0801, 0x5802, 0x0400, 0x9d64, 0x0007, 0x68cc, 0x680c, 0xc215, 0x52d3, 0x0801, 0x5802, 0x0401, 0xddca,\
    0x9d62, 0x0b70, 0x0311, 0x5313, 0x5fdb, 0x070a, 0x58d3, 0x008b, 0x5efb, 0xc13c, 0x7d15, 0x5ac0, 0x5bc8, 0xc14e,\
    0x7c11, 0x0388, 0x5df0, 0x0dff, 0x0511, 0x1dff, 0x05bc, 0x4d00, 0x7d04, 0x9dc9, 0x0708, 0x5fdb, 0x070a, 0x008b,\
    0x52c3, 0x53cb, 0xc159, 0x7dec, 0x0200, 0x9dba\
}

#endif /* FSL_SDMA_SCRIPT_H_ */
