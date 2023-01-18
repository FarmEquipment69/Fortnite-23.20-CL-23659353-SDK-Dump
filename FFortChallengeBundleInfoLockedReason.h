// ScriptStruct /Script/FortniteGame.FortChallengeBundleInfoLockedReason
// Size: 0x28
struct FFortChallengeBundleInfoLockedReason
{
	enum EFortChallengeBundleInfoLockedReasonCode ReasonCode; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString EventName; // 0x8 (0x10)
	int RequiredTier; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FTimespan* UnlockTimespanAfterStart; // 0x20 (0x8)
};

