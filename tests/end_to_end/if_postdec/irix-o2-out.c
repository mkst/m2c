? test(void) {
    s32 temp_v1;

    temp_v1 = D_4100E0;
    D_4100E0 = (s32) (temp_v1 - 1);
    if (temp_v1 <= 0) {
        return 4;
    }
    return 6;
}
