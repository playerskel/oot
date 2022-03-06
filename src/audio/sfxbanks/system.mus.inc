.table_system:
entry .system_menu_open
entry .system_menu_close
entry .system_puzzle_solved
entry .system_rupee
entry .system_timer_ding
entry .system_error
entry .system_error
entry .system_treasure_appear
entry .system_item_equipped
entry .system_cursor
entry .system_cursor_cancel
entry .system_heart
entry .system_z_shift
entry .system_menu_unused_down
entry .system_map_select_cursor_old
entry .system_z_cancel
entry .system_z_lock
entry .system_menu_unused_down
entry .system_menu_unused_up
entry .system_camera_mode_toggle
entry .system_minimap_toggle
entry .system_camera_mode_toggle
entry .system_camera_mode_toggle
entry .system_z_shift_old
entry .system_message_advance
entry .system_countdown_caution
entry .system_countdown_warn
entry .system_low_health
entry .system_explosive_boom
entry .system_explosive_boom
entry .system_navi_call
entry .system_magic_refill
entry .system_z_lock_old
entry .system_unused21
entry .system_unused22
entry .system_title_screen
entry .system_get_item
entry .system_menu_scroll_left
entry .system_menu_scroll_right
entry .system_ocarina_system_error
entry .system_camera_mode_toggle_old
entry .system_minimap_toggle_old
entry .system_lens_on
entry .system_lens_off
entry .system_gerudo_whistle
entry .system_minigame_bell
entry .system_message_done
entry .system_rupee_increase
entry .system_z_lock_enemy
entry .system_get_treasure_item
entry .system_long_whiteout
entry .system_whiteout
entry .system_warp_in
entry .system_shotgun
entry .system_metronome
entry .system_z_shift_threat
entry .system_metronome2
entry .system_file_cursor
entry .system_file_select
entry .system_file_enter
entry .system_file_cancel
entry .system_file_error
entry .system_equip_fire
entry .system_equip_ice
entry .system_equip_light
entry .system_equip_magic_bow
entry .system_metronome3
entry .system_skulltula_token_appears
entry .system_silver_rupee
entry .system_carrot_recovered
entry .system_metronome
entry .system_z_shift_threat

.system_menu_open:
chan_setinstr INSTR_WV_SAWTOOTH
chan_setenvelope .envelope_6660
chan_setdecayrelease 240
chan_setlayer 0, .layer_57C7
chan_setlayer 1, .layer_57DF
chan_end

.layer_57C7:
layer_setinstr F0_I_DING
layer_transpose 12
layer_setreleaserate 225
layer_setpan 54
layer_note1 PITCH_BF3, 0xc, 73
layer_note1 PITCH_C4, 0xc, 73
layer_note1 PITCH_D4, 0xc, 73
layer_note1 PITCH_EF4, 0xc, 73
layer_note1 PITCH_F4, 0x18, 73
layer_end

.layer_57DF:
layer_setinstr F0_I_DING
layer_transpose 24
layer_setenvelope .envelope_65D8, 245
layer_setpan 74
layer_portamento 0x81, 20, 255
layer_note1 PITCH_F3, 0x18, 73
layer_delay 0x4
layer_note1 PITCH_F3, 0x18, 73
layer_end

.system_menu_close:
chan_setinstr INSTR_WV_SAWTOOTH
chan_setenvelope .envelope_6660
chan_setdecayrelease 240
chan_setlayer 0, .layer_5804
chan_setlayer 1, .layer_581C
chan_end

.layer_5804:
layer_setinstr F0_I_DING
layer_setreleaserate 225
layer_transpose 12
layer_setpan 54
layer_note1 PITCH_F4, 0x4, 73
layer_note1 PITCH_EF4, 0x4, 73
layer_note1 PITCH_D4, 0x4, 73
layer_note1 PITCH_C4, 0x4, 73
layer_note1 PITCH_BF3, 0xc, 73
layer_end

.layer_581C:
layer_setinstr F0_I_DING
layer_transpose 24
layer_setenvelope .envelope_65D8, 245
layer_setpan 74
layer_portamento 0x81, 20, 255
layer_note1 PITCH_F3, 0xc, 73
layer_delay 0x4
layer_note1 PITCH_F3, 0xc, 73
layer_end

