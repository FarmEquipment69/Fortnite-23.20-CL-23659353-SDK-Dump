// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x118
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
	struct FGuid ConstraintId; // 0xf0 (0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x100 (0x18)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID (Underlying native function: SetConstraintBindingID 0x9a847ac)
	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID (Underlying native function: GetConstraintBindingID 0x9a84494)
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

