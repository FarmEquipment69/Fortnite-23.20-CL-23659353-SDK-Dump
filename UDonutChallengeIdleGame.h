// Class /Script/FortniteUI.DonutChallengeIdleGame
// Size: 0xbe0
class UDonutChallengeIdleGame : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnNewHighScore; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnDistanceScoreChanged; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnSpeedScoreChanged; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnStyleScoreChanged; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnEndMatchScore; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnDayNightCycleChanged; // 0x2e0 (0x10)
	unsigned char unreflected_2f0[0x140]; // 0x2f0 (0x140) 
	struct FLinearColor BoundsColor; // 0x430 (0x10)
	float DayNightCycleTime; // 0x440 (0x4)
	float PlayerTopSpeed; // 0x444 (0x4)
	float BumpyRideSpeedReduction; // 0x448 (0x4)
	unsigned char unreflected_44c[0x4]; // 0x44c (0x4) 
	struct FVector2D MapSize; // 0x450 (0x10)
	struct FVector2D PlayerCollisionOffset; // 0x460 (0x10)
	struct FVector2D PlayerCollisionSize; // 0x470 (0x10)
	float MapScale; // 0x480 (0x4)
	float MaxNumLevels; // 0x484 (0x4)
	float ObjectSpawnPlacementRadius; // 0x488 (0x4)
	int NumOfTreeSpawnAttempts; // 0x48c (0x4)
	int NumOfRockSpawnAttempts; // 0x490 (0x4)
	int NumOfBigRockSpawnAttempts; // 0x494 (0x4)
	int NumOfJumpPadSpawnAttempts; // 0x498 (0x4)
	unsigned char unreflected_49c[0x4]; // 0x49c (0x4) 
	class UCurveFloat* CurveBonusSpawnTrees; // 0x4a0 (0x8)
	class UCurveFloat* CurveBonusSpawnSmallBumps; // 0x4a8 (0x8)
	class UCurveFloat* CurveBonusSpawnBumps; // 0x4b0 (0x8)
	class UCurveFloat* CurveBonusSpawnJumpPads; // 0x4b8 (0x8)
	struct FName ParamPlayerDirection; // 0x4c0 (0x4)
	struct FName ParamPlayerFacingLeft; // 0x4c4 (0x4)
	unsigned char unreflected_4c8[0x8]; // 0x4c8 (0x8) 
	struct FSlateBrush PlayerBrush; // 0x4d0 (0xc0)
	struct FSlateBrush TreeBrush; // 0x590 (0xc0)
	struct FSlateBrush RockBrush; // 0x650 (0xc0)
	struct FSlateBrush BigRockBrush; // 0x710 (0xc0)
	struct FSlateBrush JumpPadBrush; // 0x7d0 (0xc0)
	struct FSlateBrush TorchBrush; // 0x890 (0xc0)
	struct FSlateBrush MonsterBrush; // 0x950 (0xc0)
	struct FSlateBrush ChimiBrush; // 0xa10 (0xc0)
	struct FSlateBrush ArmBrush; // 0xad0 (0xc0)
	class UWidgetAnimation* AnimJump; // 0xb90 (0x8)
	class UWidgetAnimation* AnimMediumJump; // 0xb98 (0x8)
	class UWidgetAnimation* AnimSuperJump; // 0xba0 (0x8)
	class UWidgetAnimation* AnimBumpyRide; // 0xba8 (0x8)
	class UImage* ImagePlayer; // 0xbb0 (0x8)
	class UImage* ImageMobileInput; // 0xbb8 (0x8)
	class UImage* ImageMobileInputBackground; // 0xbc0 (0x8)
	class UCommonButtonLegacy* ButtonJump; // 0xbc8 (0x8)
	class UCommonButtonLegacy* ButtonMobileJump; // 0xbd0 (0x8)
	unsigned char padding_bd8[0x8]; // 0xbd8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.DonutChallengeIdleGame.TryJump (Underlying native function: TryJump 0xa4522c8)
	void TryJump(); // (Final | Native | Private)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.StartGame (Underlying native function: StartGame 0xa4522b4)
	void StartGame(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.EndSuperJump (Underlying native function: EndSuperJump 0xa452094)
	void EndSuperJump(); // (Final | Native | Private)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.EndJump (Underlying native function: EndJump 0xa45207c)
	void EndJump(); // (Final | Native | Private)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.EndBumpyRide (Underlying native function: EndBumpyRide 0xa452058)
	void EndBumpyRide(); // (Final | Native | Private)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.DebugBPFloat (Has no native function)
	void DebugBPFloat(float& InFloat); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPUpdateStyle (Has no native function)
	void BPUpdateStyle(int& NewStyle); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPUpdateSpeed (Has no native function)
	void BPUpdateSpeed(int& NewSpeed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPUpdateDistance (Has no native function)
	void BPUpdateDistance(int& NewDistance); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPShowHighScore (Has no native function)
	void BPShowHighScore(int& inNewHighScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnSpeedUpdated (Has no native function)
	void BPOnSpeedUpdated(int& NewCurSpeed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnNextLevelReached (Has no native function)
	void BPOnNextLevelReached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnMonsterNearChanged (Has no native function)
	void BPOnMonsterNearChanged(bool& bIsNearLevelMonster); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnJump (Has no native function)
	void BPOnJump(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnGameInitialized (Has no native function)
	void BPOnGameInitialized(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnFailedJumpPress (Has no native function)
	void BPOnFailedJumpPress(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnFacingDirectionChanged (Has no native function)
	void BPOnFacingDirectionChanged(bool& bIsLeftFacing); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnCrash (Has no native function)
	void BPOnCrash(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPOnCollision (Has no native function)
	void BPOnCollision(struct TEnumAsByte<EFortDonutIdleGameObject>& ObjectType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeIdleGame.BPGameOver (Has no native function)
	void BPGameOver(); // (Event | Protected | BlueprintEvent)
};

