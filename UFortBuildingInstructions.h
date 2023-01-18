// Class /Script/FortniteGame.FortBuildingInstructions
// Size: 0x148
class UFortBuildingInstructions : public UDataAsset
{
	struct TArray<struct FFortBuildingInstruction> Instructions; // 0x30 (0x10)
	struct FBoxSphereBounds Bounds; // 0x40 (0x38)
	struct TMap<int, int> BuildingAttachmentsInstructionsIndexesMap; // 0x78 (0x50)
	int NumOfPiecesToSpawnAtOnce; // 0xc8 (0x4)
	float TimeBetweenSpawns; // 0xcc (0x4)
	bool bSetOwnerID; // 0xd0 (0x1)
	bool bUsePlayerBuildAnimations; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x6]; // 0xd2 (0x6) 
	struct TArray<class UFortBuildingInstructionModifier*> Modifiers; // 0xd8 (0x10)
	struct FString MapName; // 0xe8 (0x10)
	unsigned char padding_f8[0x50]; // 0xf8 (0x50)
};

