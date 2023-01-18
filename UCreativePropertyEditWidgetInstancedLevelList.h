// Class /Script/FortniteUI.CreativePropertyEditWidgetInstancedLevelList
// Size: 0x588
class UCreativePropertyEditWidgetInstancedLevelList : public UCreativePropertyEditWidgetLevelListBase
{
	struct TArray<class ULevelOptionObjectWrapper*> OldLevelOptionObjects; // 0x558 (0x10)
	bool bWaitingForNewLevel; // 0x568 (0x1)
	unsigned char unreflected_569[0x7]; // 0x569 (0x7) 
	struct FMulticastInlineDelegate OnNewLevelResult; // 0x570 (0x10)
	unsigned char padding_580[0x8]; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CreativePropertyEditWidgetInstancedLevelList.HandleNewLevelButtonClicked (Underlying native function: HandleNewLevelButtonClicked 0xa6d9458)
	void HandleNewLevelButtonClicked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetInstancedLevelList.ClientLevelListUpdated (Underlying native function: ClientLevelListUpdated 0xa6d75f4)
	void ClientLevelListUpdated(); // (Final | Native | Protected)
};

