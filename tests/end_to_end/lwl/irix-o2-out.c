void test(void) {
    ? sp18;

    sp18 = (s32) D_400130;
    ERROR(unknown instruction: lwr $at, 0x6($t6));
    ERROR(unknown instruction: swr $at, 0x6($a0));
    func_004000B0(&sp18);
    ERROR(unknown instruction: lwl $t0, ($at));
    ERROR(unknown instruction: lwr $t0, 0x3($at));
    ERROR(unknown instruction: swl $t0, ($at));
    ERROR(unknown instruction: swr $t0, 0x3($at));
    ERROR(unknown instruction: lwl $t1, ($at));
    D_410150 = (?32) ERROR(unknown instruction: lwr $t1, 0x3($at));
}