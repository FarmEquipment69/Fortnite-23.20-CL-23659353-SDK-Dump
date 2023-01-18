// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_LowGravity
// Size: 0x3b0
class AFortGameplayCueNotifyLoop_LowGravity : public AFortGameplayCueNotify_Looping
{
	float InterpDelta; // 0x368 (0x4)
	float TargetDelta; // 0x36c (0x4)
	class AFortPawn* Pawn; // 0x370 (0x8)
	float StartTime; // 0x378 (0x4)
	float Duration; // 0x37c (0x4)
	float ExpirationTellDuration; // 0x380 (0x4)
	float TargetDeltaFallingRangeInputStart; // 0x384 (0x4)
	float TargetDeltaFallingRangeInputEnd; // 0x388 (0x4)
	float TargetDeltaFallingRangeOutputStart; // 0x38c (0x4)
	float TargetDeltaFallingRangeOutputEnd; // 0x390 (0x4)
	float InterpSpeedHigh; // 0x394 (0x4)
	float InterpSpeedLow; // 0x398 (0x4)
	float SoundMultiplierRangeOutputStart; // 0x39c (0x4)
	float SoundMultiplierRangeOutputEnd; // 0x3a0 (0x4)
	struct FName SoundParamFallSpeed; // 0x3a4 (0x4)
	struct FName SoundParamFallSpeedInv; // 0x3a8 (0x4)
	unsigned char padding_3ac[0x4]; // 0x3ac (0x4)
};

