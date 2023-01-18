// ScriptStruct /Script/FortniteGame.FortFactionInfo
// Size: 0xe0
struct FFortFactionInfo
{
	struct FGameplayTag FactionTag; // 0x0 (0x4)
	struct TEnumAsByte<EFortFactionAttitude> DefaultAttitude; // 0x4 (0x1)
	unsigned char bHasSpecificRelations; // 0x5 (0x1)
	unsigned char bAreFactionMemberAllies; // 0x5 (0x1)
	unsigned char bShouldSpecificRelationsApplyToEntireFaction; // 0x5 (0x1)
	unsigned char bMembersCanResetSpecificRelation; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	float ResetSpecificRelationUnawareDelay; // 0x8 (0x4)
	float ResetSpecificRelationNoDamageDelay; // 0xc (0x4)
	struct FGameplayTagContainer FactionRelations[0x3]; // 0x10 (0x20) (ARRAY) 
	struct FGameplayTagContainer AllowFriendlyFireAgainstFactions; // 0x70 (0x20)
	struct FFortAffiliationActorIdentifierList SpecificRelations[0x3]; // 0x90 (0x10) (ARRAY) 
	struct TArray<class UFortActorComponent_Affiliation*> Members; // 0xc0 (0x10)
	struct TArray<struct FFortFactionSharedBBInfo> SharedBBInfos; // 0xd0 (0x10)
};

