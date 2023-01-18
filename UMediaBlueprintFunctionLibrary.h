// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices (Underlying native function: EnumerateWebcamCaptureDevices 0x9bc7ba4)
	static void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int& Filter); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices (Underlying native function: EnumerateVideoCaptureDevices 0x9bc7acc)
	static void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int& Filter); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices (Underlying native function: EnumerateAudioCaptureDevices 0x9bc79f4)
	static void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int& Filter); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