.system_puzzle_solved:
chan_setinstr INSTR_WV_SQUARE
chan_setenvelope .envelope_664C
chan_setdecayrelease 248
chan_setlayer 0, .layer_5841
chan_setlayer 1, .layer_5850
chan_end

.layer_5841:
layer_setpan 54
layer_note1 PITCH_G4, 0x18, 75
layer_note1 PITCH_EF4, 0x18, 75
layer_note1 PITCH_AF3, 0x18, 75
layer_note1 PITCH_AF4, 0x30, 75
layer_end

.layer_5850:
layer_setpan 74
layer_delay 0xc
layer_note1 PITCH_GF4, 0x18, 75
layer_note1 PITCH_A3, 0x18, 75
layer_note1 PITCH_E4, 0x18, 75
layer_note1 PITCH_C5, 0x30, 75
layer_end

.system_rupee:
chan_setlayer 0, .layer_5868
chan_setlayer 1, .layer_587A
chan_end

.layer_5868:
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_6660, 250
layer_transpose 24
layer_note1 PITCH_BF4, 0x6, 80
layer_note1 PITCH_F4, 0x6, 80
layer_note1 PITCH_BF4, 0x18, 80
layer_end

.layer_587A:
layer_setinstr F0_I_UNKNOWN
layer_note1 PITCH_C5, 0x24, 72
layer_end

.system_timer_ding:
chan_setlayer 0, .layer_5884
chan_end

.layer_5884:
layer_setinstr INSTR_WV_TRIANGLE
layer_setenvelope .envelope_6720, 250
layer_note1 PITCH_A4, 0x6, 60
layer_end

.system_error:
chan_setlayer 0, .layer_5892
chan_end

.layer_5892:
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_664C, 250
layer_note1 PITCH_E2, 0x9, 80
layer_note1 PITCH_E2, 0x24, 80
layer_end

.system_treasure_appear:
chan_setinstr INSTR_WV_SQUARE
chan_setenvelope .envelope_664C
chan_setdecayrelease 250
chan_setlayer 0, .layer_58AD
chan_setlayer 1, .layer_58C3
chan_end

.layer_58AD:
layer_note1 PITCH_A4, 0xc, 70
layer_note1 PITCH_B4, 0xc, 70
layer_note1 PITCH_D5, 0xc, 70
layer_note1 PITCH_E5, 0xc, 70
layer_note1 PITCH_A5, 0x12, 70
layer_note1 PITCH_A5, 0x12, 40
layer_note1 PITCH_A5, 0x12, 15
layer_end

.layer_58C3:
layer_delay 0x6
layer_setpan 34
layer_note1 PITCH_A4, 0xc, 40
layer_setpan 94
layer_note1 PITCH_B4, 0xc, 40
layer_setpan 34
layer_note1 PITCH_D5, 0xc, 40
layer_setpan 94
layer_note1 PITCH_E5, 0xc, 40
layer_setpan 34
layer_note1 PITCH_A5, 0x12, 40
layer_setpan 94
layer_note1 PITCH_A5, 0x12, 20
layer_setpan 64
layer_note1 PITCH_A5, 0x12, 10
layer_end

.system_item_equipped:
chan_setinstr F0_I_DING
chan_setenvelope .envelope_6660
chan_setdecayrelease 240
chan_setlayer 0, .layer_58F7
chan_setlayer 1, .layer_590D
chan_end

.layer_58F7:
layer_note1 PITCH_A4, 0x6, 80
layer_note1 PITCH_B4, 0x6, 80
layer_note1 PITCH_D5, 0x6, 80
layer_note1 PITCH_E5, 0x6, 80
layer_note1 PITCH_A5, 0x9, 80
layer_note1 PITCH_A5, 0x9, 50
layer_note1 PITCH_A5, 0x9, 30
layer_end

