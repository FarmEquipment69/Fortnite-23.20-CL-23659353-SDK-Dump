// Class /Script/MovieSceneCapture.MovieSceneCapture
// Size: 0x228
class UMovieSceneCapture : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38 (0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50 (0x18)
	class UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68 (0x8)
	class UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70 (0x8)
	struct FMovieSceneCaptureSettings Settings; // 0x78 (0x70)
	bool bUseSeparateProcess; // 0xe8 (0x1)
	bool bCloseEditorWhenCaptureStarts; // 0xe9 (0x1)
	unsigned char unreflected_ea[0x6]; // 0xea (0x6) 
	struct FString AdditionalCommandLineArguments; // 0xf0 (0x10)
	struct FString InheritedCommandLineArguments; // 0x100 (0x10)
	unsigned char padding_110[0x118]; // 0x110 (0x118)

	/* Functions */

	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType (Underlying native function: SetImageCaptureProtocolType 0x9be4740)
	void SetImageCaptureProtocolType(class UClass*& ProtocolType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType (Underlying native function: SetAudioCaptureProtocolType 0x9be46c0)
	void SetAudioCaptureProtocolType(class UClass*& ProtocolType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol (Underlying native function: GetImageCaptureProtocol 0x9be4504)
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol (Underlying native function: GetAudioCaptureProtocol 0x8011428)
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // (Final | Native | Public | BlueprintCallable)
};

