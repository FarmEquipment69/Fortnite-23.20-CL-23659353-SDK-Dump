// Class /Script/FortniteGame.FortDamageSet
// Size: 0x2b0
class UFortDamageSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData OutgoingBaseDamage; // 0x30 (0x28)
	struct FFortGameplayAttributeData OutgoingBaseEnvironmentalDamage; // 0x58 (0x28)
	struct FFortGameplayAttributeData OutgoingBaseImpactDamage; // 0x80 (0x28)
	struct FFortGameplayAttributeData OutgoingAbilityDamage; // 0xa8 (0x28)
	struct FFortGameplayAttributeData OutgoingBaseAbilityDamageMultiplier; // 0xd0 (0x28)
	struct FFortGameplayAttributeData ZoneCritMultiplier; // 0xf8 (0x28)
	struct FFortGameplayAttributeData DiceCritChance; // 0x120 (0x28)
	struct FFortGameplayAttributeData DiceCritMultiplier; // 0x148 (0x28)
	struct FFortGameplayAttributeData KnockbackMagnitude; // 0x170 (0x28)
	struct FFortGameplayAttributeData KnockbackZAngle; // 0x198 (0x28)
	struct FFortGameplayAttributeData StunTime; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData WeaponSkill; // 0x1e8 (0x28)
	struct FFortGameplayAttributeData CritRating; // 0x210 (0x28)
	struct FFortGameplayAttributeData MaxMeleeComboLevel; // 0x238 (0x28)
	struct FFortGameplayAttributeData ShieldDamageScale; // 0x260 (0x28)
	struct FFortGameplayAttributeData HealthDamageScale; // 0x288 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortDamageSet.OnRep_ZoneCritMultiplier (Underlying native function: OnRep_ZoneCritMultiplier 0x85a9994)
	void OnRepZoneCritMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_WeaponSkill (Underlying native function: OnRep_WeaponSkill 0x85a9730)
	void OnRepWeaponSkill(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_StunTime (Underlying native function: OnRep_StunTime 0x85a85a8)
	void OnRepStunTime(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_ShieldDamageScale (Underlying native function: OnRep_ShieldDamageScale 0x85a7f48)
	void OnRepShieldDamageScale(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_OutgoingBaseImpactDamage (Underlying native function: OnRep_OutgoingBaseImpactDamage 0x85a7750)
	void OnRepOutgoingBaseImpactDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_OutgoingBaseEnvironmentalDamage (Underlying native function: OnRep_OutgoingBaseEnvironmentalDamage 0x85a7684)
	void OnRepOutgoingBaseEnvironmentalDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_OutgoingBaseDamage (Underlying native function: OnRep_OutgoingBaseDamage 0x85a75b8)
	void OnRepOutgoingBaseDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_OutgoingBaseAbilityDamageMultiplier (Underlying native function: OnRep_OutgoingBaseAbilityDamageMultiplier 0x85a74ec)
	void OnRepOutgoingBaseAbilityDamageMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_OutgoingAbilityDamage (Underlying native function: OnRep_OutgoingAbilityDamage 0x85a7420)
	void OnRepOutgoingAbilityDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_KnockbackZAngle (Underlying native function: OnRep_KnockbackZAngle 0x85a65c8)
	void OnRepKnockbackZAngle(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_KnockbackMagnitude (Underlying native function: OnRep_KnockbackMagnitude 0x85a64fc)
	void OnRepKnockbackMagnitude(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_HealthDamageScale (Underlying native function: OnRep_HealthDamageScale 0x85a5aa0)
	void OnRepHealthDamageScale(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_DiceCritMultiplier (Underlying native function: OnRep_DiceCritMultiplier 0x85a51c8)
	void OnRepDiceCritMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortDamageSet.OnRep_DiceCritChance (Underlying native function: OnRep_DiceCritChance 0x85a50fc)
	void OnRepDiceCritChance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)
};

