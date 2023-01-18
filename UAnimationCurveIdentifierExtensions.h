// Class /Script/Engine.AnimationCurveIdentifierExtensions
// Size: 0x28
class UAnimationCurveIdentifierExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.AnimationCurveIdentifierExtensions.IsValid (Underlying native function: IsValid 0x9c7da50)
	static bool IsValid(struct FAnimationCurveIdentifier& Identifier); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimationCurveIdentifierExtensions.GetType (Underlying native function: GetType 0x9c7d8f8)
	static enum ERawCurveTrackTypes GetType(struct FAnimationCurveIdentifier& Identifier); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimationCurveIdentifierExtensions.GetName (Underlying native function: GetName 0x9c7d85c)
	static struct FName GetName(struct FAnimationCurveIdentifier& Identifier); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

