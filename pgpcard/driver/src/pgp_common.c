/**
 *-----------------------------------------------------------------------------
 * Title      : Common PGP functions
 * ----------------------------------------------------------------------------
 * File       : pgp_common.h
 * Author     : Ryan Herbst, rherbst@slac.stanford.edu
 * Created    : 2016-08-08
 * Last update: 2016-08-08
 * ----------------------------------------------------------------------------
 * Description:
 * Common PGP functions
 * ----------------------------------------------------------------------------
 * This file is part of the aes_stream_drivers package. It is subject to 
 * the license terms in the LICENSE.txt file found in the top-level directory 
 * of this distribution and at: 
 *    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
 * No part of the aes_stream_drivers package, including this file, may be 
 * copied, modified, propagated, or distributed except according to the terms 
 * contained in the LICENSE.txt file.
 * ----------------------------------------------------------------------------
**/
#include <linux/types.h>
#include <pgp_common.h>

// Display card Info
void PgpCard_InfoShow(struct seq_file *s, struct PgpInfo *info) {
   seq_printf(s,"-------------- Card Info ------------------\n");
   seq_printf(s,"                 Type : 0x%.2x\n",info->type);
   seq_printf(s,"              Version : 0x%.8x\n",info->version);
   seq_printf(s,"               Serial : 0x%.16llx\n",info->serial);
   seq_printf(s,"           BuildStamp : %s\n",info->buildStamp);
   seq_printf(s,"             LaneMask : 0x%.4x\n",info->laneMask);
   seq_printf(s,"            VcPerMask : 0x%.2x\n",info->vcPerMask);
   seq_printf(s,"              PgpRate : %i\n",info->pgpRate);
   seq_printf(s,"            PromPrgEn : %i\n",info->promPrgEn);
   seq_printf(s,"           EvrSupport : %i\n",info->evrSupport);
}


// Display PCI Status
void PgpCard_PciShow(struct seq_file *s, struct PciStatus *status) {
   seq_printf(s,"-------------- PCI Info -------------------\n");
   seq_printf(s,"           PciCommand : 0x%.4x\n",status->pciCommand);
   seq_printf(s,"            PciStatus : 0x%.4x\n",status->pciStatus);
   seq_printf(s,"          PciDCommand : 0x%.4x\n",status->pciDCommand);
   seq_printf(s,"           PciDStatus : 0x%.4x\n",status->pciDStatus);
   seq_printf(s,"          PciLCommand : 0x%.4x\n",status->pciLCommand);
   seq_printf(s,"           PciLStatus : 0x%.4x\n",status->pciLStatus);
   seq_printf(s,"         PciLinkState : 0x%x\n",status->pciLinkState);
   seq_printf(s,"          PciFunction : 0x%x\n",status->pciFunction);
   seq_printf(s,"            PciDevice : 0x%x\n",status->pciDevice);
   seq_printf(s,"               PciBus : 0x%.2x\n",status->pciBus);
   seq_printf(s,"             PciLanes : %i\n",status->pciLanes);
}


// Display Lane Status
void PgpCard_LaneShow(struct seq_file *s, struct PgpStatus *status) {
   seq_printf(s,"-------------- Lane %i --------------------\n",status->lane);
   seq_printf(s,"             LoopBack : %i\n",status->loopBack);
   seq_printf(s,"         LocLinkReady : %i\n",status->locLinkReady);
   seq_printf(s,"         RemLinkReady : %i\n",status->remLinkReady);
   seq_printf(s,"              RxReady : %i\n",status->rxReady);
   seq_printf(s,"              TxReady : %i\n",status->txReady);
   seq_printf(s,"              RxCount : %i\n",status->rxCount);
   seq_printf(s,"           CellErrCnt : %i\n",status->cellErrCnt);
   seq_printf(s,"          LinkDownCnt : %i\n",status->linkDownCnt);
   seq_printf(s,"           LinkErrCnt : %i\n",status->linkErrCnt);
   seq_printf(s,"              FifoErr : %i\n",status->fifoErr);
   seq_printf(s,"              RemData : 0x%.2x\n",status->remData);
   seq_printf(s,"        RemBuffStatus : 0x%.2x\n",status->remBuffStatus);
}

