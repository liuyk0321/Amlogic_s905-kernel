/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 * Definitions for MIBs
 *
 * Author: Hideaki YOSHIFUJI <yoshfuji@linux-ipv6.org>
 */

#ifndef _LINUX_SNMP_H
#define _LINUX_SNMP_H

/* ipstats mib definitions */
/*
 * RFC 1213:  MIB-II
 * RFC 2011 (updates 1213):  SNMPv2-MIB-IP
 * RFC 2863:  Interfaces Group MIB
 * RFC 2465:  IPv6 MIB: General Group
 * draft-ietf-ipv6-rfc2011-update-10.txt: MIB for IP: IP Statistics Tables
 */
enum
{
	IPSTATS_MIB_NUM = 0,
/* frequently written fields in fast path, kept in same cache line */
	IPSTATS_MIB_INPKTS,			/* InReceives */
	IPSTATS_MIB_INOCTETS,			/* InOctets */
	IPSTATS_MIB_INDELIVERS,			/* InDelivers */
	IPSTATS_MIB_OUTFORWDATAGRAMS,		/* OutForwDatagrams */
	IPSTATS_MIB_OUTPKTS,			/* OutRequests */
	IPSTATS_MIB_OUTOCTETS,			/* OutOctets */
/* other fields */
	IPSTATS_MIB_INHDRERRORS,		/* InHdrErrors */
	IPSTATS_MIB_INTOOBIGERRORS,		/* InTooBigErrors */
	IPSTATS_MIB_INNOROUTES,			/* InNoRoutes */
	IPSTATS_MIB_INADDRERRORS,		/* InAddrErrors */
	IPSTATS_MIB_INUNKNOWNPROTOS,		/* InUnknownProtos */
	IPSTATS_MIB_INTRUNCATEDPKTS,		/* InTruncatedPkts */
	IPSTATS_MIB_INDISCARDS,			/* InDiscards */
	IPSTATS_MIB_OUTDISCARDS,		/* OutDiscards */
	IPSTATS_MIB_OUTNOROUTES,		/* OutNoRoutes */
	IPSTATS_MIB_REASMTIMEOUT,		/* ReasmTimeout */
	IPSTATS_MIB_REASMREQDS,			/* ReasmReqds */
	IPSTATS_MIB_REASMOKS,			/* ReasmOKs */
	IPSTATS_MIB_REASMFAILS,			/* ReasmFails */
	IPSTATS_MIB_FRAGOKS,			/* FragOKs */
	IPSTATS_MIB_FRAGFAILS,			/* FragFails */
	IPSTATS_MIB_FRAGCREATES,		/* FragCreates */
	IPSTATS_MIB_INMCASTPKTS,		/* InMcastPkts */
	IPSTATS_MIB_OUTMCASTPKTS,		/* OutMcastPkts */
	IPSTATS_MIB_INBCASTPKTS,		/* InBcastPkts */
	IPSTATS_MIB_OUTBCASTPKTS,		/* OutBcastPkts */
	IPSTATS_MIB_INMCASTOCTETS,		/* InMcastOctets */
	IPSTATS_MIB_OUTMCASTOCTETS,		/* OutMcastOctets */
	IPSTATS_MIB_INBCASTOCTETS,		/* InBcastOctets */
	IPSTATS_MIB_OUTBCASTOCTETS,		/* OutBcastOctets */
	IPSTATS_MIB_CSUMERRORS,			/* InCsumErrors */
	IPSTATS_MIB_NOECTPKTS,			/* InNoECTPkts */
	IPSTATS_MIB_ECT1PKTS,			/* InECT1Pkts */
	IPSTATS_MIB_ECT0PKTS,			/* InECT0Pkts */
	IPSTATS_MIB_CEPKTS,			/* InCEPkts */
	IPSTATS_MIB_REASM_OVERLAPS,		/* ReasmOverlaps */
	__IPSTATS_MIB_MAX
};

