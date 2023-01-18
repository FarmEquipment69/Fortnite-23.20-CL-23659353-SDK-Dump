// ScriptStruct /Script/FortniteGame.DuelOverlayData
// Size: 0x88
struct FDuelOverlayData
{
	struct FText ChallengerName; // 0x0 (0x18)
	struct FText ChallengedNPCName; // 0x18 (0x18)
	struct TWeakObjectPtr<class UObject> ChallengerSocialAvatarBrushPtr; // 0x30 (0x28)
	struct TWeakObjectPtr<class UObject> ChallengedNPCSocialAvatarBrushPtr; // 0x58 (0x28)
	class UFortItemDefinition* ChallengedNPCLootDef; // 0x80 (0x8)
};

