// Class /Script/CampsiteRuntime.CampsiteFunctionLibraryNative
// Size: 0x28
class UCampsiteFunctionLibraryNative : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.StoreHealthOnPickupFromProp (Underlying native function: StoreHealthOnPickupFromProp 0x72a4154)
	static void StoreHealthOnPickupFromProp(class ABuildingProp*& BuildingProp, class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.SetHealthOnPropFromItemEntry (Underlying native function: SetHealthOnPropFromItemEntry 0x72a3ebc)
	static void SetHealthOnPropFromItemEntry(struct FFortItemEntry& FortItem, class ABuildingProp*& BuildingProp); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemEntryAvailable (Underlying native function: IsItemEntryAvailable 0x72a3b80)
	static bool IsItemEntryAvailable(class UObject*& WorldContextObject, struct FFortItemEntry& FortItem); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemDefinitionAvailable (Underlying native function: IsItemDefinitionAvailable 0x72a3a3c)
	static bool IsItemDefinitionAvailable(class UObject*& WorldContextObject, class UFortItemDefinition*& FortItem); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemAvailable (Underlying native function: IsItemAvailable 0x72a3954)
	static bool IsItemAvailable(class UObject*& WorldContextObject, class UFortItem*& FortItem); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteFunctionLibraryNative.GetItemEntryCopyFromWeapon (Underlying native function: GetItemEntryCopyFromWeapon 0x72a37c8)
	static struct FFortItemEntry GetItemEntryCopyFromWeapon(class AFortWeapon*& Weapon); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)
};

