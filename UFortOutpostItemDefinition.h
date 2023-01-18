// Class /Script/FortniteGame.FortOutpostItemDefinition
// Size: 0x3e8
class UFortOutpostItemDefinition : public UFortCloudSaveItemDefinition
{
	struct TArray<class UClass*> StaticGameplayEffectsByLevel; // 0x3b8 (0x10)
	int TheaterIndex; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct FText LongDescription; // 0x3d0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortOutpostItemDefinition.GetLongDescription (Underlying native function: GetLongDescription 0x8efbd74)
	struct FText GetLongDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

