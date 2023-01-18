// ScriptStruct /Script/FortniteGame.FortBanHammerStrike
// Size: 0x68
struct FFortBanHammerStrike
{
	struct FUniqueNetIdRepl AccountId; // 0x0 (0x30)
	struct FString Reason; // 0x30 (0x10)
	enum EFortBanHammerNotificationAction Action; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FString Source; // 0x48 (0x10)
	struct FString Offense; // 0x58 (0x10)
};

