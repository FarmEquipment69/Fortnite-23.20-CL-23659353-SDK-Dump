// ScriptStruct /Script/FortniteGame.FortSubscriptionInfo
// Size: 0xb0
struct FFortSubscriptionInfo
{
	struct TMap<struct FString, struct FFortSubscriptionProgressiveInfo> Progressables; // 0x10 (0x50)
	unsigned char unreflected_60[0x48]; // 0x60 (0x48) 
	class UFortSubscriptionConfig* Config; // 0xa8 (0x8)
};

