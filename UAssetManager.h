// Class /Script/Engine.AssetManager
// Size: 0x4e8
class UAssetManager : public UObject
{
	unsigned char unreflected_28[0x308]; // 0x28 (0x308) 
	struct TArray<class UObject*> ObjectReferenceList; // 0x330 (0x10)
	bool bIsGlobalAsyncScanEnvironment; // 0x340 (0x1)
	bool bShouldGuessTypeAndName; // 0x341 (0x1)
	bool bShouldUseSynchronousLoad; // 0x342 (0x1)
	bool bIsLoadingFromPakFiles; // 0x343 (0x1)
	bool bShouldAcquireMissingChunksOnLoad; // 0x344 (0x1)
	bool bOnlyCookProductionAssets; // 0x345 (0x1)
	unsigned char unreflected_346[0x2]; // 0x346 (0x2) 
	int NumBulkScanRequests; // 0x348 (0x4)
	bool bIsPrimaryAssetDirectoryCurrent; // 0x34c (0x1)
	bool bIsManagementDatabaseCurrent; // 0x34d (0x1)
	bool bUpdateManagementDatabaseAfterScan; // 0x34e (0x1)
	bool bIncludeOnlyOnDiskAssets; // 0x34f (0x1)
	bool bHasCompletedInitialScan; // 0x350 (0x1)
	unsigned char unreflected_351[0x3]; // 0x351 (0x3) 
	int NumberOfSpawnedNotifications; // 0x354 (0x4)
	unsigned char padding_358[0x190]; // 0x358 (0x190)
};

