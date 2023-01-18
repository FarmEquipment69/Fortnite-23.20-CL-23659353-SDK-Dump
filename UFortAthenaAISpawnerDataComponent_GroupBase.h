// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
// Size: 0xe0
class UFortAthenaAISpawnerDataComponent_GroupBase : public UFortAthenaAISpawnerDataComponent
{
	struct FScalableFloat EnableGroupComponent; // 0x30 (0x28)
	struct FScalableFloat CanBeGroupLeader; // 0x58 (0x28)
	struct FScalableFloat EnableFormationComponent; // 0x80 (0x28)
	struct TArray<struct FVector> FormationSlots; // 0xa8 (0x10)
	struct FScalableFloat MaxDistanceFromSlotToSprint; // 0xb8 (0x28)
};

