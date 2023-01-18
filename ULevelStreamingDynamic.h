// Class /Script/Engine.LevelStreamingDynamic
// Size: 0x1a0
class ULevelStreamingDynamic : public ULevelStreaming
{
	unsigned char bInitiallyLoaded; // 0x190 (0x1)
	unsigned char bInitiallyVisible; // 0x190 (0x1)
	unsigned char padding_191[0xf]; // 0x191 (0xf)

	/* Functions */

	// Function /Script/Engine.LevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr (Underlying native function: LoadLevelInstanceBySoftObjectPtr 0x9c0c990)
	static class ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UWorld>& Level, struct FVector& Location, struct FRotator& Rotation, bool& bOutSuccess, struct FString& OptionalLevelNameOverride, class UClass*& OptionalLevelStreamingClass, bool& bLoadAsTempPackage); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.LevelStreamingDynamic.LoadLevelInstance (Underlying native function: LoadLevelInstance 0x9c0c51c)
	static class ULevelStreamingDynamic* LoadLevelInstance(class UObject*& WorldContextObject, struct FString& LevelName, struct FVector& Location, struct FRotator& Rotation, bool& bOutSuccess, struct FString& OptionalLevelNameOverride, class UClass*& OptionalLevelStreamingClass, bool& bLoadAsTempPackage); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

