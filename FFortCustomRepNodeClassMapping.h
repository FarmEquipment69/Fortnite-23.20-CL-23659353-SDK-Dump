// ScriptStruct /Script/FortniteGame.FortCustomRepNodeClassMapping
// Size: 0x20
struct FFortCustomRepNodeClassMapping
{
	class UClass* NodeClass; // 0x0 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> ClassesToRoute; // 0x8 (0x10)
	bool bShouldDisableSquadNodes; // 0x18 (0x1)
	bool bShouldDisableHighFrequencyPawnRouting; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

