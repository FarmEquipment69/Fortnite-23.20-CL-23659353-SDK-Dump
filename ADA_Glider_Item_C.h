// BlueprintGeneratedClass /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C
// Size: 0x1108
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x10e0 (0x8)
	struct FGameplayTagContainer ErrorReason; // 0x10e8 (0x20)

	/* Functions */

	// Function /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C.IsOnGround (Has no native function)
	void IsOnGround(bool& bOnGround, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsFallingReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError (Has no native function)
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger (Has no native function)
	void BPPressTrigger(class AFortDecoHelper*& FortDecoHelper); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item (Has no native function)
	void ExecuteUbergraphDAGliderItem(int& EntryPoint, class AFortDecoHelper*& K2NodeEventFortDecoHelper); // (Final | 0x00008000)
};

