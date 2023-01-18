// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28
class UMovieSceneCaptureEnvironment : public UObject
{

	/* Functions */

	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress (Underlying native function: IsCaptureInProgress 0x9be451c)
	static bool IsCaptureInProgress(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber (Underlying native function: GetCaptureFrameNumber 0x9be44a4)
	static int GetCaptureFrameNumber(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime (Underlying native function: GetCaptureElapsedTime 0x9be447c)
	static float GetCaptureElapsedTime(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol (Underlying native function: FindImageCaptureProtocol 0x9be3fc8)
	static class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol (Underlying native function: FindAudioCaptureProtocol 0x9be3f6c)
	static class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // (Final | Native | Static | Public | BlueprintCallable)
};

