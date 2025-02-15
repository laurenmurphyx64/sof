/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 AMD.All rights reserved.
 *
 * Author:	Basavaraj Hiregoudar <basavaraj.hiregoudar@amd.com>
 *		Bala Kishore <balakishore.pati@amd.com>
 */

#ifndef _RMB_OFFSET_HEADER
#define _RMB_OFFSET_HEADER

#define PU_REGISTER_BASE        (0x9FD00000 - 0x01240000)
#define PU_SCRATCH_REG_BASE	(0x9FF00000 - 0x01250000)

/* Registers from ACP_DMA block */
#define ACP_DMA_CNTL_0			0x1240000
#define ACP_DMA_DSCR_STRT_IDX_0		0x1240020
#define ACP_DMA_DSCR_CNT_0		0x1240040
#define ACP_DMA_PRIO_0			0x1240060
#define ACP_DMA_CUR_DSCR_0		0x1240080
#define ACP_DMA_CUR_TRANS_CNT_0		0x12400A0
#define ACP_DMA_DESC_BASE_ADDR		0x12400E0
#define ACP_DMA_DESC_MAX_NUM_DSCR	0x12400E4
#define ACP_DMA_CH_STS			0x12400E8
#define ACP_DMA_CH_GROUP		0x12400EC
#define ACP_DMA_CH_RST_STS		0x12400F0

/* Registers from ACP_MISC block */
#define ACP_DSP0_INTR_CNTL		0x1241800
#define ACP_DSP0_INTR_STAT		0x1241804
#define ACP_DSP_SW_INTR_CNTL		0x1241808
#define ACP_DSP_SW_INTR_STAT		0x124180C
#define ACP_SW_INTR_TRIG		0x1241810
#define DSP_INTERRUPT_ROUTING_CTRL_0	0x1241814
#define DSP_INTERRUPT_ROUTING_CTRL_1	0x1241818
#define ACP_AXI2DAGB_SEM_0		0x1241874
#define ACP_DSP0_INTR_CNTL1		0x1241920
#define ACP_DSP0_INTR_STAT1		0x1241924
#define ACP_SRBM_CLIENT_BASE_ADDR	0x12419EC
#define ACP_SRBM_CLIENT_RDDATA		0x12419F0
#define ACP_SRBM_CYCLE_STS		0x12419F4
#define ACP_SRBM_CLIENT_CONFIG		0x12419F8

/* Registers from ACP_P1_MISC block */
#define ACP_EXTERNAL_INTR_ENB		0x1241A00
#define ACP_EXTERNAL_INTR_CNTL		0x1241A04
#define ACP_EXTERNAL_INTR_CNTL1		0x1241A08
#define ACP_EXTERNAL_INTR_STAT		0x1241A0C
#define ACP_EXTERNAL_INTR_STAT1		0x1241A10

/* Registers from ACP_I2S_TDM block */
#define ACP_I2STDM_IER			0x1242400
#define ACP_I2STDM_IRER			0x1242404
#define ACP_I2STDM_RXFRMT		0x1242408
#define ACP_I2STDM_ITER			0x124240C
#define ACP_I2STDM_TXFRMT		0x1242410
#define ACP_I2STDM0_MSTRCLKGEN		0x1242414
#define ACP_I2STDM1_MSTRCLKGEN		0x1242418
#define ACP_I2STDM2_MSTRCLKGEN		0x124241C
#define ACP_I2STDM_REFCLKGEN		0x1242420

/* Registers from ACP_BT_TDM block */
#define ACP_BTTDM_IER			0x1242800
#define ACP_BTTDM_IRER			0x1242804
#define ACP_BTTDM_RXFRMT		0x1242808
#define ACP_BTTDM_ITER			0x124280C
#define ACP_BTTDM_TXFRMT		0x1242810
#define ACP_HSTDM_IER			0x1242814
#define ACP_HSTDM_IRER			0x1242818
#define ACP_HSTDM_RXFRMT		0x124281C
#define ACP_HSTDM_ITER			0x1242820
#define ACP_HSTDM_TXFRMT		0x1242824

/* Registers from ACP_WOV block */
#define ACP_WOV_PDM_ENABLE			0x1242C04
#define ACP_WOV_PDM_DMA_ENABLE			0x1242C08
#define ACP_WOV_RX_RINGBUFADDR			0x1242C0C
#define ACP_WOV_RX_RINGBUFSIZE			0x1242C10
#define ACP_WOV_RX_LINKPOSITIONCNTR		0x1242C14
#define ACP_WOV_RX_LINEARPOSITIONCNTR_HIGH	0x1242C18
#define ACP_WOV_RX_LINEARPOSITIONCNTR_LOW	0x1242C1C
#define ACP_WOV_RX_INTR_WATERMARK_SIZE		0x1242C20
#define ACP_WOV_PDM_FIFO_FLUSH			0x1242C24
#define ACP_WOV_PDM_NO_OF_CHANNELS		0x1242C28
#define ACP_WOV_PDM_DECIMATION_FACTOR		0x1242C2C
#define ACP_WOV_PDM_VAD_CTRL			0x1242C30
#define ACP_WOV_WAKE				0x1242C54
#define ACP_WOV_BUFFER_STATUS			0x1242C58
#define ACP_WOV_MISC_CTRL			0x1242C5C
#define ACP_WOV_CLK_CTRL			0x1242C60
#define ACP_PDM_VAD_DYNAMIC_CLK_GATING_EN	0x1242C64
#define ACP_WOV_ERROR_STATUS_REGISTER		0x1242C68
#define ACP_PDM_CLKDIV				0x1242C6C

