// ScriptStruct /Script/FortniteGame.QuickBarSlotData
// Size: 0x40
struct FQuickBarSlotData
{
	struct TArray<enum EFortItemType> AcceptedItemTypes; // 0x0 (0x10)
	bool bStaticSlot; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TWeakObjectPtr<class UFortWorldItemDefinition> DefaultItem; // 0x18 (0x28)
};

