// Class /Script/FortniteGame.FortCharacterAttrSet
// Size: 0xf8
class UFortCharacterAttrSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData Fortitude; // 0x30 (0x28)
	struct FFortGameplayAttributeData Offense; // 0x58 (0x28)
	struct FFortGameplayAttributeData Tech; // 0x80 (0x28)
	struct FFortGameplayAttributeData Resistance; // 0xa8 (0x28)
	struct FFortGameplayAttributeData MaxCharacterLevel; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortCharacterAttrSet.OnRep_Tech (Underlying native function: OnRep_Tech 0x85a880c)
	void OnRepTech(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCharacterAttrSet.OnRep_Resistance (Underlying native function: OnRep_Resistance 0x85a7c18)
	void OnRepResistance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCharacterAttrSet.OnRep_Offense (Underlying native function: OnRep_Offense 0x85a7288)
	void OnRepOffense(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCharacterAttrSet.OnRep_MaxCharacterLevel (Underlying native function: OnRep_MaxCharacterLevel 0x85a68f8)
	void OnRepMaxCharacterLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCharacterAttrSet.OnRep_Fortitude (Underlying native function: OnRep_Fortitude 0x85a55d8)
	void OnRepFortitude(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

