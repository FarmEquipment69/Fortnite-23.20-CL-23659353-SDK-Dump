// Class /Script/Paper2D.PaperFlipbookComponent
// Size: 0x5d0
class UPaperFlipbookComponent : public UMeshComponent
{
	class UPaperFlipbook* SourceFlipbook; // 0x580 (0x8)
	class UMaterialInterface* Material; // 0x588 (0x8)
	float PlayRate; // 0x590 (0x4)
	unsigned char bLooping; // 0x594 (0x1)
	unsigned char bReversePlayback; // 0x594 (0x1)
	unsigned char bPlaying; // 0x594 (0x1)
	unsigned char unreflected_595[0x3]; // 0x595 (0x3) 
	float AccumulatedTime; // 0x598 (0x4)
	int CachedFrameIndex; // 0x59c (0x4)
	struct FLinearColor SpriteColor; // 0x5a0 (0x10)
	class UBodySetup* CachedBodySetup; // 0x5b0 (0x8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x5b8 (0x10)
	unsigned char padding_5c8[0x8]; // 0x5c8 (0x8)

	/* Functions */

	// Function /Script/Paper2D.PaperFlipbookComponent.Stop (Underlying native function: Stop 0x6d2e6f0)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor (Underlying native function: SetSpriteColor 0x6d2e258)
	void SetSpriteColor(struct FLinearColor& NewColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate (Underlying native function: SetPlayRate 0x6d2e03c)
	void SetPlayRate(float& NewRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames (Underlying native function: SetPlaybackPositionInFrames 0x6d2e184)
	void SetPlaybackPositionInFrames(int& NewFramePosition, bool& bFireEvents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition (Underlying native function: SetPlaybackPosition 0x6d2e0c0)
	void SetPlaybackPosition(float& NewPosition, bool& bFireEvents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime (Underlying native function: SetNewTime 0x6d2dfb8)
	void SetNewTime(float& NewTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping (Underlying native function: SetLooping 0x6d2df30)
	void SetLooping(bool& bNewLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook (Underlying native function: SetFlipbook 0x6d2db94)
	bool SetFlipbook(class UPaperFlipbook*& NewFlipbook); // (Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd (Underlying native function: ReverseFromEnd 0x6d2da70)
	void ReverseFromEnd(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse (Underlying native function: Reverse 0x6d2da40)
	void Reverse(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart (Underlying native function: PlayFromStart 0x6d2d884)
	void PlayFromStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.Play (Underlying native function: Play 0x6d2d870)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook (Underlying native function: OnRep_SourceFlipbook 0x6d2d7c4)
	void OnRepSourceFlipbook(class UPaperFlipbook*& OldFlipbook); // (Final | Native | Protected)

	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing (Underlying native function: IsReversing 0x6d2d2c4)
	bool IsReversing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying (Underlying native function: IsPlaying 0x6d2d2a8)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping (Underlying native function: IsLooping 0x6d2d28c)
	bool IsLooping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor (Underlying native function: GetSpriteColor 0x6d2cb38)
	struct FLinearColor GetSpriteColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate (Underlying native function: GetPlayRate 0x6d2c958)
	float GetPlayRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames (Underlying native function: GetPlaybackPositionInFrames 0x6d2c970)
	int GetPlaybackPositionInFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition (Underlying native function: GetPlaybackPosition 0x6d2c4b8)
	float GetPlaybackPosition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames (Underlying native function: GetFlipbookLengthInFrames 0x6d2c498)
	int GetFlipbookLengthInFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength (Underlying native function: GetFlipbookLength 0x6d2c478)
	float GetFlipbookLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate (Underlying native function: GetFlipbookFramerate 0x6d2c458)
	float GetFlipbookFramerate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook (Underlying native function: GetFlipbook 0x1a3f330)
	class UPaperFlipbook* GetFlipbook(); // (Native | Public | BlueprintCallable | BlueprintPure)
};