/* icmp mib definitions */
/*
 * RFC 1213:  MIB-II ICMP Group
 * RFC 2011 (updates 1213):  SNMPv2 MIB for IP: ICMP group
 */
enum
{
	ICMP_MIB_NUM = 0,
	ICMP_MIB_INMSGS,			/* InMsgs */
	ICMP_MIB_INERRORS,			/* InErrors */
	ICMP_MIB_INDESTUNREACHS,		/* InDestUnreachs */
	ICMP_MIB_INTIMEEXCDS,			/* InTimeExcds */
	ICMP_MIB_INPARMPROBS,			/* InParmProbs */
	ICMP_MIB_INSRCQUENCHS,			/* InSrcQuenchs */
	ICMP_MIB_INREDIRECTS,			/* InRedirects */
	ICMP_MIB_INECHOS,			/* InEchos */
	ICMP_MIB_INECHOREPS,			/* InEchoReps */
	ICMP_MIB_INTIMESTAMPS,			/* InTimestamps */
	ICMP_MIB_INTIMESTAMPREPS,		/* InTimestampReps */
	ICMP_MIB_INADDRMASKS,			/* InAddrMasks */
	ICMP_MIB_INADDRMASKREPS,		/* InAddrMaskReps */
	ICMP_MIB_OUTMSGS,			/* OutMsgs */
	ICMP_MIB_OUTERRORS,			/* OutErrors */
	ICMP_MIB_OUTDESTUNREACHS,		/* OutDestUnreachs */
	ICMP_MIB_OUTTIMEEXCDS,			/* OutTimeExcds */
	ICMP_MIB_OUTPARMPROBS,			/* OutParmProbs */
	ICMP_MIB_OUTSRCQUENCHS,			/* OutSrcQuenchs */
	ICMP_MIB_OUTREDIRECTS,			/* OutRedirects */
	ICMP_MIB_OUTECHOS,			/* OutEchos */
	ICMP_MIB_OUTECHOREPS,			/* OutEchoReps */
	ICMP_MIB_OUTTIMESTAMPS,			/* OutTimestamps */
	ICMP_MIB_OUTTIMESTAMPREPS,		/* OutTimestampReps */
	ICMP_MIB_OUTADDRMASKS,			/* OutAddrMasks */
	ICMP_MIB_OUTADDRMASKREPS,		/* OutAddrMaskReps */
	ICMP_MIB_CSUMERRORS,			/* InCsumErrors */
	__ICMP_MIB_MAX
};

#define __ICMPMSG_MIB_MAX 512	/* Out+In for all 8-bit ICMP types */

/* icmp6 mib definitions */
/*
 * RFC 2466:  ICMPv6-MIB
 */
enum
{
	ICMP6_MIB_NUM = 0,
	ICMP6_MIB_INMSGS,			/* InMsgs */
	ICMP6_MIB_INERRORS,			/* InErrors */
	ICMP6_MIB_OUTMSGS,			/* OutMsgs */
	ICMP6_MIB_OUTERRORS,			/* OutErrors */
	ICMP6_MIB_CSUMERRORS,			/* InCsumErrors */
	__ICMP6_MIB_MAX
};

#define __ICMP6MSG_MIB_MAX 512 /* Out+In for all 8-bit ICMPv6 types */

/* tcp mib definitions */
/*
 * RFC 1213:  MIB-II TCP group
 * RFC 2012 (updates 1213):  SNMPv2-MIB-TCP
 */
enum
{
	TCP_MIB_NUM = 0,
	TCP_MIB_RTOALGORITHM,			/* RtoAlgorithm */
	TCP_MIB_RTOMIN,				/* RtoMin */
	TCP_MIB_RTOMAX,				/* RtoMax */
	TCP_MIB_MAXCONN,			/* MaxConn */
	TCP_MIB_ACTIVEOPENS,			/* ActiveOpens */
	TCP_MIB_PASSIVEOPENS,			/* PassiveOpens */
	TCP_MIB_ATTEMPTFAILS,			/* AttemptFails */
	TCP_MIB_ESTABRESETS,			/* EstabResets */
	TCP_MIB_CURRESTAB,			/* CurrEstab */
	TCP_MIB_INSEGS,				/* InSegs */
	TCP_MIB_OUTSEGS,			/* OutSegs */
	TCP_MIB_RETRANSSEGS,			/* RetransSegs */
	TCP_MIB_INERRS,				/* InErrs */
	TCP_MIB_OUTRSTS,			/* OutRsts */
	TCP_MIB_CSUMERRORS,			/* InCsumErrors */
	__TCP_MIB_MAX
};

