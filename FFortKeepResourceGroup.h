// ScriptStruct /Script/FortniteGame.FortKeepResourceGroup
// Size: 0x48
struct FFortKeepResourceGroup : FTableRowBase
{
	struct FName Container; // 0x8 (0x4)
	int ItemCount; // 0xc (0x4)
	struct FString ResourceName; // 0x10 (0x10)
	struct TWeakObjectPtr<class UFortItemDefinition> FullPath; // 0x20 (0x28)
};

