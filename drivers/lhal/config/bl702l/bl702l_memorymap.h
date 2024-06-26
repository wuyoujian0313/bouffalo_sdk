#ifndef __BL702L_MEMORYMAP_H
#define __BL702L_MEMORYMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/
#define BL702L_FLASH_XIP_BASE        0x23000000
#define BL702L_FLASH_XIP_END         (0x23000000 + 16 * 1024 * 1024)
#define BL702L_FLASH_XIP_REMAP0_BASE 0x33000000
#define BL702L_FLASH_XIP_REMAP0_END  (0x33000000 + 16 * 1024 * 1024)
#define BL702L_FLASH_XIP_REMAP1_BASE 0x43000000
#define BL702L_FLASH_XIP_REMAP1_END  (0x43000000 + 16 * 1024 * 1024)
#define BL702L_FLASH_XIP_REMAP2_BASE 0x53000000
#define BL702L_FLASH_XIP_REMAP2_END  (0x53000000 + 16 * 1024 * 1024)

#define BL702L_PSRAM_XIP_BASE        0x24000000
#define BL702L_PSRAM_XIP_END         (0x24000000 + 16 * 1024 * 1024)
#define BL702L_PSRAM_XIP_REMAP0_BASE 0x34000000
#define BL702L_PSRAM_XIP_REMAP0_END  (0x34000000 + 16 * 1024 * 1024)
#define BL702L_PSRAM_XIP_REMAP1_BASE 0x44000000
#define BL702L_PSRAM_XIP_REMAP1_END  (0x44000000 + 16 * 1024 * 1024)
#define BL702L_PSRAM_XIP_REMAP2_BASE 0x54000000
#define BL702L_PSRAM_XIP_REMAP2_END  (0x54000000 + 16 * 1024 * 1024)

#define BL702L_WRAM_BASE        0x42020000
#define BL702L_WRAM_END         (0x42020000 + 80 * 1024)
#define BL702L_WRAM_REMAP0_BASE 0x22020000
#define BL702L_WRAM_REMAP0_END  (0x22020000 + 80 * 1024)
#define BL702L_WRAM_REMAP1_BASE 0x32020000
#define BL702L_WRAM_REMAP1_END  (0x32020000 + 80 * 1024)
#define BL702L_WRAM_REMAP2_BASE 0x52020000
#define BL702L_WRAM_REMAP2_END  (0x52020000 + 80 * 1024)

#define BL702L_TCM_BASE        0x2201c000
#define BL702L_TCM_END         (0x2201c000 + 16 * 1024)
#define BL702L_TCM_REMAP0_BASE 0x3201c000
#define BL702L_TCM_REMAP0_END  (0x3201c000 + 16 * 1024)
#define BL702L_TCM_REMAP1_BASE 0x4201c000
#define BL702L_TCM_REMAP1_END  (0x4201c000 + 16 * 1024)
#define BL702L_TCM_REMAP2_BASE 0x5201c000
#define BL702L_TCM_REMAP2_END  (0x5201c000 + 16 * 1024)
/*@} end of group Memory_Map_Section */

/* BL702L peripherals base address */
#define GLB_BASE         ((uint32_t)0x40000000)
#define RF_BASE          ((uint32_t)0x40001000)
#define BZ_PHY_BASE      ((uint32_t)0x40001000)
#define BZ_PHY_AGC_BASE  ((uint32_t)0x40001000)
#define GPIP_BASE        ((uint32_t)0x40002000) /*!< AUX module base address */
#define SEC_DBG_BASE     ((uint32_t)0x40003000) /*!< Security Debug module base address */
#define SEC_ENG_BASE     ((uint32_t)0x40004000) /*!< Security Engine module base address */
#define TZC_SEC_BASE     ((uint32_t)0x40005000) /*!< Trustzone control security base address */
#define TZC_NSEC_BASE    ((uint32_t)0x40006000) /*!< Trustzone control none-security base address */
#define EFUSE_BASE       ((uint32_t)0x40007000)
#define EF_DATA_BASE     ((uint32_t)0x40007000)
#define EF_CTRL_BASE     ((uint32_t)0x40007000)
#define CCI_BASE         ((uint32_t)0x40008000)
#define L1C_BASE         ((uint32_t)0x40009000) /*!< L1 cache config base address */
#define UART0_BASE       ((uint32_t)0x4000A000)
#define SPI_BASE         ((uint32_t)0x4000A200)
#define I2C_BASE         ((uint32_t)0x4000A300)
#define PWM_BASE         ((uint32_t)0x4000A400)
#define TIMER_BASE       ((uint32_t)0x4000A500)
#define IR_BASE          ((uint32_t)0x4000A600)
#define CKS_BASE         ((uint32_t)0x4000A700)
#define KYS_BASE         ((uint32_t)0x4000A900)
#define AUADC_BASE       ((uint32_t)0x4000AD00)
#define SF_CTRL_BASE     ((uint32_t)0x4000B000)
#define SF_CTRL_BUF_BASE ((uint32_t)0x4000B600)
#define DMA_BASE         ((uint32_t)0x4000C000)
#define PDS_BASE         ((uint32_t)0x4000E000) /*!< Power down sleep module base address */
#define HBN_BASE         ((uint32_t)0x4000F000) /*!< Hibernate module base address */
#define AON_BASE         ((uint32_t)0x4000F000) /*!< Always on module base address */
#define MAC154_BASE      ((uint32_t)0x4C000000) /*!< MAC154 module base address */

#define HBN_RAM_BASE ((uint32_t)0x40010000)

#endif