/* udp mib definitions */
/*
 * RFC 1213:  MIB-II UDP group
 * RFC 2013 (updates 1213):  SNMPv2-MIB-UDP
 */
enum
{
	UDP_MIB_NUM = 0,
	UDP_MIB_INDATAGRAMS,			/* InDatagrams */
	UDP_MIB_NOPORTS,			/* NoPorts */
	UDP_MIB_INERRORS,			/* InErrors */
	UDP_MIB_OUTDATAGRAMS,			/* OutDatagrams */
	UDP_MIB_RCVBUFERRORS,			/* RcvbufErrors */
	UDP_MIB_SNDBUFERRORS,			/* SndbufErrors */
	UDP_MIB_CSUMERRORS,			/* InCsumErrors */
	UDP_MIB_IGNOREDMULTI,			/* IgnoredMulti */
	__UDP_MIB_MAX
};

/* linux mib definitions */
enum
{
	LINUX_MIB_NUM = 0,
	LINUX_MIB_SYNCOOKIESSENT,		/* SyncookiesSent */
	LINUX_MIB_SYNCOOKIESRECV,		/* SyncookiesRecv */
	LINUX_MIB_SYNCOOKIESFAILED,		/* SyncookiesFailed */
	LINUX_MIB_EMBRYONICRSTS,		/* EmbryonicRsts */
	LINUX_MIB_PRUNECALLED,			/* PruneCalled */
	LINUX_MIB_RCVPRUNED,			/* RcvPruned */
	LINUX_MIB_OFOPRUNED,			/* OfoPruned */
	LINUX_MIB_OUTOFWINDOWICMPS,		/* OutOfWindowIcmps */
	LINUX_MIB_LOCKDROPPEDICMPS,		/* LockDroppedIcmps */
	LINUX_MIB_ARPFILTER,			/* ArpFilter */
	LINUX_MIB_TIMEWAITED,			/* TimeWaited */
	LINUX_MIB_TIMEWAITRECYCLED,		/* TimeWaitRecycled */
	LINUX_MIB_TIMEWAITKILLED,		/* TimeWaitKilled */
	LINUX_MIB_PAWSACTIVEREJECTED,		/* PAWSActiveRejected */
	LINUX_MIB_PAWSESTABREJECTED,		/* PAWSEstabRejected */
	LINUX_MIB_DELAYEDACKS,			/* DelayedACKs */
	LINUX_MIB_DELAYEDACKLOCKED,		/* DelayedACKLocked */
	LINUX_MIB_DELAYEDACKLOST,		/* DelayedACKLost */
	LINUX_MIB_LISTENOVERFLOWS,		/* ListenOverflows */
	LINUX_MIB_LISTENDROPS,			/* ListenDrops */
	LINUX_MIB_TCPHPHITS,			/* TCPHPHits */
	LINUX_MIB_TCPPUREACKS,			/* TCPPureAcks */
	LINUX_MIB_TCPHPACKS,			/* TCPHPAcks */
	LINUX_MIB_TCPRENORECOVERY,		/* TCPRenoRecovery */
	LINUX_MIB_TCPSACKRECOVERY,		/* TCPSackRecovery */
	LINUX_MIB_TCPSACKRENEGING,		/* TCPSACKReneging */
	LINUX_MIB_TCPSACKREORDER,		/* TCPSACKReorder */
	LINUX_MIB_TCPRENOREORDER,		/* TCPRenoReorder */
	LINUX_MIB_TCPTSREORDER,			/* TCPTSReorder */
	LINUX_MIB_TCPFULLUNDO,			/* TCPFullUndo */
	LINUX_MIB_TCPPARTIALUNDO,		/* TCPPartialUndo */
	LINUX_MIB_TCPDSACKUNDO,			/* TCPDSACKUndo */
	LINUX_MIB_TCPLOSSUNDO,			/* TCPLossUndo */
	LINUX_MIB_TCPLOSTRETRANSMIT,		/* TCPLostRetransmit */
	LINUX_MIB_TCPRENOFAILURES,		/* TCPRenoFailures */
	LINUX_MIB_TCPSACKFAILURES,		/* TCPSackFailures */
	LINUX_MIB_TCPLOSSFAILURES,		/* TCPLossFailures */
	LINUX_MIB_TCPFASTRETRANS,		/* TCPFastRetrans */
	LINUX_MIB_TCPSLOWSTARTRETRANS,		/* TCPSlowStartRetrans */
	LINUX_MIB_TCPTIMEOUTS,			/* TCPTimeouts */
	LINUX_MIB_TCPLOSSPROBES,		/* TCPLossProbes */
	LINUX_MIB_TCPLOSSPROBERECOVERY,		/* TCPLossProbeRecovery */
	LINUX_MIB_TCPRENORECOVERYFAIL,		/* TCPRenoRecoveryFail */
	LINUX_MIB_TCPSACKRECOVERYFAIL,		/* TCPSackRecoveryFail */
	LINUX_MIB_TCPRCVCOLLAPSED,		/* TCPRcvCollapsed */
	LINUX_MIB_TCPDSACKOLDSENT,		/* TCPDSACKOldSent */
	LINUX_MIB_TCPDSACKOFOSENT,		/* TCPDSACKOfoSent */
	LINUX_MIB_TCPDSACKRECV,			/* TCPDSACKRecv */
	LINUX_MIB_TCPDSACKOFORECV,		/* TCPDSACKOfoRecv */
	LINUX_MIB_TCPABORTONDATA,		/* TCPAbortOnData */
	LINUX_MIB_TCPABORTONCLOSE,		/* TCPAbortOnClose */
	LINUX_MIB_TCPABORTONMEMORY,		/* TCPAbortOnMemory */
	LINUX_MIB_TCPABORTONTIMEOUT,		/* TCPAbortOnTimeout */
	LINUX_MIB_TCPABORTONLINGER,		/* TCPAbortOnLinger */
	LINUX_MIB_TCPABORTFAILED,		/* TCPAbortFailed */
	LINUX_MIB_TCPMEMORYPRESSURES,		/* TCPMemoryPressures */
	LINUX_MIB_TCPMEMORYPRESSURESCHRONO,	/* TCPMemoryPressuresChrono */
	LINUX_MIB_TCPSACKDISCARD,		/* TCPSACKDiscard */
	LINUX_MIB_TCPDSACKIGNOREDOLD,		/* TCPSACKIgnoredOld */
	LINUX_MIB_TCPDSACKIGNOREDNOUNDO,	/* TCPSACKIgnoredNoUndo */
	LINUX_MIB_TCPSPURIOUSRTOS,		/* TCPSpuriousRTOs */
	LINUX_MIB_TCPMD5NOTFOUND,		/* TCPMD5NotFound */
	LINUX_MIB_TCPMD5UNEXPECTED,		/* TCPMD5Unexpected */
	LINUX_MIB_TCPMD5FAILURE,		/* TCPMD5Failure */
	LINUX_MIB_SACKSHIFTED,
	LINUX_MIB_SACKMERGED,
	LINUX_MIB_SACKSHIFTFALLBACK,
	LINUX_MIB_TCPBACKLOGDROP,
	LINUX_MIB_PFMEMALLOCDROP,
	LINUX_MIB_TCPMINTTLDROP, /* RFC 5082 */
	LINUX_MIB_TCPDEFERACCEPTDROP,
	LINUX_MIB_IPRPFILTER, /* IP Reverse Path Filter (rp_filter) */
	LINUX_MIB_TCPTIMEWAITOVERFLOW,		/* TCPTimeWaitOverflow */
	LINUX_MIB_TCPREQQFULLDOCOOKIES,		/* TCPReqQFullDoCookies */
	LINUX_MIB_TCPREQQFULLDROP,		/* TCPReqQFullDrop */
	LINUX_MIB_TCPRETRANSFAIL,		/* TCPRetransFail */
	LINUX_MIB_TCPRCVCOALESCE,		/* TCPRcvCoalesce */
	LINUX_MIB_TCPBACKLOGCOALESCE,		/* TCPBacklogCoalesce */
	LINUX_MIB_TCPOFOQUEUE,			/* TCPOFOQueue */
	LINUX_MIB_TCPOFODROP,			/* TCPOFODrop */
	LINUX_MIB_TCPOFOMERGE,			/* TCPOFOMerge */
	LINUX_MIB_TCPCHALLENGEACK,		/* TCPChallengeACK */
	LINUX_MIB_TCPSYNCHALLENGE,		/* TCPSYNChallenge */
	LINUX_MIB_TCPFASTOPENACTIVE,		/* TCPFastOpenActive */
	LINUX_MIB_TCPFASTOPENACTIVEFAIL,	/* TCPFastOpenActiveFail */
	LINUX_MIB_TCPFASTOPENPASSIVE,		/* TCPFastOpenPassive*/
	LINUX_MIB_TCPFASTOPENPASSIVEFAIL,	/* TCPFastOpenPassiveFail */
	LINUX_MIB_TCPFASTOPENLISTENOVERFLOW,	/* TCPFastOpenListenOverflow */
	LINUX_MIB_TCPFASTOPENCOOKIEREQD,	/* TCPFastOpenCookieReqd */
	LINUX_MIB_TCPFASTOPENBLACKHOLE,		/* TCPFastOpenBlackholeDetect */
	LINUX_MIB_TCPSPURIOUS_RTX_HOSTQUEUES, /* TCPSpuriousRtxHostQueues */
	LINUX_MIB_BUSYPOLLRXPACKETS,		/* BusyPollRxPackets */
	LINUX_MIB_TCPAUTOCORKING,		/* TCPAutoCorking */
	LINUX_MIB_TCPFROMZEROWINDOWADV,		/* TCPFromZeroWindowAdv */
	LINUX_MIB_TCPTOZEROWINDOWADV,		/* TCPToZeroWindowAdv */
	LINUX_MIB_TCPWANTZEROWINDOWADV,		/* TCPWantZeroWindowAdv */
	LINUX_MIB_TCPSYNRETRANS,		/* TCPSynRetrans */
	LINUX_MIB_TCPORIGDATASENT,		/* TCPOrigDataSent */
	LINUX_MIB_TCPHYSTARTTRAINDETECT,	/* TCPHystartTrainDetect */
	LINUX_MIB_TCPHYSTARTTRAINCWND,		/* TCPHystartTrainCwnd */
	LINUX_MIB_TCPHYSTARTDELAYDETECT,	/* TCPHystartDelayDetect */
	LINUX_MIB_TCPHYSTARTDELAYCWND,		/* TCPHystartDelayCwnd */
	LINUX_MIB_TCPACKSKIPPEDSYNRECV,		/* TCPACKSkippedSynRecv */
	LINUX_MIB_TCPACKSKIPPEDPAWS,		/* TCPACKSkippedPAWS */
	LINUX_MIB_TCPACKSKIPPEDSEQ,		/* TCPACKSkippedSeq */
	LINUX_MIB_TCPACKSKIPPEDFINWAIT2,	/* TCPACKSkippedFinWait2 */
	LINUX_MIB_TCPACKSKIPPEDTIMEWAIT,	/* TCPACKSkippedTimeWait */
	LINUX_MIB_TCPACKSKIPPEDCHALLENGE,	/* TCPACKSkippedChallenge */
	LINUX_MIB_TCPWINPROBE,			/* TCPWinProbe */
	LINUX_MIB_TCPKEEPALIVE,			/* TCPKeepAlive */
	LINUX_MIB_TCPMTUPFAIL,			/* TCPMTUPFail */
	LINUX_MIB_TCPMTUPSUCCESS,		/* TCPMTUPSuccess */
	LINUX_MIB_TCPDELIVERED,			/* TCPDelivered */
	LINUX_MIB_TCPDELIVEREDCE,		/* TCPDeliveredCE */
	LINUX_MIB_TCPACKCOMPRESSED,		/* TCPAckCompressed */
	LINUX_MIB_TCPZEROWINDOWDROP,		/* TCPZeroWindowDrop */
	LINUX_MIB_TCPRCVQDROP,			/* TCPRcvQDrop */
	LINUX_MIB_TCPWQUEUETOOBIG,		/* TCPWqueueTooBig */
	__LINUX_MIB_MAX
};

