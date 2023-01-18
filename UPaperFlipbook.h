// Class /Script/Paper2D.PaperFlipbook
// Size: 0x50
class UPaperFlipbook : public UObject
{
	float FramesPerSecond; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FPaperFlipbookKeyFrame> Keyframes; // 0x30 (0x10)
	class UMaterialInterface* DefaultMaterial; // 0x40 (0x8)
	struct TEnumAsByte<EFlipbookCollisionMode> CollisionSource; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)

	/* Functions */

	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex (Underlying native function: IsValidKeyFrameIndex 0x6d2d2e4)
	bool IsValidKeyFrameIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration (Underlying native function: GetTotalDuration 0x6d2d26c)
	float GetTotalDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime (Underlying native function: GetSpriteAtTime 0x6d2ca50)
	class UPaperSprite* GetSpriteAtTime(float& Time, bool& bClampToEnds); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame (Underlying native function: GetSpriteAtFrame 0x6d2c9c4)
	class UPaperSprite* GetSpriteAtFrame(int& FrameIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames (Underlying native function: GetNumKeyFrames 0x6d2c944)
	int GetNumKeyFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames (Underlying native function: GetNumFrames 0x6d2c924)
	int GetNumFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime (Underlying native function: GetKeyFrameIndexAtTime 0x6d2c650)
	int GetKeyFrameIndexAtTime(float& Time, bool& bClampToEnds); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

