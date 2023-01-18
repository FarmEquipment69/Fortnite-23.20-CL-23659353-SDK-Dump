// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58
class UMovieSceneCaptureProtocolBase : public UObject
{
	unsigned char unreflected_28[0x28]; // 0x28 (0x28) 
	enum EMovieSceneCaptureProtocolState State; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)

	/* Functions */

	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing (Underlying native function: IsCapturing 0x9be4550)
	bool IsCapturing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState (Underlying native function: GetState 0x731e94c)
	enum EMovieSceneCaptureProtocolState GetState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

