# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_SEQ_DETAIL_SPLIT_H
# define NSL_PP_SEQ_DETAIL_SPLIT_H
#
# include "nsl/pp/config/config.h"
#
# /* N_PP_SEQ_SPLIT */
#
# define N_PP_SEQ_SPLIT(n, seq) N_PP_SEQ_SPLIT_D(n, seq)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SEQ_SPLIT_D(n, seq) (N_PP_SEQ_SPLIT_ ## n seq)
# else
#    define N_PP_SEQ_SPLIT_D(n, seq) (N_PP_SEQ_SPLIT_ ## n ## seq)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# define N_PP_SEQ_SPLIT_1(x) (x),
# define N_PP_SEQ_SPLIT_2(x) (x) N_PP_SEQ_SPLIT_1
# define N_PP_SEQ_SPLIT_3(x) (x) N_PP_SEQ_SPLIT_2
# define N_PP_SEQ_SPLIT_4(x) (x) N_PP_SEQ_SPLIT_3
# define N_PP_SEQ_SPLIT_5(x) (x) N_PP_SEQ_SPLIT_4
# define N_PP_SEQ_SPLIT_6(x) (x) N_PP_SEQ_SPLIT_5
# define N_PP_SEQ_SPLIT_7(x) (x) N_PP_SEQ_SPLIT_6
# define N_PP_SEQ_SPLIT_8(x) (x) N_PP_SEQ_SPLIT_7
# define N_PP_SEQ_SPLIT_9(x) (x) N_PP_SEQ_SPLIT_8
# define N_PP_SEQ_SPLIT_10(x) (x) N_PP_SEQ_SPLIT_9
# define N_PP_SEQ_SPLIT_11(x) (x) N_PP_SEQ_SPLIT_10
# define N_PP_SEQ_SPLIT_12(x) (x) N_PP_SEQ_SPLIT_11
# define N_PP_SEQ_SPLIT_13(x) (x) N_PP_SEQ_SPLIT_12
# define N_PP_SEQ_SPLIT_14(x) (x) N_PP_SEQ_SPLIT_13
# define N_PP_SEQ_SPLIT_15(x) (x) N_PP_SEQ_SPLIT_14
# define N_PP_SEQ_SPLIT_16(x) (x) N_PP_SEQ_SPLIT_15
# define N_PP_SEQ_SPLIT_17(x) (x) N_PP_SEQ_SPLIT_16
# define N_PP_SEQ_SPLIT_18(x) (x) N_PP_SEQ_SPLIT_17
# define N_PP_SEQ_SPLIT_19(x) (x) N_PP_SEQ_SPLIT_18
# define N_PP_SEQ_SPLIT_20(x) (x) N_PP_SEQ_SPLIT_19
# define N_PP_SEQ_SPLIT_21(x) (x) N_PP_SEQ_SPLIT_20
# define N_PP_SEQ_SPLIT_22(x) (x) N_PP_SEQ_SPLIT_21
# define N_PP_SEQ_SPLIT_23(x) (x) N_PP_SEQ_SPLIT_22
# define N_PP_SEQ_SPLIT_24(x) (x) N_PP_SEQ_SPLIT_23
# define N_PP_SEQ_SPLIT_25(x) (x) N_PP_SEQ_SPLIT_24
# define N_PP_SEQ_SPLIT_26(x) (x) N_PP_SEQ_SPLIT_25
# define N_PP_SEQ_SPLIT_27(x) (x) N_PP_SEQ_SPLIT_26
# define N_PP_SEQ_SPLIT_28(x) (x) N_PP_SEQ_SPLIT_27
# define N_PP_SEQ_SPLIT_29(x) (x) N_PP_SEQ_SPLIT_28
# define N_PP_SEQ_SPLIT_30(x) (x) N_PP_SEQ_SPLIT_29
# define N_PP_SEQ_SPLIT_31(x) (x) N_PP_SEQ_SPLIT_30
# define N_PP_SEQ_SPLIT_32(x) (x) N_PP_SEQ_SPLIT_31
# define N_PP_SEQ_SPLIT_33(x) (x) N_PP_SEQ_SPLIT_32
# define N_PP_SEQ_SPLIT_34(x) (x) N_PP_SEQ_SPLIT_33
# define N_PP_SEQ_SPLIT_35(x) (x) N_PP_SEQ_SPLIT_34
# define N_PP_SEQ_SPLIT_36(x) (x) N_PP_SEQ_SPLIT_35
# define N_PP_SEQ_SPLIT_37(x) (x) N_PP_SEQ_SPLIT_36
# define N_PP_SEQ_SPLIT_38(x) (x) N_PP_SEQ_SPLIT_37
# define N_PP_SEQ_SPLIT_39(x) (x) N_PP_SEQ_SPLIT_38
# define N_PP_SEQ_SPLIT_40(x) (x) N_PP_SEQ_SPLIT_39
# define N_PP_SEQ_SPLIT_41(x) (x) N_PP_SEQ_SPLIT_40
# define N_PP_SEQ_SPLIT_42(x) (x) N_PP_SEQ_SPLIT_41
# define N_PP_SEQ_SPLIT_43(x) (x) N_PP_SEQ_SPLIT_42
# define N_PP_SEQ_SPLIT_44(x) (x) N_PP_SEQ_SPLIT_43
# define N_PP_SEQ_SPLIT_45(x) (x) N_PP_SEQ_SPLIT_44
# define N_PP_SEQ_SPLIT_46(x) (x) N_PP_SEQ_SPLIT_45
# define N_PP_SEQ_SPLIT_47(x) (x) N_PP_SEQ_SPLIT_46
# define N_PP_SEQ_SPLIT_48(x) (x) N_PP_SEQ_SPLIT_47
# define N_PP_SEQ_SPLIT_49(x) (x) N_PP_SEQ_SPLIT_48
# define N_PP_SEQ_SPLIT_50(x) (x) N_PP_SEQ_SPLIT_49
# define N_PP_SEQ_SPLIT_51(x) (x) N_PP_SEQ_SPLIT_50
# define N_PP_SEQ_SPLIT_52(x) (x) N_PP_SEQ_SPLIT_51
# define N_PP_SEQ_SPLIT_53(x) (x) N_PP_SEQ_SPLIT_52
# define N_PP_SEQ_SPLIT_54(x) (x) N_PP_SEQ_SPLIT_53
# define N_PP_SEQ_SPLIT_55(x) (x) N_PP_SEQ_SPLIT_54
# define N_PP_SEQ_SPLIT_56(x) (x) N_PP_SEQ_SPLIT_55
# define N_PP_SEQ_SPLIT_57(x) (x) N_PP_SEQ_SPLIT_56
# define N_PP_SEQ_SPLIT_58(x) (x) N_PP_SEQ_SPLIT_57
# define N_PP_SEQ_SPLIT_59(x) (x) N_PP_SEQ_SPLIT_58
# define N_PP_SEQ_SPLIT_60(x) (x) N_PP_SEQ_SPLIT_59
# define N_PP_SEQ_SPLIT_61(x) (x) N_PP_SEQ_SPLIT_60
# define N_PP_SEQ_SPLIT_62(x) (x) N_PP_SEQ_SPLIT_61
# define N_PP_SEQ_SPLIT_63(x) (x) N_PP_SEQ_SPLIT_62
# define N_PP_SEQ_SPLIT_64(x) (x) N_PP_SEQ_SPLIT_63
# define N_PP_SEQ_SPLIT_65(x) (x) N_PP_SEQ_SPLIT_64
# define N_PP_SEQ_SPLIT_66(x) (x) N_PP_SEQ_SPLIT_65
# define N_PP_SEQ_SPLIT_67(x) (x) N_PP_SEQ_SPLIT_66
# define N_PP_SEQ_SPLIT_68(x) (x) N_PP_SEQ_SPLIT_67
# define N_PP_SEQ_SPLIT_69(x) (x) N_PP_SEQ_SPLIT_68
# define N_PP_SEQ_SPLIT_70(x) (x) N_PP_SEQ_SPLIT_69
# define N_PP_SEQ_SPLIT_71(x) (x) N_PP_SEQ_SPLIT_70
# define N_PP_SEQ_SPLIT_72(x) (x) N_PP_SEQ_SPLIT_71
# define N_PP_SEQ_SPLIT_73(x) (x) N_PP_SEQ_SPLIT_72
# define N_PP_SEQ_SPLIT_74(x) (x) N_PP_SEQ_SPLIT_73
# define N_PP_SEQ_SPLIT_75(x) (x) N_PP_SEQ_SPLIT_74
# define N_PP_SEQ_SPLIT_76(x) (x) N_PP_SEQ_SPLIT_75
# define N_PP_SEQ_SPLIT_77(x) (x) N_PP_SEQ_SPLIT_76
# define N_PP_SEQ_SPLIT_78(x) (x) N_PP_SEQ_SPLIT_77
# define N_PP_SEQ_SPLIT_79(x) (x) N_PP_SEQ_SPLIT_78
# define N_PP_SEQ_SPLIT_80(x) (x) N_PP_SEQ_SPLIT_79
# define N_PP_SEQ_SPLIT_81(x) (x) N_PP_SEQ_SPLIT_80
# define N_PP_SEQ_SPLIT_82(x) (x) N_PP_SEQ_SPLIT_81
# define N_PP_SEQ_SPLIT_83(x) (x) N_PP_SEQ_SPLIT_82
# define N_PP_SEQ_SPLIT_84(x) (x) N_PP_SEQ_SPLIT_83
# define N_PP_SEQ_SPLIT_85(x) (x) N_PP_SEQ_SPLIT_84
# define N_PP_SEQ_SPLIT_86(x) (x) N_PP_SEQ_SPLIT_85
# define N_PP_SEQ_SPLIT_87(x) (x) N_PP_SEQ_SPLIT_86
# define N_PP_SEQ_SPLIT_88(x) (x) N_PP_SEQ_SPLIT_87
# define N_PP_SEQ_SPLIT_89(x) (x) N_PP_SEQ_SPLIT_88
# define N_PP_SEQ_SPLIT_90(x) (x) N_PP_SEQ_SPLIT_89
# define N_PP_SEQ_SPLIT_91(x) (x) N_PP_SEQ_SPLIT_90
# define N_PP_SEQ_SPLIT_92(x) (x) N_PP_SEQ_SPLIT_91
# define N_PP_SEQ_SPLIT_93(x) (x) N_PP_SEQ_SPLIT_92
# define N_PP_SEQ_SPLIT_94(x) (x) N_PP_SEQ_SPLIT_93
# define N_PP_SEQ_SPLIT_95(x) (x) N_PP_SEQ_SPLIT_94
# define N_PP_SEQ_SPLIT_96(x) (x) N_PP_SEQ_SPLIT_95
# define N_PP_SEQ_SPLIT_97(x) (x) N_PP_SEQ_SPLIT_96
# define N_PP_SEQ_SPLIT_98(x) (x) N_PP_SEQ_SPLIT_97
# define N_PP_SEQ_SPLIT_99(x) (x) N_PP_SEQ_SPLIT_98
# define N_PP_SEQ_SPLIT_100(x) (x) N_PP_SEQ_SPLIT_99
# define N_PP_SEQ_SPLIT_101(x) (x) N_PP_SEQ_SPLIT_100
# define N_PP_SEQ_SPLIT_102(x) (x) N_PP_SEQ_SPLIT_101
# define N_PP_SEQ_SPLIT_103(x) (x) N_PP_SEQ_SPLIT_102
# define N_PP_SEQ_SPLIT_104(x) (x) N_PP_SEQ_SPLIT_103
# define N_PP_SEQ_SPLIT_105(x) (x) N_PP_SEQ_SPLIT_104
# define N_PP_SEQ_SPLIT_106(x) (x) N_PP_SEQ_SPLIT_105
# define N_PP_SEQ_SPLIT_107(x) (x) N_PP_SEQ_SPLIT_106
# define N_PP_SEQ_SPLIT_108(x) (x) N_PP_SEQ_SPLIT_107
# define N_PP_SEQ_SPLIT_109(x) (x) N_PP_SEQ_SPLIT_108
# define N_PP_SEQ_SPLIT_110(x) (x) N_PP_SEQ_SPLIT_109
# define N_PP_SEQ_SPLIT_111(x) (x) N_PP_SEQ_SPLIT_110
# define N_PP_SEQ_SPLIT_112(x) (x) N_PP_SEQ_SPLIT_111
# define N_PP_SEQ_SPLIT_113(x) (x) N_PP_SEQ_SPLIT_112
# define N_PP_SEQ_SPLIT_114(x) (x) N_PP_SEQ_SPLIT_113
# define N_PP_SEQ_SPLIT_115(x) (x) N_PP_SEQ_SPLIT_114
# define N_PP_SEQ_SPLIT_116(x) (x) N_PP_SEQ_SPLIT_115
# define N_PP_SEQ_SPLIT_117(x) (x) N_PP_SEQ_SPLIT_116
# define N_PP_SEQ_SPLIT_118(x) (x) N_PP_SEQ_SPLIT_117
# define N_PP_SEQ_SPLIT_119(x) (x) N_PP_SEQ_SPLIT_118
# define N_PP_SEQ_SPLIT_120(x) (x) N_PP_SEQ_SPLIT_119
# define N_PP_SEQ_SPLIT_121(x) (x) N_PP_SEQ_SPLIT_120
# define N_PP_SEQ_SPLIT_122(x) (x) N_PP_SEQ_SPLIT_121
# define N_PP_SEQ_SPLIT_123(x) (x) N_PP_SEQ_SPLIT_122
# define N_PP_SEQ_SPLIT_124(x) (x) N_PP_SEQ_SPLIT_123
# define N_PP_SEQ_SPLIT_125(x) (x) N_PP_SEQ_SPLIT_124
# define N_PP_SEQ_SPLIT_126(x) (x) N_PP_SEQ_SPLIT_125
# define N_PP_SEQ_SPLIT_127(x) (x) N_PP_SEQ_SPLIT_126
# define N_PP_SEQ_SPLIT_128(x) (x) N_PP_SEQ_SPLIT_127
# define N_PP_SEQ_SPLIT_129(x) (x) N_PP_SEQ_SPLIT_128
# define N_PP_SEQ_SPLIT_130(x) (x) N_PP_SEQ_SPLIT_129
# define N_PP_SEQ_SPLIT_131(x) (x) N_PP_SEQ_SPLIT_130
# define N_PP_SEQ_SPLIT_132(x) (x) N_PP_SEQ_SPLIT_131
# define N_PP_SEQ_SPLIT_133(x) (x) N_PP_SEQ_SPLIT_132
# define N_PP_SEQ_SPLIT_134(x) (x) N_PP_SEQ_SPLIT_133
# define N_PP_SEQ_SPLIT_135(x) (x) N_PP_SEQ_SPLIT_134
# define N_PP_SEQ_SPLIT_136(x) (x) N_PP_SEQ_SPLIT_135
# define N_PP_SEQ_SPLIT_137(x) (x) N_PP_SEQ_SPLIT_136
# define N_PP_SEQ_SPLIT_138(x) (x) N_PP_SEQ_SPLIT_137
# define N_PP_SEQ_SPLIT_139(x) (x) N_PP_SEQ_SPLIT_138
# define N_PP_SEQ_SPLIT_140(x) (x) N_PP_SEQ_SPLIT_139
# define N_PP_SEQ_SPLIT_141(x) (x) N_PP_SEQ_SPLIT_140
# define N_PP_SEQ_SPLIT_142(x) (x) N_PP_SEQ_SPLIT_141
# define N_PP_SEQ_SPLIT_143(x) (x) N_PP_SEQ_SPLIT_142
# define N_PP_SEQ_SPLIT_144(x) (x) N_PP_SEQ_SPLIT_143
# define N_PP_SEQ_SPLIT_145(x) (x) N_PP_SEQ_SPLIT_144
# define N_PP_SEQ_SPLIT_146(x) (x) N_PP_SEQ_SPLIT_145
# define N_PP_SEQ_SPLIT_147(x) (x) N_PP_SEQ_SPLIT_146
# define N_PP_SEQ_SPLIT_148(x) (x) N_PP_SEQ_SPLIT_147
# define N_PP_SEQ_SPLIT_149(x) (x) N_PP_SEQ_SPLIT_148
# define N_PP_SEQ_SPLIT_150(x) (x) N_PP_SEQ_SPLIT_149
# define N_PP_SEQ_SPLIT_151(x) (x) N_PP_SEQ_SPLIT_150
# define N_PP_SEQ_SPLIT_152(x) (x) N_PP_SEQ_SPLIT_151
# define N_PP_SEQ_SPLIT_153(x) (x) N_PP_SEQ_SPLIT_152
# define N_PP_SEQ_SPLIT_154(x) (x) N_PP_SEQ_SPLIT_153
# define N_PP_SEQ_SPLIT_155(x) (x) N_PP_SEQ_SPLIT_154
# define N_PP_SEQ_SPLIT_156(x) (x) N_PP_SEQ_SPLIT_155
# define N_PP_SEQ_SPLIT_157(x) (x) N_PP_SEQ_SPLIT_156
# define N_PP_SEQ_SPLIT_158(x) (x) N_PP_SEQ_SPLIT_157
# define N_PP_SEQ_SPLIT_159(x) (x) N_PP_SEQ_SPLIT_158
# define N_PP_SEQ_SPLIT_160(x) (x) N_PP_SEQ_SPLIT_159
# define N_PP_SEQ_SPLIT_161(x) (x) N_PP_SEQ_SPLIT_160
# define N_PP_SEQ_SPLIT_162(x) (x) N_PP_SEQ_SPLIT_161
# define N_PP_SEQ_SPLIT_163(x) (x) N_PP_SEQ_SPLIT_162
# define N_PP_SEQ_SPLIT_164(x) (x) N_PP_SEQ_SPLIT_163
# define N_PP_SEQ_SPLIT_165(x) (x) N_PP_SEQ_SPLIT_164
# define N_PP_SEQ_SPLIT_166(x) (x) N_PP_SEQ_SPLIT_165
# define N_PP_SEQ_SPLIT_167(x) (x) N_PP_SEQ_SPLIT_166
# define N_PP_SEQ_SPLIT_168(x) (x) N_PP_SEQ_SPLIT_167
# define N_PP_SEQ_SPLIT_169(x) (x) N_PP_SEQ_SPLIT_168
# define N_PP_SEQ_SPLIT_170(x) (x) N_PP_SEQ_SPLIT_169
# define N_PP_SEQ_SPLIT_171(x) (x) N_PP_SEQ_SPLIT_170
# define N_PP_SEQ_SPLIT_172(x) (x) N_PP_SEQ_SPLIT_171
# define N_PP_SEQ_SPLIT_173(x) (x) N_PP_SEQ_SPLIT_172
# define N_PP_SEQ_SPLIT_174(x) (x) N_PP_SEQ_SPLIT_173
# define N_PP_SEQ_SPLIT_175(x) (x) N_PP_SEQ_SPLIT_174
# define N_PP_SEQ_SPLIT_176(x) (x) N_PP_SEQ_SPLIT_175
# define N_PP_SEQ_SPLIT_177(x) (x) N_PP_SEQ_SPLIT_176
# define N_PP_SEQ_SPLIT_178(x) (x) N_PP_SEQ_SPLIT_177
# define N_PP_SEQ_SPLIT_179(x) (x) N_PP_SEQ_SPLIT_178
# define N_PP_SEQ_SPLIT_180(x) (x) N_PP_SEQ_SPLIT_179
# define N_PP_SEQ_SPLIT_181(x) (x) N_PP_SEQ_SPLIT_180
# define N_PP_SEQ_SPLIT_182(x) (x) N_PP_SEQ_SPLIT_181
# define N_PP_SEQ_SPLIT_183(x) (x) N_PP_SEQ_SPLIT_182
# define N_PP_SEQ_SPLIT_184(x) (x) N_PP_SEQ_SPLIT_183
# define N_PP_SEQ_SPLIT_185(x) (x) N_PP_SEQ_SPLIT_184
# define N_PP_SEQ_SPLIT_186(x) (x) N_PP_SEQ_SPLIT_185
# define N_PP_SEQ_SPLIT_187(x) (x) N_PP_SEQ_SPLIT_186
# define N_PP_SEQ_SPLIT_188(x) (x) N_PP_SEQ_SPLIT_187
# define N_PP_SEQ_SPLIT_189(x) (x) N_PP_SEQ_SPLIT_188
# define N_PP_SEQ_SPLIT_190(x) (x) N_PP_SEQ_SPLIT_189
# define N_PP_SEQ_SPLIT_191(x) (x) N_PP_SEQ_SPLIT_190
# define N_PP_SEQ_SPLIT_192(x) (x) N_PP_SEQ_SPLIT_191
# define N_PP_SEQ_SPLIT_193(x) (x) N_PP_SEQ_SPLIT_192
# define N_PP_SEQ_SPLIT_194(x) (x) N_PP_SEQ_SPLIT_193
# define N_PP_SEQ_SPLIT_195(x) (x) N_PP_SEQ_SPLIT_194
# define N_PP_SEQ_SPLIT_196(x) (x) N_PP_SEQ_SPLIT_195
# define N_PP_SEQ_SPLIT_197(x) (x) N_PP_SEQ_SPLIT_196
# define N_PP_SEQ_SPLIT_198(x) (x) N_PP_SEQ_SPLIT_197
# define N_PP_SEQ_SPLIT_199(x) (x) N_PP_SEQ_SPLIT_198
# define N_PP_SEQ_SPLIT_200(x) (x) N_PP_SEQ_SPLIT_199
# define N_PP_SEQ_SPLIT_201(x) (x) N_PP_SEQ_SPLIT_200
# define N_PP_SEQ_SPLIT_202(x) (x) N_PP_SEQ_SPLIT_201
# define N_PP_SEQ_SPLIT_203(x) (x) N_PP_SEQ_SPLIT_202
# define N_PP_SEQ_SPLIT_204(x) (x) N_PP_SEQ_SPLIT_203
# define N_PP_SEQ_SPLIT_205(x) (x) N_PP_SEQ_SPLIT_204
# define N_PP_SEQ_SPLIT_206(x) (x) N_PP_SEQ_SPLIT_205
# define N_PP_SEQ_SPLIT_207(x) (x) N_PP_SEQ_SPLIT_206
# define N_PP_SEQ_SPLIT_208(x) (x) N_PP_SEQ_SPLIT_207
# define N_PP_SEQ_SPLIT_209(x) (x) N_PP_SEQ_SPLIT_208
# define N_PP_SEQ_SPLIT_210(x) (x) N_PP_SEQ_SPLIT_209
# define N_PP_SEQ_SPLIT_211(x) (x) N_PP_SEQ_SPLIT_210
# define N_PP_SEQ_SPLIT_212(x) (x) N_PP_SEQ_SPLIT_211
# define N_PP_SEQ_SPLIT_213(x) (x) N_PP_SEQ_SPLIT_212
# define N_PP_SEQ_SPLIT_214(x) (x) N_PP_SEQ_SPLIT_213
# define N_PP_SEQ_SPLIT_215(x) (x) N_PP_SEQ_SPLIT_214
# define N_PP_SEQ_SPLIT_216(x) (x) N_PP_SEQ_SPLIT_215
# define N_PP_SEQ_SPLIT_217(x) (x) N_PP_SEQ_SPLIT_216
# define N_PP_SEQ_SPLIT_218(x) (x) N_PP_SEQ_SPLIT_217
# define N_PP_SEQ_SPLIT_219(x) (x) N_PP_SEQ_SPLIT_218
# define N_PP_SEQ_SPLIT_220(x) (x) N_PP_SEQ_SPLIT_219
# define N_PP_SEQ_SPLIT_221(x) (x) N_PP_SEQ_SPLIT_220
# define N_PP_SEQ_SPLIT_222(x) (x) N_PP_SEQ_SPLIT_221
# define N_PP_SEQ_SPLIT_223(x) (x) N_PP_SEQ_SPLIT_222
# define N_PP_SEQ_SPLIT_224(x) (x) N_PP_SEQ_SPLIT_223
# define N_PP_SEQ_SPLIT_225(x) (x) N_PP_SEQ_SPLIT_224
# define N_PP_SEQ_SPLIT_226(x) (x) N_PP_SEQ_SPLIT_225
# define N_PP_SEQ_SPLIT_227(x) (x) N_PP_SEQ_SPLIT_226
# define N_PP_SEQ_SPLIT_228(x) (x) N_PP_SEQ_SPLIT_227
# define N_PP_SEQ_SPLIT_229(x) (x) N_PP_SEQ_SPLIT_228
# define N_PP_SEQ_SPLIT_230(x) (x) N_PP_SEQ_SPLIT_229
# define N_PP_SEQ_SPLIT_231(x) (x) N_PP_SEQ_SPLIT_230
# define N_PP_SEQ_SPLIT_232(x) (x) N_PP_SEQ_SPLIT_231
# define N_PP_SEQ_SPLIT_233(x) (x) N_PP_SEQ_SPLIT_232
# define N_PP_SEQ_SPLIT_234(x) (x) N_PP_SEQ_SPLIT_233
# define N_PP_SEQ_SPLIT_235(x) (x) N_PP_SEQ_SPLIT_234
# define N_PP_SEQ_SPLIT_236(x) (x) N_PP_SEQ_SPLIT_235
# define N_PP_SEQ_SPLIT_237(x) (x) N_PP_SEQ_SPLIT_236
# define N_PP_SEQ_SPLIT_238(x) (x) N_PP_SEQ_SPLIT_237
# define N_PP_SEQ_SPLIT_239(x) (x) N_PP_SEQ_SPLIT_238
# define N_PP_SEQ_SPLIT_240(x) (x) N_PP_SEQ_SPLIT_239
# define N_PP_SEQ_SPLIT_241(x) (x) N_PP_SEQ_SPLIT_240
# define N_PP_SEQ_SPLIT_242(x) (x) N_PP_SEQ_SPLIT_241
# define N_PP_SEQ_SPLIT_243(x) (x) N_PP_SEQ_SPLIT_242
# define N_PP_SEQ_SPLIT_244(x) (x) N_PP_SEQ_SPLIT_243
# define N_PP_SEQ_SPLIT_245(x) (x) N_PP_SEQ_SPLIT_244
# define N_PP_SEQ_SPLIT_246(x) (x) N_PP_SEQ_SPLIT_245
# define N_PP_SEQ_SPLIT_247(x) (x) N_PP_SEQ_SPLIT_246
# define N_PP_SEQ_SPLIT_248(x) (x) N_PP_SEQ_SPLIT_247
# define N_PP_SEQ_SPLIT_249(x) (x) N_PP_SEQ_SPLIT_248
# define N_PP_SEQ_SPLIT_250(x) (x) N_PP_SEQ_SPLIT_249
# define N_PP_SEQ_SPLIT_251(x) (x) N_PP_SEQ_SPLIT_250
# define N_PP_SEQ_SPLIT_252(x) (x) N_PP_SEQ_SPLIT_251
# define N_PP_SEQ_SPLIT_253(x) (x) N_PP_SEQ_SPLIT_252
# define N_PP_SEQ_SPLIT_254(x) (x) N_PP_SEQ_SPLIT_253
# define N_PP_SEQ_SPLIT_255(x) (x) N_PP_SEQ_SPLIT_254
# define N_PP_SEQ_SPLIT_256(x) (x) N_PP_SEQ_SPLIT_255
#
# else
#
# include "nsl/pp/config/limits.h"
#
# if N_PP_LIMIT_SEQ == 256
# include "nsl/pp/seq/detail/limits/split_256.h"
# elif N_PP_LIMIT_SEQ == 512
# include "nsl/pp/seq/detail/limits/split_256.h"
# include "nsl/pp/seq/detail/limits/split_512.h"
# elif N_PP_LIMIT_SEQ == 1024
# include "nsl/pp/seq/detail/limits/split_256.h"
# include "nsl/pp/seq/detail/limits/split_512.h"
# include "nsl/pp/seq/detail/limits/split_1024.h"
# else
# error Incorrect value for the N_PP_LIMIT_SEQ limit
# endif
#
# endif
#
# endif
