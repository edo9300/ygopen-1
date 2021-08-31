/*
 * Copyright (c) 2021, Dylam De La Torre <dyxel04@gmail.com>
 *
 * SPDX-License-Identifier: AGPL-3.0-or-later
 */
#ifndef YGOPEN_DUEL_CONSTANTS_REASON_HPP
#define YGOPEN_DUEL_CONSTANTS_REASON_HPP
#include <cstdint>

namespace YGOpen::Duel
{

enum Reason : uint64_t
{
	REASON_UNSPECIFIED = 0x0U,
	REASON_DESTROY = 0x1U,
	REASON_RELEASE = 0x2U,
	REASON_TEMPORARY = 0x4U,
	REASON_MATERIAL = 0x8U,
	REASON_SUMMON = 0x10U,
	REASON_BATTLE = 0x20U,
	REASON_EFFECT = 0x40U,
	REASON_COST = 0x80U,
	REASON_ADJUST = 0x100U,
	REASON_LOST_TARGET = 0x200U,
	REASON_RULE = 0x400U,
	REASON_SPSUMMON = 0x800U,
	// 	REASON_DISSUMMON   = 0x1000U,
	REASON_FLIP = 0x2000U,
	REASON_DISCARD = 0x4000U,
	REASON_REV_DAMAGE = 0x8000U,
	REASON_REV_RECOVER = 0x10000U,
	REASON_RETURN = 0x20000U,
	REASON_FUSION = 0x40000U,
	REASON_SYNCHRO = 0x80000U,
	REASON_RITUAL = 0x100000U,
	REASON_XYZ = 0x200000U,
	REASON_REPLACE = 0x1000000U,
	REASON_DRAW = 0x2000000U,
	REASON_REDIRECT = 0x4000000U,
	REASON_REVEAL = 0x8000000U,
	REASON_LINK = 0x10000000U,
};

} // namespace YGOpen::Duel

#endif // YGOPEN_DUEL_CONSTANTS_REASON_HPP