// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C
// Size: 0x2e8
class ULegacy_MovieWidget_C : public UFortMovieWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a8 (0x8)
	class UImage* VideoImage; // 0x2b0 (0x8)
	class UScaleBox* VideoScaleBox; // 0x2b8 (0x8)
	bool shouldloop; // 0x2c0 (0x1)
	bool AutoPlay; // 0x2c1 (0x1)
	bool MaintainAspectRatio; // 0x2c2 (0x1)
	unsigned char unreflected_2c3[0x5]; // 0x2c3 (0x5) 
	struct FMulticastInlineDelegate OnMediaReadyToPlay; // 0x2c8 (0x10)
	struct FMulticastInlineDelegate OnMediaFailedToOpen; // 0x2d8 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues (Has no native function)
	void SetDelayedContentValues(bool& TempboolVariable, struct TEnumAsByte<EStretch>& TempbyteVariable, struct TEnumAsByte<EStretch>& TempbyteVariable1, struct TEnumAsByte<EStretch>& K2NodeSelectDefault, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UMediaTexture*& CallFuncGetMediaTextureReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Play (Has no native function)
	void Play(bool& ShouldRewind); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying (Has no native function)
	void StopPlaying(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Init (Has no native function)
	void Init(class UMediaPlayer*& InMediaPlayer, class UMediaSource*& InMediaSource, class UObject*& InMediaSoundWave, int& AudioTrack, struct FMediaPlayerTrackOptions& K2NodeMakeStructMediaPlayerTrackOptions, bool& CallFuncHasPlayerForSourceReturnValue, struct FMediaPlayerOptions& K2NodeMakeStructMediaPlayerOptions, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncSetMediaSourceReturnValue, bool& CallFuncSetMediaSourceReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated (Has no native function)
	void MediaDimensionsUpdated(float& NewWidth, float& NewHeight); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded (Has no native function)
	void OnMediaLoaded(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget (Has no native function)
	void ExecuteUbergraphLegacyMovieWidget(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& K2NodeEventNewWidth, float& K2NodeEventNewHeight, struct FVector2D& CallFuncMakeVector2DReturnValue, struct FSlateBrush& K2NodeMakeStructSlateBrush, double& CallFuncMakeVector2DXImplicitCast, double& CallFuncMakeVector2DYImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature (Has no native function)
	void OnMediaFailedToOpenDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature (Has no native function)
	void OnMediaReadyToPlayDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

