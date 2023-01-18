// ScriptStruct /Script/FortniteGame.GameplayFeedbackEventInfo
// Size: 0x48
struct FGameplayFeedbackEventInfo
{
	struct FString DisplayText; // 0x0 (0x10)
	struct FGameplayTag EventTag; // 0x10 (0x4)
	enum EAthenaGameMsgType MsgType; // 0x14 (0x1)
	bool bTeamBasedEvent; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct TArray<struct FText> FriendlyEventMessages; // 0x18 (0x10)
	struct TArray<struct FText> HostileEventMessages; // 0x28 (0x10)
	struct TArray<struct FText> NeutralEventMessages; // 0x38 (0x10)
};

