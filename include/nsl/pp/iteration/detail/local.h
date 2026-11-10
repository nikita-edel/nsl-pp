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
# if !defined(N_PP_LOCAL_LIMITS)
#    error N_PP_ERROR:  local iteration boundaries are not defined
# elif !defined(N_PP_LOCAL_MACRO)
#    error N_PP_ERROR:  local iteration target macro is not defined
# else
#    if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#        define N_PP_LOCAL_S N_PP_TUPLE_ELEM(2, 0, N_PP_LOCAL_LIMITS)
#        define N_PP_LOCAL_F N_PP_TUPLE_ELEM(2, 1, N_PP_LOCAL_LIMITS)
#    else
#        define N_PP_VALUE N_PP_TUPLE_ELEM(2, 0, N_PP_LOCAL_LIMITS)
#        include "nsl/pp/iteration/detail/start.h"
#        define N_PP_VALUE N_PP_TUPLE_ELEM(2, 1, N_PP_LOCAL_LIMITS)
#        include "nsl/pp/iteration/detail/finish.h"
#        define N_PP_LOCAL_S N_PP_LOCAL_SE()
#        define N_PP_LOCAL_F N_PP_LOCAL_FE()
#    endif
# endif
#
# if (N_PP_LOCAL_S) > (N_PP_LOCAL_F)
#    include "nsl/pp/iteration/detail/rlocal.h"
# else
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
#    if N_PP_LOCAL_C(0)
        N_PP_LOCAL_MACRO(0)
#    endif
#    if N_PP_LOCAL_C(1)
        N_PP_LOCAL_MACRO(1)
#    endif
#    if N_PP_LOCAL_C(2)
        N_PP_LOCAL_MACRO(2)
#    endif
#    if N_PP_LOCAL_C(3)
        N_PP_LOCAL_MACRO(3)
#    endif
#    if N_PP_LOCAL_C(4)
        N_PP_LOCAL_MACRO(4)
#    endif
#    if N_PP_LOCAL_C(5)
        N_PP_LOCAL_MACRO(5)
#    endif
#    if N_PP_LOCAL_C(6)
        N_PP_LOCAL_MACRO(6)
#    endif
#    if N_PP_LOCAL_C(7)
        N_PP_LOCAL_MACRO(7)
#    endif
#    if N_PP_LOCAL_C(8)
        N_PP_LOCAL_MACRO(8)
#    endif
#    if N_PP_LOCAL_C(9)
        N_PP_LOCAL_MACRO(9)
#    endif
#    if N_PP_LOCAL_C(10)
        N_PP_LOCAL_MACRO(10)
#    endif
#    if N_PP_LOCAL_C(11)
        N_PP_LOCAL_MACRO(11)
#    endif
#    if N_PP_LOCAL_C(12)
        N_PP_LOCAL_MACRO(12)
#    endif
#    if N_PP_LOCAL_C(13)
        N_PP_LOCAL_MACRO(13)
#    endif
#    if N_PP_LOCAL_C(14)
        N_PP_LOCAL_MACRO(14)
#    endif
#    if N_PP_LOCAL_C(15)
        N_PP_LOCAL_MACRO(15)
#    endif
#    if N_PP_LOCAL_C(16)
        N_PP_LOCAL_MACRO(16)
#    endif
#    if N_PP_LOCAL_C(17)
        N_PP_LOCAL_MACRO(17)
#    endif
#    if N_PP_LOCAL_C(18)
        N_PP_LOCAL_MACRO(18)
#    endif
#    if N_PP_LOCAL_C(19)
        N_PP_LOCAL_MACRO(19)
#    endif
#    if N_PP_LOCAL_C(20)
        N_PP_LOCAL_MACRO(20)
#    endif
#    if N_PP_LOCAL_C(21)
        N_PP_LOCAL_MACRO(21)
#    endif
#    if N_PP_LOCAL_C(22)
        N_PP_LOCAL_MACRO(22)
#    endif
#    if N_PP_LOCAL_C(23)
        N_PP_LOCAL_MACRO(23)
#    endif
#    if N_PP_LOCAL_C(24)
        N_PP_LOCAL_MACRO(24)
#    endif
#    if N_PP_LOCAL_C(25)
        N_PP_LOCAL_MACRO(25)
#    endif
#    if N_PP_LOCAL_C(26)
        N_PP_LOCAL_MACRO(26)
