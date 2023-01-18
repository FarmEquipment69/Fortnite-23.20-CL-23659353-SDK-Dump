// ScriptStruct /Script/FortniteGame.AthenaGameMessageData
// Size: 0x50
struct FAthenaGameMessageData
{
	enum EAthenaGameMsgType MsgType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText MsgText; // 0x8 (0x18)
	class USoundCue* MsgSound; // 0x20 (0x8)
	class UMediaSource* MsgMediaSource; // 0x28 (0x8)
	float MsgDelay; // 0x30 (0x4)
	bool bIsTeamBased; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	int TeamIndex; // 0x38 (0x4)
	float DisplayTime; // 0x3c (0x4)
	enum EAthenaGameMessageDataFlags MessageFlags; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class APlayerController* TargetPlayerController; // 0x48 (0x8)
};

