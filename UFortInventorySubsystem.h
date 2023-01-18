// Class /Script/FortniteGame.FortInventorySubsystem
// Size: 0x60
class UFortInventorySubsystem : public UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnItemAddedDelegate; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnItemRemovedDelegate; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnViewTargetInventoryUpdatedDelegate; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortInventorySubsystem.GetViewTargetItemForActionTag (Underlying native function: GetViewTargetItemForActionTag 0x8a64a0c)
	class UFortWorldItem* GetViewTargetItemForActionTag(class AFortPlayerController*& OwningPlayerController, struct FGameplayTag& ActionTag); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInventorySubsystem.GetItemForActionTag (Underlying native function: GetItemForActionTag 0x8a62e7c)
	class UFortWorldItem* GetItemForActionTag(class AFortPlayerController*& OwningPlayerController, struct FGameplayTag& ActionTag); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInventorySubsystem.GetActionTagForItem (Underlying native function: GetActionTagForItem 0x8a62280)
	struct FGameplayTag GetActionTagForItem(class UFortItem*& Item); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

