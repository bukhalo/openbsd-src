/*	$OpenBSD: extern.h,v 1.23 2022/01/05 04:10:36 guenther Exp $	*/
/*	$NetBSD: extern.h,v 1.10 1995/05/21 13:38:27 mycroft Exp $	*/

/*-
 * Copyright (c) 1991, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)extern.h	8.3 (Berkeley) 4/2/94
 */

struct nlist;
struct var;
struct varent;

extern fixpt_t ccpu;
extern int eval, fscale, nlistread, maxslp;
extern u_int mempages;
extern int sumrusage, termwidth, totwidth, kvm_sysctl_only, needheader;
extern VAR var[];
extern VARENT *vhead;

__BEGIN_DECLS
void	 command(const struct kinfo_proc *, VARENT *);
void	 cputime(const struct kinfo_proc *, VARENT *);
int	 donlist(void);
void	 elapsed(const struct kinfo_proc *, VARENT *);
double	 getpcpu(const struct kinfo_proc *);
double	 getpmem(const struct kinfo_proc *);
void	 gname(const struct kinfo_proc *, VARENT *);
void	 supgid(const struct kinfo_proc *, VARENT *);
void	 supgrp(const struct kinfo_proc *, VARENT *);
void	 logname(const struct kinfo_proc *, VARENT *);
void	 longtname(const struct kinfo_proc *, VARENT *);
void	 lstarted(const struct kinfo_proc *, VARENT *);
void	 maxrss(const struct kinfo_proc *, VARENT *);
void	 nlisterr(struct nlist *);
void	 p_rssize(const struct kinfo_proc *, VARENT *);
void	 pagein(const struct kinfo_proc *, VARENT *);
void	 parsefmt(char *);
void	 pcpu(const struct kinfo_proc *, VARENT *);
void	 pmem(const struct kinfo_proc *, VARENT *);
void	 pri(const struct kinfo_proc *, VARENT *);
void	 printheader(void);
void	 pvar(const struct kinfo_proc *kp, VARENT *);
void	 pnice(const struct kinfo_proc *kp, VARENT *);
void	 rgname(const struct kinfo_proc *, VARENT *);
void	 rssize(const struct kinfo_proc *, VARENT *);
void	 runame(const struct kinfo_proc *, VARENT *);
void	 showkey(void);
void	 started(const struct kinfo_proc *, VARENT *);
void	 printstate(const struct kinfo_proc *, VARENT *);
void	 printpledge(const struct kinfo_proc *, VARENT *);
void	 tdev(const struct kinfo_proc *, VARENT *);
void	 tname(const struct kinfo_proc *, VARENT *);
void	 tsize(const struct kinfo_proc *, VARENT *);
void	 dsize(const struct kinfo_proc *, VARENT *);
void	 ssize(const struct kinfo_proc *, VARENT *);
void	 ucomm(const struct kinfo_proc *, VARENT *);
void	 curwd(const struct kinfo_proc *, VARENT *);
void	 euname(const struct kinfo_proc *, VARENT *);
void	 vsize(const struct kinfo_proc *, VARENT *);
void	 wchan(const struct kinfo_proc *, VARENT *);
__END_DECLS
