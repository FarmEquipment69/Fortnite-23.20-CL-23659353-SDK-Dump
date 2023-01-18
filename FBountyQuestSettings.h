// ScriptStruct /Script/FortniteGame.BountyQuestSettings
// Size: 0x100
struct FBountyQuestSettings
{
	bool bSetTargetForSquad; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UFortUrgentQuestItemDefinition> TargetQuestToGrantPtr; // 0x8 (0x28)
	bool bGrantProtectorQuests; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UFortUrgentQuestItemDefinition> ProtectorQuestToGrantPtr; // 0x38 (0x28)
	struct FScalableFloat MediumThreatRange; // 0x60 (0x28)
	struct FScalableFloat HighThreatRange; // 0x88 (0x28)
	struct FScalableFloat ThreatRefreshRate; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> NPCIcon; // 0xd8 (0x28)
};