#    endif
#    if N_PP_LOCAL_C(27)
        N_PP_LOCAL_MACRO(27)
#    endif
#    if N_PP_LOCAL_C(28)
        N_PP_LOCAL_MACRO(28)
#    endif
#    if N_PP_LOCAL_C(29)
        N_PP_LOCAL_MACRO(29)
#    endif
#    if N_PP_LOCAL_C(30)
        N_PP_LOCAL_MACRO(30)
#    endif
#    if N_PP_LOCAL_C(31)
        N_PP_LOCAL_MACRO(31)
#    endif
#    if N_PP_LOCAL_C(32)
        N_PP_LOCAL_MACRO(32)
#    endif
#    if N_PP_LOCAL_C(33)
        N_PP_LOCAL_MACRO(33)
#    endif
#    if N_PP_LOCAL_C(34)
        N_PP_LOCAL_MACRO(34)
#    endif
#    if N_PP_LOCAL_C(35)
        N_PP_LOCAL_MACRO(35)
#    endif
#    if N_PP_LOCAL_C(36)
        N_PP_LOCAL_MACRO(36)
#    endif
#    if N_PP_LOCAL_C(37)
        N_PP_LOCAL_MACRO(37)
#    endif
#    if N_PP_LOCAL_C(38)
        N_PP_LOCAL_MACRO(38)
#    endif
#    if N_PP_LOCAL_C(39)
        N_PP_LOCAL_MACRO(39)
#    endif
#    if N_PP_LOCAL_C(40)
        N_PP_LOCAL_MACRO(40)
#    endif
#    if N_PP_LOCAL_C(41)
        N_PP_LOCAL_MACRO(41)
#    endif
#    if N_PP_LOCAL_C(42)
        N_PP_LOCAL_MACRO(42)
#    endif
#    if N_PP_LOCAL_C(43)
        N_PP_LOCAL_MACRO(43)
#    endif
#    if N_PP_LOCAL_C(44)
        N_PP_LOCAL_MACRO(44)
#    endif
#    if N_PP_LOCAL_C(45)
        N_PP_LOCAL_MACRO(45)
#    endif
#    if N_PP_LOCAL_C(46)
        N_PP_LOCAL_MACRO(46)
#    endif
#    if N_PP_LOCAL_C(47)
        N_PP_LOCAL_MACRO(47)
#    endif
#    if N_PP_LOCAL_C(48)
        N_PP_LOCAL_MACRO(48)
#    endif
#    if N_PP_LOCAL_C(49)
        N_PP_LOCAL_MACRO(49)
#    endif
#    if N_PP_LOCAL_C(50)
        N_PP_LOCAL_MACRO(50)
#    endif
#    if N_PP_LOCAL_C(51)
        N_PP_LOCAL_MACRO(51)
#    endif
#    if N_PP_LOCAL_C(52)
        N_PP_LOCAL_MACRO(52)
#    endif
#    if N_PP_LOCAL_C(53)
        N_PP_LOCAL_MACRO(53)
#    endif
#    if N_PP_LOCAL_C(54)
        N_PP_LOCAL_MACRO(54)
#    endif
#    if N_PP_LOCAL_C(55)
        N_PP_LOCAL_MACRO(55)
#    endif
#    if N_PP_LOCAL_C(56)
        N_PP_LOCAL_MACRO(56)
#    endif
#    if N_PP_LOCAL_C(57)
        N_PP_LOCAL_MACRO(57)
#    endif
#    if N_PP_LOCAL_C(58)
        N_PP_LOCAL_MACRO(58)
#    endif
#    if N_PP_LOCAL_C(59)
        N_PP_LOCAL_MACRO(59)
#    endif
#    if N_PP_LOCAL_C(60)
        N_PP_LOCAL_MACRO(60)
#    endif
#    if N_PP_LOCAL_C(61)
        N_PP_LOCAL_MACRO(61)
#    endif
#    if N_PP_LOCAL_C(62)
        N_PP_LOCAL_MACRO(62)
#    endif
#    if N_PP_LOCAL_C(63)
        N_PP_LOCAL_MACRO(63)
#    endif
#    if N_PP_LOCAL_C(64)
        N_PP_LOCAL_MACRO(64)
#    endif
#    if N_PP_LOCAL_C(65)
        N_PP_LOCAL_MACRO(65)
#    endif
#    if N_PP_LOCAL_C(66)
        N_PP_LOCAL_MACRO(66)
