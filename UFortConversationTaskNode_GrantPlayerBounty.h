// Class /Script/FortniteGame.FortConversationTaskNode_GrantPlayerBounty
// Size: 0x3c8
class UFortConversationTaskNode_GrantPlayerBounty : public UFortConversationTaskNode_GrantStaticQuest
{
	struct TWeakObjectPtr<class UFortUrgentQuestItemDefinition> TargetQuestToGrantPtr; // 0x1f0 (0x28)
	struct FGameplayTagQuery TargetFilter; // 0x218 (0x48)
	struct FScalableFloat Price; // 0x260 (0x28)
	struct FScalableFloat Rarity; // 0x288 (0x28)
	struct FScalableFloat NumberOfPlayersToSelectFrom; // 0x2b0 (0x28)
	struct FScalableFloat MediumThreatRange; // 0x2d8 (0x28)
	struct FScalableFloat HighThreatRange; // 0x300 (0x28)
	struct FScalableFloat ThreatRefreshRate; // 0x328 (0x28)
	struct FScalableFloat AllowPoaching; // 0x350 (0x28)
	struct TWeakObjectPtr<class UFortUrgentQuestItemDefinition> ProtectorQuestToGrantPtr; // 0x378 (0x28)
	struct TWeakObjectPtr<class UFortUrgentQuestItemDefinition> PoachedQuestToGrantPtr; // 0x3a0 (0x28)
};

