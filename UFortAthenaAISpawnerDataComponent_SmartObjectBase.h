// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBase
// Size: 0x150
class UFortAthenaAISpawnerDataComponent_SmartObjectBase : public UFortAthenaAISpawnerDataComponent
{
	struct FScalableFloat Enabled; // 0x30 (0x28)
	struct FScalableFloat ChooseClosestSmartObject; // 0x58 (0x28)
	struct FScalableFloat UnreachableBanDuration; // 0x80 (0x28)
	struct FScalableFloat SelectedSmartObjectExpirationDelay; // 0xa8 (0x28)
	struct FScalableFloat GlobalSmartObjectCooldownOnFinished; // 0xd0 (0x28)
	struct FScalableFloat GlobalSmartObjectCooldownOnInterrupted; // 0xf8 (0x28)
	struct TArray<class UClass*> SmartObjectActivitiesCombined; // 0x120 (0x10)
	struct TArray<class UClass*> SmartObjectActivitiesToAdd; // 0x130 (0x10)
	struct TArray<class UClass*> SmartObjectActivitiesToRemove; // 0x140 (0x10)
};

