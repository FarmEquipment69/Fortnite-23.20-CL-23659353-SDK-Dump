// Class /Script/CommonConversationRuntime.ConversationDatabase
// Size: 0xe8
class UConversationDatabase : public UPrimaryDataAsset
{
	int CompilerVersion; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TMap<struct FGuid, class UConversationNode*> ReachableNodeMap; // 0x38 (0x50)
	struct TArray<struct FConversationEntryList> EntryTags; // 0x88 (0x10)
	struct FGameplayTagContainer ExitTags; // 0x98 (0x20)
	struct TArray<struct FGuid> InternalNodeIds; // 0xb8 (0x10)
	struct TArray<struct FGuid> LinkedToNodeIds; // 0xc8 (0x10)
	struct TArray<struct FCommonDialogueBankParticipant> Speakers; // 0xd8 (0x10)
};

