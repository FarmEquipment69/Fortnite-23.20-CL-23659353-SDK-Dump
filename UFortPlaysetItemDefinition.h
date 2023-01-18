// Class /Script/FortniteGame.FortPlaysetItemDefinition
// Size: 0x640
class UFortPlaysetItemDefinition : public UFortAccountItemDefinition
{
	unsigned char unreflected_420[0x18]; // 0x420 (0x18) 
	struct TWeakObjectPtr<class UWorld> PlaysetToSpawn; // 0x438 (0x28)
	struct TArray<struct TWeakObjectPtr<class UClass>> ActorVariants; // 0x460 (0x10)
	int SizeX; // 0x470 (0x4)
	int SizeY; // 0x474 (0x4)
	int SizeZ; // 0x478 (0x4)
	float ZSnapTolerance; // 0x47c (0x4)
	enum EPlaysetOffsetType offsetType; // 0x480 (0x1)
	bool bUseLocationOffset; // 0x481 (0x1)
	bool bUseRelocationOffset; // 0x482 (0x1)
	unsigned char unreflected_483[0x5]; // 0x483 (0x5) 
	struct FRotator DefaultRotation; // 0x488 (0x18)
	struct TWeakObjectPtr<class UClass> MinigameClass; // 0x4a0 (0x28)
	unsigned char bAdjustForWorldCollision; // 0x4c8 (0x1)
	unsigned char bUsePlaysetProps; // 0x4c8 (0x1)
	unsigned char unreflected_4c9[0x7]; // 0x4c9 (0x7) 
	struct FVector LocationOffset; // 0x4d0 (0x18)
	struct FVector RelocationOffset; // 0x4e8 (0x18)
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0x500 (0x10)
	class ULevelSaveRecord* LevelSaveRecord; // 0x510 (0x8)
	class ULevelSaveRecordCollection* PlaysetPropLevelSaveRecordCollection; // 0x518 (0x8)
	struct TMap<struct TWeakObjectPtr<class UClass>, int> ActorClassCount; // 0x520 (0x50)
	struct TArray<struct TWeakObjectPtr<class UFortPlaysetPropItemDefinition>> AssociatedPlaysetProps; // 0x570 (0x10)
	struct TArray<struct FFortPreviewActorData> PreviewActorData; // 0x580 (0x10)
	struct FFortActorMetadata ActorMetadata; // 0x590 (0xb0)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaysetItemDefinition.SpawnPlaysetFromStruct (Underlying native function: SpawnPlaysetFromStruct 0x8a79c38)
	static class ULevelStreamingDynamic* SpawnPlaysetFromStruct(class AActor*& WorldContextObject, struct FFortPlaysetStreamingData& LevelData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlaysetItemDefinition.SpawnPlayset (Underlying native function: SpawnPlayset 0x8a79610)
	static class ULevelStreamingDynamic* SpawnPlayset(class AActor*& WorldContextObject, class UFortPlaysetItemDefinition*& Playset, struct FVector& Location, struct FRotator& Rotation, struct FFortPlaysetStreamingData& OutLevelData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlaysetItemDefinition.SpawnActorsInPlayset (Underlying native function: SpawnActorsInPlayset 0x8a7955c)
	static void SpawnActorsInPlayset(class AActor*& WorldContextObject, class UFortPlaysetItemDefinition*& Playset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlaysetItemDefinition.AdjustToFinalLocation (Underlying native function: AdjustToFinalLocation 0x8a77028)
	static struct FVector AdjustToFinalLocation(class UObject*& WorldContextObject, class UFortPlaysetItemDefinition*& Playset, struct FVector& BaseLocation, struct FRotator& Rotation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

