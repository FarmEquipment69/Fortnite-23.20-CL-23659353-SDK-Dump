// Class /Script/FortniteGame.CreativeQuickbarComponent
// Size: 0x178
class UCreativeQuickbarComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnCreativeQuickbarActiveChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarEquippedChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarClutchReleasedNoAction; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnItemAddedToMoveTool; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnItemAddedToCreativeQuickbar; // 0xe0 (0x10)
	bool bIsCreativeQuickbarActive; // 0xf0 (0x1)
	bool bIsCreativeQuickbarEquipped; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x6]; // 0xf2 (0x6) 
	struct TArray<class UFortCreativeUserPrefabItemDefinition*> QuickbarSlotItemDefinitions; // 0xf8 (0x10)
	unsigned char unreflected_108[0x28]; // 0x108 (0x28) 
	class UFortPlaysetWorldItemDefinition* QuickbarSlotPlaysetItemDefinition; // 0x130 (0x8)
	class ULevelSaveRecord* CurrentQuickbarRequestSaveRecord; // 0x138 (0x8)
	class UInputComponent* CreativeQuickbarInputComponent; // 0x140 (0x8)
	class UInputComponent* CreativeQuickbarActiveInputComponent; // 0x148 (0x8)
	unsigned char padding_150[0x28]; // 0x150 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.CreativeQuickbarComponent.SetIsQuickbarEquipped (Underlying native function: SetIsQuickbarEquipped 0x87b6a40)
	void SetIsQuickbarEquipped(bool& bIsEquipped); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ServerAddToQuickBar (Underlying native function: ServerAddToQuickBar 0x87b6354)
	void ServerAddToQuickBar(struct TArray<class AActor*>& Actors, int& DesiredSlotIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ServerAddItemToQuickBar (Underlying native function: ServerAddItemToQuickBar 0x87b61c8)
	void ServerAddItemToQuickBar(class UFortItemDefinition*& ItemDefinition, int& DesiredSlotIndexconst, struct FGuid& PreviousItemGuid, bool& bUseVolumeToSpawn); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.PopulateQuickbarSlotFromSelection (Underlying native function: PopulateQuickbarSlotFromSelection 0x871af18)
	void PopulateQuickbarSlotFromSelection(int& SlotIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.IsQuickbarActive (Underlying native function: IsQuickbarActive 0x87b4a20)
	bool IsQuickbarActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x87b4304)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleQuickbarClutchReleased (Underlying native function: HandleQuickbarClutchReleased 0x756d600)
	void HandleQuickbarClutchReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleQuickbarClutchPressed (Underlying native function: HandleQuickbarClutchPressed 0x87b42ec)
	void HandleQuickbarClutchPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleMoveToolInteractionStarted (Underlying native function: HandleMoveToolInteractionStarted 0x87b426c)
	void HandleMoveToolInteractionStarted(class UObjectInteractionBehavior*& InteractionMode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleMoveToolInteractionEnded (Underlying native function: HandleMoveToolInteractionEnded 0x87b4258)
	void HandleMoveToolInteractionEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0x87b407c)
	void HandleInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleCreativeQuickbarReleased (Underlying native function: HandleCreativeQuickbarReleased 0x87b3ff8)
	void HandleCreativeQuickbarReleased(int& SlotIndex); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleCreativeQuickbarPressed (Underlying native function: HandleCreativeQuickbarPressed 0x87b3f74)
	void HandleCreativeQuickbarPressed(int& SlotIndex); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ExecuteDelayedAddItemToQuickbar (Underlying native function: ExecuteDelayedAddItemToQuickbar 0x87b20e8)
	void ExecuteDelayedAddItemToQuickbar(class UFortItemDefinition*& ItemDefinition, int& DesiredSlotIndex, bool& bUseVolumeToSpawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ExecuteDelayedAddItemToMoveTool (Underlying native function: ExecuteDelayedAddItemToMoveTool 0x87b2020)
	void ExecuteDelayedAddItemToMoveTool(class UFortItemDefinition*& ItemDefinition, bool& bUseVolume); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ClientAddToQuickBarComplete (Underlying native function: ClientAddToQuickBarComplete 0x87b0bac)
	void ClientAddToQuickBarComplete(int& SlotPutIn, struct FGuid& ItemGuid, class UFortItemDefinition*& Playset, bool& UseDelayedAddToQuickbar, bool& bUseVolumeToSpawn); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ActivateQuickbarSlot (Underlying native function: ActivateQuickbarSlot 0x87b08d8)
	void ActivateQuickbarSlot(int& SlotIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)
};

