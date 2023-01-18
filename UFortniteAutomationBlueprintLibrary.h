// Class /Script/FortniteGame.FortniteAutomationBlueprintLibrary
// Size: 0x28
class UFortniteAutomationBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SyncLoadCharacterParts (Underlying native function: SyncLoadCharacterParts 0x8f58208)
	static void SyncLoadCharacterParts(class UAthenaCharacterItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.StopAllParticles (Underlying native function: StopAllParticles 0x8f58118)
	static void StopAllParticles(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnCosmeticPlayerPawn (Underlying native function: SpawnCosmeticPlayerPawn 0x8f58004)
	static class AFortPlayerController* SpawnCosmeticPlayerPawn(struct FTransform& SpawnTransform); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaPickaxe (Underlying native function: SpawnAthenaPickaxe 0x8f57da8)
	static struct TArray<class AFortWeapon*> SpawnAthenaPickaxe(class UAthenaPickaxeItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaGlider (Underlying native function: SpawnAthenaGlider 0x8f57b4c)
	static struct TArray<class AFortPlayerParachute*> SpawnAthenaGlider(class UAthenaGliderItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaCharacterSkinPawn (Underlying native function: SpawnAthenaCharacterSkinPawn 0x8f578d0)
	static struct TArray<class AActor*> SpawnAthenaCharacterSkinPawn(class UAthenaCharacterItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations, class UClass*& MannequinClass); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaCharacterSkin (Underlying native function: SpawnAthenaCharacterSkin 0x8f57668)
	static class AFortPlayerMannequin* SpawnAthenaCharacterSkin(class UAthenaCharacterItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations, class UClass*& MannequinClass); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaBackpackPawn (Underlying native function: SpawnAthenaBackpackPawn 0x8f5742c)
	static struct TArray<class AActor*> SpawnAthenaBackpackPawn(class UAthenaBackpackItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.SpawnAthenaBackpack (Underlying native function: SpawnAthenaBackpack 0x8f571f0)
	static struct TArray<class AActor*> SpawnAthenaBackpack(class UAthenaBackpackItemDefinition*& ItemDefinition, struct FTransform& SpawnTransform, struct TArray<struct FMcpVariantChannelInfo>& VariantChannelInfos, bool& ClearAnimations); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ResetFPSChartsData (Underlying native function: ResetFPSChartsData 0x8f570c8)
	static bool ResetFPSChartsData(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ResetForcedAthenaCosmetics (Underlying native function: ResetForcedAthenaCosmetics 0x8f57168)
	static bool ResetForcedAthenaCosmetics(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.MakeVariantChannelInfosFromVariantTagContainer (Underlying native function: MakeVariantChannelInfosFromVariantTagContainer 0x8f56ee4)
	static struct TArray<struct FMcpVariantChannelInfo> MakeVariantChannelInfosFromVariantTagContainer(class UAthenaCosmeticItemDefinition*& ItemDefinition, struct FGameplayTagContainer& VariantTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.MakeVariantChannelInfo (Underlying native function: MakeVariantChannelInfo 0x8f56cac)
	static struct FMcpVariantChannelInfo MakeVariantChannelInfo(class UAthenaCosmeticItemDefinition*& ItemDefinition, struct FGameplayTag& Channel, struct FGameplayTag& ActiveVariant, struct FString& CustomData); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.MakeLoadoutFromVariantChannelInfos (Underlying native function: MakeLoadoutFromVariantChannelInfos 0x8f56b9c)
	static struct FFortAthenaLoadout MakeLoadoutFromVariantChannelInfos(struct TArray<struct FMcpVariantChannelInfo>& VariantInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetWrapPreviewObjects (Underlying native function: GetWrapPreviewObjects 0x8f56b04)
	static struct TArray<struct TWeakObjectPtr<class UObject>> GetWrapPreviewObjects(enum ESubGame& SubGame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetVariantNames (Underlying native function: GetVariantNames 0x8f569f4)
	static struct TArray<struct FGameplayTag> GetVariantNames(class UAthenaCosmeticItemDefinition*& ItemDefinition, struct FGameplayTag& VariantChannel, bool& UnlockableOnly); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetVariantChannels (Underlying native function: GetVariantChannels 0x8f568f0)
	static struct TArray<struct FGameplayTag> GetVariantChannels(class UAthenaCosmeticItemDefinition*& ItemDefinition, bool& UnlockableOnly); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetItemWrapperLockerSlotIndex (Underlying native function: GetItemWrapperLockerSlotIndex 0x8f56870)
	static int GetItemWrapperLockerSlotIndex(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllVariantCombinations (Underlying native function: GetAllVariantCombinations 0x8f5672c)
	static struct TArray<struct FGameplayTagContainer> GetAllVariantCombinations(class UAthenaCosmeticItemDefinition*& ItemDefinition, struct TArray<struct FString>& IgnoredChannels, bool& UnlockableOnly); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllRealEstatePlotItemDefinitions (Underlying native function: GetAllRealEstatePlotItemDefinitions 0x8f56670)
	static struct TArray<class UFortCreativeRealEstatePlotItemDefinition*> GetAllRealEstatePlotItemDefinitions(bool& bOnlyPlayerFacing); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllPlaysetItemDefinitions (Underlying native function: GetAllPlaysetItemDefinitions 0x8f565fc)
	static struct TArray<class UFortPlaysetItemDefinition*> GetAllPlaysetItemDefinitions(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllItemWrapCompatibleActors (Underlying native function: GetAllItemWrapCompatibleActors 0x8f56520)
	static struct TArray<class UClass*> GetAllItemWrapCompatibleActors(enum ESubGame& SubGame, bool& OnePerType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllFortVariantTokens (Underlying native function: GetAllFortVariantTokens 0x8f564ac)
	static struct TArray<class UFortVariantTokenType*> GetAllFortVariantTokens(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllAthenaCosmetics_MultipleType (Underlying native function: GetAllAthenaCosmetics_MultipleType 0x8f563bc)
	static struct TArray<class UAthenaCosmeticItemDefinition*> GetAllAthenaCosmeticsMultipleType(struct TArray<enum EFortItemType>& Types); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.GetAllAthenaCosmetics (Underlying native function: GetAllAthenaCosmetics 0x8f56324)
	static struct TArray<class UAthenaCosmeticItemDefinition*> GetAllAthenaCosmetics(enum EFortItemType& Type); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ForceAthenaCosmetic (Underlying native function: ForceAthenaCosmetic 0x8f56210)
	static bool ForceAthenaCosmetic(class UAthenaCosmeticItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.FindDerivedBlueprintClassesByAssetNames (Underlying native function: FindDerivedBlueprintClassesByAssetNames 0x8f55fc4)
	static struct TSet<class UClass*> FindDerivedBlueprintClassesByAssetNames(struct FName& BaseClassName, struct TArray<struct FString>& AssetNames, struct FString& SearchPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.FindDerivedBlueprintClasses (Underlying native function: FindDerivedBlueprintClasses 0x8f55ccc)
	static struct TSet<class UClass*> FindDerivedBlueprintClasses(struct FName& BaseClassName, struct FString& SearchString, struct FString& SearchPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.DumpFPSChartsData (Underlying native function: DumpFPSChartsData 0x8f55b20)
	static bool DumpFPSChartsData(struct FString& EntryName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ClearAllCharacterPartAnimations (Underlying native function: ClearAllCharacterPartAnimations 0x8f55ab0)
	static void ClearAllCharacterPartAnimations(class AFortPlayerMannequin*& Mannequin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ClearAllAnimInstances (Underlying native function: ClearAllAnimInstances 0x8f559e0)
	static void ClearAllAnimInstances(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortniteAutomationBlueprintLibrary.ApplyItemWrapToActor (Underlying native function: ApplyItemWrapToActor 0x8f558e8)
	static void ApplyItemWrapToActor(class UAthenaItemWrapDefinition*& wrap, class AActor*& Actor, enum EItemWrapMaterialType& MaterialType); // (Final | Native | Static | Public | BlueprintCallable)
};

