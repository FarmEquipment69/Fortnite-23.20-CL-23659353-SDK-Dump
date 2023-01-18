// Class /Script/FortniteGame.FortChatManager
// Size: 0x360
class UFortChatManager : public USocialChatManager
{
	unsigned char unreflected_220[0x80]; // 0x220 (0x80) 
	class UFortChatRoomJoinHelper* GlobalChatJoinHelper; // 0x2a0 (0x8)
	class UFortChatRoomJoinHelper* FoundersChatJoinHelper; // 0x2a8 (0x8)
	bool bShouldJoinGlobalChat; // 0x2b0 (0x1)
	bool bShouldRequestGeneralChatRooms; // 0x2b1 (0x1)
	bool bShouldJoinFounderChat; // 0x2b2 (0x1)
	bool bIsAthenaGlobalChatEnabled; // 0x2b3 (0x1)
	int RecommendChatFailureDelay; // 0x2b4 (0x4)
	float RecommendChatBackoffMultiplier; // 0x2b8 (0x4)
	float RecommendChatRandomWindow; // 0x2bc (0x4)
	int RecommendChatFailureCountCap; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x14]; // 0x2c4 (0x14) 
	struct FString ReserveChatURL; // 0x2d8 (0x10)
	struct FString GlobalChatName; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0x18]; // 0x2f8 (0x18) 
	struct FString FounderChatName; // 0x310 (0x10)
	unsigned char unreflected_320[0x18]; // 0x320 (0x18) 
	struct FString ProfileTokenVerifyURL; // 0x338 (0x10)
	unsigned char padding_348[0x18]; // 0x348 (0x18)
};