.layer_590D:
layer_delay 0x6
layer_setpan 34
layer_note1 PITCH_A4, 0x6, 55
layer_setpan 94
layer_note1 PITCH_B4, 0x6, 55
layer_setpan 34
layer_note1 PITCH_D5, 0x6, 55
layer_setpan 94
layer_note1 PITCH_E5, 0x6, 55
layer_setpan 34
layer_note1 PITCH_A5, 0x9, 55
layer_setpan 94
layer_note1 PITCH_A5, 0x9, 45
layer_setpan 64
layer_note1 PITCH_A5, 0x9, 30
layer_end

.system_cursor:
chan_setlayer 0, .layer_5937
chan_end

.layer_5937:
layer_setinstr INSTR_WV_SQUARE
layer_setenvelope .envelope_6660, 242
layer_portamento 0x81, 36, 72
layer_note1 PITCH_D4, 0xa, 45
layer_note1 PITCH_D4, 0x6, 45
layer_end

.system_cursor_cancel:
chan_setinstr INSTR_WV_TRIANGLE
chan_setenvelope .envelope_664C
chan_setlayer 0, .layer_5951
chan_end

.layer_5951:
layer_setinstr INSTR_WV_TRIANGLE
layer_setenvelope .envelope_664C, 250
layer_note1 PITCH_A4, 0x6, 60
layer_note1 PITCH_E4, 0x6, 60
layer_note1 PITCH_D4, 0x6, 60
layer_note1 PITCH_B3, 0x6, 60
layer_note1 PITCH_A3, 0x9, 60
layer_note1 PITCH_B3, 0x6, 20
layer_note1 PITCH_A3, 0x9, 20
layer_end

.system_heart:
chan_setlayer 0, .layer_5971
chan_end

.layer_5971:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_6720, 246
layer_portamento 0x81, 34, 127
layer_note1 PITCH_A3, 0x8, 100
layer_portamento 0x81, 46, 127
layer_note1 PITCH_A4, 0x8, 100
layer_portamento 0x81, 58, 127
layer_note1 PITCH_A5, 0x8, 100
layer_end

.system_z_shift:
chan_setlayer 0, .layer_5991
chan_end

.layer_5991:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6688, 251
layer_portamento 0x81, 36, 192
layer_note1 PITCH_A5, 0x38, 110
layer_end

.chan_unused_599F:
chan_setinstr INSTR_WV_SAWTOOTH
chan_setlayer 0, .layer_59A5
chan_end

.layer_59A5:
layer_note1 PITCH_A4, 0x60, 105
layer_end

.system_map_select_cursor_old:
chan_setlayer 0, .layer_59AD
chan_end

.layer_59AD:
layer_setinstr F0_I_SWORD_STRIKE
layer_setenvelope .envelope_664C, 255
layer_transpose -5
layer_note1 PITCH_F4, 0x20, 105
layer_end

.layer_unused_59B9:
layer_setinstr F0_I_SWORD_HIT_SHIELD
layer_setenvelope .envelope_66B0, 250
layer_enablelegato
layer_portamento 0x85, 46, 255
layer_note1 PITCH_B4, 0x12, 90
layer_note1 PITCH_E4, 0x8, 90
layer_end

.system_z_cancel:
chan_setlayer 0, .layer_59CF
chan_end

.layer_59CF:
layer_setinstr INSTR_WV_SQUARE
layer_transpose 9
layer_setenvelope .envelope_6660, 250
layer_portamento 0x81, 24, 64
layer_note1 PITCH_D3, 0x2, 65
layer_note1 PITCH_A2, 0xc, 65
layer_note1 PITCH_D3, 0x6, 35
layer_end

.system_z_lock:
chan_setlayer 0, .layer_59E9
chan_end

.layer_59E9:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 250
layer_note1 PITCH_D4, 0x6, 90
layer_note1 PITCH_G4, 0x6, 90
layer_note1 PITCH_GF4, 0x6, 90
layer_note1 PITCH_G4, 0xc, 90
layer_note1 PITCH_G4, 0xc, 40
layer_note1 PITCH_G4, 0xc, 20
layer_end

.system_menu_unused_down:
chan_setlayer 0, .layer_5A06
chan_end

.layer_5A06:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 250
layer_transpose 12
layer_note1 PITCH_GF4, 0xa, 78
layer_note1 PITCH_D4, 0xa, 78
layer_note1 PITCH_B3, 0xa, 78
layer_note1 PITCH_A3, 0x14, 78
layer_end

