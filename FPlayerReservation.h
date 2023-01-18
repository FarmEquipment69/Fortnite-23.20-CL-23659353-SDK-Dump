// ScriptStruct /Script/OnlineSubsystemUtils.PlayerReservation
// Size: 0x58
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueId; // 0x0 (0x30)
	struct FString ValidationStr; // 0x30 (0x10)
	struct FString Platform; // 0x40 (0x10)
	bool bAllowCrossplay; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float ElapsedTime; // 0x54 (0x4)
};