#    endif
#    if N_PP_LOCAL_C(67)
        N_PP_LOCAL_MACRO(67)
#    endif
#    if N_PP_LOCAL_C(68)
        N_PP_LOCAL_MACRO(68)
#    endif
#    if N_PP_LOCAL_C(69)
        N_PP_LOCAL_MACRO(69)
#    endif
#    if N_PP_LOCAL_C(70)
        N_PP_LOCAL_MACRO(70)
#    endif
#    if N_PP_LOCAL_C(71)
        N_PP_LOCAL_MACRO(71)
#    endif
#    if N_PP_LOCAL_C(72)
        N_PP_LOCAL_MACRO(72)
#    endif
#    if N_PP_LOCAL_C(73)
        N_PP_LOCAL_MACRO(73)
#    endif
#    if N_PP_LOCAL_C(74)
        N_PP_LOCAL_MACRO(74)
#    endif
#    if N_PP_LOCAL_C(75)
        N_PP_LOCAL_MACRO(75)
#    endif
#    if N_PP_LOCAL_C(76)
        N_PP_LOCAL_MACRO(76)
#    endif
#    if N_PP_LOCAL_C(77)
        N_PP_LOCAL_MACRO(77)
#    endif
#    if N_PP_LOCAL_C(78)
        N_PP_LOCAL_MACRO(78)
#    endif
#    if N_PP_LOCAL_C(79)
        N_PP_LOCAL_MACRO(79)
#    endif
#    if N_PP_LOCAL_C(80)
        N_PP_LOCAL_MACRO(80)
#    endif
#    if N_PP_LOCAL_C(81)
        N_PP_LOCAL_MACRO(81)
#    endif
#    if N_PP_LOCAL_C(82)
        N_PP_LOCAL_MACRO(82)
#    endif
#    if N_PP_LOCAL_C(83)
        N_PP_LOCAL_MACRO(83)
#    endif
#    if N_PP_LOCAL_C(84)
        N_PP_LOCAL_MACRO(84)
#    endif
#    if N_PP_LOCAL_C(85)
        N_PP_LOCAL_MACRO(85)
#    endif
#    if N_PP_LOCAL_C(86)
        N_PP_LOCAL_MACRO(86)
#    endif
#    if N_PP_LOCAL_C(87)
        N_PP_LOCAL_MACRO(87)
#    endif
#    if N_PP_LOCAL_C(88)
        N_PP_LOCAL_MACRO(88)
#    endif
#    if N_PP_LOCAL_C(89)
        N_PP_LOCAL_MACRO(89)
#    endif
#    if N_PP_LOCAL_C(90)
        N_PP_LOCAL_MACRO(90)
#    endif
#    if N_PP_LOCAL_C(91)
        N_PP_LOCAL_MACRO(91)
#    endif
#    if N_PP_LOCAL_C(92)
        N_PP_LOCAL_MACRO(92)
#    endif
#    if N_PP_LOCAL_C(93)
        N_PP_LOCAL_MACRO(93)
#    endif
#    if N_PP_LOCAL_C(94)
        N_PP_LOCAL_MACRO(94)
#    endif
#    if N_PP_LOCAL_C(95)
        N_PP_LOCAL_MACRO(95)
#    endif
#    if N_PP_LOCAL_C(96)
        N_PP_LOCAL_MACRO(96)
#    endif
#    if N_PP_LOCAL_C(97)
        N_PP_LOCAL_MACRO(97)
#    endif
#    if N_PP_LOCAL_C(98)
        N_PP_LOCAL_MACRO(98)
#    endif
#    if N_PP_LOCAL_C(99)
        N_PP_LOCAL_MACRO(99)
#    endif
#    if N_PP_LOCAL_C(100)
        N_PP_LOCAL_MACRO(100)
#    endif
#    if N_PP_LOCAL_C(101)
        N_PP_LOCAL_MACRO(101)
#    endif
#    if N_PP_LOCAL_C(102)
        N_PP_LOCAL_MACRO(102)
#    endif
#    if N_PP_LOCAL_C(103)
        N_PP_LOCAL_MACRO(103)
#    endif
#    if N_PP_LOCAL_C(104)
        N_PP_LOCAL_MACRO(104)
#    endif
#    if N_PP_LOCAL_C(105)
        N_PP_LOCAL_MACRO(105)
#    endif
#    if N_PP_LOCAL_C(106)
        N_PP_LOCAL_MACRO(106)