.system_menu_unused_up:
chan_setlayer 0, .layer_5A1F
chan_end

.layer_5A1F:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 250
layer_transpose 12
layer_note1 PITCH_A3, 0xa, 78
layer_note1 PITCH_B3, 0xa, 78
layer_note1 PITCH_D4, 0xa, 78
layer_note1 PITCH_GF4, 0x14, 78
layer_end

.system_camera_mode_toggle:
chan_setlayer 0, .layer_5A38
chan_end

.layer_5A38:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 250
layer_transpose 12
layer_note1 PITCH_D4, 0xa, 78
layer_note1 PITCH_A3, 0x14, 78
layer_end

.system_minimap_toggle:
chan_setlayer 0, .layer_5A4B
chan_end

.layer_5A4B:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 250
layer_transpose 12
layer_note1 PITCH_A3, 0xa, 78
layer_note1 PITCH_D4, 0x14, 78
layer_end

.system_z_shift_old:
chan_setinstr F0_I_DING
chan_setlayer 0, .layer_5A60
chan_end

.layer_5A60:
layer_note1 PITCH_EF4, 0xc, 70
layer_end

.system_message_advance:
chan_setlayer 0, .layer_5A68
chan_end

.layer_5A68:
layer_setinstr F0_I_DING
layer_setenvelope .envelope_6660, 248
layer_note1 PITCH_G4, 0x2e, 95
layer_end

.system_countdown_caution:
chan_setlayer 0, .layer_5A76
chan_end

.layer_5A76:
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_6660, 250
layer_note1 PITCH_C4, 0x6, 60
layer_note1 PITCH_C4, 0x4, 40
layer_note1 PITCH_C4, 0x4, 20
layer_end

.system_countdown_warn:
chan_setreverb 10
chan_setlayer 0, .layer_5A8C
chan_end

.layer_5A8C:
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_6660, 250
layer_note1 PITCH_C4, 0x6, 65
layer_setpan 34
layer_note1 PITCH_C5, 0x4, 45
layer_setpan 94
layer_note1 PITCH_C5, 0x4, 45
layer_setpan 64
layer_note1 PITCH_C5, 0x4, 30
layer_end

.system_low_health:
chan_setlayer 0, .layer_5AA9
chan_end

.layer_5AA9:
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_6660, 248
layer_note0 PITCH_DF5, 0xd, 60, 128
layer_note1 PITCH_DF5, 0xd, 60
layer_end

.system_explosive_boom:
chan_setreverb 90
chan_setlayer 0, .layer_5AC0
chan_setlayer 1, .layer_5ACC
chan_end

.layer_5AC0:
layer_setinstr F0_I_EXPLOSION_0
layer_setenvelope .envelope_6610, 251
layer_setpan 54
layer_note1 PITCH_DF4, 0x60, 107
layer_end

.layer_5ACC:
layer_setinstr F0_I_FLAME_THUNDER
layer_setenvelope .envelope_6610, 251
layer_setpan 54
layer_note1 PITCH_A1, 0x60, 104
layer_end

.system_navi_call:
chan_setlayer 0, .layer_5ADF
chan_setlayer 1, .layer_5AED
chan_end

.layer_5ADF:
layer_setinstr F0_I_FAIRY_MAGIC
layer_setenvelope .envelope_66D0, 246
layer_portamento 0x81, 58, 246
layer_note1 PITCH_A4, 0x20, 49
layer_end

.layer_5AED:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_6660, 248
layer_note1 PITCH_A5, 0x9, 50
layer_end

.system_magic_refill:
chan_setval 0
chan_iowriteval 6
chan_writeseq 0, .layer_5B19+1
chan_setlayer 0, .layer_5B13
.chan_5B01:
chan_setval 6
chan_call .delay_varyingvol
chan_ioreadval 6
chan_writeseq 0, .layer_5B19+1
chan_subtract 255
chan_iowriteval 6
chan_subtract 50
chan_bltzrel .chan_5B01
chan_end

