#ifndef __BL616_MEMORYMAP_H
#define __BL616_MEMORYMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/
#define BL616_OCRAM_BASE                    (0x20FC0000)
#define BL616_OCRAM_END                     (0x20FC0000 + 320 * 1024)
#define BL616_OCRAM_CACHEABLE_BASE          (0x60FC0000)
#define BL616_OCRAM_CACHEABLE_END           (0x60FC0000 + 320 * 1024)
#define BL616_OCRAM_BUSREMAP_BASE           (0x22FC0000)
#define BL616_OCRAM_BUSREMAP_END            (0x22FC0000 + 320 * 1024)
#define BL616_OCRAM_BUSREMAP_CACHEABLE_BASE (0x62FC0000)
#define BL616_OCRAM_BUSREMAP_CACHEABLE_END  (0x62FC0000 + 320 * 1024)

#define BL616_WRAM_BASE                    (0x21010000)
#define BL616_WRAM_END                     (0x21010000 + 160 * 1024)
#define BL616_WRAM_CACHEABLE_BASE          (0x61010000)
#define BL616_WRAM_CACHEABLE_END           (0x61010000 + 160 * 1024)
#define BL616_WRAM_BUSREMAP_BASE           (0x23010000)
#define BL616_WRAM_BUSREMAP_END            (0x23010000 + 160 * 1024)
#define BL616_WRAM_BUSREMAP_CACHEABLE_BASE (0x63010000)
#define BL616_WRAM_BUSREMAP_CACHEABLE_END  (0x63010000 + 160 * 1024)

#define BL616_FLASH_XIP_BASE          (0xA0000000)
#define BL616_FLASH_XIP_END           (0xA0000000 + 64 * 1024 * 1024)
#define BL616_FLASH_XIP_REMAP0_BASE   (0xD0000000)
#define BL616_FLASH_XIP_REMAP0_END    (0xD0000000 + 64 * 1024 * 1024)
#define BL616_FLASH_XIP_BUSREMAP_BASE (0xA0000000)
#define BL616_FLASH_XIP_BUSREMAP_END  (0xA0000000 + 64 * 1024 * 1024)

#define BL616_FLASH2_XIP_BASE          (0x84000000)
#define BL616_FLASH2_XIP_END           (0x84000000 + 64 * 1024 * 1024)
#define BL616_FLASH2_XIP_REMAP0_BASE   (0xD4000000)
#define BL616_FLASH2_XIP_REMAP0_END    (0xD4000000 + 64 * 1024 * 1024)
#define BL616_FLASH2_XIP_BUSREMAP_BASE (0xA4000000)
#define BL616_FLASH2_XIP_BUSREMAP_END  (0xA4000000 + 64 * 1024 * 1024)

#define BL616_PSRAM_BASE          (0x88000000)
#define BL616_PSRAM_END           (0x88000000 + 128 * 1024 * 1024)
#define BL616_PSRAM_REMAP0_BASE   (0xD8000000)
#define BL616_PSRAM_REMAP0_END    (0xD8000000 + 128 * 1024 * 1024)
#define BL616_PSRAM_BUSREMAP_BASE (0xA8000000)
#define BL616_PSRAM_BUSREMAP_END  (0xA8000000 + 128 * 1024 * 1024)

#define BL616_ALLRAM_BASE                    (0x20FC0000)
#define BL616_ALLRAM_END                     (0x20FC0000 + 320 * 1024 + 160 * 1024)
#define BL616_ALLRAM_CACHEABLE_BASE          (0x60FC0000)
#define BL616_ALLRAM_CACHEABLE_END           (0x60FC0000 + 320 * 1024 + 160 * 1024)
#define BL616_ALLRAM_BUSREMAP_BASE           (0x22FC0000)
#define BL616_ALLRAM_BUSREMAP_END            (0x22FC0000 + 320 * 1024 + 160 * 1024)
#define BL616_ALLRAM_BUSREMAP_CACHEABLE_BASE (0x62FC0000)
#define BL616_ALLRAM_BUSREMAP_CACHEABLE_END  (0x62FC0000 + 320 * 1024 + 160 * 1024)

#define GLB_BASE         ((uint32_t)0x20000000)
#define MIX_BASE         ((uint32_t)0x20001000)
#define GPIP_BASE        ((uint32_t)0x20002000)
#define PHY_BASE         ((uint32_t)0x20002800)
#define AGC_BASE         ((uint32_t)0x20002c00)
#define SEC_DBG_BASE     ((uint32_t)0x20003000)
#define SEC_ENG_BASE     ((uint32_t)0x20004000)
#define TZ1_BASE         ((uint32_t)0x20005000)
#define TZC_SEC_BASE     ((uint32_t)0x20005000)
#define TZ2_BASE         ((uint32_t)0x20006000)
#define TZC_NSEC_BASE    ((uint32_t)0x20006000)
#define CCI_BASE         ((uint32_t)0x20008000)
#define MCU_MISC_BASE    ((uint32_t)0x20009000)
#define L1C_BASE         ((uint32_t)0x20009000)
#define UART0_BASE       ((uint32_t)0x2000a000)
#define UART1_BASE       ((uint32_t)0x2000a100)
#define SPI_BASE         ((uint32_t)0x2000a200)
#define I2C0_BASE        ((uint32_t)0x2000a300)
#define PWM_BASE         ((uint32_t)0x2000a400)
#define TIMER_BASE       ((uint32_t)0x2000a500)
#define IR_BASE          ((uint32_t)0x2000a600)
#define CKS_BASE         ((uint32_t)0x2000a700)
#define DBI_BASE         ((uint32_t)0x2000A800)
#define I2C1_BASE        ((uint32_t)0x2000a900)
#define ISO11898_BASE    ((uint32_t)0x2000aa00)
#define I2S_BASE         ((uint32_t)0x2000ab00)
#define AUADC_BASE       ((uint32_t)0x2000a000)
#define QSPI_BASE        ((uint32_t)0x2000b000)
#define SF_CTRL_BASE     ((uint32_t)0x2000b000)
#define SF_CTRL_BUF_BASE ((uint32_t)0x2000b600)
#define DMA_BASE         ((uint32_t)0x2000c000)
#define SDU_BASE         ((uint32_t)0x2000d000)
#define PDS_BASE         ((uint32_t)0x2000e000)
#define HBN_BASE         ((uint32_t)0x2000f000)
#define AON_BASE         ((uint32_t)0x2000f000)
#define MM_MISC_BASE     ((uint32_t)0x20050000)
#define PSRAM_CTRL_BASE  ((uint32_t)0x20052000)
#define AUDAC_BASE       ((uint32_t)0x20055000)
#define EFUSE_BASE       ((uint32_t)0x20056000)
#define EF_DATA_BASE     ((uint32_t)0x20056000)
#define EF_CTRL_BASE     ((uint32_t)0x20056000)
#define DVP2AXI0_BASE    ((uint32_t)0x20057000)
#define DVP2AXI1_BASE    ((uint32_t)0x20058000)
#define MJPEG_BASE       ((uint32_t)0x20059000)
#define SDH_BASE         ((uint32_t)0x20060000)
#define EMAC_BASE        ((uint32_t)0x20070000)
#define USB_BASE         ((uint32_t)0x20072000)
#define HBN_RAM_BASE     ((uint32_t)0x20010000)

#endif