#    endif
#    if N_PP_LOCAL_C(107)
        N_PP_LOCAL_MACRO(107)
#    endif
#    if N_PP_LOCAL_C(108)
        N_PP_LOCAL_MACRO(108)
#    endif
#    if N_PP_LOCAL_C(109)
        N_PP_LOCAL_MACRO(109)
#    endif
#    if N_PP_LOCAL_C(110)
        N_PP_LOCAL_MACRO(110)
#    endif
#    if N_PP_LOCAL_C(111)
        N_PP_LOCAL_MACRO(111)
#    endif
#    if N_PP_LOCAL_C(112)
        N_PP_LOCAL_MACRO(112)
#    endif
#    if N_PP_LOCAL_C(113)
        N_PP_LOCAL_MACRO(113)
#    endif
#    if N_PP_LOCAL_C(114)
        N_PP_LOCAL_MACRO(114)
#    endif
#    if N_PP_LOCAL_C(115)
        N_PP_LOCAL_MACRO(115)
#    endif
#    if N_PP_LOCAL_C(116)
        N_PP_LOCAL_MACRO(116)
#    endif
#    if N_PP_LOCAL_C(117)
        N_PP_LOCAL_MACRO(117)
#    endif
#    if N_PP_LOCAL_C(118)
        N_PP_LOCAL_MACRO(118)
#    endif
#    if N_PP_LOCAL_C(119)
        N_PP_LOCAL_MACRO(119)
#    endif
#    if N_PP_LOCAL_C(120)
        N_PP_LOCAL_MACRO(120)
#    endif
#    if N_PP_LOCAL_C(121)
        N_PP_LOCAL_MACRO(121)
#    endif
#    if N_PP_LOCAL_C(122)
        N_PP_LOCAL_MACRO(122)
#    endif
#    if N_PP_LOCAL_C(123)
        N_PP_LOCAL_MACRO(123)
#    endif
#    if N_PP_LOCAL_C(124)
        N_PP_LOCAL_MACRO(124)
#    endif
#    if N_PP_LOCAL_C(125)
        N_PP_LOCAL_MACRO(125)
#    endif
#    if N_PP_LOCAL_C(126)
        N_PP_LOCAL_MACRO(126)
#    endif
#    if N_PP_LOCAL_C(127)
        N_PP_LOCAL_MACRO(127)
#    endif
#    if N_PP_LOCAL_C(128)
        N_PP_LOCAL_MACRO(128)
#    endif
#    if N_PP_LOCAL_C(129)
        N_PP_LOCAL_MACRO(129)
#    endif
#    if N_PP_LOCAL_C(130)
        N_PP_LOCAL_MACRO(130)
#    endif
#    if N_PP_LOCAL_C(131)
        N_PP_LOCAL_MACRO(131)
#    endif
#    if N_PP_LOCAL_C(132)
        N_PP_LOCAL_MACRO(132)
#    endif
#    if N_PP_LOCAL_C(133)
        N_PP_LOCAL_MACRO(133)
#    endif
#    if N_PP_LOCAL_C(134)
        N_PP_LOCAL_MACRO(134)
#    endif
#    if N_PP_LOCAL_C(135)
        N_PP_LOCAL_MACRO(135)
#    endif
#    if N_PP_LOCAL_C(136)
        N_PP_LOCAL_MACRO(136)
#    endif
#    if N_PP_LOCAL_C(137)
        N_PP_LOCAL_MACRO(137)
#    endif
#    if N_PP_LOCAL_C(138)
        N_PP_LOCAL_MACRO(138)
#    endif
#    if N_PP_LOCAL_C(139)
        N_PP_LOCAL_MACRO(139)
#    endif
#    if N_PP_LOCAL_C(140)
        N_PP_LOCAL_MACRO(140)
#    endif
#    if N_PP_LOCAL_C(141)
        N_PP_LOCAL_MACRO(141)
#    endif
#    if N_PP_LOCAL_C(142)
        N_PP_LOCAL_MACRO(142)
#    endif
#    if N_PP_LOCAL_C(143)
        N_PP_LOCAL_MACRO(143)
#    endif
#    if N_PP_LOCAL_C(144)
        N_PP_LOCAL_MACRO(144)
#    endif
#    if N_PP_LOCAL_C(145)
        N_PP_LOCAL_MACRO(145)
#    endif
#    if N_PP_LOCAL_C(146)
        N_PP_LOCAL_MACRO(146)
