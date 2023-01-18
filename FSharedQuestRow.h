// ScriptStruct /Script/FortniteGame.SharedQuestRow
// Size: 0x48
struct FSharedQuestRow : FTableRowBase
{
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> Quest; // 0x8 (0x28)
	struct FString Bucket; // 0x30 (0x10)
	float Weight; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

