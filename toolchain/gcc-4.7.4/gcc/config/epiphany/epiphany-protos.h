/* Definitions of target machine for GNU compiler, EPIPHANY cpu.
   Copyright (C) 2000, 2004, 2007, 2009, 2011 Free Software Foundation, Inc.
   Contributed by Embecosm on behalf of Adapteva, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifdef RTX_CODE
extern enum machine_mode epiphany_select_cc_mode (enum rtx_code, rtx, rtx);

/* Define the function that build the compare insn for scc and bcc.  */
extern struct rtx_def *gen_compare_reg (enum machine_mode, enum rtx_code,
					enum machine_mode, rtx, rtx);
#endif

/* Declarations for various fns used in the .md file.  */
extern void epiphany_final_prescan_insn (rtx, rtx *, int);
extern bool epiphany_is_long_call_p (rtx);
extern bool epiphany_small16 (rtx);
bool epiphany_uninterruptible_p (tree decl);
bool epiphany_call_uninterruptible_p (rtx mem);
extern rtx sfunc_symbol (const char *name);

extern void epiphany_expand_prologue (void);
extern void epiphany_expand_epilogue (int);
extern int epiphany_initial_elimination_offset (int, int);
extern void epiphany_init_expanders (void);
extern int hard_regno_mode_ok (int regno, enum machine_mode mode);
#ifdef HARD_CONST
extern void emit_set_fp_mode (int entity, int mode, HARD_REG_SET regs_live);
#endif
extern void epiphany_insert_mode_switch_use (rtx insn, int, int);
extern void epiphany_expand_set_fp_mode (rtx *operands);
extern int epiphany_mode_needed (int entity, rtx insn);
extern int epiphany_mode_entry_exit (int entity, bool);
extern int epiphany_mode_after (int entity, int last_mode, rtx insn);
extern int epiphany_mode_priority_to_mode (int entity, unsigned priority);
extern bool epiphany_epilogue_uses (int regno);
extern bool epiphany_optimize_mode_switching (int entity);
extern bool epiphany_is_interrupt_p (tree);
extern unsigned epiphany_special_round_type_align (tree, unsigned, unsigned);
extern unsigned epiphany_adjust_field_align (tree, unsigned);
extern void epiphany_start_function (FILE *f, const char *name, tree decl);
