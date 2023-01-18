// Class /Script/FortniteGame.BuildingActorLocalizationCache
// Size: 0x90
class UBuildingActorLocalizationCache : public UDataAsset
{
	struct TArray<struct FString> CachedLanguages; // 0x30 (0x10)
	struct TMap<struct FTopLevelAssetPath*, struct FBuildingActorLocalizationEntry> CachedBuildingActors; // 0x40 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.BuildingActorLocalizationCache.GetDisplayNameForBuildingActor (Underlying native function: GetDisplayNameForBuildingActor 0x85bd294)
	struct FString GetDisplayNameForBuildingActor(class UClass*& Class, struct FString& Language); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActorLocalizationCache.GetCachedLanguages (Underlying native function: GetCachedLanguages 0x85bd104)
	struct TArray<struct FString> GetCachedLanguages(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

