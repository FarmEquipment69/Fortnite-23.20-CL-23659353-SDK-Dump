// Class /Script/CraftingRuntime.CraftingObjectBGA
// Size: 0xa40
class ACraftingObjectBGA : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x8]; // 0x9d8 (0x8) 
	class AFortInventory* Inventory; // 0x9e0 (0x8)
	unsigned char unreflected_9e8[0x18]; // 0x9e8 (0x18) 
	class USphereComponent* SphereComponentInteractionRange; // 0xa00 (0x8)
	struct TWeakObjectPtr<class UClass> MenuWidget; // 0xa08 (0x28)
	class UWidgetComponent* WidgetComponentPotContents; // 0xa30 (0x8)
	bool bShowCraftingUI; // 0xa38 (0x1)
	bool bSendEventMessageOnLocalInteract; // 0xa39 (0x1)
	unsigned char padding_a3a[0x6]; // 0xa3a (0x6)

	/* Functions */

	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap (Underlying native function: HandleInteractionRangeEndOverlap 0x72fa33c)
	void HandleInteractionRangeEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap (Underlying native function: HandleInteractionRangeBeginOverlap 0x72fa168)
	void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)
};