#    endif
#    if N_PP_LOCAL_C(147)
        N_PP_LOCAL_MACRO(147)
#    endif
#    if N_PP_LOCAL_C(148)
        N_PP_LOCAL_MACRO(148)
#    endif
#    if N_PP_LOCAL_C(149)
        N_PP_LOCAL_MACRO(149)
#    endif
#    if N_PP_LOCAL_C(150)
        N_PP_LOCAL_MACRO(150)
#    endif
#    if N_PP_LOCAL_C(151)
        N_PP_LOCAL_MACRO(151)
#    endif
#    if N_PP_LOCAL_C(152)
        N_PP_LOCAL_MACRO(152)
#    endif
#    if N_PP_LOCAL_C(153)
        N_PP_LOCAL_MACRO(153)
#    endif
#    if N_PP_LOCAL_C(154)
        N_PP_LOCAL_MACRO(154)
#    endif
#    if N_PP_LOCAL_C(155)
        N_PP_LOCAL_MACRO(155)
#    endif
#    if N_PP_LOCAL_C(156)
        N_PP_LOCAL_MACRO(156)
#    endif
#    if N_PP_LOCAL_C(157)
        N_PP_LOCAL_MACRO(157)
#    endif
#    if N_PP_LOCAL_C(158)
        N_PP_LOCAL_MACRO(158)
#    endif
#    if N_PP_LOCAL_C(159)
        N_PP_LOCAL_MACRO(159)
#    endif
#    if N_PP_LOCAL_C(160)
        N_PP_LOCAL_MACRO(160)
#    endif
#    if N_PP_LOCAL_C(161)
        N_PP_LOCAL_MACRO(161)
#    endif
#    if N_PP_LOCAL_C(162)
        N_PP_LOCAL_MACRO(162)
#    endif
#    if N_PP_LOCAL_C(163)
        N_PP_LOCAL_MACRO(163)
#    endif
#    if N_PP_LOCAL_C(164)
        N_PP_LOCAL_MACRO(164)
#    endif
#    if N_PP_LOCAL_C(165)
        N_PP_LOCAL_MACRO(165)
#    endif
#    if N_PP_LOCAL_C(166)
        N_PP_LOCAL_MACRO(166)
#    endif
#    if N_PP_LOCAL_C(167)
        N_PP_LOCAL_MACRO(167)
#    endif
#    if N_PP_LOCAL_C(168)
        N_PP_LOCAL_MACRO(168)
#    endif
#    if N_PP_LOCAL_C(169)
        N_PP_LOCAL_MACRO(169)
#    endif
#    if N_PP_LOCAL_C(170)
        N_PP_LOCAL_MACRO(170)
#    endif
#    if N_PP_LOCAL_C(171)
        N_PP_LOCAL_MACRO(171)
#    endif
#    if N_PP_LOCAL_C(172)
        N_PP_LOCAL_MACRO(172)
#    endif
#    if N_PP_LOCAL_C(173)
        N_PP_LOCAL_MACRO(173)
#    endif
#    if N_PP_LOCAL_C(174)
        N_PP_LOCAL_MACRO(174)
#    endif
#    if N_PP_LOCAL_C(175)
        N_PP_LOCAL_MACRO(175)
#    endif
#    if N_PP_LOCAL_C(176)
        N_PP_LOCAL_MACRO(176)
#    endif
#    if N_PP_LOCAL_C(177)
        N_PP_LOCAL_MACRO(177)
#    endif
#    if N_PP_LOCAL_C(178)
        N_PP_LOCAL_MACRO(178)
#    endif
#    if N_PP_LOCAL_C(179)
        N_PP_LOCAL_MACRO(179)
#    endif
#    if N_PP_LOCAL_C(180)
        N_PP_LOCAL_MACRO(180)
#    endif
#    if N_PP_LOCAL_C(181)
        N_PP_LOCAL_MACRO(181)
#    endif
#    if N_PP_LOCAL_C(182)
        N_PP_LOCAL_MACRO(182)
#    endif
#    if N_PP_LOCAL_C(183)
        N_PP_LOCAL_MACRO(183)
#    endif
#    if N_PP_LOCAL_C(184)
        N_PP_LOCAL_MACRO(184)
#    endif
#    if N_PP_LOCAL_C(185)
        N_PP_LOCAL_MACRO(185)
#    endif
#    if N_PP_LOCAL_C(186)
        N_PP_LOCAL_MACRO(186)