.layer_5B13:
layer_setinstr INSTR_WV_SQUARE
layer_setreleaserate 251
layer_setpan 34
.layer_5B19:
layer_transpose 0
layer_note1 PITCH_C3, 0x3, 32
layer_delay 0x3
layer_jumprel .layer_5B19

.system_z_lock_old:
chan_setinstr INSTR_WV_SINE
chan_setlayer 0, .layer_5B28
chan_end

.layer_5B28:
layer_enablelegato
layer_setenvelope .envelope_6674, 245
layer_portamento 0x81, 36, 255
layer_note1 PITCH_F2, 0x8, 68
layer_portamento 0x81, 20, 225
layer_note1 PITCH_C4, 0x1c, 68
layer_end

.system_unused21:
chan_setinstr INSTR_WV_SINE
chan_setlayer 0, .layer_5B42
chan_end

.layer_5B42:
layer_delay 0x1
layer_end

.layer_unused_5B45:
layer_setenvelope .envelope_6674, 245
layer_portamento 0x83, 32, 255
layer_note1 PITCH_F2, 0xc, 80
layer_note1 PITCH_F2, 0xc, 40
layer_end

.system_unused22:
chan_setlayer 0, .layer_5B58
chan_end

.layer_5B58:
layer_delay 0x1
layer_end

.system_title_screen:
chan_setinstr INSTR_WV_TRIANGLE
chan_setenvelope .envelope_664C
chan_setdecayrelease 240
chan_setlayer 0, .layer_5B69
chan_setlayer 1, .layer_5B88
chan_end

.layer_5B69:
layer_setpan 84
layer_delay 0x6
layer_note1 PITCH_G3, 0xc, 80
layer_note1 PITCH_C4, 0xc, 80
layer_note1 PITCH_G4, 0xc, 80
layer_note1 PITCH_C5, 0xc, 80
layer_setenvelope .envelope_6660, 222
layer_setpan 44
layer_note1 PITCH_E5, 0x18, 30
layer_setpan 84
layer_note1 PITCH_E5, 0x18, 20
layer_end

.layer_5B88:
layer_setpan 44
layer_note1 PITCH_E3, 0xc, 80
layer_note1 PITCH_A3, 0xc, 80
layer_note1 PITCH_E4, 0xc, 80
layer_note1 PITCH_A4, 0xc, 80
layer_setpan 64
layer_note1 PITCH_E5, 0x60, 80
layer_end

.system_get_item:
chan_setinstr INSTR_WV_TRIANGLE
chan_setenvelope .envelope_664C
chan_setdecayrelease 240
chan_setlayer 0, .layer_5BA7
chan_end

.layer_5BA7:
layer_call .layer_fn_5BB4
.layer_5BAA:
layer_note1 PITCH_AF4, 0xa, 75
layer_note1 PITCH_AF4, 0x14, 55
layer_note1 PITCH_AF4, 0x14, 35
layer_end

.layer_fn_5BB4:
layer_note1 PITCH_AF4, 0xa, 75
layer_note1 PITCH_F4, 0xa, 75
layer_note1 PITCH_DF4, 0xa, 75
layer_end

.system_menu_scroll_left:
chan_setinstr F0_I_DING
chan_setenvelope .envelope_664C
chan_setdecayrelease 245
chan_setlayer 0, .layer_5BCC
chan_setlayer 1, .layer_5BE1
chan_end

.layer_5BCC:
layer_setpan 24
.layer_5BCE:
layer_note1 PITCH_F4, 0x8, 70
layer_note1 PITCH_BF4, 0x8, 70
layer_note1 PITCH_A4, 0x8, 70
layer_note1 PITCH_G4, 0x8, 70
layer_note1 PITCH_F4, 0x10, 70
layer_note1 PITCH_F4, 0x20, 35
layer_end

.layer_5BE1:
layer_note1 PITCH_BF3, 0x20, 45
layer_note1 PITCH_A3, 0x30, 45
layer_end

.system_menu_scroll_right:
chan_setinstr F0_I_DING
chan_setenvelope .envelope_664C
chan_setdecayrelease 245
chan_setlayer 0, .layer_5BF6
chan_setlayer 1, .layer_5BE1
chan_end

.layer_5BF6:
layer_setpan 104
layer_jumprel .layer_5BCE

