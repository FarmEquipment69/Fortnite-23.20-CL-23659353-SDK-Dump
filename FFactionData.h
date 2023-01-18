// ScriptStruct /Script/FortniteGame.FactionData
// Size: 0x110
struct FFactionData
{
	bool bActive; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText Name; // 0x8 (0x18)
	struct FText Description; // 0x20 (0x18)
	struct FGameplayTag FactionTag; // 0x38 (0x4)
	struct TEnumAsByte<EFortFactionAttitude> DefaultAttitude; // 0x3c (0x1)
	bool bAreFactionMemberAllies; // 0x3d (0x1)
	bool bShouldSpecificRelationsApplyToEntireFaction; // 0x3e (0x1)
	bool bMembersCanResetSpecificRelation; // 0x3f (0x1)
	struct FScalableFloat ResetSpecificRelationUnawareDelay; // 0x40 (0x28)
	struct FScalableFloat ResetSpecificRelationNoDamageDelay; // 0x68 (0x28)
	struct FGameplayTagContainer RelationExceptions[0x3]; // 0x90 (0x20) (ARRAY) 
	struct FGameplayTagContainer AllowFriendlyFireAgainstFactions; // 0xf0 (0x20)
};