#    endif
#    if N_PP_LOCAL_C(187)
        N_PP_LOCAL_MACRO(187)
#    endif
#    if N_PP_LOCAL_C(188)
        N_PP_LOCAL_MACRO(188)
#    endif
#    if N_PP_LOCAL_C(189)
        N_PP_LOCAL_MACRO(189)
#    endif
#    if N_PP_LOCAL_C(190)
        N_PP_LOCAL_MACRO(190)
#    endif
#    if N_PP_LOCAL_C(191)
        N_PP_LOCAL_MACRO(191)
#    endif
#    if N_PP_LOCAL_C(192)
        N_PP_LOCAL_MACRO(192)
#    endif
#    if N_PP_LOCAL_C(193)
        N_PP_LOCAL_MACRO(193)
#    endif
#    if N_PP_LOCAL_C(194)
        N_PP_LOCAL_MACRO(194)
#    endif
#    if N_PP_LOCAL_C(195)
        N_PP_LOCAL_MACRO(195)
#    endif
#    if N_PP_LOCAL_C(196)
        N_PP_LOCAL_MACRO(196)
#    endif
#    if N_PP_LOCAL_C(197)
        N_PP_LOCAL_MACRO(197)
#    endif
#    if N_PP_LOCAL_C(198)
        N_PP_LOCAL_MACRO(198)
#    endif
#    if N_PP_LOCAL_C(199)
        N_PP_LOCAL_MACRO(199)
#    endif
#    if N_PP_LOCAL_C(200)
        N_PP_LOCAL_MACRO(200)
#    endif
#    if N_PP_LOCAL_C(201)
        N_PP_LOCAL_MACRO(201)
#    endif
#    if N_PP_LOCAL_C(202)
        N_PP_LOCAL_MACRO(202)
#    endif
#    if N_PP_LOCAL_C(203)
        N_PP_LOCAL_MACRO(203)
#    endif
#    if N_PP_LOCAL_C(204)
        N_PP_LOCAL_MACRO(204)
#    endif
#    if N_PP_LOCAL_C(205)
        N_PP_LOCAL_MACRO(205)
#    endif
#    if N_PP_LOCAL_C(206)
        N_PP_LOCAL_MACRO(206)
#    endif
#    if N_PP_LOCAL_C(207)
        N_PP_LOCAL_MACRO(207)
#    endif
#    if N_PP_LOCAL_C(208)
        N_PP_LOCAL_MACRO(208)
#    endif
#    if N_PP_LOCAL_C(209)
        N_PP_LOCAL_MACRO(209)
#    endif
#    if N_PP_LOCAL_C(210)
        N_PP_LOCAL_MACRO(210)
#    endif
#    if N_PP_LOCAL_C(211)
        N_PP_LOCAL_MACRO(211)
#    endif
#    if N_PP_LOCAL_C(212)
        N_PP_LOCAL_MACRO(212)
#    endif
#    if N_PP_LOCAL_C(213)
        N_PP_LOCAL_MACRO(213)
#    endif
#    if N_PP_LOCAL_C(214)
        N_PP_LOCAL_MACRO(214)
#    endif
#    if N_PP_LOCAL_C(215)
        N_PP_LOCAL_MACRO(215)
#    endif
#    if N_PP_LOCAL_C(216)
        N_PP_LOCAL_MACRO(216)
#    endif
#    if N_PP_LOCAL_C(217)
        N_PP_LOCAL_MACRO(217)
#    endif
#    if N_PP_LOCAL_C(218)
        N_PP_LOCAL_MACRO(218)
#    endif
#    if N_PP_LOCAL_C(219)
        N_PP_LOCAL_MACRO(219)
#    endif
#    if N_PP_LOCAL_C(220)
        N_PP_LOCAL_MACRO(220)
#    endif
#    if N_PP_LOCAL_C(221)
        N_PP_LOCAL_MACRO(221)
#    endif
#    if N_PP_LOCAL_C(222)
        N_PP_LOCAL_MACRO(222)
#    endif
#    if N_PP_LOCAL_C(223)
        N_PP_LOCAL_MACRO(223)
#    endif
#    if N_PP_LOCAL_C(224)
        N_PP_LOCAL_MACRO(224)
#    endif
#    if N_PP_LOCAL_C(225)
        N_PP_LOCAL_MACRO(225)
