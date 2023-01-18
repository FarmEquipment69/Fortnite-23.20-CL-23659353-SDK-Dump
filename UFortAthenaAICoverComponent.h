// Class /Script/FortniteAI.FortAthenaAICoverComponent
// Size: 0xd8
class UFortAthenaAICoverComponent : public UControllerComponent
{
	class UClass* CoverPositionFilterClass; // 0xa0 (0x8)
	struct FVector CoverBoxExtent; // 0xa8 (0x18)
	float CoverOffset; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	class AAIController* CachedController; // 0xc8 (0x8)
	struct TWeakObjectPtr<class ABuildingActor> LastBuildingActorUsedForCover; // 0xd0 (0x8)
};

