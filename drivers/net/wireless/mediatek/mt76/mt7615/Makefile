#SPDX-License-Identifier: ISC

obj-$(CPTCFG_MT7615_COMMON) += mt7615-common.o
obj-$(CPTCFG_MT7615E) += mt7615e.o
obj-$(CPTCFG_MT7663U) += mt7663u.o

CFLAGS_trace.o := -I$(src)

mt7615-common-y := main.o init.o mcu.o eeprom.o mac.o \
		   debugfs.o trace.o

mt7615e-y := pci.o pci_init.o dma.o pci_mac.o mmio.o
mt7615e-$(CPTCFG_MT7622_WMAC) += soc.o

mt7663u-y := usb.o usb_mcu.o usb_init.o
