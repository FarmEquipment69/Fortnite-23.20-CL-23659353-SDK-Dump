// Class /Script/MovieSceneTracks.MovieSceneParameterSection
// Size: 0x158
class UMovieSceneParameterSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xf8 (0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x108 (0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x118 (0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x128 (0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x138 (0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x148 (0x10)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter (Underlying native function: RemoveVectorParameter 0x9aad98c)
	bool RemoveVectorParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter (Underlying native function: RemoveVector2DParameter 0x9aad8c4)
	bool RemoveVector2DParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter (Underlying native function: RemoveTransformParameter 0x9aad838)
	bool RemoveTransformParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter (Underlying native function: RemoveScalarParameter 0x9aad7ac)
	bool RemoveScalarParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter (Underlying native function: RemoveColorParameter 0x9aad720)
	bool RemoveColorParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter (Underlying native function: RemoveBoolParameter 0x9aad694)
	bool RemoveBoolParameter(struct FName& InParameterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.GetParameterNames (Underlying native function: GetParameterNames 0x9aacfa0)
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey (Underlying native function: AddVectorParameterKey 0x9aacdd4)
	void AddVectorParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey (Underlying native function: AddVector2DParameterKey 0x9aaccd8)
	void AddVector2DParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey (Underlying native function: AddTransformParameterKey 0x9aacb6c)
	void AddTransformParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, struct FTransform& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey (Underlying native function: AddScalarParameterKey 0x9aaca70)
	void AddScalarParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, float& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey (Underlying native function: AddColorParameterKey 0x9aac974)
	void AddColorParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey (Underlying native function: AddBoolParameterKey 0x9aac87c)
	void AddBoolParameterKey(struct FName& InParameterName, struct FFrameNumber& InTime, bool& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