/* linux Xfrm mib definitions */
enum
{
	LINUX_MIB_XFRMNUM = 0,
	LINUX_MIB_XFRMINERROR,			/* XfrmInError */
	LINUX_MIB_XFRMINBUFFERERROR,		/* XfrmInBufferError */
	LINUX_MIB_XFRMINHDRERROR,		/* XfrmInHdrError */
	LINUX_MIB_XFRMINNOSTATES,		/* XfrmInNoStates */
	LINUX_MIB_XFRMINSTATEPROTOERROR,	/* XfrmInStateProtoError */
	LINUX_MIB_XFRMINSTATEMODEERROR,		/* XfrmInStateModeError */
	LINUX_MIB_XFRMINSTATESEQERROR,		/* XfrmInStateSeqError */
	LINUX_MIB_XFRMINSTATEEXPIRED,		/* XfrmInStateExpired */
	LINUX_MIB_XFRMINSTATEMISMATCH,		/* XfrmInStateMismatch */
	LINUX_MIB_XFRMINSTATEINVALID,		/* XfrmInStateInvalid */
	LINUX_MIB_XFRMINTMPLMISMATCH,		/* XfrmInTmplMismatch */
	LINUX_MIB_XFRMINNOPOLS,			/* XfrmInNoPols */
	LINUX_MIB_XFRMINPOLBLOCK,		/* XfrmInPolBlock */
	LINUX_MIB_XFRMINPOLERROR,		/* XfrmInPolError */
	LINUX_MIB_XFRMOUTERROR,			/* XfrmOutError */
	LINUX_MIB_XFRMOUTBUNDLEGENERROR,	/* XfrmOutBundleGenError */
	LINUX_MIB_XFRMOUTBUNDLECHECKERROR,	/* XfrmOutBundleCheckError */
	LINUX_MIB_XFRMOUTNOSTATES,		/* XfrmOutNoStates */
	LINUX_MIB_XFRMOUTSTATEPROTOERROR,	/* XfrmOutStateProtoError */
	LINUX_MIB_XFRMOUTSTATEMODEERROR,	/* XfrmOutStateModeError */
	LINUX_MIB_XFRMOUTSTATESEQERROR,		/* XfrmOutStateSeqError */
	LINUX_MIB_XFRMOUTSTATEEXPIRED,		/* XfrmOutStateExpired */
	LINUX_MIB_XFRMOUTPOLBLOCK,		/* XfrmOutPolBlock */
	LINUX_MIB_XFRMOUTPOLDEAD,		/* XfrmOutPolDead */
	LINUX_MIB_XFRMOUTPOLERROR,		/* XfrmOutPolError */
	LINUX_MIB_XFRMFWDHDRERROR,		/* XfrmFwdHdrError*/
	LINUX_MIB_XFRMOUTSTATEINVALID,		/* XfrmOutStateInvalid */
	LINUX_MIB_XFRMACQUIREERROR,		/* XfrmAcquireError */
	__LINUX_MIB_XFRMMAX
};

#endif	/* _LINUX_SNMP_H */
