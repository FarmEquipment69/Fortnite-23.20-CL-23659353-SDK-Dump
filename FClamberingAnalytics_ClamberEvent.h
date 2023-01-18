// ScriptStruct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
// Size: 0x28
struct FClamberingAnalytics_ClamberEvent
{
	int MatchTime; // 0x0 (0x4)
	enum EClamberingType ClamberType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FVector ClamberLocation; // 0x8 (0x18)
	enum EClamberingFailedReason FailureReason; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

