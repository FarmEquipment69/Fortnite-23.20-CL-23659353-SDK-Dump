// Class /Script/NavigationSystem.NavigationPath
// Size: 0x88
class UNavigationPath : public UObject
{
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28 (0x10)
	struct TArray<struct FVector> PathPoints; // 0x38 (0x10)
	struct TEnumAsByte<ENavigationOptionFlag> RecalculateOnInvalidation; // 0x48 (0x1)
	unsigned char padding_49[0x3f]; // 0x49 (0x3f)

	/* Functions */

	// Function /Script/NavigationSystem.NavigationPath.IsValid (Underlying native function: IsValid 0xa0852fc)
	bool IsValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled (Underlying native function: IsStringPulled 0x2486284)
	bool IsStringPulled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.IsPartial (Underlying native function: IsPartial 0xa0852d0)
	bool IsPartial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.GetPathLength (Underlying native function: GetPathLength 0xa084fb4)
	float GetPathLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.GetPathCost (Underlying native function: GetPathCost 0xa084d84)
	float GetPathCost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.GetDebugString (Underlying native function: GetDebugString 0xa084c70)
	struct FString GetDebugString(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation (Underlying native function: EnableRecalculationOnInvalidation 0xa084738)
	void EnableRecalculationOnInvalidation(struct TEnumAsByte<ENavigationOptionFlag>& DoRecalculation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing (Underlying native function: EnableDebugDrawing 0xa084660)
	void EnableDebugDrawing(bool& bShouldDrawDebugData, struct FLinearColor& PathColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

