s32 test(s32 arg0, s32 arg1)
{
    s32 sp2C;
    s32 sp28;
    ?32 sp24;

    sp2C = (s32) ((D_4101C0 + (arg0 * 8))->unk4 + 1);
    sp24 = (?32) (D_4101C0 + (arg0 * 8))->unk8;
    sp28 = func_00400174(1, 2, sp2C, arg1, arg0);
    if (sp28 != 0)
    {
        func_0040019C(sp24, sp28, sp2C);
        *(&D_4101C8 + arg0) = (u8)5;
        return sp28;
    }
    return 0;
}
