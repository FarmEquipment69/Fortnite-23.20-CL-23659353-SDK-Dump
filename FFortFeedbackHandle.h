// ScriptStruct /Script/FortniteGame.FortFeedbackHandle
// Size: 0x10
struct FFortFeedbackHandle
{
	class UFortFeedbackBank* FeedbackBank; // 0x0 (0x8)
	struct FName EventName; // 0x8 (0x4)
	bool bReadOnly; // 0xc (0x1)
	bool bBankDefined; // 0xd (0x1)
	struct TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilterOverride; // 0xe (0x1)
	unsigned char padding_f[0x1]; // 0xf (0x1)
};