.system_ocarina_system_error:
chan_setinstr F0_I_FAIL_BELLS
chan_setenvelope .envelope_65E8
chan_setlayer 0, .layer_5C03
chan_end

.layer_5C03:
layer_note1 PITCH_G4, 0x43, 110
layer_end

.system_camera_mode_toggle_old:
chan_setlayer 0, .layer_5C0B
chan_end

.layer_5C0B:
layer_setinstr F0_I_DING
layer_setreleaserate 250
layer_note1 PITCH_A3, 0x6, 90
layer_setenvelope .envelope_6674, 245
layer_portamento 0x81, 36, 144
layer_note1 PITCH_A4, 0x18, 90
layer_end

.system_minimap_toggle_old:
chan_setlayer 0, .layer_5C22
chan_end

.layer_5C22:
layer_setinstr F0_I_DING
layer_setreleaserate 250
layer_note1 PITCH_A4, 0x6, 90
layer_setenvelope .envelope_6674, 245
layer_portamento 0x82, 36, 144
layer_note1 PITCH_E4, 0x18, 60
layer_end

.system_lens_on:
chan_setinstr F0_I_EYE_OF_TRUTH
chan_setenvelope .envelope_65D8
chan_setlayer 0, .layer_5C3E
chan_end

.layer_5C3E:
layer_enablelegato
layer_note1 PITCH_C4, 0x18, 100
layer_note1 PITCH_D4, 0x60, 100
layer_end

.system_lens_off:
chan_setinstr F0_I_EYE_OF_TRUTH
chan_setenvelope .envelope_65D8
chan_setlayer 0, .layer_5C4F
chan_end

.layer_5C4F:
layer_enablelegato
layer_note1 PITCH_C4, 0x18, 100
layer_note1 PITCH_BF3, 0x60, 100
layer_end

.system_gerudo_whistle:
chan_setinstr F0_I_WHISTLE_REED
chan_setlayer 0, .layer_5C5D
chan_end

.layer_5C5D:
layer_note1 PITCH_EF4, 0x6, 100
layer_note1 PITCH_F4, 0x60, 100
layer_end

.system_minigame_bell:
chan_setinstr F0_I_FAIL_BELLS
chan_setlayer 0, .layer_5C6A
chan_end

.layer_5C6A:
layer_transpose 48
layer_loop 4
layer_setreleaserate 250
layer_note1 PITCH_C4, 0xc, 98
layer_setreleaserate 216
layer_note1 PITCH_C4, 0x28, 87
layer_loopend
layer_end

.system_message_done:
chan_setinstr F0_I_DING
chan_setlayer 0, .layer_5C80
chan_end

.layer_5C80:
layer_note1 PITCH_E4, 0x6, 70
layer_note1 PITCH_D4, 0x6, 70
layer_note1 PITCH_C4, 0xc, 70
layer_setpan 44
layer_note1 PITCH_C4, 0x6, 36
layer_setpan 84
layer_note1 PITCH_C4, 0xc, 36
layer_end

.system_rupee_increase:
chan_setlayer 0, .layer_5C9B
chan_setlayer 1, .layer_5CA1
chan_end

.layer_5C9B:
layer_setinstr F0_I_UNKNOWN
layer_note1 PITCH_G5, 0xe, 66
layer_end

.layer_5CA1:
layer_transpose 24
layer_setinstr INSTR_WV_SAWTOOTH
layer_setenvelope .envelope_6660, 250
layer_note1 PITCH_F4, 0x3, 52
layer_end

.system_z_lock_enemy:
chan_setlayer 0, .layer_5CB1
chan_end

.layer_5CB1:
layer_setinstr F0_I_Z_TARGET
layer_transpose 48
layer_note1 PITCH_C4, 0x61, 100
layer_end

.system_get_treasure_item:
chan_setinstr INSTR_WV_TRIANGLE
chan_setenvelope .envelope_664C
chan_setdecayrelease 240
chan_setlayer 0, .layer_5CC4
chan_end

.layer_5CC4:
layer_call .layer_fn_5BB4
layer_note1 PITCH_BF4, 0xa, 75
layer_note1 PITCH_G4, 0xa, 75
layer_note1 PITCH_EF4, 0xa, 75
layer_jump .layer_5BAA

