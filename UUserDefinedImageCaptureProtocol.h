// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe0
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
	enum EDesiredImageFormat Format; // 0xd8 (0x1)
	bool bEnableCompression; // 0xd9 (0x1)
	unsigned char unreflected_da[0x2]; // 0xda (0x2) 
	int CompressionQuality; // 0xdc (0x4)

	/* Functions */

	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk (Underlying native function: WriteImageToDisk 0x9be48dc)
	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool& bCopyImageData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame (Underlying native function: GenerateFilenameForCurrentFrame 0x9be4330)
	struct FString GenerateFilenameForCurrentFrame(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer (Underlying native function: GenerateFilenameForBuffer 0x9be410c)
	struct FString GenerateFilenameForBuffer(class UTexture*& Buffer, struct FCapturedPixelsID& StreamID); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

