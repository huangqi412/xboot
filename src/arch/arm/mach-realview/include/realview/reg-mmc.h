#ifndef __REALVIEW_REG_MMC_H__
#define __REALVIEW_REG_MMC_H__

#include <configs.h>
#include <default.h>

/*
 * prime cell pl181 mci register
 */
#define REALVIEW_MCI_POWER				(0x10005000 + 0x000)
#define REALVIEW_MCI_CLOCK				(0x10005000 + 0x004)
#define REALVIEW_MCI_ARGUMENT			(0x10005000 + 0x008)
#define REALVIEW_MCI_COMMAND			(0x10005000 + 0x00c)

#define REALVIEW_MCI_RESPCMD			(0x10005000 + 0x010)
#define REALVIEW_MCI_RESP0				(0x10005000 + 0x014)
#define REALVIEW_MCI_RESP1				(0x10005000 + 0x018)
#define REALVIEW_MCI_RESP2				(0x10005000 + 0x01c)
#define REALVIEW_MCI_RESP3				(0x10005000 + 0x020)

#define REALVIEW_MCI_DATA_TIMER			(0x10005000 + 0x024)
#define REALVIEW_MCI_DATA_LENGTH		(0x10005000 + 0x028)
#define REALVIEW_MCI_DATA_CTRL			(0x10005000 + 0x02c)
#define REALVIEW_MCI_DATA_CNT			(0x10005000 + 0x030)

#define REALVIEW_MCI_STATUS				(0x10005000 + 0x034)
#define REALVIEW_MCI_CLEAR				(0x10005000 + 0x038)
#define REALVIEW_MCI_MASK0				(0x10005000 + 0x03c)
#define REALVIEW_MCI_MASK1				(0x10005000 + 0x040)
#define REALVIEW_MCI_SELECT				(0x10005000 + 0x044)
#define REALVIEW_MCI_FIFO_CNT			(0x10005000 + 0x048)
#define REALVIEW_MCI_FIFO				(0x10005000 + 0x080)


#endif /* __REALVIEW_REG_MMC_H__ */