.system_long_whiteout:
chan_setreverb 25
chan_setlayer 0, .layer_5CEB
chan_setlayer 1, .layer_5CDC
chan_end

.layer_5CDC:
layer_delay 0x64
layer_setinstr F0_I_WHISTLE
layer_setenvelope .envelope_67CC, 221
layer_transpose 24
layer_note1 PITCH_B5, 0x96, 100
layer_end

.layer_5CEB:
layer_setinstr F0_I_SLIDE_HEAVY
layer_setenvelope .envelope_67D8, 221
layer_transpose 12
layer_portamento 0x81, 2, 255
layer_note1 PITCH_B5, 0xfa, 85
layer_end

.system_whiteout:
chan_setreverb 25
chan_setlayer 0, .layer_5D12
chan_setlayer 1, .layer_5D05
chan_end

.layer_5D05:
layer_setinstr F0_I_WHISTLE
layer_setenvelope .envelope_67D8, 200
layer_transpose 24
layer_note1 PITCH_B5, 0xc8, 100
layer_end

.layer_5D12:
layer_setinstr F0_I_SLIDE_HEAVY
layer_setenvelope .envelope_67D8, 200
layer_transpose 12
layer_note1 PITCH_B5, 0xc8, 85
layer_end

.system_warp_in:
chan_setreverb 25
chan_setlayer 0, .layer_5D28
chan_setlayer 1, .layer_5D34
chan_end

.layer_5D28:
layer_setinstr F0_I_WARP
layer_setenvelope .envelope_6638, 221
layer_transpose 24
layer_note1 PITCH_B5, 0x40, 95
layer_end

.layer_5D34:
layer_setinstr F0_I_DISTORTION
layer_setenvelope .envelope_66D0, 224
layer_transpose 12
layer_note1 PITCH_B5, 0x20, 65
layer_end

.system_shotgun:
chan_setinstr F0_I_SLAM_GUNSHOT
chan_sethilogain 25
chan_setlayer 0, .layer_5D4B
chan_setlayer 1, .layer_5D51
chan_end

.layer_5D4B:
layer_delay 0x2a
layer_setenvelope .envelope_66A0, 251

.layer_5D51:
layer_transpose 48
layer_note1 PITCH_C4, 0x0, 115
layer_end

.system_metronome:
chan_setlayer 0, .layer_5D5B
chan_end

.layer_5D5B:
layer_setinstr INSTR_DRUM
layer_note1 F0_D_TAMBO_H, 0x48, 70
layer_end

.system_z_shift_threat:
chan_setinstr F0_I_Z_TARGET
chan_setlayer 0, .layer_5D67
chan_end

.layer_5D67:
layer_note1 PITCH_C4, 0x39, 110
layer_end

.system_metronome2:
chan_setinstr INSTR_DRUM
chan_setlayer 0, .layer_5D71
chan_end

.layer_5D71:
layer_note1 F0_D_TAMBO, 0x48, 70
layer_jumprel .layer_5D71

.system_file_cursor:
chan_setlayer 0, .layer_5D84
chan_setlayer 1, .layer_5D7D
chan_end

.layer_5D7D:
layer_call .layer_fn_5D95
layer_note1 PITCH_C3, 0x10, 100
layer_end

.layer_5D84:
layer_call .layer_fn_5D8E
layer_note1 PITCH_C3, 0x8, 46
layer_note1 PITCH_C4, 0x1c, 36
layer_end

.layer_fn_5D8E:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_664C, 251
layer_end

.layer_fn_5D95:
layer_setinstr F0_I_WARP
layer_setenvelope .envelope_667C, 232
layer_transpose 36
layer_end

.system_file_select:
chan_setlayer 0, .layer_5DA5
chan_setlayer 1, .layer_5DB1
chan_end

.layer_5DA5:
layer_setinstr F0_I_WARP
layer_setenvelope .envelope_6610, 232
layer_transpose 36
layer_note1 PITCH_E3, 0x1e, 95
layer_end

.layer_5DB1:
layer_call .layer_fn_5D8E
layer_note1 PITCH_D4, 0x6, 50
layer_note1 PITCH_E4, 0x18, 50
layer_end

