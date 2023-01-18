// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xd8
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
	class UWorld* World; // 0x58 (0x8)
	unsigned char padding_60[0x78]; // 0x60 (0x78)

	/* Functions */

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels (Underlying native function: StopCapturingFinalPixels 0x9be48c8)
	void StopCapturingFinalPixels(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels (Underlying native function: StartCapturingFinalPixels 0x9be47c0)
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer (Underlying native function: ResolveBuffer 0x9be4598)
	void ResolveBuffer(class UTexture*& Buffer, struct FCapturedPixelsID& BufferID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp (Has no native function)
	void OnWarmUp(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick (Has no native function)
	void OnTick(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture (Has no native function)
	void OnStartCapture(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup (Underlying native function: OnSetup 0x9be4570)
	bool OnSetup(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick (Has no native function)
	void OnPreTick(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived (Has no native function)
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics& FrameMetrics); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture (Has no native function)
	void OnPauseCapture(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize (Has no native function)
	void OnFinalize(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame (Has no native function)
	void OnCaptureFrame(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize (Underlying native function: OnCanFinalize 0x6ae4fc8)
	bool OnCanFinalize(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize (Has no native function)
	void OnBeginFinalize(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics (Underlying native function: GetCurrentFrameMetrics 0x9be44ec)
	struct FFrameMetrics GetCurrentFrameMetrics(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename (Underlying native function: GenerateFilename 0x9be4024)
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

