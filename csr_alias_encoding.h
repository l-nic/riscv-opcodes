#ifdef DECLARE_CSR_ALIAS
/* Ubadaddr is 0x043 in 1.9.1, but 0x043 is utval in 1.10.  */
DECLARE_CSR_ALIAS(ubadaddr, CSR_UTVAL)
/* Sbadaddr is 0x143 in 1.9.1, but 0x143 is stval in 1.10.  */
DECLARE_CSR_ALIAS(sbadaddr, CSR_STVAL)
/* Sptbr is 0x180 in 1.9.1, but 0x180 is satp in 1.10.  */
DECLARE_CSR_ALIAS(sptbr, CSR_SATP)
/* Mbadaddr is 0x343 in 1.9.1, but 0x343 is mtval in 1.10.  */
DECLARE_CSR_ALIAS(mbadaddr, CSR_MTVAL)
#endif