.system_file_enter:
chan_setlayer 0, .layer_5DC2
chan_setlayer 1, .layer_5DCE
chan_end

.layer_5DC2:
layer_transpose 36
.layer_5DC4:
layer_setinstr F0_I_WARP
layer_setenvelope .envelope_6610, 232
layer_note1 PITCH_A3, 0x60, 112
layer_end

.layer_5DCE:
layer_call .layer_fn_5D8E
layer_note1 PITCH_D4, 0x6, 50
layer_note1 PITCH_G4, 0x6, 50
layer_note1 PITCH_A4, 0x18, 50
layer_end

.system_file_cancel:
chan_setlayer 0, .layer_5DE2
chan_setlayer 1, .layer_5DE6
chan_end

.layer_5DE2:
layer_transpose 24
layer_jumprel .layer_5DC4

.layer_5DE6:
layer_call .layer_fn_5D8E
layer_note1 PITCH_A4, 0x6, 50
layer_note1 PITCH_E4, 0x6, 50
layer_note1 PITCH_A3, 0x18, 50
layer_end

.system_file_error:
chan_setlayer 0, .layer_5DF7
chan_end

.layer_5DF7:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_6718, 240
layer_note1 PITCH_BF2, 0x9, 70
layer_note1 PITCH_A2, 0x9, 70
layer_note1 PITCH_BF2, 0x9, 70
layer_note1 PITCH_A2, 0x18, 70
layer_end

.system_equip_fire:
chan_setlayer 0, .layer_1438
chan_setlayer 1, .layer_B1D
chan_setlayer 2, .layer_A6E
chan_end

.system_equip_ice:
chan_setlayer 0, .layer_1438
chan_setlayer 1, .layer_B47
chan_setlayer 2, .layer_B41
chan_end

.system_equip_light:
chan_setlayer 0, .layer_1438
chan_setlayer 1, .layer_B6D
chan_setlayer 2, .layer_B67
chan_end

.system_equip_magic_bow:
chan_setlayer 0, .layer_5E2C
chan_end

.layer_5E2C:
layer_transpose 12
layer_jump .layer_1438

.system_metronome3:
chan_setlayer 0, .layer_5E35
chan_end

.layer_5E35:
layer_setinstr INSTR_DRUM
layer_setreleaserate 150
layer_note1 F0_D_TAMBO_H, 0x24, 70
layer_end

.system_skulltula_token_appears:
chan_setinstr F0_I_DING
chan_setenvelope .envelope_6660
chan_setdecayrelease 250
chan_setlayer 0, .layer_5E51
chan_setlayer 1, .layer_5E4B
chan_end

.layer_5E4B:
layer_delay 0x5
layer_setpan 94
layer_jumprel .layer_5E53

.layer_5E51:
layer_setpan 34
.layer_5E53:
layer_transpose 12
layer_note1 PITCH_F4, 0xc, 85
layer_note1 PITCH_BF4, 0xc, 85
layer_note1 PITCH_EF5, 0xc, 85
layer_note1 PITCH_BF5, 0xc, 85
layer_note1 PITCH_F5, 0x18, 85
layer_note1 PITCH_F5, 0x18, 45
layer_note1 PITCH_F5, 0x18, 25
layer_end

.system_silver_rupee:
chan_setlayer 0, .layer_5E6F
chan_end

.layer_5E6F:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_66D0, 248
layer_note1 PITCH_BF3, 0xc, 80
layer_note1 PITCH_F3, 0xc, 80
layer_note1 PITCH_D4, 0xc, 80
layer_note1 PITCH_EF4, 0xc, 80
layer_note1 PITCH_F4, 0x18, 80
layer_note1 PITCH_F4, 0x18, 40
layer_end

.system_carrot_recovered:
chan_setlayer 0, .layer_5E8C
chan_end

.layer_5E8C:
layer_setinstr INSTR_WV_SINE
layer_setenvelope .envelope_6720, 246
layer_portamento 0x83, 32, 127
layer_note1 PITCH_C4, 0x8, 80
layer_note1 PITCH_C5, 0xc, 80
layer_end