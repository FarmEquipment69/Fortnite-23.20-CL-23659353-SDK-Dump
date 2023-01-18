// Class /Script/FortniteGame.FortControlResistanceSet
// Size: 0x1f8
class UFortControlResistanceSet : public UFortAttributeSet
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FFortGameplayAttributeData ControlResistance; // 0x38 (0x28)
	struct FFortGameplayAttributeData MaxControlResistance; // 0x60 (0x28)
	struct FFortGameplayAttributeData ControlResistanceRegenRate; // 0x88 (0x28)
	struct FFortGameplayAttributeData ControlResistanceRegenDelay; // 0xb0 (0x28)
	struct FFortGameplayAttributeData ControlResistanceRegenThreshold; // 0xd8 (0x28)
	struct FFortGameplayAttributeData KnockbackThreshold; // 0x100 (0x28)
	struct FFortGameplayAttributeData KnockbackMultiplier; // 0x128 (0x28)
	struct FFortGameplayAttributeData ImpactDamageResistance; // 0x150 (0x28)
	struct FFortGameplayAttributeData ImpactDamageMultiplier; // 0x178 (0x28)
	struct FFortGameplayAttributeData ImpactDamage; // 0x1a0 (0x28)
	unsigned char padding_1c8[0x30]; // 0x1c8 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortControlResistanceSet.OnRep_MaxControlResistance (Underlying native function: OnRep_MaxControlResistance 0x85a69c4)
	void OnRepMaxControlResistance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortControlResistanceSet.OnRep_ControlResistance (Underlying native function: OnRep_ControlResistance 0x85a4dcc)
	void OnRepControlResistance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

