// Class /Script/Engine.RawAnimSequenceTrackExtensions
// Size: 0x28
class URawAnimSequenceTrackExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.RawAnimSequenceTrackExtensions.GetScaleKeys (Underlying native function: GetScaleKeys 0x9c005c0)
	static struct TArray<struct FVector> GetScaleKeys(struct FRawAnimSequenceTrack& track); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.RawAnimSequenceTrackExtensions.GetRotationalKeys (Underlying native function: GetRotationalKeys 0x9c004cc)
	static struct TArray<struct FQuat> GetRotationalKeys(struct FRawAnimSequenceTrack& track); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.RawAnimSequenceTrackExtensions.GetPositionalKeys (Underlying native function: GetPositionalKeys 0x9c003d8)
	static struct TArray<struct FVector> GetPositionalKeys(struct FRawAnimSequenceTrack& track); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

