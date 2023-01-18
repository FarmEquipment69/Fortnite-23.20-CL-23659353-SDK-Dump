// Class /Script/FortniteGame.TargetingFilterTask_ObstructedByWorld
// Size: 0x90
class UTargetingFilterTask_ObstructedByWorld : public UTargetingFilterTask_BasicFilterTemplate
{
	struct FGameplayTagQuery TargetFilterQuery; // 0x28 (0x48)
	struct FVector DefaultSourceOffset; // 0x70 (0x18)
	unsigned char bComplexTrace; // 0x88 (0x1)
	unsigned char bExcludeAllAttachedToTarget; // 0x88 (0x1)
	unsigned char bExcludeAthenaVehicleOfTarget; // 0x88 (0x1)
	unsigned char bExcludeInstigator; // 0x88 (0x1)
	unsigned char bExcludeAllAttachedToInstigator; // 0x88 (0x1)
	unsigned char bExcludeAthenaVehicleOfInstigator; // 0x88 (0x1)
	unsigned char bExcludeAllAttachedToSource; // 0x88 (0x1)
	unsigned char bExcludeAthenaVehicleOfSource; // 0x88 (0x1)
	unsigned char bExcludeAthenaVehicleFromObstructionChecks; // 0x89 (0x1)
	unsigned char padding_8a[0x6]; // 0x8a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.TargetingFilterTask_ObstructedByWorld.GetSourceOffset (Underlying native function: GetSourceOffset 0x7311940)
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.TargetingFilterTask_ObstructedByWorld.GetSourceLocation (Underlying native function: GetSourceLocation 0x8f34b94)
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

