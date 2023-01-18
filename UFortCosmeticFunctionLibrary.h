// Class /Script/FortniteGame.FortCosmeticFunctionLibrary
// Size: 0x28
class UFortCosmeticFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.RequestPresetCosmeticSwap (Underlying native function: RequestPresetCosmeticSwap 0x5d1cf80)
	static bool RequestPresetCosmeticSwap(class AFortPlayerPawn*& PlayerPawn, struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>& SoftItemDefinition, int& SwapIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.MakeSwapDataForCosmetic (Underlying native function: MakeSwapDataForCosmetic 0x873e860)
	static struct FFortSwapItemAndVariantData MakeSwapDataForCosmetic(class UAthenaCharacterItemDefinition*& Definition, struct TArray<struct FMcpVariantChannelInfo>& ChannelInfoList); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.IsItemInLoadout (Underlying native function: IsItemInLoadout 0x873e684)
	static bool IsItemInLoadout(struct FFortAthenaLoadout& Loadout, struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>& Item); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetVariantChannelActiveIndexForSlot (Underlying native function: GetVariantChannelActiveIndexForSlot 0x873e068)
	static void GetVariantChannelActiveIndexForSlot(class UObject*& WorldContextObject, enum EAthenaCustomizationCategory& Slot, int& SubslotIndex, struct FFortAthenaLoadout& Loadout, struct FGameplayTag& Channel, struct TArray<struct FGameplayTag>& VariantList, int& Index, bool& bIndexIsValid, bool& bFoundChannel, bool& bErrorIfChannelMissing, bool& bErrorIfTagNotInArray); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetVariantChannelActiveIndexForItem (Underlying native function: GetVariantChannelActiveIndexForItem 0x873dcc0)
	static void GetVariantChannelActiveIndexForItem(class UObject*& WorldContextObject, class UAthenaCosmeticItemDefinition*& Item, struct FFortAthenaLoadout& Loadout, struct FGameplayTag& Channel, struct TArray<struct FGameplayTag>& VariantList, int& Index, bool& bIndexIsValid, bool& bFoundChannel, bool& bErrorIfChannelMissing, bool& bErrorIfTagNotInArray); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetLoadoutMetaTagsForItem (Underlying native function: GetLoadoutMetaTagsForItem 0x5d1cdb0)
	static struct FGameplayTagContainer GetLoadoutMetaTagsForItem(struct FFortAthenaLoadout& Loadout, struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>& SoftItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetActiveVariantsForItem (Underlying native function: GetActiveVariantsForItem 0x873ced8)
	static void GetActiveVariantsForItem(class UAthenaCosmeticItemDefinition*& Item, struct FFortAthenaLoadout& Loadout, struct TArray<struct FMcpVariantChannelInfo>& OutVariantChannels); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetActiveVariantForSoftItemAndChannel (Underlying native function: GetActiveVariantForSoftItemAndChannel 0x873ccc4)
	static struct FGameplayTag GetActiveVariantForSoftItemAndChannel(struct FFortAthenaLoadout& Loadout, struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>& Item, struct FGameplayTag& VariantChannelTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetActiveVariantForItemAndChannel (Underlying native function: GetActiveVariantForItemAndChannel 0x873cb60)
	static struct FGameplayTag GetActiveVariantForItemAndChannel(struct FFortAthenaLoadout& Loadout, class UAthenaCosmeticItemDefinition*& Item, struct FGameplayTag& VariantChannelTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.GetActiveMinimalVariantsForItem (Underlying native function: GetActiveMinimalVariantsForItem 0x873c978)
	static void GetActiveMinimalVariantsForItem(class UAthenaCosmeticItemDefinition*& Item, struct FFortAthenaLoadout& Loadout, struct TArray<struct FCosmeticVariantInfo*>& OutVariantChannels); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.FilterPartsByTag (Underlying native function: FilterPartsByTag 0x873c5d0)
	static struct TArray<struct FAppliedCharacterPartInfo> FilterPartsByTag(struct TArray<struct FAppliedCharacterPartInfo>& CharacterPartInfo, struct FGameplayTag& RequiredTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.FilterPartMeshComponentsByTag (Underlying native function: FilterPartMeshComponentsByTag 0x873c3ec)
	static struct TArray<class USkeletalMeshComponent*> FilterPartMeshComponentsByTag(struct TArray<struct FAppliedCharacterPartInfo>& CharacterPartInfo, struct FGameplayTag& RequiredTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.DoVariantSelectionsMatch (Underlying native function: DoVariantSelectionsMatch 0x873c2a0)
	static bool DoVariantSelectionsMatch(struct TArray<struct FMcpVariantChannelInfo>& VariantChannelsA, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelsB, bool& bCompareOwnedTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCosmeticFunctionLibrary.DoMinimalVariantSelectionsMatch (Underlying native function: DoMinimalVariantSelectionsMatch 0x873c114)
	static bool DoMinimalVariantSelectionsMatch(struct TArray<struct FCosmeticVariantInfo*>& VariantChannelsA, struct TArray<struct FCosmeticVariantInfo*>& VariantChannelsB); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