#    endif
#    if N_PP_LOCAL_C(226)
        N_PP_LOCAL_MACRO(226)
#    endif
#    if N_PP_LOCAL_C(227)
        N_PP_LOCAL_MACRO(227)
#    endif
#    if N_PP_LOCAL_C(228)
        N_PP_LOCAL_MACRO(228)
#    endif
#    if N_PP_LOCAL_C(229)
        N_PP_LOCAL_MACRO(229)
#    endif
#    if N_PP_LOCAL_C(230)
        N_PP_LOCAL_MACRO(230)
#    endif
#    if N_PP_LOCAL_C(231)
        N_PP_LOCAL_MACRO(231)
#    endif
#    if N_PP_LOCAL_C(232)
        N_PP_LOCAL_MACRO(232)
#    endif
#    if N_PP_LOCAL_C(233)
        N_PP_LOCAL_MACRO(233)
#    endif
#    if N_PP_LOCAL_C(234)
        N_PP_LOCAL_MACRO(234)
#    endif
#    if N_PP_LOCAL_C(235)
        N_PP_LOCAL_MACRO(235)
#    endif
#    if N_PP_LOCAL_C(236)
        N_PP_LOCAL_MACRO(236)
#    endif

#    if N_PP_LOCAL_C(237)
        N_PP_LOCAL_MACRO(237)
#    endif
#    if N_PP_LOCAL_C(238)
        N_PP_LOCAL_MACRO(238)
#    endif
#    if N_PP_LOCAL_C(239)
        N_PP_LOCAL_MACRO(239)
#    endif
#    if N_PP_LOCAL_C(240)
        N_PP_LOCAL_MACRO(240)
#    endif
#    if N_PP_LOCAL_C(241)
        N_PP_LOCAL_MACRO(241)
#    endif
#    if N_PP_LOCAL_C(242)
        N_PP_LOCAL_MACRO(242)
#    endif
#    if N_PP_LOCAL_C(243)
        N_PP_LOCAL_MACRO(243)
#    endif
#    if N_PP_LOCAL_C(244)
        N_PP_LOCAL_MACRO(244)
#    endif
#    if N_PP_LOCAL_C(245)
        N_PP_LOCAL_MACRO(245)
#    endif
#    if N_PP_LOCAL_C(246)
        N_PP_LOCAL_MACRO(246)
#    endif
#    if N_PP_LOCAL_C(247)
        N_PP_LOCAL_MACRO(247)
#    endif
#    if N_PP_LOCAL_C(248)
        N_PP_LOCAL_MACRO(248)
#    endif
#    if N_PP_LOCAL_C(249)
        N_PP_LOCAL_MACRO(249)
#    endif
#    if N_PP_LOCAL_C(250)
        N_PP_LOCAL_MACRO(250)
#    endif
#    if N_PP_LOCAL_C(251)
        N_PP_LOCAL_MACRO(251)
#    endif
#    if N_PP_LOCAL_C(252)
        N_PP_LOCAL_MACRO(252)
#    endif
#    if N_PP_LOCAL_C(253)
        N_PP_LOCAL_MACRO(253)
#    endif
#    if N_PP_LOCAL_C(254)
        N_PP_LOCAL_MACRO(254)
#    endif
#    if N_PP_LOCAL_C(255)
        N_PP_LOCAL_MACRO(255)
#    endif
#    if N_PP_LOCAL_C(256)
        N_PP_LOCAL_MACRO(256)
#    endif
#
# else
#
#    include "nsl/pp/config/limits.h"
#    
#    if N_PP_LIMIT_ITERATION == 256
#    include "nsl/pp/iteration/detail/limits/local_256.h"
#    elif N_PP_LIMIT_ITERATION == 512
#    include "nsl/pp/iteration/detail/limits/local_256.h"
#    include "nsl/pp/iteration/detail/limits/local_512.h"
#    elif N_PP_LIMIT_ITERATION == 1024
#    include "nsl/pp/iteration/detail/limits/local_256.h"
#    include "nsl/pp/iteration/detail/limits/local_512.h"
#    include "nsl/pp/iteration/detail/limits/local_1024.h"
#    else
#    error Incorrect value for the N_PP_LIMIT_ITERATION limit
#    endif
#
# endif
#
# endif
#
# undef N_PP_LOCAL_LIMITS
#
# undef N_PP_LOCAL_S
# undef N_PP_LOCAL_F
#
# undef N_PP_LOCAL_MACRO
