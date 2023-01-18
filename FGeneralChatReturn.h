// ScriptStruct /Script/FortniteGame.GeneralChatReturn
// Size: 0x28
struct FGeneralChatReturn
{
	struct TArray<struct FGeneralChatRoom> GlobalChatRooms; // 0x0 (0x10)
	struct TArray<struct FGeneralChatRoom> FounderChatRooms; // 0x10 (0x10)
	bool bNeedsPaidAccessForGlobalChat; // 0x20 (0x1)
	bool bNeedsPaidAccessForFounderChat; // 0x21 (0x1)
	bool bIsGlobalChatDisabled; // 0x22 (0x1)
	bool bIsFounderChatDisabled; // 0x23 (0x1)
	bool bIsSubGameGlobalChatDisabled; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

