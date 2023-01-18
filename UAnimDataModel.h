// Class /Script/Engine.AnimDataModel
// Size: 0xb0
class UAnimDataModel : public UObject
{
	int BracketCounter; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FMulticastInlineDelegate ModifiedEventDynamic; // 0x30 (0x10)
	unsigned char unreflected_40[0x18]; // 0x40 (0x18) 
	struct TArray<struct FBoneAnimationTrack> BoneAnimationTracks; // 0x58 (0x10)
	float PlayLength; // 0x68 (0x4)
	struct FFrameRate* FrameRate; // 0x6c (0x8)
	int NumberOfFrames; // 0x74 (0x4)
	int NumberOfKeys; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FAnimationCurveData CurveData; // 0x80 (0x20)
	struct TArray<struct FAnimatedBoneAttribute> AnimatedBoneAttributes; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/Engine.AnimDataModel.IsValidBoneTrackIndex (Underlying native function: IsValidBoneTrackIndex 0x9c5dfa8)
	bool IsValidBoneTrackIndex(int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetPlayLength (Underlying native function: GetPlayLength 0x8011290)
	float GetPlayLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetNumBoneTracks (Underlying native function: GetNumBoneTracks 0x9c5d290)
	int GetNumBoneTracks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetNumberOfTransformCurves (Underlying native function: GetNumberOfTransformCurves 0x7a5d3b0)
	int GetNumberOfTransformCurves(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetNumberOfKeys (Underlying native function: GetNumberOfKeys 0x9bb5de8)
	int GetNumberOfKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetNumberOfFrames (Underlying native function: GetNumberOfFrames 0x9c5d2a4)
	int GetNumberOfFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetNumberOfFloatCurves (Underlying native function: GetNumberOfFloatCurves 0x9bb5e28)
	int GetNumberOfFloatCurves(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetFrameRate (Underlying native function: GetFrameRate 0x9c5bfe8)
	struct FFrameRate* GetFrameRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneTrackNames (Underlying native function: GetBoneTrackNames 0x9c5bca4)
	void GetBoneTrackNames(struct TArray<struct FName>& OutNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneTrackIndexByName (Underlying native function: GetBoneTrackIndexByName 0x9c5bbf4)
	int GetBoneTrackIndexByName(struct FName& trackName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneTrackIndex (Underlying native function: GetBoneTrackIndex 0x9c5bb2c)
	int GetBoneTrackIndex(struct FBoneAnimationTrack& track); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneTrackByName (Underlying native function: GetBoneTrackByName 0x9c5ba78)
	struct FBoneAnimationTrack GetBoneTrackByName(struct FName& trackName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneTrackByIndex (Underlying native function: GetBoneTrackByIndex 0x9c5b9d4)
	struct FBoneAnimationTrack GetBoneTrackByIndex(int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetBoneAnimationTracks (Underlying native function: GetBoneAnimationTracks 0x9c5b960)
	struct TArray<struct FBoneAnimationTrack> GetBoneAnimationTracks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimDataModel.GetAnimationSequence (Underlying native function: GetAnimationSequence 0x9c5b898)
	class UAnimSequence* GetAnimationSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

