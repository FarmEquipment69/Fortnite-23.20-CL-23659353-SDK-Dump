// Class /Script/Engine.ViewportStatsSubsystem
// Size: 0x50
class UViewportStatsSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_50[0x50]; 

	/* Functions */

	// Function /Script/Engine.ViewportStatsSubsystem.RemoveDisplayDelegate (Underlying native function: RemoveDisplayDelegate 0x9d7b654)
	void RemoveDisplayDelegate(int& IndexToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ViewportStatsSubsystem.AddTimedDisplay (Underlying native function: AddTimedDisplay 0x9d79534)
	void AddTimedDisplay(struct FText& Text, struct FLinearColor& Color, float& Duration, struct FVector2D& DisplayOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ViewportStatsSubsystem.AddDisplayDelegate (Underlying native function: AddDisplayDelegate 0x9d79480)
	int AddDisplayDelegate(struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

