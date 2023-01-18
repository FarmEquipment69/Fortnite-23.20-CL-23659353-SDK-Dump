// Class /Script/MovieScene.MovieSceneSection
// Size: 0xf0
class UMovieSceneSection : public UMovieSceneSignedObject
{
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58 (0x2)
	unsigned char unreflected_5a[0x6]; // 0x5a (0x6) 
	struct FMovieSceneEasingSettings Easing; // 0x60 (0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x98 (0x10)
	struct FFrameNumber PreRollFrames; // 0xa8 (0x4)
	struct FFrameNumber PostRollFrames; // 0xac (0x4)
	int RowIndex; // 0xb0 (0x4)
	int OverlapPriority; // 0xb4 (0x4)
	unsigned char bIsActive; // 0xb8 (0x1)
	unsigned char bIsLocked; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	float StartTime; // 0xbc (0x4)
	float EndTime; // 0xc0 (0x4)
	float PrerollTime; // 0xc4 (0x4)
	float PostrollTime; // 0xc8 (0x4)
	unsigned char bIsInfinite; // 0xcc (0x1)
	unsigned char unreflected_cd[0x3]; // 0xcd (0x3) 
	bool bSupportsInfiniteRange; // 0xd0 (0x1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd1 (0x2)
	unsigned char padding_d3[0x1d]; // 0xd3 (0x1d)

	/* Functions */

	// Function /Script/MovieScene.MovieSceneSection.SetRowIndex (Underlying native function: SetRowIndex 0x997049c)
	void SetRowIndex(int& NewRowIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetPreRollFrames (Underlying native function: SetPreRollFrames 0x9970414)
	void SetPreRollFrames(int& InPreRollFrames); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetPostRollFrames (Underlying native function: SetPostRollFrames 0x997038c)
	void SetPostRollFrames(int& InPostRollFrames); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetOverlapPriority (Underlying native function: SetOverlapPriority 0x9970258)
	void SetOverlapPriority(int& NewPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetIsLocked (Underlying native function: SetIsLocked 0x99701cc)
	void SetIsLocked(bool& bInIsLocked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetIsActive (Underlying native function: SetIsActive 0x9970138)
	void SetIsActive(bool& bInIsActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetCompletionMode (Underlying native function: SetCompletionMode 0x996fea8)
	void SetCompletionMode(enum EMovieSceneCompletionMode& InCompletionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.SetBlendType (Underlying native function: SetBlendType 0x996fe24)
	void SetBlendType(enum EMovieSceneBlendType& InBlendType); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSection.IsLocked (Underlying native function: IsLocked 0x996ee84)
	bool IsLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.IsActive (Underlying native function: IsActive 0x996ee68)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetRowIndex (Underlying native function: GetRowIndex 0x2d00ea0)
	int GetRowIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetPreRollFrames (Underlying native function: GetPreRollFrames 0x71cfd1c)
	int GetPreRollFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetPostRollFrames (Underlying native function: GetPostRollFrames 0x2b41e84)
	int GetPostRollFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetOverlapPriority (Underlying native function: GetOverlapPriority 0x86b5958)
	int GetOverlapPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetCompletionMode (Underlying native function: GetCompletionMode 0x996eaf0)
	enum EMovieSceneCompletionMode GetCompletionMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSection.GetBlendType (Underlying native function: GetBlendType 0x996e9d8)
	struct FOptionalMovieSceneBlendType GetBlendType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

