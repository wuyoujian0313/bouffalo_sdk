﻿SET(CPU_ARCH "RISCV")
SET(MCPU "riscv-e24")
SET(MARCH "rv32imafc")
SET(MABI "ilp32f")

list(APPEND GLOBAL_C_FLAGS -march=${MARCH} -mabi=${MABI})
list(APPEND GLOBAL_LD_FLAGS -march=${MARCH} -mabi=${MABI})

SET(LINKER_SCRIPT ${CMAKE_CURRENT_LIST_DIR}/bl702_flash.ld)