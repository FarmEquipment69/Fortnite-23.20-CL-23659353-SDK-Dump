// ScriptStruct /Script/FortniteGame.GrantItemMultiData
// Size: 0x60
struct FGrantItemMultiData : FTableRowBase
{
	struct TWeakObjectPtr<class UFortItemDefinition> ItemToGrant; // 0x8 (0x28)
	struct FScalableFloat NumberOfItemsToGrant; // 0x30 (0x28)
	bool bRemoveExistingBeforeGrant; // 0x58 (0x1)
	bool bRequiresPreviousInstance; // 0x59 (0x1)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)
};