/* Registers from ACP_P1_AUDIO_BUFFERS block */
#define ACP_P1_I2S_RX_RINGBUFADDR		0x1243A00
#define ACP_P1_I2S_RX_RINGBUFSIZE		0x1243A04
#define ACP_P1_I2S_RX_LINKPOSITIONCNTR		0x1243A08
#define ACP_P1_I2S_RX_FIFOADDR			0x1243A0C
#define ACP_P1_I2S_RX_FIFOSIZE			0x1243A10
#define ACP_P1_I2S_RX_DMA_SIZE			0x1243A14
#define ACP_P1_I2S_RX_LINEARPOSITIONCNTR_HIGH	0x1243A18
#define ACP_P1_I2S_RX_LINEARPOSITIONCNTR_LOW	0x1243A1C
#define ACP_P1_I2S_RX_INTR_WATERMARK_SIZE	0x1243A20
#define ACP_P1_I2S_TX_RINGBUFADDR		0x1243A24
#define ACP_P1_I2S_TX_RINGBUFSIZE		0x1243A28
#define ACP_P1_I2S_TX_LINKPOSITIONCNTR		0x1243A2C
#define ACP_P1_I2S_TX_FIFOADDR			0x1243A30
#define ACP_P1_I2S_TX_FIFOSIZE			0x1243A34
#define ACP_P1_I2S_TX_DMA_SIZE			0x1243A38
#define ACP_P1_I2S_TX_LINEARPOSITIONCNTR_HIGH	0x1243A3C
#define ACP_P1_I2S_TX_LINEARPOSITIONCNTR_LOW	0x1243A40
#define ACP_P1_I2S_TX_INTR_WATERMARK_SIZE	0x1243A44
#define ACP_P1_BT_RX_RINGBUFADDR		0x1243A48
#define ACP_P1_BT_RX_RINGBUFSIZE		0x1243A4C
#define ACP_P1_BT_RX_LINKPOSITIONCNTR		0x1243A50
#define ACP_P1_BT_RX_FIFOADDR			0x1243A54
#define ACP_P1_BT_RX_FIFOSIZE			0x1243A58
#define ACP_P1_BT_RX_DMA_SIZE			0x1243A5C
#define ACP_P1_BT_RX_LINEARPOSITIONCNTR_HIGH	0x1243A60
#define ACP_P1_BT_RX_LINEARPOSITIONCNTR_LOW	0x1243A64
#define ACP_P1_BT_RX_INTR_WATERMARK_SIZE	0x1243A68
#define ACP_P1_BT_TX_RINGBUFADDR		0x1243A6C
#define ACP_P1_BT_TX_RINGBUFSIZE		0x1243A70
#define ACP_P1_BT_TX_LINKPOSITIONCNTR		0x1243A74
#define ACP_P1_BT_TX_FIFOADDR			0x1243A78
#define ACP_P1_BT_TX_FIFOSIZE			0x1243A7C
#define ACP_P1_BT_TX_DMA_SIZE			0x1243A80
#define ACP_P1_BT_TX_LINEARPOSITIONCNTR_HIGH	0x1243A84
#define ACP_P1_BT_TX_LINEARPOSITIONCNTR_LOW	0x1243A88
#define ACP_P1_BT_TX_INTR_WATERMARK_SIZE	0x1243A8C
#define ACP_P1_HS_RX_RINGBUFADDR		0x1243A90
#define ACP_P1_HS_RX_RINGBUFSIZE		0x1243A94
#define ACP_P1_HS_RX_LINKPOSITIONCNTR		0x1243A98
#define ACP_P1_HS_RX_FIFOADDR			0x1243A9C
#define ACP_P1_HS_RX_FIFOSIZE			0x1243AA0
#define ACP_P1_HS_RX_DMA_SIZE			0x1243AA4
#define ACP_P1_HS_RX_LINEARPOSITIONCNTR_HIGH	0x1243AA8
#define ACP_P1_HS_RX_LINEARPOSITIONCNTR_LOW	0x1243AAC
#define ACP_P1_HS_RX_INTR_WATERMARK_SIZE	0x1243AB0
#define ACP_P1_HS_TX_RINGBUFADDR		0x1243AB4
#define ACP_P1_HS_TX_RINGBUFSIZE		0x1243AB8
#define ACP_P1_HS_TX_LINKPOSITIONCNTR		0x1243ABC
#define ACP_P1_HS_TX_FIFOADDR			0x1243AC0
#define ACP_P1_HS_TX_FIFOSIZE			0x1243AC4
#define ACP_P1_HS_TX_DMA_SIZE			0x1243AC8
#define ACP_P1_HS_TX_LINEARPOSITIONCNTR_HIGH	0x1243ACC
#define ACP_P1_HS_TX_LINEARPOSITIONCNTR_LOW	0x1243AD0
#define ACP_P1_HS_TX_INTR_WATERMARK_SIZE	0x1243AD4

#define MP1_SMN_C2PMSG_69	0x58A14
#define MP1_SMN_C2PMSG_85	0x58A54
#define MP1_SMN_C2PMSG_93	0x58A74

#define MP0_C2PMSG_73		0x3810A24
#define MP0_C2PMSG_114		0x3810AC8
#endif
