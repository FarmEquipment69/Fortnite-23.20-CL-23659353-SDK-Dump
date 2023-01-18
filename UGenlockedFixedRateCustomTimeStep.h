// Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
// Size: 0x50
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
	struct FFrameRate* FrameRate; // 0x30 (0x8)
	bool bShouldBlock; // 0x38 (0x1)
	bool bForceSingleFrameDeltaTime; // 0x39 (0x1)
	unsigned char padding_3a[0x16]; // 0x3a (0x16)
};

