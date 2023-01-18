// Class /Script/FortniteGame.BuildingActorTickManager
// Size: 0x78
class UBuildingActorTickManager : public UWorldSubsystem
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct TArray<class ABuildingActor*> Buildings; // 0x58 (0x10)
	int LastBuildingIndex; // 0x68 (0x4)
	int BuildingIndex; // 0x6c (0x4)
	int MaxBuildingIndex; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

